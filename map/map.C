using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Example() {
        Debug.Log(gameObject);
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Example() {
        Physics.bounceThreshold = 1;
    }
}
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public Cubemap c;
    void Example() {
        if (c != null)
            Debug.Log(c.format);
        else
            Debug.Log("No cubemap was assigned, please assing one on the inspector.");
    }
}
public CubemapArray(int faceSize, int cubemapCount, TextureFormat format, bool mipmap);
public CubemapArray(int faceSize, int cubemapCount, TextureFormat format, bool mipmap, bool linear);
using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    void Start() {
        AndroidJavaObject jo = new AndroidJavaObject("java.lang.String", "some string");
    }
}
