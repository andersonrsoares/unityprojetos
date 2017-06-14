using UnityEngine;
using System.Collections;

public class Posicoes : MonoBehaviour {

	public Tabuleiro tabuleiro;
	public GameObject pinoPrefab;
	public GameObject pino;
	public bool marcado;
	public int linha;
	public int coluna;
	public string nome;
	private float doubleClick  = 0.0f;

	// Use this for initialization
	void Start () {
		tabuleiro = GameObject.Find ("GameControl").GetComponent<Tabuleiro> ();
		marcado = false;
	}

	void OnMouseDown ()
	{

		if (tabuleiro.mover) {
			pino = tabuleiro.mover;
			pino.transform.parent = this.transform;
			tabuleiro.mover.transform.position = new Vector3 (transform.position.x, 
			                                                  transform.position.y * 1.12f,
			                                                  transform.position.z);
			redesenha ();
			tabuleiro.mover = null;
			return;
		} 

		if (tabuleiro.moverPino) {
			if (!tabuleiro.mover) {
				tabuleiro.mover = pino;
			}
		}

		bool clicks = false;
		if (doubleClick == 0.0f) {
			doubleClick = doubleClick + Time.time;
		} else
		if (Time.time < (doubleClick + 2)) {
			clicks = true;
			doubleClick = 0.0f;
		} else {
			doubleClick = 0.0f;
		}

		//renderer.material.color = Color.red;
		if (clicks) {
		   if(!pino){
		   		pino = Instantiate (pinoPrefab, 
   				new Vector3 (transform.position.x, transform.position.y * 1.12f, transform.position.z), 
      			Quaternion.identity) as GameObject;

				pino.transform.parent = this.transform;
			}
			tabuleiro.posicoesMarcadas.Add (this.transform.gameObject);

			tabuleiro.qtdePosicoes++;
			
			if (!tabuleiro.novo) {
				GameObject pos = tabuleiro.posicoesMarcadas [tabuleiro.posicoesMarcadas.Count - 2];
				Linha linha = pos.GetComponent<Posicoes> ().pino.GetComponent<Desenha> ().linhas.Find (x => x.desenho == tabuleiro.desenhos);
				pino.GetComponent<Desenha> ().novaLinha (linha.obj);
			} else {
				pino.GetComponent<Desenha> ().novaLinha ();
			}

			marcado = true;

			redesenha ();
			tabuleiro.novo = false;
		}
	} 
	

	public void redesenha(){
		//tabuleiro.posicoesMarcadas.Find (x => x.tag == "");
		//tabuleiro.posicoesMarcadas.ForEach (x => x.GetComponent<Desenha> ().desabilitaLineRender ());
		foreach (GameObject obj in tabuleiro.posicoesMarcadas) {
			obj.GetComponent<Posicoes>().pino.GetComponent<Desenha>().desabilitaLineRender();
		} 
		
		if(tabuleiro.posicoesMarcadas.Count > 0){

			/*if(tabuleiro.novo){
				GameObject pos = tabuleiro.posicoesMarcadas[tabuleiro.posicoesMarcadas.Count-1];
				pos.GetComponent<Posicoes>().pino.GetComponent<Desenha>().habilitaLineRender();
				return;
			}*/

			/*for(int i = 1;i < tabuleiro.posicoesMarcadas.Count;i++){
				GameObject pos1 = tabuleiro.posicoesMarcadas[i-1];
				GameObject pos2 = tabuleiro.posicoesMarcadas[i];	
				//pos2.GetComponent<Posicoes>().pino.GetComponent<Desenha>().habilitaLineRender(
				//pos1.GetComponent<Posicoes>().pino.GetComponent<Desenha>().linhas[tabuleiro.desenhos-1].obj);

				for(int j = 0;j < pos1.GetComponent<Posicoes>().pino.GetComponent<Desenha>().linhas.Count;j++){
					pos2.GetComponent<Posicoes>().pino.GetComponent<Desenha>().habilitaLineRender(
						pos1.GetComponent<Posicoes>().pino.GetComponent<Desenha>().linhas[j].obj,j);
				}
			}*/

			foreach(GameObject pos in tabuleiro.posicoesMarcadas){
				foreach(Linha linha in pos.GetComponent<Posicoes>().pino.GetComponent<Desenha>().linhas){
					pos.GetComponent<Posicoes>().pino.GetComponent<Desenha>().habilitaLineRender(linha);
				}
			}


			//if(tabuleiro.pontosLigados){
				tabuleiro.LigarPontos();
			//}
		}
		/*else
		if(tabuleiro.posicoesMarcadas.Count == 1){
			GameObject pos = tabuleiro.posicoesMarcadas[0];
			pos.GetComponent<Posicoes>().pino.GetComponent<Desenha>().habilitaLineRender();
		}*/
	}
}
