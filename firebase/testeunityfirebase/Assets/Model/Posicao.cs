using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Newtonsoft.Json;

[Serializable]
public class Posicao  {

	public string local { get; set;}
	public int index { get; set;}
	public int cor { get; set;}
	public GameObject pos { get; set;} 

	void Start () {
	}
}
