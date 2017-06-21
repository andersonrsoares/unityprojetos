using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using Firebase.Unity.Editor;
using System;
using Newtonsoft.Json;

public class Jogo : MonoBehaviour {
	public List<GameObject> posicoes = new List<GameObject>();
	Tabuleiro tabuleiro;
	// Use this for initialization
	public GameObject pecabranca;
	public GameObject pecapreta;
	public Camera camera;
	string useremail;
	string userid;
	void Start () {
		tabuleiro = new Tabuleiro (posicoes);
		userid = PlayerPrefs.GetString("UserID", "");
		useremail = PlayerPrefs.GetString("UserEmail","");
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

		FirebaseApp app = FirebaseApp.DefaultInstance;
		app.SetEditorDatabaseUrl("https://fir-functions-6e6b0.firebaseio.com/");
		if (app.Options.DatabaseUrl != null) 
			app.SetEditorDatabaseUrl(app.Options.DatabaseUrl);

		app.SetEditorAuthUserId (userid);
		//app.SetEditorServiceAccountEmail (user.Email);

		FirebaseDatabase.DefaultInstance.GoOnline();

		Debug.Log(app.Options.DatabaseUrl);
		//		FirebaseDatabase.GetInstance ("https://fir-functions-6e6b0.firebaseio.com/").RootReference.SetRawJsonValueAsync ("{ body=\"teste\",title=\"teste titulo\"}");
		Debug.Log("before save database: ");
		DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;

		var id = Guid.NewGuid ().ToString ();
		reference.Child ("user")
			.Child ("1")
			.EqualTo ("jogoativo","1").ValueChanged += (object sender, ValueChangedEventArgs e) => {

			if (e.Snapshot != null && e.Snapshot.ChildrenCount > 0) {
				saveJogo(reference,id);
			}


		};
	

		reference.Child ("jogo").Child (id).ValueChanged += ValueChaged;

		tabuleiro.player1 = "1";
		tabuleiro.player1 = "2";
		// JsonUtility.ToJson (new Usuario(){Nome = "teste"});

	
		var tab = JsonConvert.SerializeObject (tabuleiro);
		//var tab = JsonUtility.ToJson (values);
		Debug.Log (tab);
		///Debug.Log (x);


		reference.Child ("jogo").Child(id)
			.SetRawJsonValueAsync (tab)
			.ContinueWith (task => {
				if (task.IsCanceled)
				{
					Debug.LogError("SetRawJsonValueAsync canceled.");
					return;
				}
				if (task.IsFaulted)
				{
					Debug.LogError("SetRawJsonValueAsync error: " + task.Exception);
					return;
				}
				saveJogo(reference,id);
			});

	
		

	}


	void saveJogo(DatabaseReference reference,String id){
		reference.Child("user").Child("1")
			.SetRawJsonValueAsync("{\"jogoativo\": \"1\",\"jogoid\": \""+ id +"\"}").ContinueWith(task => 
				{
					Debug.Log("after save database: ");
					if (task.IsCanceled)
					{
						Debug.LogError("SetRawJsonValueAsync canceled.");
						return;
					}
					if (task.IsFaulted)
					{
						Debug.LogError("SetRawJsonValueAsync error: " + task.Exception);
						return;
					}
					Debug.LogError("SetRawJsonValueAsync error: " + task.Exception);
				});
	}

	void ValueChaged (object sender, ValueChangedEventArgs e){
		if (e.DatabaseError != null) {
			Debug.LogError(e.DatabaseError.Message);
			return;
		}

		if (e.Snapshot != null && e.Snapshot.ChildrenCount > 0) {
			foreach (var childSnapshot in e.Snapshot.Children) {
				Debug.Log(childSnapshot);
				if (childSnapshot.Child("body") == null
					|| childSnapshot.Child("body").Value == null) {
					Debug.LogError("Bad data in sample.  Did you forget to call SetEditorDatabaseUrl with your project id?");
					break;
				} else {
					Debug.Log("body: ");
				}
			}
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


//	public static KeyValuePair<object, object > Cast<K, V>(this KeyValuePair<K, V> kvp)
//	{
//		return new KeyValuePair<object, object>(kvp.Key, kvp.Value);
//	}
//
//	public static KeyValuePair<T, V> CastFrom<T, V>(object obj)
//	{
//		return (KeyValuePair<T, V>) obj;
//	}


//	private static T DictionaryToObject<T>(Dictionary<string, string> dict) where T : new()
//	{
//		var t = new T();
//		System.Reflection.PropertyInfo[] properties = t.GetType().GetProperties();
//
//		foreach ( System.Reflection.PropertyInfo property in properties)
//		{
//			if (!dict.ConAny(x => x.Key.Equals(property.Name, StringComparison.InvariantCultureIgnoreCase)))
//				continue;
//
//			KeyValuePair<string, string> item = dict.First(x => x.Key.Equals(property.Name, StringComparison.InvariantCultureIgnoreCase));
//
//			// Find which property type (int, string, double? etc) the CURRENT property is...
//			Type tPropertyType = t.GetType().GetProperty(property.Name).PropertyType;
//
//			// Fix nullables...
//			Type newT = Nullable.GetUnderlyingType(tPropertyType) ?? tPropertyType;
//
//			// ...and change the type
//			object newA = Convert.ChangeType(item.Value, newT);
//			t.GetType().GetProperty(property.Name).SetValue(t, newA, null);
//		}
//		return t;
//	}

}
