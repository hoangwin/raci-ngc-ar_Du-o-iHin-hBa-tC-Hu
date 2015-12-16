package com.company.aaa;

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
public class UnityPlayerActivity extends Activity implements InterstitialAdListener 
{
	private AdView adView;
	protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code
	private InterstitialAd interstitialAd;
	private StartAppAd startAppAd = new StartAppAd(this);
	// Setup activity layout
	static FrameLayout layout ;
	static FrameLayout.LayoutParams adsParams = new FrameLayout.LayoutParams(FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT, android.view.Gravity.BOTTOM | android.view.Gravity.CENTER);
	@Override protected void onCreate (Bundle savedInstanceState)
	{
		
		requestWindowFeature(Window.FEATURE_NO_TITLE);
		super.onCreate(savedInstanceState);
		Log.d("aaa", "aaa");
		getWindow().setFormat(PixelFormat.RGBX_8888); // <--- This makes xperia play happy

		mUnityPlayer = new UnityPlayer(this);
		View playerView = mUnityPlayer.getView();
		//setContentView(mUnityPlayer);
		
		mUnityPlayer.requestFocus();
			layout = new FrameLayout(this);
		layout.setPadding(0, 0, 0, 0);
				setContentView(layout);
				layout.addView(playerView);
		//here
		
		    // Request to load an ad    
				
		   
		StartAppSDK.init(this, "209783467", true);//startapp
		startAppAd = new StartAppAd(this);		
		//showBannerFaceBook();
		//loadInterstitialAd();
		
		//tét startapp
		showStarAppBanner();
		ShowStarAppFull();
	}
public void showStarAppBanner()
{	
	Banner startAppBanner = new Banner(getBaseContext(), new BannerListener() {
	    @Override
	    public void onReceiveAd(View banner) {
	    	startAppAd.showAd(); 
	    }
	    @Override
	    public void onFailedToReceiveAd(View banner) {
	    }
	    @Override
	    public void onClick(View banner) {
	    }
	});
	

	layout.addView(startAppBanner,adsParams);
	//startAppAd.showAd(); // show the ad
	//	startAppAd.loadAd(); // load the next ad
		
}

	
	public void ShowStarAppFull()
	{
		
		startAppAd.loadAd (new AdEventListener() {
		    
			@Override
			public void onFailedToReceiveAd(com.startapp.android.publish.Ad arg0) {
				// TODO Auto-generated method stub
			Log.d("Startapp,eror","eror");	
			}
			@Override
			public void onReceiveAd(com.startapp.android.publish.Ad arg0) {
				// TODO Auto-generated method stub
				startAppAd.showAd(); // show the ad		
				
			}
		});
    	        	
		
	}

	private void loadInterstitialAd(){
	    interstitialAd = new InterstitialAd(this, "412354365626608_412355058959872");
	    Log.d("111111111","1111111111111");
	    interstitialAd.setAdListener(UnityPlayerActivity.this);
	    Log.d("111111111","2222222222222");
	    interstitialAd.loadAd();
	    Log.d("111111111","33333333333333");
	}
	
	@Override
	public void onError(Ad ad, AdError error) {
	    // Ad failed to load
		ShowStarAppFull();
	}

	@Override
	public void onAdLoaded(Ad ad) {
	    // Ad is loaded and ready to be displayed  
	    // You can now display the full screen ad using this code:
		Log.d("111111111","444444444");
	    interstitialAd.show();
	    Log.d("111111111","5555555");
	}
	
	@Override
	public void onAdClicked(Ad arg0) {
		// TODO Auto-generated method stub
		
	}



	@Override
	public void onInterstitialDismissed(Ad arg0) {
		// TODO Auto-generated method stub
		
	}



	@Override
	public void onInterstitialDisplayed(Ad arg0) {
		// TODO Auto-generated method stub
		
	}
public void showBannerFaceBook()
{
	 adView = new AdView(this, "412354365626608_412355002293211", AdSize.BANNER_HEIGHT_50);
	 Collection<String> TestDevices = new ArrayList<String>();
		TestDevices.add("2a2ab03d07ce6eaced63502d841a103e");
		TestDevices.add("HASHED_ID_2");
		AdSettings.addTestDevices(TestDevices);
	 

	
	layout.addView(adView,adsParams);
	adView.setAdListener(new AdListener() {
		
        @Override
        public void onError(Ad ad, AdError error) {
            // Ad failed to load. 
            // Add code to hide the ad's view
        	showStarAppBanner();
        }
			
        @Override
        public void onAdLoaded(Ad ad) {
            // Ad was loaded
            // Add code to show the ad's view
        }

        @Override
        public void onAdClicked(Ad ad) {
            // Use this function to detect when an ad was clicked.
        }

    });
	 adView.loadAd();


}

	// Quit Unity
	@Override protected void onDestroy ()
	{
		mUnityPlayer.quit();
		if(adView!= null)
			adView.destroy();
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
