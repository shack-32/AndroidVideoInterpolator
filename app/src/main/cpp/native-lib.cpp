#include <jni.h>
#include <string>

extern "C"
jstring
Java_chanderpaul_shaneel_avi2_MainMenuActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
