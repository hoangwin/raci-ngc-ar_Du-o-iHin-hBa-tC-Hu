package com.saiyan.battle.warrior;

import java.util.ArrayList;
import java.util.Collection;

import com.startapp.android.publish.AdEventListener;
import com.startapp.android.publish.StartAppAd;
import com.startapp.android.publish.StartAppSDK;
import com.startapp.android.publish.banner.Banner;
import com.startapp.android.publish.banner.BannerListener;
import com.unity3d.player.*;
import android.app.Activity;
import android.content.res.Configuration;
import android.graphics.PixelFormat;
import android.os.Bundle;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.LinearLayout;

import com.facebook.ads.*;

public class UnityPlayerActivity extends Activity
{
	public static UnityPlayerActivity instance;
	private com.facebook.ads.AdView adViewFaceBook;

	protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code
	public static com.facebook.ads.InterstitialAd interstitialFaceBook;
	private StartAppAd startAppAd = new StartAppAd(this);
	// Setup activity layout
	static FrameLayout layout;
	static FrameLayout.LayoutParams adsParams = new FrameLayout.LayoutParams(
			FrameLayout.LayoutParams.WRAP_CONTENT,
			FrameLayout.LayoutParams.WRAP_CONTENT, android.view.Gravity.BOTTOM
					| android.view.Gravity.CENTER);

	// Setup activity layout
	@Override protected void onCreate (Bundle savedInstanceState)
	{
		requestWindowFeature(Window.FEATURE_NO_TITLE);
		super.onCreate(savedInstanceState);

		getWindow().setFormat(PixelFormat.RGBX_8888); // <--- This makes xperia play happy

		mUnityPlayer = new UnityPlayer(this);
		View playerView = mUnityPlayer.getView();
		// setContentView(mUnityPlayer);

		mUnityPlayer.requestFocus();
		instance = this;
		layout = new FrameLayout(this);
		layout.setPadding(0, 0, 0, 0);
		setContentView(layout);
		layout.addView(playerView);
		// here

		// Request to load an ad

		StartAppSDK.init(this, "200246346", true);// startapp
		startAppAd = new StartAppAd(this);
		// showBannerFaceBook();
		// loadInterstitialAd();

		// tét startapp
		// showStarAppBanner();
		// ShowStarAppFull();
	}

	public static int ShowAds() {
		UnityPlayerActivity.loadInterstitialAdFaceBook(instance);
		// ShowAdsBackup();
		// instance.ShowAdmobFull();
		return 1;
	}

	public void showStarAppBanner() {
		Banner startAppBanner = new Banner(getBaseContext(),
				new BannerListener() {
					@Override
					public void onReceiveAd(View banner) {
						// startAppAd.showAd();
					}

					@Override
					public void onFailedToReceiveAd(View banner) {
					}

					@Override
					public void onClick(View banner) {
					}
				});

		layout.addView(startAppBanner, adsParams);
		// startAppAd.showAd(); // show the ad
		// startAppAd.loadAd(); // load the next ad

	}

	public void ShowStarAppFull() {

		startAppAd.loadAd(new AdEventListener() {

			@Override
			public void onFailedToReceiveAd(com.startapp.android.publish.Ad arg0) {
				// TODO Auto-generated method stub
				Log.d("Startapp,eror", "eror");
			}

			@Override
			public void onReceiveAd(com.startapp.android.publish.Ad arg0) {
				// TODO Auto-generated method stub

			}
		});
		startAppAd.showAd(); // show the ad

	}

	public void showBannerFaceBook() {
		adViewFaceBook = new com.facebook.ads.AdView(this,
				"1671197079789220_1671222949786633",
				com.facebook.ads.AdSize.BANNER_HEIGHT_50);
		Collection<String> TestDevices = new ArrayList<String>();
		TestDevices.add("403706e6d09a7de076ce069c9bc804ec");
		com.facebook.ads.AdSettings.addTestDevices(TestDevices);
		com.facebook.ads.AdSettings
				.addTestDevice("2a2ab03d07ce6eaced63502d841a103e");
		com.facebook.ads.AdSettings
				.addTestDevice("090021134d2dc35fe0e3dceb8b361de1");

		layout.addView(adViewFaceBook, adsParams);
		adViewFaceBook.setAdListener(new com.facebook.ads.AdListener() {

			@Override
			public void onError(com.facebook.ads.Ad ad,
					com.facebook.ads.AdError error) {
				// Ad failed to load.
				Log.d("aaa", "aa");
				// Add code to hide the ad's view
				// adViewFaceBook.dis
				// showStarAppBanner();
			}

			@Override
			public void onAdLoaded(com.facebook.ads.Ad ad) {
				// Ad was loaded
				// Add code to show the ad's view
				Log.d("aaa", "bbb");// cai thu muc sdk nam cho nao??
			}

			@Override
			public void onAdClicked(com.facebook.ads.Ad ad) {
				// Use this function to detect when an ad was clicked.
			}

		});
		adViewFaceBook.loadAd();

	}

