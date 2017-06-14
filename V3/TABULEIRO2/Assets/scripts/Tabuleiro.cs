using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Tabuleiro : MonoBehaviour {

	public Camera camera;
	public int linha = 21;
	public int coluna = 21;
	public GameObject posicaoPrefab;
	private GameObject[,] posicoes = new GameObject[21,21];
	public List<GameObject> posicoesMarcadas = new List<GameObject>();
	public string posicao = "";
	private int opcao = 0;
	private bool planoCarteziano = false;

	public Material materialPadrao;
	public Material materialPlanoCarteziano;
	public bool pontosLigados; 
	public bool novo;

	public int desenhos = 1;
	public int qtdePosicoes;

	public GameObject mover;

	public GameObject cameraPosicaoFontal;
	public GameObject cameraPosicaoInicial;
	
	public Material[] materialDesenhos;
	// Use this for initialization

	public bool moverPino;
	void Start () {
		CameraInicial ();

		desenhos = 1;
		novo = true;
		qtdePosicoes = 0;
		moverPino = false;
		for (int i = 0; i < linha; i++)
		{
			for (int j = 0; j < coluna; j++)
			{

				posicoes[i,j] = Instantiate(posicaoPrefab, 
				                            new Vector3(j * -1.0F, 1, i * 1.0F), 
				                              Quaternion.identity) as GameObject;
				posicoes[i,j].GetComponent<Posicoes>().linha  = i;
				posicoes[i,j].GetComponent<Posicoes>().coluna = j;
				posicoes[i,j].name = "posicao_" + i + "_" + j;
			}
		}
		pontosLigados = false;
	}


	void CameraInicial(){
		camera.transform.position = new Vector3 (cameraPosicaoInicial.transform.position.x,
		                                         cameraPosicaoInicial.transform.position.y,
		                                         cameraPosicaoInicial.transform.position.z);
		
		
		camera.transform.rotation = Quaternion.Euler(new Vector3(cameraPosicaoInicial.transform.eulerAngles.x, 
		                                                         cameraPosicaoInicial.transform.eulerAngles.y, 
		                                                         cameraPosicaoInicial.transform.eulerAngles.z));
	}

	void CameraFrontal(){
		camera.transform.position = new Vector3 (cameraPosicaoInicial.transform.position.x,
		                                         cameraPosicaoInicial.transform.position.y,
		                                         cameraPosicaoInicial.transform.position.z);
		
		
		camera.transform.rotation = Quaternion.Euler(new Vector3(cameraPosicaoInicial.transform.eulerAngles.x, 
		                                                         cameraPosicaoInicial.transform.eulerAngles.y, 
		                                                         cameraPosicaoInicial.transform.eulerAngles.z));
	}

	// Update is called once per frame
	void Update () {
		Ray ray = camera.ScreenPointToRay(Input.mousePosition);
		RaycastHit hit;
		if (Physics.Raycast (ray, out hit,100)) {
			if(hit.transform.gameObject.GetComponent<Posicoes>()){
				posicao = hit.transform.gameObject.GetComponent<Posicoes>().linha.ToString() + "," + 
					      hit.transform.gameObject.GetComponent<Posicoes>().coluna.ToString();
			}
		}
		
	}

	void OnGUI () {
		/*if (GUI.Button (new Rect (Screen.width-90, 0, 90,30 ), "Pontos")) {
			//LinhaEmDoisPontos();
			LigarPontos();
			pontosLigados = true;
		}*/

		if (GUI.Button (new Rect (Screen.width-90, 0, 90,30 ), "Limpar")) {
			limpar();
			desenhos = 1;
			novo=true;
			qtdePosicoes=0;
		}

		if (GUI.Button (new Rect (Screen.width-90, 50, 90,30 ), "Plano Cartz")) {
			PlanoCartesiano();
		}

		if (desenhos < materialDesenhos.Length) {
			if (GUI.Button (new Rect (0, 30, 90, 30), "Novo")) {
				if (posicoesMarcadas.Count != 0) {
						desenhos++;
						novo = true;
						qtdePosicoes = 0;
				}
			}
		}

		GUI.Label (new Rect (0, 0, 200, 200), posicao);

		moverPino = GUI.Toggle (new Rect (0, 80, 90, 30), moverPino, "Mover");
	}

	void limpar(){
		foreach(GameObject g in posicoesMarcadas){
			g.GetComponent<Posicoes>().pino.GetComponent<Desenha>().desabilitaLineRender();
			Destroy(g.GetComponent<Posicoes>().pino);
		}
		posicoesMarcadas.Clear ();
	}

	void PlanoCartesiano(){
		int meioLinha  = linha/2;
		int meioColuna = linha/2;
		planoCarteziano = !planoCarteziano;
		for (int i = 0; i < coluna; i++) {
			GameObject posicao = (GameObject) posicoes[meioLinha,i];

			Renderer renderer = posicao.GetComponentInChildren<Renderer>(); 
			if(!planoCarteziano)
				renderer.material = materialPadrao;
			else   
				renderer.material = materialPlanoCarteziano;
		}

		for (int i = 0; i < linha; i++) {
			GameObject posicao = (GameObject) posicoes[i,meioColuna];
			Renderer renderer = posicao.GetComponentInChildren<Renderer>(); 
			if(!planoCarteziano)
				renderer.material = materialPadrao;
			else   
				renderer.material = materialPlanoCarteziano;
		}

	}
	void LinhaEmDoisPontos(){
		GameObject pos1 = null;
		GameObject pos2 = null;
		bool pos1b = false;
		bool pos2b = false;
		for (int i = 0; i < linha; i++) {
			for (int j = 0; j < coluna; j++) {
				GameObject posicao = (GameObject) posicoes[i,j];
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

		print (posicoesMarcadas.Count);
		/*for (int i = 0; i < posicoesMarcadas.Count; i++) {
			if((posicoesMarcadas.Count-1) > (i) ){

				posicoesMarcadas [i].GetComponent<Posicoes>().pino.GetComponent<Desenha>().habilitaLineRender(
				posicoesMarcadas [i + 1].GetComponent<Posicoes>().pino.transform.position ); 
			}
		}*/

		/*if (pos1b && pos2b) {
			pos1.GetComponent<Posicoes>().pino.GetComponent<Desenha>().habilitaLineRender(
			pos2.GetComponent<Posicoes>().pino.transform.position);	
		}*/
	}

	public void LigarPontos(){
		pontosLigados = true;
				 
		List<Linha> linhas = new List<Linha>();
		foreach(GameObject g in posicoesMarcadas){
			 List<Linha> ls = g.GetComponent<Posicoes>().pino.GetComponent<Desenha>().linhas.FindAll(x => x.desenho == desenhos);
			 if(ls != null){ 
			 	linhas.AddRange(ls);
			 }
		}
		if (linhas.Count > 2) {
			Linha p = null;
			Linha u = null;
			foreach (Linha l in linhas) {
				if(l.index == 1){
					p = l;
				}

				if(u == null){
					u = l;
				}

				if (u.index < l.index) {
					u = l;
				}
			}
			p.objLink = u.obj;
			Desenha d = new Desenha();
			d.habilitaLineRender(p);
		}
	}
}
