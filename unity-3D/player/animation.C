using UnityEngine;
using System.Collections;

public class ExampleClass : MonoBehaviour {
    public Animation anim;
    void Start() {
        anim = GetComponent<Animation>();
        foreach (AnimationState state in anim) {
            state.speed = 0.10F;
        }
    }
}
using UnityEngine;
using System.Collections;
     
public class AnimCurveExample : MonoBehaviour
{
	public AnimationCurve curve ;

	void Start()
	{
		curve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1));
		curve.preWrapMode = WrapMode.PingPong;
		curve.postWrapMode = WrapMode.PingPong;
	}

	void Update()
	{
		transform.position = new Vector3(transform.position.x, curve.Evaluate(Time.time), transform.position.z);
	}
}
