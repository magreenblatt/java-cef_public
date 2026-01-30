// Copyright (c) 2026 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#include "CefMainThreadUtil_N.h"

#if defined(OS_MAC)
#include "util_mac.h"
#endif

JNIEXPORT void JNICALL
Java_org_cef_misc_CefMainThreadUtil_N_1RunOnMainThread(JNIEnv* env,
                                                        jclass cls,
                                                        jobject runnable) {
#if defined(OS_MAC)
  util_mac::RunOnMainThread(env, runnable);
#else
  // On non-Mac platforms, just run directly
  jclass runnableClass = env->GetObjectClass(runnable);
  jmethodID runMethod = env->GetMethodID(runnableClass, "run", "()V");
  if (runMethod) {
    env->CallVoidMethod(runnable, runMethod);
  }
#endif
}
