package com.rsupport.opengl.rsupport_open_gl;

import android.app.Activity;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Rect;
import android.graphics.SurfaceTexture;
import android.opengl.EGL14;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import android.opengl.GLES11Ext;
import android.opengl.GLES20;
import android.opengl.GLES30;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.Surface;

import java.util.Random;

public class TextureRendererPlugIn implements SurfaceTexture.OnFrameAvailableListener {
    private static TextureRendererPlugIn _instance;
    private Activity mUnityActivity;
    private int mTextureWidth;
    private int mTextureHeight;
    private static String TAG = "TextureRendererPlugIn";

    private static EGLContext unityContext = EGL14.EGL_NO_CONTEXT;
    private static EGLDisplay unityDisplay = EGL14.EGL_NO_DISPLAY;
    private static EGLSurface unityDrawSurface = EGL14.EGL_NO_SURFACE;
    private static EGLSurface unityReadSurface = EGL14.EGL_NO_SURFACE;

    private Surface mSurface;
    private SurfaceTexture mSurfaceTexture;
    private int unityTextureID;

    private boolean mNewFrameAvailable;
    private Rect rec;
    private Paint p;
    private Random rnd;
    Handler hnd;

    private TextureRendererPlugIn(Activity unityActivity, int width, int height, int textureID) {
        Log.e(TAG, "Init TextureRendererPlugIn");

        mTextureWidth = width;
        mTextureHeight = height;
        unityTextureID = textureID;
        mNewFrameAvailable = false;

        initSurface();

        rec = new Rect(0, 0, width, height);
        p = new Paint();
        rnd = new Random();
        hnd = new Handler(Looper.getMainLooper());

        drawRandomCirclesInSurface();
    }

    private void drawRandomCirclesInSurface() {
        Canvas c = mSurface.lockCanvas(rec);
        p.setColor(Color.argb(255, rnd.nextInt(255), rnd.nextInt(255), rnd.nextInt(255)));
        int radius = rnd.nextInt(100);
        c.drawCircle(rnd.nextInt(mTextureWidth), rnd.nextInt(mTextureHeight), radius, p);
        mSurface.unlockCanvasAndPost(c);

        hnd.postDelayed(() -> {drawRandomCirclesInSurface();}, 1000);
    }

    private void initSurface() {
        Log.e(TAG, "unityTextureID " + unityTextureID);

//        unityContext = EGL14.eglGetCurrentContext();
//        unityDisplay = EGL14.eglGetCurrentDisplay();
//        unityDrawSurface = EGL14.eglGetCurrentSurface(EGL14.EGL_DRAW);
//        unityReadSurface = EGL14.eglGetCurrentSurface(EGL14.EGL_READ);
//
//        if (unityContext == EGL14.EGL_NO_CONTEXT) {
//            Log.e(TAG, "UnityEGLContext is invalid -> Most probably wrong thread");
//        }
//
//        EGL14.eglMakeCurrent(unityDisplay, unityDrawSurface, unityReadSurface, unityContext);
//
//        GLES30.glActiveTexture(GLES30.GL_TEXTURE0);
//        GLES30.glBindTexture(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, unityTextureID);
//        GLES30.glTexParameterf(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES30.GL_TEXTURE_MIN_FILTER, GLES30.GL_LINEAR);
//        GLES30.glTexParameterf(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES30.GL_TEXTURE_MAG_FILTER, GLES30.GL_LINEAR);
//        GLES30.glTexParameterf(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES30.GL_TEXTURE_WRAP_S, GLES30.GL_CLAMP_TO_EDGE);
//        GLES30.glTexParameterf(GLES11Ext.GL_TEXTURE_EXTERNAL_OES, GLES30.GL_TEXTURE_WRAP_T, GLES30.GL_CLAMP_TO_EDGE);
        mSurfaceTexture = new SurfaceTexture(unityTextureID);
        mSurfaceTexture.setDefaultBufferSize(mTextureWidth, mTextureHeight);
        mSurface = new Surface(mSurfaceTexture);
        mSurfaceTexture.setOnFrameAvailableListener(this);
    }

    public static TextureRendererPlugIn Instance(Activity context, int viewPortWidth,
                                                 int viewPortHeight, int textureID) {
        if (_instance == null) {
            _instance = new TextureRendererPlugIn(context, viewPortWidth, viewPortHeight, textureID);
        }

        return _instance;
    }

    public void updateSurfaceTexture() {
        if (mNewFrameAvailable) {
            if (!Thread.currentThread().getName().equals("UnityMain"))
                Log.e(TAG, "Not called from render thread and hence update texture will fail");
            mSurfaceTexture.updateTexImage();
            mNewFrameAvailable = false;
        }
    }

    @Override
    public void onFrameAvailable(SurfaceTexture surfaceTexture) {
        mNewFrameAvailable = true;
    }
}
