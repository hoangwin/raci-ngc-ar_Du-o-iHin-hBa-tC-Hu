using UnityEngine;
using System.Collections;
using GoogleMobileAds.Api;
public class AdsAdmob : MonoBehaviour
{

    // Use this for initialization
    public static AdsAdmob m_Instance;
    InterstitialAd interstitial;
    RewardBasedVideoAd rewardBasedVideo;
    private bool rewardBasedEventHandlersSet = false;
    void Start()
    {
        RequestInterstitial();
        m_Instance = this;
    }

    // Update is called once per frame
    void Update()
    {

    }
    private void RequestInterstitial()
    {
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-7413680112188055/9660693727";
#elif UNITY_IPHONE
        string adUnitId = "INSERT_IOS_INTERSTITIAL_AD_UNIT_ID_HERE";
#else
        string adUnitId = "unexpected_platform";
#endif

        // Initialize an InterstitialAd.
        interstitial = new InterstitialAd(adUnitId);


        //interstitial.OnAdLoaded += HandleOnAdLoaded;
        // Called when an ad request failed to load.
        // interstitial.OnAdFailedToLoad += HandleOnAdFailedToLoad;        
        // Called when the user returned from the app after an ad click.
        //interstitial.OnAdClosed += HandleOnAdClosed;
        // Called when the ad click caused the user to leave the application.
        //interstitial.OnAdLeavingApplication += HandleOnAdLeavingApplication;
        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the interstitial with the request.
        interstitial.LoadAd(request);
    }
    public void HandleOnAdLoaded(object sender, System.EventArgs args)
    {
        print("OnAdLoaded event received.");
        // Handle the ad loaded event.
    }
    public void ShowInterstitial()
    {
        if (interstitial.IsLoaded())
        {
            interstitial.Show();
        }
    }

    //
    private void RequestRewardBasedVideo()
    {
#if UNITY_EDITOR
        string adUnitId = "unused";
#elif UNITY_ANDROID
        string adUnitId = "ca-app-pub-7413680112188055/6567626525";
#elif UNITY_IPHONE
        string adUnitId = "INSERT_AD_UNIT_HERE";
#else
        string adUnitId = "unexpected_platform";
#endif

        rewardBasedVideo = RewardBasedVideoAd.Instance;
        if (!rewardBasedEventHandlersSet)
        {
            // Ad event fired when the rewarded video ad
            // has been received.
            //  rewardBasedVideo.OnAdLoaded += HandleRewardBasedVideoLoaded;
            // has failed to load.
            //  rewardBasedVideo.OnAdFailedToLoad += HandleRewardBasedVideoFailedToLoad;
            // is opened.
            //  rewardBasedVideo.OnAdOpening += HandleRewardBasedVideoOpened;
            // has started playing.
            //   rewardBasedVideo.OnAdStarted += HandleRewardBasedVideoStarted;
            // has rewarded the user.
            rewardBasedVideo.OnAdRewarded += HandleRewardBasedVideoRewarded;
            // is closed.
            //  rewardBasedVideo.OnAdClosed += HandleRewardBasedVideoClosed;
            // is leaving the application.
            //  rewardBasedVideo.OnAdLeavingApplication += HandleRewardBasedVideoLeftApplication;

            rewardBasedEventHandlersSet = true;
        }
        AdRequest request = new AdRequest.Builder().Build();
        rewardBasedVideo.LoadAd(request, adUnitId);
    }
    // Reward-based video ads adhere to a singleton design.Requests to load an ad are made to a shared instance.
    // Like interstitials, rewarded video ads need to be explicitly shown at an appropriate stopping point in your game.

    public void ShowRewardAds()
    {
        if (rewardBasedVideo.IsLoaded())
        {
            rewardBasedVideo.Show();
        }
    }
    //Rewarded video ad events
    //RewardBasedVideoAd provides ad events to notify you about the ad's lifecycle. These events are of type EventHandler. This example demonstrates how to register for ad events on a rewarded video ad:

    // Reward based video instance is a singleton. Register handlers once to
    // avoid duplicate events.

    //Since a rewarded video instance is a singleton object, we recommend registering for ad events only once to avoid duplicate events.
    //The OnAdRewarded event is the only event that contains special event arguments.It passes an instance of Reward with a Type and Amount describing the reward given to the user.

    public void HandleRewardBasedVideoRewarded(object sender, Reward args)
    {
        ScoreControl.mScore += (int)(args.Amount);
        GamePlay.instance.SetUIText();
        ScoreControl.saveGame();

        //  print("User rewarded with: " + amount.ToString() + " " + type);
    }
}
