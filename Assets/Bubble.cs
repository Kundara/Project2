﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Bubble : MonoBehaviour {

	public Sprite[] bubbleImages;
	public Sprite[] poppedImages;
	public ParticleSystem popParticles;

	[Header("Configuration")]
	public int value;

	public bool isPopped = false;

	[HideInInspector]
	public int row;
	[HideInInspector]
	public float fadeOutTime = 20f;

	BubbleGrid grid;
	ScoreManager scoreManager;
	Image ourImage;
	public event System.Action<int> OnPop = (i) => {};
	AudioSource audiosource;
	AudioClip clip;
	SoundLibrary soundLibrary;
	float timeOfPop;


	// Use this for initialization
	void Start () {

		ourImage = GetComponent<Image>();
		ourImage.sprite = bubbleImages[Random.Range(0,poppedImages.Length)];

		grid = FindObjectOfType<BubbleGrid>();
		scoreManager = FindObjectOfType<ScoreManager>();
		if (scoreManager != null)
			OnPop += scoreManager.IncreaseScore;

		audiosource = GetComponent<AudioSource>();
		soundLibrary = FindObjectOfType<SoundLibrary>();
		clip = soundLibrary.popSounds[Random.Range(0,soundLibrary.popSounds.Length)];
		audiosource.clip = clip;
	}
	
	// Update is called once per frame
	void Update () {

	}

	public void Pop (){
		if (!isPopped){
			audiosource.Play();
			popParticles.Play();
			ourImage.sprite = poppedImages[Random.Range(0,poppedImages.Length)];
			isPopped = true;


			grid.CheckPopped();
			OnPop(value);
			timeOfPop = Time.time;
		}


	}

	public void Swiped(){

		if (scoreManager.isSuperActive)
			Pop();
	}


	public void Kill (float fadeTime) {
		ourImage.CrossFadeAlpha( 0f , fadeOutTime , true );
		Destroy(this.gameObject , fadeTime + 0.1f);
	}

	void OnDestroy (){
		if (scoreManager != null)
			OnPop -= scoreManager.IncreaseScore;
	}

	public void Release () {

		ourImage.raycastTarget = false;

		if (!audiosource.isPlaying){
			clip = soundLibrary.releaseSounds[Random.Range(0,soundLibrary.releaseSounds.Length)];

			audiosource.clip = clip;
			audiosource.Play();
		}


	}
}
