#include <jni.h>
#include <string>
// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("camerax");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("camerax")
//      }
//    }
extern "C"
JNIEXPORT jstring JNICALL
Java_com_sample_camerax_MainActivity_getAPIKeyFromNdk(JNIEnv *env, jobject thiz) {
    std::string apiKey="djkfejDFDFDFkjfdjkjkdjkdfjk___dfjkdfkjSFSFSDFkjdsf";
    return env->NewStringUTF(apiKey.c_str());
}