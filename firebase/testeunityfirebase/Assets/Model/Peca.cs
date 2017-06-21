using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Newtonsoft.Json;

[Serializable]
public class Peca  {

	public int cor { get; set;}
	public Posicao posicao { get; set;}
	[JsonIgnore]
	public GameObject peca { get; set;} 
}
