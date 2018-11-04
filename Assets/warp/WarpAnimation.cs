using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WarpAnimation : MonoBehaviour {
    public GameObject body;
    public Material warpMaterial;
    public ParticleSystem particle;
    public float fadeTime;
    public GameObject light;
    SkinnedMeshRenderer mesh;
    int i = 0;
    public GameObject camera;
    float x, y, z, yBuff;

	// Use this for initialization
	void Start () {
        mesh = body.GetComponent<SkinnedMeshRenderer>();
        particle.Stop();
        particle.gameObject.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
        x = transform.position.x;
        y = transform.position.y;
        z = transform.position.z;
	}
    public void setPosition(){
        transform.position = new Vector3(x, yBuff, z);
    }

    public void changeCamera(){
        yBuff = y + 1.1f;
        setPosition();
        GetComponent<Animator>().SetBool("warp", false);
        camera.SetActive(true);
        Camera.main.gameObject.SetActive(false);
    }

    public void changeMaterial(){
        mesh.material = warpMaterial;
        light.gameObject.SetActive(true);
    }

    public void fadeStart(){
        particle.gameObject.SetActive(true);
        particle.Play();
        StartCoroutine(Fade());
        //StartCoroutine(cameraUP());
    }

    IEnumerator Fade(){
        while(i<255){
            i++;
            mesh.material.color = new Color(mesh.material.color.r, mesh.material.color.g, mesh.material.color.b, mesh.material.color.a - 1.0f/64);
            if (mesh.material.color.a < 0) { break; }
            yield return new WaitForSeconds(fadeTime/255);
        }
        mesh.material.color = new Color(mesh.material.color.r, mesh.material.color.g, mesh.material.color.b, 0);
    }

    IEnumerator cameraUP(){//-50
        float x = camera.transform.rotation.x;
        float y = camera.transform.rotation.y;
        float z = camera.transform.rotation.z;
        float w = camera.transform.rotation.w;
        print(x);
        yield return new WaitForSeconds(0.5f);
        while(x>-0.873){
            x -= (fadeTime - 0.5f) / (Mathf.PI*68.0f/180);
            camera.transform.rotation = new Quaternion(x, y, z, w);
        }
    }
}
