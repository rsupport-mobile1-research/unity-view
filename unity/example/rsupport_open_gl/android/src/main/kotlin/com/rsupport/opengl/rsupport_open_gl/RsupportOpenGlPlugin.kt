package com.rsupport.opengl.rsupport_open_gl

import android.annotation.SuppressLint
import android.content.Context
import android.graphics.*
import android.opengl.EGL14
import android.opengl.GLES11Ext.GL_TEXTURE_EXTERNAL_OES
import android.opengl.GLES30
import android.opengl.GLU
import android.opengl.GLUtils
import android.os.Build
import android.os.Build.VERSION.SDK_INT
import android.os.Handler
import android.os.HandlerThread
import android.os.Looper
import android.util.Log
import android.view.Surface
import androidx.annotation.NonNull
import androidx.annotation.RequiresApi
import io.flutter.embedding.engine.plugins.FlutterPlugin
import io.flutter.plugin.common.MethodCall
import io.flutter.plugin.common.MethodChannel
import io.flutter.plugin.common.MethodChannel.MethodCallHandler
import io.flutter.plugin.common.MethodChannel.Result
import java.util.function.Consumer

/** RsupportOpenGlPlugin */
class RsupportOpenGlPlugin : FlutterPlugin, MethodCallHandler {

    var mContext: Context? = null

    /// The MethodChannel that will the communication between Flutter and native Android
    ///
    /// This local reference serves to register the plugin with the Flutter Engine and unregister it
    /// when the Flutter Engine is detached from the Activity
    private lateinit var channel: MethodChannel

    override fun onAttachedToEngine(@NonNull flutterPluginBinding: FlutterPlugin.FlutterPluginBinding) {
        mContext = flutterPluginBinding.applicationContext

        channel = MethodChannel(flutterPluginBinding.binaryMessenger, "rsupport_open_gl")
        channel.setMethodCallHandler(this)
    }

    override fun onMethodCall(@NonNull call: MethodCall, @NonNull result: Result) {
        if (call.method == "testOpengl") {
            val arguments = call.arguments as HashMap<*, *>
//                drawDataOnTexture(arguments["textureId"] as String)
            result.success("")
        } else {
            result.notImplemented()
        }
    }


    @SuppressLint("Recycle")
    private fun drawDataOnTexture(unityTextureId: String) {
        if (SDK_INT < Build.VERSION_CODES.N) return
        Thread.getAllStackTraces().keys.forEach(Consumer { t: Thread ->
            if (!t.isDaemon) Log.e(
                "RsupportOpenGlPlugin",
                "Thread name: ${t.name}".trimIndent())
        })
        val handlerThread = HandlerThread("UnityMain")
        handlerThread.start()
        val backgroundHandler = Handler(handlerThread.looper)
        val uiHandler = Handler()
        uiHandler.post {
            // Code to execute on ui thread
            backgroundHandler.post {
                Log.e(
                    "RsupportOpenGlPlugin",
                    "current thread: ${Thread.currentThread().name}"
                )
                Log.e(
                    "RsupportOpenGlPlugin",
                    "current thread: ${Thread.currentThread().name.equals("UnityMain")}"
                )
                Log.e("RsupportOpenGlPlugin", "unityTextureId: $unityTextureId");

                val unityContext = EGL14.eglGetCurrentContext()
                val unityDisplay = EGL14.eglGetCurrentDisplay()
                val unityDrawSurface = EGL14.eglGetCurrentSurface(EGL14.EGL_DRAW)
                val unityReadSurface = EGL14.eglGetCurrentSurface(EGL14.EGL_READ)
                if (unityContext === EGL14.EGL_NO_CONTEXT) {
                    Log.e(
                        "RsupportOpenGlPlugin",
                        "UnityEGLContext is invalid -> Most probably wrong thread"
                    )
                }
                EGL14.eglMakeCurrent(unityDisplay, unityDrawSurface, unityReadSurface, unityContext)

                val textBitmap: Bitmap =
                    Bitmap.createBitmap(256, 256, Bitmap.Config.ARGB_8888)
                textBitmap.eraseColor(Color.argb(0, 255, 255, 255))
                val bitmapCanvas = Canvas(textBitmap)
                val textPaint = Paint()
                textPaint.textSize = 50F
                textPaint.isFakeBoldText = false
                textPaint.isAntiAlias = true
                textPaint.color = Color.RED
                textPaint.isSubpixelText = true
                textPaint.xfermode = PorterDuffXfermode(PorterDuff.Mode.SCREEN);
                bitmapCanvas.drawText("Test", 1F, 1.0f + 50F * 0.75f, textPaint)
                val flip = Matrix()
                flip.setScale(1.0f, -1.0f)
                val flipped =
                    Bitmap.createBitmap(
                        textBitmap,
                        0,
                        0,
                        textBitmap.width,
                        textBitmap.height,
                        flip,
                        false
                    );

                GLES30.glActiveTexture(GLES30.GL_TEXTURE0)
                GLES30.glBindTexture(GL_TEXTURE_EXTERNAL_OES, unityTextureId.toInt())
                GLUtils.texImage2D(GLES30.GL_TEXTURE_2D, 0, flipped, 0)
                textBitmap.recycle()

                val mSurfaceTexture = SurfaceTexture(unityTextureId.toInt())
                mSurfaceTexture.setDefaultBufferSize(256, 256)
                val mSurface = Surface(mSurfaceTexture)
                mSurfaceTexture.setOnFrameAvailableListener {
                    Log.e(
                        "RsupportOpenGlPlugin",
                        "setOnFrameAvailableListener"
                    )
                }


//                GLES30.glActiveTexture(GLES30.GL_TEXTURE0)
//                GLES30.glBindTexture(GLES30.GL_TEXTURE_2D, unityTextureId.toInt())
//                GLUtils.texImage2D(GLES30.GL_TEXTURE_2D, 0, flipped, 0)
            }
        }
    }

    private fun checkGlError(msg: String) {
        val errCodeEgl = EGL14.eglGetError()
        val errCodeGl = GLES30.glGetError()
        if (errCodeEgl != EGL14.EGL_SUCCESS || errCodeGl != GLES30.GL_NO_ERROR) {
            throw RuntimeException(
                "$msg - $errCodeEgl(${GLU.gluErrorString(errCodeEgl)}) : $errCodeGl(${
                    GLU.gluErrorString(
                        errCodeGl
                    )
                })"
            )
        }
    }

    override fun onDetachedFromEngine(@NonNull binding: FlutterPlugin.FlutterPluginBinding) {
        channel.setMethodCallHandler(null)
    }
}