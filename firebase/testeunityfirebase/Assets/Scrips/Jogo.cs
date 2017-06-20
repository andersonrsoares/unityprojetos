using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Jogo : MonoBehaviour {
	public List<GameObject> posicoes = new List<GameObject>();
	Tabuleiro tabuleiro;
	// Use this for initialization
	public GameObject pecabranca;
	public GameObject pecapreta;
	public Camera camera;
	void Start () {
		tabuleiro = new Tabuleiro (posicoes);

	
		for (int i = 0; i < tabuleiro.pecasP1.Count; i++) {
			tabuleiro.pecasP1[i].peca = Instantiate(pecapreta, 
				new Vector3(tabuleiro.pecasP1[i].posicao.pos.transform.position.x, 
							tabuleiro.pecasP1[i].posicao.pos.transform.position.y,
					tabuleiro.pecasP1[i].posicao.pos.transform.position.z-0.5f), 
				Quaternion.identity) as GameObject;
		}

		for (int i = 0; i < tabuleiro.pecasP2.Count; i++) {
			tabuleiro.pecasP2[i].peca = Instantiate(pecabranca, 
				new Vector3(tabuleiro.pecasP2[i].posicao.pos.transform.position.x, 
					tabuleiro.pecasP2[i].posicao.pos.transform.position.y,
					tabuleiro.pecasP2[i].posicao.pos.transform.position.z-0.5f), 
				Quaternion.identity) as GameObject;
		}
	}
	
	// Update is called once per frame
	void Update () {
		Ray ray = camera.ScreenPointToRay(Input.mousePosition);
		RaycastHit hit;
		if (Physics.Raycast (ray, out hit,100)) {
			//if(hit.transform.gameObject.GetComponent<Posicoes>()){
			//	Debug.Log ();
			//}
		}
	}
}
