using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Update() {
        transform.rotation = Input.gyro.attitude;
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public bool enableTilt;
    void OnGUI() {
        if (Input.gyro.enabled)
            GUILayout.Toggle(enableTilt, "Enable tilt control");
        
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public float movementScale;
    void Update() {
        Vector3 pos = transform.position;
        pos.y = Vector3.Dot(Input.gyro.gravity, Vector3.up) * movementScale;
        transform.position = pos;
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public float shakeSpeed;
    public AudioClip shakeSound;
	AudioSource audio;
	
	void Start() {
		audio = GetComponent<AudioSource>();
	}
	
    void Update() {
        if (Input.gyro.rotationRate.y > shakeSpeed && !audio.isPlaying)
            audio.PlayOneShot(shakeSound);
        
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public float shakeSpeed;
    public AudioClip shakeSound;
    AudioSource audio;
	
	void Start() {
		audio = GetComponent<AudioSource>();
	}
	
    
    void Update() {
        if (Input.gyro.rotationRateUnbiased.y > shakeSpeed && !audio.isPlaying)
            audio.PlayOneShot(shakeSound);
        
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Start() {
        Input.gyro.updateInterval = 0.01F;
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public Vector3 forceVec;
    public Rigidbody rb;
    void Start() {
        rb = GetComponent<Rigidbody>();
    }
    void FixedUpdate() {
        rb.AddForce(Input.gyro.userAcceleration.x * forceVec);
    }
}
