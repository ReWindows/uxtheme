#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 24 member(s).
class WinRTOpacityAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WinRTOpacityAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WinRTOpacityAnimation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WinRTOpacityAnimation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WinRTOpacityAnimation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WinRTOpacityAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WinRTOpacityAnimation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTOpacityAnimation@@QEAA@XZ
    WinRTOpacityAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalOpacity@WinRTOpacityAnimation@@UEAAJPEAM@Z
    virtual long get_FinalOpacity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialOpacity@WinRTOpacityAnimation@@UEAAJPEAPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long get_InitialOpacity(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTOpacityAnimation@@UEAA@XZ
    virtual ~WinRTOpacityAnimation();
};
