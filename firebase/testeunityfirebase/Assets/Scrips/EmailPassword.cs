using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using Firebase;
using Firebase.Auth;
using Firebase.Database;
using Firebase.Unity.Editor;

public class EmailPassword : MonoBehaviour
{

    private FirebaseAuth auth;
    public InputField UserNameInput, PasswordInput;
    public Button SignupButton, LoginButton;
    public Text ErrorText;

	DependencyStatus dependencyStatus = DependencyStatus.UnavailableOther;
	ArrayList leaderBoard;
    void Start()
    {
        auth = FirebaseAuth.DefaultInstance;
        //Just an example to save typing in the login form
        UserNameInput.text = "demofirebase@gmail.com";
        PasswordInput.text = "abcdefgh";

        SignupButton.onClick.AddListener(() => Signup(UserNameInput.text, PasswordInput.text));
		LoginButton.onClick.AddListener(() => {
			//SceneManager.LoadScene("LoginResults");
			Login(UserNameInput.text, PasswordInput.text)
		});



		/*dependencyStatus = FirebaseApp.CheckDependencies();
		if (dependencyStatus != DependencyStatus.Available) {
			FirebaseApp.FixDependenciesAsync().ContinueWith(task => {
				dependencyStatus = FirebaseApp.CheckDependencies();
				if (dependencyStatus == DependencyStatus.Available) {
					//InitializeFirebase(null);
				} else {
					Debug.LogError(
						"Could not resolve all Firebase dependencies: " + dependencyStatus);
				}
			});
		} else {
			 //InitializeFirebase(null);
		}*/
    }

	// Initialize the Firebase database:
	 void InitializeFirebase(FirebaseUser user) {
		FirebaseApp app = FirebaseApp.DefaultInstance;
		app.SetEditorDatabaseUrl("https://fir-functions-6e6b0.firebaseio.com/");
		if (app.Options.DatabaseUrl != null) 
			app.SetEditorDatabaseUrl(app.Options.DatabaseUrl);

		app.SetEditorAuthUserId (user.UserId);
		//app.SetEditorServiceAccountEmail (user.Email);
	
		FirebaseDatabase.DefaultInstance.GoOnline();
	
		Debug.Log(app.Options.DatabaseUrl);
//		FirebaseDatabase.GetInstance ("https://fir-functions-6e6b0.firebaseio.com/").RootReference.SetRawJsonValueAsync ("{ body=\"teste\",title=\"teste titulo\"}");
		Debug.Log("before save database: ");
		DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;
		//.SetRawJsonValueAsync("{\"body\": \"teste\",\"title\": \"teste titulo\"}")


		reference.Child("posts").ValueChanged += (object sender, ValueChangedEventArgs e) => {
			if (e.DatabaseError != null) {
				Debug.LogError(e.DatabaseError.Message);
				return;
			}

			if (e.Snapshot != null && e.Snapshot.ChildrenCount > 0) {
				foreach (var childSnapshot in e.Snapshot.Children) {
					if (childSnapshot.Child("body") == null
						|| childSnapshot.Child("body").Value == null) {
							Debug.LogError("Bad data in sample.  Did you forget to call SetEditorDatabaseUrl with your project id?");
							break;
					} else {
						Debug.Log("body: " + childSnapshot.Child("body").Value.ToString());
					}
				}
			}
		};

		reference.Child("posts").Child(Guid.NewGuid().ToString())
			.SetRawJsonValueAsync("{\"body\": \"teste\",\"title\": \"teste titulo\"}").ContinueWith(task => 
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
					if (task.Exception.InnerExceptions.Count > 0)
						UpdateErrorMessage(task.Exception.InnerExceptions[0].Message);
					return;
				}

				Debug.LogError("SetRawJsonValueAsync error: " + task.Exception);
			});

		/*leaderBoard = new ArrayList();
		FirebaseDatabase.DefaultInstance
			.GetReference("Leaders").OrderByChild("score")
			.ValueChanged += (object sender2, ValueChangedEventArgs e2) => {
			if (e2.DatabaseError != null) {
				Debug.LogError(e2.DatabaseError.Message);
				return;
			}
			string title = leaderBoard[0].ToString();
			leaderBoard.Clear();
			leaderBoard.Add(title);
			if (e2.Snapshot != null && e2.Snapshot.ChildrenCount > 0) {
				foreach (var childSnapshot in e2.Snapshot.Children) {
					if (childSnapshot.Child("score") == null
						|| childSnapshot.Child("score").Value == null) {
						Debug.LogError("Bad data in sample.  Did you forget to call SetEditorDatabaseUrl with your project id?");
						break;
					} else {
						leaderBoard.Insert(1, childSnapshot.Child("score").Value.ToString()
							+ "  " + childSnapshot.Child("email").Value.ToString());
					}
				}
			}
		};*/
	}

    public void Signup(string email, string password)
    {
        if (string.IsNullOrEmpty(email) || string.IsNullOrEmpty(password))
        {
            //Error handling
            return;
        }

        auth.CreateUserWithEmailAndPasswordAsync(email, password).ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("CreateUserWithEmailAndPasswordAsync was canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("CreateUserWithEmailAndPasswordAsync error: " + task.Exception);
                if (task.Exception.InnerExceptions.Count > 0)
                    UpdateErrorMessage(task.Exception.InnerExceptions[0].Message);
                return;
            }
					
            FirebaseUser newUser = task.Result; // Firebase user has been created.
            Debug.LogFormat("Firebase user created successfully: {0} ({1})",
                newUser.DisplayName, newUser.UserId);
            UpdateErrorMessage("Signup Success");
        });
    }

    private void UpdateErrorMessage(string message)
    {
        ErrorText.text = message;
        Invoke("ClearErrorMessage", 3);
    }

    void ClearErrorMessage()
    {
        ErrorText.text = "";
    }
    public void Login(string email, string password)
    {
        auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWith(task =>
        {
            if (task.IsCanceled)
            {
                Debug.LogError("SignInWithEmailAndPasswordAsync canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogError("SignInWithEmailAndPasswordAsync error: " + task.Exception);
                if (task.Exception.InnerExceptions.Count > 0)
                    UpdateErrorMessage(task.Exception.InnerExceptions[0].Message);
                return;
            }

            FirebaseUser user = task.Result;
				//
			InitializeFirebase(user);
            Debug.LogFormat("User signed in successfully: {0} ({1})",
                user.DisplayName, user.UserId);

            PlayerPrefs.SetString("LoginUser", user != null ? user.Email : "Unknown");
            //SceneManager.LoadScene("LoginResults");
        });
    }
}
