using UnityEngine;

public class ShellExplosion : MonoBehaviour
{
    public LayerMask m_TankMask;//de kiem tra phai tank nam trpng ung no
    public LayerMask m_BoxMask;//de kiem tra phai tank nam trpng ung no
    public ParticleSystem m_ExplosionParticles;       
    public AudioSource m_ExplosionAudio;              
    public float m_damege = 1f;                  
    public float m_ExplosionForce = 1000f;            
    public float m_MaxLifeTime = 2f;                  
    public float m_ExplosionRadius = 5f;

    private void Start()
    {
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


        Collider[] colliders = Physics.OverlapSphere(transform.position, m_ExplosionRadius, m_TankMask);
        for (int i = 0; i < colliders.Length; i++)
        {
            Rigidbody targetRigidbody = colliders[i].GetComponent<Rigidbody>();
            if (!targetRigidbody)
                continue;
            TankHealth targetHealth = targetRigidbody.GetComponent<TankHealth>();
            if (!targetHealth)
                continue;
            targetHealth.TakeDamage(m_damege);

        }

        Vector3 vel = GetComponent<Rigidbody>().velocity;
        Collider[] collidersBox = null;
        if (vel.z > 20 || vel.z < -20)
            collidersBox = Physics.OverlapBox(other.gameObject.transform.position, new Vector3(1.0f, 0.2f, 0.2f), Quaternion.Euler(Vector3.zero), m_BoxMask);
        else if (vel.x > 20 || vel.x < -20)
            collidersBox = Physics.OverlapBox(other.gameObject.transform.position, new Vector3(0.2f, 0.2f, 1.0f), Quaternion.Euler(Vector3.zero), m_BoxMask);

        if (collidersBox != null)
        {
            for (int i = 0; i < collidersBox.Length; i++)
            {
                Box box = collidersBox[i].GetComponent<Box>();
                if (!box)
                    continue;
                box.destroy();
            }
        }

        m_ExplosionParticles.transform.parent = null;

        // Play the particle system.
        m_ExplosionParticles.Play();

        // Play the explosion sound effect.
        m_ExplosionAudio.Play();

        // Once the particles have finished, destroy the gameobject they are on.
        Destroy(m_ExplosionParticles.gameObject, m_ExplosionParticles.duration);

        // Destroy the shell.

        Destroy(gameObject);
    }


    
}