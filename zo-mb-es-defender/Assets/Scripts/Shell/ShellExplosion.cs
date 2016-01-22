using UnityEngine;

public class ShellExplosion : MonoBehaviour
{
    public LayerMask m_TankMask;//de kiem tra phai tank nam trpng ung no
    public LayerMask m_TankEnemyMask;//de kiem tra phai tank nam trpng ung no
    public LayerMask m_BoxMask;//de kiem tra phai tank nam trpng ung no
    public ParticleSystem m_ExplosionParticles;
    public ParticleSystem m_ShellParticles;
    public AudioSource m_ExplosionAudio;
    
    public float m_damege = 0f;                  
    public float m_ExplosionForce = 1000f;            
    public float m_MaxLifeTime = 2f;                  
    public float m_ExplosionRadius = 10f;
    public int m_PlayerNumber;
    public int m_PlayerType;
        private int m_countTrigger;

    private void Start()
    {
        m_countTrigger = 0;
       
        Destroy(gameObject, m_MaxLifeTime);
    }

    public void SetSHELL(int type, string tag)
    {
        this.gameObject.tag = tag;

    }

    private void OnTriggerEnter(Collider other)
    {
        
        if (other.gameObject.tag == this.gameObject.tag)
        {
            return;
        }
        if (other.gameObject.tag == "TankEnemy" && this.gameObject.tag == "ShellOfEnemy")
        {
            return;
        }
        if (other.gameObject.tag == "TankPlayer" && this.gameObject.tag == "ShellOfPlayer")
        {
            return;
        }
        m_countTrigger++;
        if (m_countTrigger > 1)
            return;


        Collider[] colliders;
        if(m_PlayerNumber == 0)
         colliders = Physics.OverlapSphere(transform.position, m_ExplosionRadius, m_TankMask);
        else
            colliders = Physics.OverlapSphere(transform.position, m_ExplosionRadius, m_TankEnemyMask);

        for (int i = 0; i < colliders.Length; i++)
        {
            Rigidbody targetRigidbody = colliders[i].GetComponent<Rigidbody>();
            if (!targetRigidbody)
                continue;
            TankHealth targetHealth = targetRigidbody.GetComponent<TankHealth>();
            if (!targetHealth)
                continue;

            targetHealth.TakeDamage(m_damege, m_PlayerNumber);

        }

        Vector3 vel = GetComponent<Rigidbody>().velocity;
        Collider[] collidersBox = null;
        if (m_damege == 1)
        {
            if (vel.z > 20 || vel.z < -20)
                collidersBox = Physics.OverlapBox(transform.position, new Vector3(1.0f, 0.4f, 0.25f), Quaternion.Euler(Vector3.zero), m_BoxMask);
            else if (vel.x > 20 || vel.x < -20)
                collidersBox = Physics.OverlapBox(transform.position, new Vector3(0.25f, 0.4f, 1.0f), Quaternion.Euler(Vector3.zero), m_BoxMask);
        }else
        {
            if (vel.z > 20 || vel.z < -20)
                collidersBox = Physics.OverlapBox(transform.position, new Vector3(1.0f, 0.4f, 0.2f), Quaternion.Euler(Vector3.zero), m_BoxMask);
            else if (vel.x > 20 || vel.x < -20)
                collidersBox = Physics.OverlapBox(transform.position, new Vector3(0.2f, 0.4f, 1.0f), Quaternion.Euler(Vector3.zero), m_BoxMask);
        }

        if (collidersBox != null)
        {
           // if (m_PlayerNumber == 1)
             //   Debug.Log(collidersBox.Length);
            for (int i = 0; i < collidersBox.Length; i++)
            {
                Box box = collidersBox[i].GetComponent<Box>();
                if (!box)
                    continue;
                if (box.type == Box.Type.EARGLE)
                    box.m_SuperBox.destroyEargle();
                else if (box.type == Box.Type.WALL)
                    box.destroy();
                else if (box.type == Box.Type.ROCK)
                {
                    if (m_damege == 2)
                    {
                        box.m_CountNumTakeDame += 1;
                        if (box.m_CountNumTakeDame >= 2)

                            box.destroy();
                        else
                            box.transform.GetComponent<Renderer>().material.color = Color.grey;
                        
                    }
                }
                    
            }
        }

        m_ExplosionParticles.transform.parent = null;

        // Play the particle system.
        m_ExplosionParticles.Play();

        // Play the explosion sound effect.
        if (SoundEngine.m_isSoundEnable)
            m_ExplosionAudio.Play();

        // Once the particles have finished, destroy the gameobject they are on.
       // Debug.Log("destroy  :"+ m_ExplosionParticles.duration);
        Destroy(m_ExplosionParticles.gameObject, m_ExplosionParticles.duration);

        // Destroy the shell.

        Destroy(gameObject);
    }


    
}