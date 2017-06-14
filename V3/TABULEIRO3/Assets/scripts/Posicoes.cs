using UnityEngine;
using System.Collections;

public class Posicoes : MonoBehaviour {
	
	public Placa tabuleiro;
	public bool marcado;
	public string nome;
	private float doubleClick  = 0.0f;
	
	// Use this for initialization
	void Start () {
		tabuleiro = GameObject.Find ("Placa").GetComponent<Placa> ();
		marcado = false;
	}
	
	void OnMouseDown ()
	{

		if (transform.GetChild (0).gameObject.activeSelf) {
			if(!tabuleiro.mover){
				tabuleiro.mover = this.transform.gameObject;

				Transform pino = transform.GetChild (0).FindChild ("Line001");
				if (pino) {
					pino.renderer.material.color = Color.red;
				}

				//tabuleiro.posicoesMarcadas.Remove (this.transform.gameObject);
				return;
			}
		} else {
			if(tabuleiro.mover){
				Transform pino = tabuleiro.mover.transform.GetChild (0).FindChild ("Line001");
				if (pino) {
					pino.renderer.material.color = Color.white;
				}
				tabuleiro.mover.transform.GetChild(0).gameObject.SetActive(false);

				//tabuleiro.mover

				int index = tabuleiro.posicoesMarcadas.IndexOf(tabuleiro.mover);
				tabuleiro.posicoesMarcadas.Insert(index,
				                                  this.transform.gameObject);
				tabuleiro.posicoesMarcadas.Remove (tabuleiro.mover);

				//tabuleiro.posicoesMarcadas.Add(this.transform.gameObject);
				transform.GetChild(0).gameObject.SetActive(true);

				marcado = true;
				/*tabuleiro.mover.GetComponent<Desenha>().desabilitaLineRender();			
				this.transform.GetComponent<Desenha>().objLink = tabuleiro.mover.GetComponent<Desenha>().objLink;

				this.transform.GetComponent<Desenha>().habilitaLineRender(
				this.transform.GetComponent<Desenha>().objLink);
				*/
				redesenha();

				if(tabuleiro.mover.GetComponent<LineRenderer>()){
					Destroy (tabuleiro.mover.GetComponent<LineRenderer>());
				}
				tabuleiro.mover = null;
				return;
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

		if(clicks){
			tabuleiro.pontosLigados = false;
			transform.GetChild(0).gameObject.SetActive(true);
			tabuleiro.posicoesMarcadas.Add(this.transform.gameObject);
			marcado = true;


			redesenha();

			/*if(tabuleiro.posicoesMarcadas.Count > 1){
				GameObject pos = tabuleiro.posicoesMarcadas[tabuleiro.posicoesMarcadas.Count-2];
				GetComponent<Desenha>().habilitaLineRender(pos);
			}*/
		}
	} 

	public void redesenha(){
		//tabuleiro.posicoesMarcadas.Find (x => x.tag == "");
		//tabuleiro.posicoesMarcadas.ForEach (x => x.GetComponent<Desenha> ().desabilitaLineRender ());
		foreach (GameObject obj in tabuleiro.posicoesMarcadas) {
			obj.GetComponent<Desenha>().desabilitaLineRender();
		} 

		if(tabuleiro.posicoesMarcadas.Count > 1){
			for(int i = 1;i < tabuleiro.posicoesMarcadas.Count;i++){
				GameObject pos1 = tabuleiro.posicoesMarcadas[i-1];
				GameObject pos2 = tabuleiro.posicoesMarcadas[i];	
				pos2.GetComponent<Desenha>().habilitaLineRender(pos1);						
			}
			if(tabuleiro.pontosLigados){
				tabuleiro.LigarPontos();
			}
		}
	}
}
