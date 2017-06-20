using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tabuleiro  {

	List<Peca> pecasP1 = new List<Peca>();
	List<Peca> pecasP2 = new List<Peca>();
	List<Posicao> posicoes = new List<Posicao>();

	public Tabuleiro(List<GameObject> p){
		int x = 0;
		posicoes.Clear ();
		for (int i = 1; i <= 8; i++) {
			for (int j = 1; j <= 8; j++) {
				int cor = 0;
				if (i % 2 == 0) {
					if (j % 2 == 0) {
						cor = 1;
					}
					else{
						cor = 0;
					}
				}else{
					if (j % 2 == 0) {
						cor = 0;
					}
					else{
						cor = 1;
					}
				}

				Posicao posicao = new Posicao (){ local = i.ToString() + "x" + j.ToString(), index = x,cor = cor,pos=p[x]};
				posicoes.Add (posicao);
					
				if (cor == 1) {
					if (i <= 3) {
						Peca peca = new Peca (){posicao = posicao, cor = 1 };
						pecasP1.Add (peca);
					}
					else
					if (i >= 6) {
						Peca peca = new Peca (){posicao = posicao, cor = 0 };
						pecasP2.Add (peca);
					}
				}

				x++;
			}
		}
	}


}
