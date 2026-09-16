#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 4 member(s).
class CPaintBufferPool {
public:
    class Impl;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CPaintBufferPool@@QEAA_NXZ
    bool Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PaintBufferAnimationTimerProc@CPaintBufferPool@@SAXPEAUHWND__@@I_KK@Z
    static void PaintBufferAnimationTimerProc(HWND__*, unsigned int, uint64_t, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPaintBufferPool@@QEAA@XZ
    ~CPaintBufferPool();
};
