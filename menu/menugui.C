public static RenderBuffer activeColorBuffer;
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public Texture icon;
    void OnGUI() {
        if (!icon) {
            Debug.LogError("Add a texture on the inspector first");
            return;
        }
        GUI.Button(new Rect(0, 0, 100, 20), new GUIContent(https://avatars0.githubusercontent.com/u/24334937?v=3&s=70));
    }
}
using UnityEngine;
using System.Collections;
using UnityEngine.UI; // Required when Using UI elements.

public class Example : MonoBehaviour 
{
	public Image pauseMenu;
	
	public void Start()
	{
		//Enableusing UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Start() {
        HostData[] hostData = MasterServer.PollHostList();
        foreach (HostData element in hostData) {
            Debug.Log(element.gameType);
        }
    }
}                                              
