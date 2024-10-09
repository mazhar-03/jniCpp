#include "Main.h"

JNIEXPORT jint JNICALL Java_Main_processInt
        (JNIEnv *env, jobject obj, jint iVal){
    return iVal * 6;
}

JNIEXPORT jstring JNICALL Java_Main_processString
        (JNIEnv *env, jobject obj, jstring jStr){
    const char *inputStr = env->GetStringUTFChars(jStr, 0);

    char res[265]= "";

    const char* tmp = inputStr;
    while(*tmp != '\0'){
        tmp++;
    }
    int len = tmp - inputStr;

    int count = 0;
    while(count < len){
        tmp--;
        res[count++] = *tmp;
    }

    env->ReleaseStringUTFChars(jStr, inputStr);

    return env->NewStringUTF(res);
}