// Copyright (c) 2026 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

package org.cef.misc;

import org.cef.OS;

/**
 * Utility class for running code on the macOS main thread.
 * On macOS, certain native operations (like NSWindow creation/destruction)
 * must happen on the main thread. When CEF is running, it owns the main
 * thread, so this utility dispatches work through CEF's message loop.
 */
public class CefMainThreadUtil {
    /**
     * Runs the given Runnable on the macOS main thread, blocking until complete.
     * On non-macOS platforms, the runnable is executed directly on the current thread.
     *
     * @param runnable The code to execute on the main thread
     */
    public static void runOnMainThread(Runnable runnable) {
        if (OS.isMacintosh()) {
            N_RunOnMainThread(runnable);
        } else {
            runnable.run();
        }
    }

    private static native void N_RunOnMainThread(Runnable runnable);
}
