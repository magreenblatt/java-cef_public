// Copyright (c) 2026 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef JCEF_NATIVE_CEF_MAIN_THREAD_UTIL_N_H_
#define JCEF_NATIVE_CEF_MAIN_THREAD_UTIL_N_H_

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     org_cef_misc_CefMainThreadUtil
 * Method:    N_RunOnMainThread
 * Signature: (Ljava/lang/Runnable;)V
 */
JNIEXPORT void JNICALL
Java_org_cef_misc_CefMainThreadUtil_N_1RunOnMainThread(JNIEnv*, jclass, jobject);

#ifdef __cplusplus
}
#endif

#endif  // JCEF_NATIVE_CEF_MAIN_THREAD_UTIL_N_H_
