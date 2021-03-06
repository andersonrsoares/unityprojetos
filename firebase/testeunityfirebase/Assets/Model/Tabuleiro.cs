﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Newtonsoft.Json;

[Serializable]
public class Tabuleiro  {

	[SerializeField]
	public string player1 { get; set;}
	[SerializeField]
	public string player2 { get; set;}

	[SerializeField]
	public List<Peca> pecasP1 { get; set;}
	[SerializeField]
	public List<Peca> pecasP2 { get; set;}
	public List<Posicao> posicoes { get; set;}

	public Tabuleiro(List<GameObject> p){
		pecasP1 = new List<Peca>();
		pecasP2 = new List<Peca>();
		posicoes = new List<Posicao>();
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

				Posicao posicao = new Posicao (){ 
					local = i.ToString() + "x" + j.ToString(), 
					index = x,
					cor = cor,pos = p[x]};

				var pos = p [x].AddComponent<PosicaoHandler> ();
//				posicao.cor = cor;
//				posicao.local = i.ToString() + "x" + j.ToString();
//				posicao.index = x;
//				posicao.pos = p[x];

				pos.Posicao = posicao;
				posicoes.Add (posicao);

				if (cor == 1) {
					if (i <= 3) {
						Peca peca = new Peca (){posicao = posicao, cor = 1 };
						pos.Peca = peca;
						pecasP1.Add (peca);
					}
					else
					if (i >= 6) {
						Peca peca = new Peca (){posicao = posicao, cor = 0 };
						pos.Peca = peca;
						//var pospeca = peca.peca.GetComponent<PosicaoHandler> ();
						//pospeca.Posicao = posicao;
						pecasP2.Add (peca);
					}
				}

				x++;
			}
		}
	}


}
