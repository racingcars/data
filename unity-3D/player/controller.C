using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public CharacterController controller;
    void Example() {
        controller = GetComponent<CharacterController>();
        controller.center = new Vector3(0, 1, 0);
    }
}
