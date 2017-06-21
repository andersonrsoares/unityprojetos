using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PosicaoHandler : MonoBehaviour {

	// Use this for initialization

	public Posicao Posicao { get; set;}
	public Peca peca { get; set;}
	void Start () {
		
	}

	void OnMouseDown ()
	{
		Debug.Log ("clicado: " + Posicao.index);
	}

}
