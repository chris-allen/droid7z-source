/* Header for class com_droid7z_Droid7z */

#include <jni.h>


#ifndef _Included_com_droid7z_Droid7z
#define _Included_com_droid7z_Droid7z
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_droid7z_Droid7z
 * Method:    uncompress
 * Signature: (Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_com_droid7z_Droid7z_uncompress(JNIEnv *, jobject, 
    jstring dest, jstring archive, jobjectArray files);

#ifdef __cplusplus
}
#endif
#endif
