using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Placa : MonoBehaviour {


	public Camera camera;
	public int linha = 73;
	public GameObject posicaoPrefab;
	private GameObject[] posicoes = new GameObject[73];
	public List<GameObject> posicoesMarcadas = new List<GameObject>();
	public string posicao = "";
	private int opcao = 0;
	public GameObject mover;
	public bool pontosLigados;
	// Use this for initialization
	void Start () {
		pontosLigados = false;
		inicia ();
	}
	
	// Update is called once per frame
	void Update () {
		/*Ray ray = camera.ScreenPointToRay(Input.mousePosition);
		RaycastHit hit;
		if (Physics.Raycast (ray, out hit,100)) {
			if(hit.transform.gameObject.GetComponent<Posicoes>()){
				posicao = hit.transform.gameObject.GetComponent<Posicoes>().linha.ToString() + "," + 
					      hit.transform.gameObject.GetComponent<Posicoes>().coluna.ToString();
			}
		}*/
	}

	void inicia(){
		int j = 0;
		for (int i = 0; i < transform.childCount; i++) {
			GameObject obj =  transform.GetChild(i).gameObject;
			if(obj.tag == "pino"){
				posicoes[j] = obj.transform.GetChild(0).gameObject;
				obj.transform.GetChild(0).gameObject.SetActive(false);
				j++;
			}
		}
	}

	void OnGUI () {
		if (GUI.Button (new Rect (0, 40, 90,30 ), "fechar")) {
			//LinhaEmDoisPontos();
			LigarPontos();
		}

		if (GUI.Button (new Rect (0, 100, 90,30 ), "limpar")) {
			Limpar();
		}

		GUI.Label (new Rect (0, 0, 200, 200), posicao);
		
	}



	void Limpar(){
		foreach (GameObject obj in posicoesMarcadas) {
			if(obj.GetComponent<LineRenderer>()){
				Destroy(obj.GetComponent<LineRenderer>());
			}
			obj.transform.GetChild (0).gameObject.SetActive(false);
		} 
		posicoesMarcadas.Clear ();
		pontosLigados = false;
	}


	public void LigarPontos(){
		pontosLigados = true;
		if(posicoesMarcadas.Count > 2){
			posicoesMarcadas[0].GetComponent<Desenha>().habilitaLineRender(
				posicoesMarcadas[posicoesMarcadas.Count-1]);

			
		}	
	}


	void LinhaEmDoisPontos(){
		GameObject pos1 = null;
		GameObject pos2 = null;
		bool pos1b = false;
		bool pos2b = false;
		for (int i = 0; i < linha; i++) {
			GameObject posicao = (GameObject) posicoes[i];
			Posicoes p = posicao.GetComponent<Posicoes>();  
			if(p != null){
				if (posicao.GetComponent<Posicoes>().marcado){
					if(!pos1b){
						pos1 = posicao;
						pos1b = true;
					}
					else
					if(!pos2b){
						pos2 = posicao;
						pos2b = true;
					}
					else{
						break;
					}
				}
			}
		}

		for (int i = 0; i < posicoesMarcadas.Count; i++) {
			if((posicoesMarcadas.Count-1) > (i) ){
				
				posicoesMarcadas [i].GetComponent<Desenha>().habilitaLineRender(
					posicoesMarcadas [i + 1] ); 
			}
		}
		
		/*if (pos1b && pos2b) {
			pos1.GetComponent<Posicoes>().pino.GetComponent<Desenha>().habilitaLineRender(
			pos2.GetComponent<Posicoes>().pino.transform.position);	
		}*/
	}

}


