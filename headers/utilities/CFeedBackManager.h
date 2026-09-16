#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 7 member(s).
class CFeedBackManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginPanningFeedback@CFeedBackManager@@QEAAHPEAUHWND__@@@Z
    int BeginPanningFeedback(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndPanningFeedback@CFeedBackManager@@QEAAHPEAUHWND__@@H@Z
    int EndPanningFeedback(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePanningFeedback@CFeedBackManager@@QEAAHPEAUHWND__@@JJH@Z
    int UpdatePanningFeedback(HWND__*, long, long, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteFinalizedAnimators@CFeedBackManager@@AEAAXXZ
    void DeleteFinalizedAnimators();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceEnd@CFeedBackManager@@AEAAXPEAPEAVCWindowFeedBackAnimation@@_N@Z
    void ForceEnd(CWindowFeedBackAnimation * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupFeedbackEnabled@CFeedBackManager@@AEAA_NXZ
    bool LookupFeedbackEnabled();
};