	public static void loadInterstitialAdFaceBook(UnityPlayerActivity activity) {

		Log.d("Admob", "MRAID InApp Ad is calling..");
		UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
			@Override
			public void run() {
				Log.e("TOAN", "ShowAds22222222");
				Collection<String> TestDevices = new ArrayList<String>();
				TestDevices.add("403706e6d09a7de076ce069c9bc804ec");
				com.facebook.ads.AdSettings.addTestDevices(TestDevices);
				com.facebook.ads.AdSettings
						.addTestDevice("2a2ab03d07ce6eaced63502d841a103e");
				com.facebook.ads.AdSettings
						.addTestDevice("090021134d2dc35fe0e3dceb8b361de1");

				interstitialFaceBook = new com.facebook.ads.InterstitialAd(
						instance, "1053780321352749_1053783091352472");

				interstitialFaceBook
						.setAdListener(new com.facebook.ads.InterstitialAdListener() {
							@Override
							public void onError(com.facebook.ads.Ad ad,
									com.facebook.ads.AdError error) {
								Log.e("TOAN",
										"onError: " + error.getErrorMessage());
								instance.ShowStarAppFull();
							}

							@Override
							public void onAdLoaded(com.facebook.ads.Ad ad) {
								Log.e("TOAN", "onAdLoaded: ");
								interstitialFaceBook.show();
							}

							@Override
							public void onAdClicked(com.facebook.ads.Ad arg0) {
							}

							@Override
							public void onInterstitialDismissed(
									com.facebook.ads.Ad arg0) {
							}

							@Override
							public void onInterstitialDisplayed(
									com.facebook.ads.Ad arg0) {
							}
						});
				interstitialFaceBook.loadAd();
				Log.e("TOAN", "ShowAds333333333333");
			}
		});
	}

	// Quit Unity
	@Override protected void onDestroy ()
	{
		mUnityPlayer.quit();
		if (adViewFaceBook != null)
			adViewFaceBook.destroy();
		super.onDestroy();
	}

	// Pause Unity
	@Override protected void onPause()
	{
		super.onPause();
		mUnityPlayer.pause();
		startAppAd.onPause();
	}

	// Resume Unity
	@Override protected void onResume()
	{
		super.onResume();
		startAppAd.onResume();
		mUnityPlayer.resume();
	}

	// This ensures the layout will be correct.
	@Override public void onConfigurationChanged(Configuration newConfig)
	{
		super.onConfigurationChanged(newConfig);
		mUnityPlayer.configurationChanged(newConfig);
	}

	// Notify Unity of the focus change.
	@Override public void onWindowFocusChanged(boolean hasFocus)
	{
		super.onWindowFocusChanged(hasFocus);
		mUnityPlayer.windowFocusChanged(hasFocus);
		if(!getApplicationContext().getPackageName().equals("com.saiyan.battle.warrior"))
		{	
			finish();
        	System.exit(0);
		} 
	}

	// For some reason the multiple keyevent type is not supported by the ndk.
	// Force event injection by overriding dispatchKeyEvent().
	@Override public boolean dispatchKeyEvent(KeyEvent event)
	{
		if (event.getAction() == KeyEvent.ACTION_MULTIPLE)
			return mUnityPlayer.injectEvent(event);
		return super.dispatchKeyEvent(event);
	}

	// Pass any events not handled by (unfocused) views straight to UnityPlayer
	@Override public boolean onKeyUp(int keyCode, KeyEvent event)     { return mUnityPlayer.injectEvent(event); }
	@Override public boolean onKeyDown(int keyCode, KeyEvent event)   { return mUnityPlayer.injectEvent(event); }
	@Override public boolean onTouchEvent(MotionEvent event)          { return mUnityPlayer.injectEvent(event); }
	/*API12*/ public boolean onGenericMotionEvent(MotionEvent event)  { return mUnityPlayer.injectEvent(event); }
}
