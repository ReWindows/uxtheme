#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 10 member(s).
class CWindowFeedBackAnimation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowFeedBackAnimation@@QEAA@PEAUHWND__@@0AEBUtagRECT@@PEAVCFeedBackManager@@@Z
    CWindowFeedBackAnimation(HWND__*, HWND__*, tagRECT const &, CFeedBackManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@CWindowFeedBackAnimation@@QEAAHH@Z
    int Finalize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreDisplacedWindow@CWindowFeedBackAnimation@@QEAAHXZ
    int RestoreDisplacedWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SlideWindow@CWindowFeedBackAnimation@@QEAAJJJ@Z
    long SlideWindow(long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSnapBackStart@CWindowFeedBackAnimation@@QEAAHXZ
    int WindowSnapBackStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSnapBackStop@CWindowFeedBackAnimation@@QEAAXXZ
    void WindowSnapBackStop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSnapBackTimerProc@CWindowFeedBackAnimation@@QEAAXPEAUHWND__@@IIK@Z
    void WindowSnapBackTimerProc(HWND__*, unsigned int, unsigned int, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowFeedBackAnimation@@QEAA@XZ
    ~CWindowFeedBackAnimation();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurTime@CWindowFeedBackAnimation@@CANXZ
    static double GetCurTime();
};
