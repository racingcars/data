public bool isValid;
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {

	// Creates a material that is explicitly created & destroyed by the component.
	// Resources.UnloadUnusedAssets will not unload it, and it will not be editable by the inspector.
	private Material ownedMaterial;
	void OnEnable() {
		ownedMaterial = new Material(Shader.Find("Diffuse"));
		ownedMaterial.hideFlags = HideFlags.HideAndDontSave;
		GetComponent<Renderer>().sharedMaterial = ownedMaterial;
	}

	// Objects created as hide and don't save must be explicitly destroyed by the owner of the object.
	void OnDisable() {
		DestroyImmediate(ownedMaterial);
	}
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour 
{
	public GameObject exampleOne;
	public GameObject exampleTwo;
	public GameObject exampleThree;
	
	void Start() 
	{
		//Sets the name of GameObject One.
		exampleOne.name = "Ben";using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour 
{
	public GameObject exampleOne;
	public GameObject exampleTwo;
	public GameObject exampleThree;
	
	void Start() 
	{
		//Sets the name of GameObject One.
		exampleOne.name = "car";
		//Sets the name of GameObject Two.
		exampleTwo.name = "car";
		//Sets the name of GameObject Three.
		exampleThree.name = "car"; 
    //Displays their names in the console.
		Debug.Log ("The names of these three objects are " + exampleOne.name + exampleTwo.name + exampleThree.name);
	}
}
		//Sets the name of GameObject Two.
		exampleTwo.name = "Ryan";
		//Sets the name of GameObject Three.
		exampleThree.name = "Oscar";

		//Displays their names in the console.
		Debug.Log ("The names of these three objects are " + exampleOne.name + exampleTwo.name + exampleThree.name);
	}
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Example() {
        Debug.Log(gameObject);
    }
}
// Kills the game object
Destroy (gameObject);

// Removes this script instance from the game object
Destroy (this);

// Removes the rigidbody from the game object
Destroy (rigidbody);

// Kills the game object in 5 seconds after loading the object
Destroy (gameObject, 5);

// When the user presses Ctrl, it will remove the script 
// named FooScript from the game object
void Update () {
    if (Input.GetButton("Fire1") && GetComponent<FooScript>())
    {
        Destroy (GetComponent<FooScript>());
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Awake() {
        DontDestroyOnLoad(transform.gameObject);
    }
}
function Start() {
	var go: GameObject = Selection.activeGameObject;
	
	if (go != null && go.GetComponent.<Animator>() != null) {
		var avatar: Avatar = AvatarBuilder.BuildGenericAvatar(go, "");
		avatar.name = "Bob";
		Debug.Log(avatar.isHuman ? "is human" : "is generic");
	
		var animator: Animator = go.GetComponent.<Animator>() as Animator;
		animator.avatar = avatar;
	}
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Example() {
        GetComponent<Collider>().attachedRigidbody.AddForce(0, 1, 0);
    }
}
Camera.MonoOrStereoscopicEye.Left
Camera.MonoOrStereoscopicEye.Right
Camera.MonoOrStereoscopicEye.Mono
public EffectorSelection2D forceTarget;
using UnityEngine;
using System.Collections;
using UnityEngine.UI; // Required when Using UI elements.

public class Example : MonoBehaviour 
{
	public Image pauseMenu;
	
	public void Start()
	{
		//Enables the pause menu UI.
		pauseMenu.enabled = true;
	}
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Example() {
        print(gameObject.name);
    }
}
