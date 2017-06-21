using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PosicaoHandler : MonoBehaviour {

	// Use this for initialization

	public Posicao Posicao { get; set;}
	public Peca Peca { get; set;}
	Jogo jogo;
	void Start () {
		jogo = GameObject.Find ("MainCamera").GetComponent<Jogo> ();
	}

	void OnMouseDown ()
	{
		
		if(Posicao!= null)
			Debug.Log ("clicado: " + Posicao.index);
		
		if (Peca != null) {
			Debug.Log ("clicado peca: " + Peca.posicao.index);
		}

		//Debug.Log ("clicado: ");
	}



}
