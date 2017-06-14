using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Desenha : MonoBehaviour {

	public Material lineMaterial; 
	LineRenderer line = null;
	float startWidth = 0.2f;
	float endWidth = 0.2f;
	public Vector3 toPoint = new Vector3(0,0,0);
	private float dist  = 0.0f;
	private float counter  = 0.0f;
	private float lineDrawSpeed  = 6f;
	private GameObject objLink; 
	public List<Linha> linhas = new List<Linha>();
	public GameObject linePrefab;
	public GameObject linePosition;
	public Tabuleiro tabuleiro;

	// Use this for initialization
	void Start () {
		linePosition = transform.FindChild ("pontoLine").gameObject;
		tabuleiro = GameObject.Find ("GameControl").GetComponent<Tabuleiro> ();
	}

	void OnMouseDown ()
	{
		if (tabuleiro.moverPino) {
			tabuleiro.mover = this.gameObject;
		}
	}

	public Linha novaLinha(){
		if (!tabuleiro) {
			tabuleiro = GameObject.Find ("GameControl").GetComponent<Tabuleiro> ();
		}
		
		if (!linePosition) {
			linePosition = transform.FindChild ("pontoLine").gameObject;
		}

		Linha linha = new Linha ();
		GameObject line = Instantiate (linePrefab, new Vector3 (linePosition.transform.position.x,
		                                             linePosition.transform.position.y,
		                                             linePosition.transform.position.z),
		                    Quaternion.identity) as GameObject;
		linha = new Linha ();
		line.transform.parent = this.transform;
		
		switch (tabuleiro.desenhos) {
			case 1:	linha.cor = Color.yellow;
				break;
			case 2:	linha.cor = Color.green;
				break;
		}
		linha.material = tabuleiro.materialDesenhos[tabuleiro.desenhos-1];

		linha.desenho = tabuleiro.desenhos;
		linha.index = tabuleiro.qtdePosicoes;
		linha.obj = line;
		linhas.Add (linha);
		return linha;
	}

	public void novaLinha(GameObject objLink){
		Linha linha = novaLinha ();
		linha.objLink = objLink;
	}
	/*
	public void habilitaLineRender(GameObject objLink, int indexLinha){
		Linha linha  = linhas[indexLinha];
		GameObject line = linhas[indexLinha].obj;

		line.GetComponent<LineRenderer> ().SetPosition (0,line.transform.position);
		line.GetComponent<LineRenderer> ().SetPosition (1,objLink.transform.position);
		line.GetComponent<LineRenderer> ().enabled = true;
		line.GetComponent<LineRenderer> ().materials [0].color = linha.cor;
		//linha.obj.renderer.material.color = linha.cor;
	
		linha.objLink = objLink;
	}*/

	public void habilitaLineRender(Linha linha){
		if (linha.obj && linha.objLink) {
			linha.obj.GetComponent<LineRenderer> ().SetPosition (0, linha.obj.transform.position);
			linha.obj.GetComponent<LineRenderer> ().SetPosition (1, linha.objLink.transform.position);
			linha.obj.GetComponent<LineRenderer> ().enabled = true;
			//linha.obj.GetComponent<LineRenderer> ().materials [0].color = linha.cor;
			//linha.obj.renderer.material.color = linha.cor;

			linha.obj.renderer.material = linha.material;
		}
	}


	public void habilitaLineRender(int indexLinha){
		Linha linha  = linhas[indexLinha];
		GameObject line = linhas[indexLinha].obj;
		
		line.GetComponent<LineRenderer> ().SetPosition (0,line.transform.position);
		line.GetComponent<LineRenderer> ().SetPosition (1,objLink.transform.position);
		line.GetComponent<LineRenderer> ().enabled = true;
		//line.GetComponent<LineRenderer> ().materials [0].color = linha.cor;
		line.renderer.material = linha.material;
	}

	/*public void habilitaLineRender(){
		print ("habilitaLineRender()");
		if (!tabuleiro) {
			tabuleiro = GameObject.Find ("GameControl").GetComponent<Tabuleiro> ();
		}

		if (!linePosition) {
			linePosition = transform.FindChild ("pontoLine").gameObject;
		}

		Linha linha;
		GameObject line;
		if (tabuleiro.desenhos != linhas.Count) {
			line = Instantiate (linePrefab, new Vector3 (linePosition.transform.position.x,
                                          linePosition.transform.position.y,
                                          linePosition.transform.position.z),
                      			Quaternion.identity) as GameObject;
			linha = new Linha ();
			line.transform.parent = this.transform;

			switch (tabuleiro.desenhos) {
				case 1:	linha.cor = Color.yellow;
				break;
				case 2:	linha.cor = Color.green;
				break;
			}
		} else {
			line = linhas[linhas.Count-1].obj;
			linha = linhas[linhas.Count-1];
		} 

		line.GetComponent<LineRenderer> ().SetPosition (0,Vector3.zero);
		line.GetComponent<LineRenderer> ().SetPosition (1,Vector3.zero);
		line.GetComponent<LineRenderer> ().enabled = true;

		line.GetComponent<LineRenderer> ().materials [1].color = linha.cor;

		linha.obj = line;
		if (tabuleiro.desenhos != linhas.Count) {
			linhas.Add (linha);
		}
	}

	public void habilitaLineRender(GameObject objLink){
		if (!tabuleiro) {
			tabuleiro = GameObject.Find ("GameControl").GetComponent<Tabuleiro> ();
		}

		if (!linePosition) {
			linePosition = transform.FindChild ("pontoLine").gameObject;
		}
		
		Linha linha;
		GameObject line;
		if (tabuleiro.desenhos != linhas.Count) {
			line = Instantiate (linePrefab, new Vector3 (linePosition.transform.position.x,
			                                             linePosition.transform.position.y,
			                                             linePosition.transform.position.z),
			                    Quaternion.identity) as GameObject;
			linha = new Linha ();
			line.transform.parent = this.transform;

			switch (tabuleiro.desenhos) {
					case 1:	linha.cor = Color.yellow;
							break;
					case 2:	linha.cor = Color.green;
							break;
			}
			linha.desenho = tabuleiro.desenhos;
		} else {
			line = linhas[linhas.Count -1].obj;
			linha = linhas[linhas.Count-1];
		} 
		
		line.GetComponent<LineRenderer> ().SetPosition (0,line.transform.position);
		line.GetComponent<LineRenderer> ().SetPosition (1,objLink.transform.position);
		line.GetComponent<LineRenderer> ().enabled = true;

		line.GetComponent<LineRenderer> ().materials [1].color = linha.cor;

		linha.obj = line;
		if (tabuleiro.desenhos != linhas.Count) {
			linhas.Add (linha);
		}
		linha.objLink = objLink;
	}
*/

	public void desabilitaLineRender(){
		foreach (Linha linha in linhas) {
			linha.obj.GetComponent<LineRenderer> ().SetPosition(0,Vector3.zero);
			linha.obj.GetComponent<LineRenderer> ().SetPosition(1,Vector3.zero);
			linha.obj.GetComponent<LineRenderer> ().enabled = false;
		} 
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
		//this.toPoint =  new Vector3(toPoint.x,toPoint.y,toPoint.z);
		//dist = Vector3.Distance(this.transform.position,toPoint);
	}

	public void habilitaLineRender(GameObject objLink){
		this.objLink = objLink;
		//if (!line) {
		toPoint = objLink.transform.FindChild ("pontoLine").position;
		//toPoint = objLink.transform.position;
		if(! GetComponent<LineRenderer>()){
			line = this.gameObject.AddComponent ("LineRenderer") as LineRenderer;
		}
		else{
			line = GetComponent<LineRenderer>();
		}
		
		line.SetWidth (startWidth, endWidth);
		line.material = lineMaterial;
		line.SetPosition(0,this.transform.FindChild ("pontoLine").position);
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
		if (GetComponent<LineRenderer> ()) {
			GetComponent<LineRenderer> ().SetPosition(0,Vector3.zero);
			GetComponent<LineRenderer> ().SetPosition(1,Vector3.zero);
			GetComponent<LineRenderer> ().enabled = false;
		}
	}*/
}
