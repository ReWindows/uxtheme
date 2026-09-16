#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 5 member(s).
class CPaintBufferAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPaintBufferAnimation@@SAPEAV1@PEAUHWND__@@AEBU_BP_ANIMATIONPARAMS@@@Z
    static CPaintBufferAnimation * Create(HWND__*, _BP_ANIMATIONPARAMS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CPaintBufferAnimation@@QEAAXXZ
    void Destroy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPaintBufferAnimation@@MEAAJPEAUHWND__@@AEBU_BP_ANIMATIONPARAMS@@@Z
    virtual long Initialize(HWND__*, _BP_ANIMATIONPARAMS const &);
};
