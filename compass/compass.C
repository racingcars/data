public bool enabled;
Input.location.Start()
function Update () {
		// Orient an object to point to magnetic north.
		transform.rotation = Quaternion.Euler(0, -Input.compass.magneticHeading, 0);
	}
  public float headingAccuracy;
  using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void OnGUI() {
        GUILayout.Label("Magnetometer reading: " + Input.compass.rawVector.ToString());
    }
}
public double timestamp;
function Update() {
		// Orient an object to point northward.
		transform.rotation = Quaternion.Euler(0, -Input.compass.trueHeading, 0);
	}
