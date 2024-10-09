#include "Main.h"

JNIEXPORT jint JNICALL Java_Main_processInt
        (JNIEnv *env, jobject obj, jint iVal){
    return iVal * 6;
}