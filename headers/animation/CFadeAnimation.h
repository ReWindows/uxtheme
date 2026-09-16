#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 3 member(s).
class CFadeAnimation {
public:
    // Category: Method | Source: PE Export
    // Symbol: ?BufferChanged@CFadeAnimation@@UEAAJXZ
    virtual long BufferChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@CFadeAnimation@@UEAAJPEAUHDC__@@0KAEBUtagRECT@@AEBU_BP_ANIMATIONPARAMS@@@Z
    virtual long Paint(HDC__*, HDC__*, unsigned long, tagRECT const &, _BP_ANIMATIONPARAMS const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFadeAnimation@@MEAAJPEAUHWND__@@AEBU_BP_ANIMATIONPARAMS@@@Z
    virtual long Initialize(HWND__*, _BP_ANIMATIONPARAMS const &);
};
