using UnityEngine;
using System.Collections;

public class Desenha : MonoBehaviour {

	public Material lineMaterial; 
	public LineRenderer line = null;
	float startWidth = 0.2f;
	float endWidth = 0.2f;
	public Vector3 toPoint = new Vector3(0,0,0);
	private float dist  = 0.0f;
	private float counter  = 0.0f;
	private float lineDrawSpeed  = 6f;
	public GameObject objLink;
	
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		/*if (line != null) {
			if(counter < dist){
				counter += .1f /lineDrawSpeed;
		
				float x = Mathf.Lerp(0,dist,counter);
				Vector3 pointA = this.transform.position;
				Vector3 pointB = toPoint;
				//Get the unit vector in the desired direction, multiply by the desired length and add the starting point.
				Vector3 pointAlongline = x*Vector3.Normalize(pointB-pointA)+pointA;
				
				line.SetPosition(1,pointAlongline);
			}
		}*/
	}
	/*
	public void habilitaLineRender(Vector3 toPoint){
		if (line == null) {
			line = this.gameObject.AddComponent ("LineRenderer") as LineRenderer;
			line.SetWidth (startWidth, endWidth);
			line.material = lineMaterial;
			line.SetPosition(0,this.transform.position);
			line.SetPosition(1,new Vector3(toPoint.x,toPoint.y,toPoint.z));
			line.SetColors(Color.red,Color.red);
			line.renderer.enabled = true;
		}
	}*/

	public void habilitaLineRender(GameObject objLink){
		this.objLink = objLink;
		//if (!line) {
			toPoint = objLink.transform.position;
			if(! GetComponent<LineRenderer>()){
				line = this.gameObject.AddComponent ("LineRenderer") as LineRenderer;
			}
			else{
				line = GetComponent<LineRenderer>();
			}

			line.SetWidth (startWidth, endWidth);
			line.material = lineMaterial;
			line.SetPosition(0,this.transform.position);
			line.SetPosition(1,new Vector3(toPoint.x,toPoint.y,toPoint.z));
			line.SetColors(Color.red,Color.red);
			line.renderer.enabled = true;
		//}
	}

	public void habilitaLineRender(){
		if (!objLink) {
			return;
		}

		if (!line) {
			toPoint = objLink.transform.position;
			if(! GetComponent<LineRenderer>()){
				line = this.gameObject.AddComponent ("LineRenderer") as LineRenderer;
			}
			else{
				line = GetComponent<LineRenderer>();
			}
			line.enabled = true;
			line.SetWidth (startWidth, endWidth);
			line.material = lineMaterial;
			line.SetPosition(0,this.transform.position);
			line.SetPosition(1,new Vector3(toPoint.x,toPoint.y,toPoint.z));
			line.SetColors(Color.red,Color.red);
			line.renderer.enabled = true;
		}
	}


	public void desabilitaLineRender(){
		/*if (line) {
			Destroy (line);
			line = null;
		}
*/
		if (GetComponent<LineRenderer> ()) {
			//Destroy (GetComponent<LineRenderer>());
			//line.renderer.enabled = false;
			GetComponent<LineRenderer> ().SetPosition(0,Vector3.zero);
			GetComponent<LineRenderer> ().SetPosition(1,Vector3.zero);
			GetComponent<LineRenderer> ().enabled = false;
		}
	}
}
