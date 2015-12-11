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
   

    private void OnTriggerEnter (Collider other)
        {
        
			// Collect all the colliders in a sphere from the shell's current position to a radius of the explosion radius.
            Collider[] colliders = Physics.OverlapSphere (transform.position, m_ExplosionRadius, m_TankMask);
            
            // Go through all the colliders...
            for (int i = 0; i < colliders.Length; i++)
            {
                // ... and find their rigidbody.
                Rigidbody targetRigidbody = colliders[i].GetComponent<Rigidbody> ();

                // If they don't have a rigidbody, go on to the next collider.
                if (!targetRigidbody)
                    continue;

                // Add an explosion force.//here
              //  targetRigidbody.AddExplosionForce (m_ExplosionForce, transform.position, m_ExplosionRadius);

                // Find the TankHealth script associated with the rigidbody.
                TankHealth targetHealth = targetRigidbody.GetComponent<TankHealth> ();

                // If there is no TankHealth script attached to the gameobject, go on to the next collider.
                if (!targetHealth)
                    continue;

                // Calculate the amount of damage the target should take based on it's distance from the shell.

                targetHealth.TakeDamage (m_damege);
            }


            //Collider[] collidersBox = Physics.OverlapSphere(transform.position, m_ExplosionRadius +0.3f, m_BoxMask);
            //Collider[] collidersBox = Physics.OverlapBox(transform.position, new Vector3( m_ExplosionRadius,0.5f,0.5f), m_BoxMask);
            Vector3 vel = GetComponent<Rigidbody>().velocity;
            Collider[] collidersBox =null;
            if(vel.z > 20 || vel.z <-20)
                collidersBox = Physics.OverlapBox(other.gameObject.transform.position, new Vector3(1.0f, 0.2f, 0.2f), Quaternion.Euler(Vector3.zero), m_BoxMask);
            else if (vel.x > 20 || vel.x < -20)
                collidersBox = Physics.OverlapBox(other.gameObject.transform.position, new Vector3(0.2f, 0.2f, 1.0f), Quaternion.Euler(Vector3.zero), m_BoxMask);


          //  Debug.Log("aaaa:" + vel);
            // Go through all the colliders...
        if(collidersBox!= null)
        {
            for (int i = 0; i < collidersBox.Length; i++)
            {
                // ... and find their rigidbody.
                Box box = collidersBox[i].GetComponent<Box>();

                // If they don't have a rigidbody, go on to the next collider.
                if (!box)
                    continue;

                // Add an explosion force.//here
                //  targetRigidbody.AddExplosionForce (m_ExplosionForce, transform.position, m_ExplosionRadius);

                // Find the TankHealth script associated with the rigidbody.
                box.destroy();
            }
        }
            // Unparent the particles from the shell.
            m_ExplosionParticles.transform.parent = null;

            // Play the particle system.
            m_ExplosionParticles.Play();

            // Play the explosion sound effect.
            m_ExplosionAudio.Play();

            // Once the particles have finished, destroy the gameobject they are on.
            Destroy (m_ExplosionParticles.gameObject, m_ExplosionParticles.duration);

            // Destroy the shell.
        
            Destroy (gameObject);
        }


    
}