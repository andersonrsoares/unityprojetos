using UnityEngine;
using System.Collections;

public class Linha  {


	public GameObject objLink;
	public GameObject obj;
	public Color cor;
	public Material material;
	private float dist  = 0.0f;
	private float counter  = 0.0f;
	private float lineDrawSpeed  = 6f;
	public int desenho;
	public int index;


	// Use this for initialization
	void Start () {
	
	}

	/*void Update () {
		LineRenderer line = obj.GetComponent<LineRenderer> ();
		if (line != null) {
			//Vector3  toPoint = new Vector3(linePosition.transform.position.x,
			//            				   linePosition.transform.position.y,
			//            				   linePosition.transform.position.z),

			if(counter < dist){
				counter += .1f /lineDrawSpeed;
				
				float x = Mathf.Lerp(0,dist,counter);
				Vector3 pointA = this.transform.position;
				Vector3 pointB = objLink.transform.position;
				//Get the unit vector in the desired direction, multiply by the desired length and add the starting point.
				Vector3 pointAlongline = x*Vector3.Normalize(pointB-pointA)+pointA;
				
				line.SetPosition(1,pointAlongline);
			}
		}
	}*/

}
