#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 28 member(s).
class WinRTScaleAnimation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WinRTScaleAnimation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WinRTScaleAnimation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WinRTScaleAnimation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WinRTScaleAnimation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WinRTScaleAnimation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WinRTScaleAnimation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WinRTScaleAnimation@@QEAAJPEBUTA_TRANSFORM_2D@@PEBUTA_CUBIC_BEZIER@@@Z
    long RuntimeClassInitialize(TA_TRANSFORM_2D const *, TA_CUBIC_BEZIER const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTScaleAnimation@@QEAA@XZ
    WinRTScaleAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalScaleX@WinRTScaleAnimation@@UEAAJPEAM@Z
    virtual long get_FinalScaleX(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalScaleY@WinRTScaleAnimation@@UEAAJPEAM@Z
    virtual long get_FinalScaleY(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialScaleX@WinRTScaleAnimation@@UEAAJPEAPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long get_InitialScaleX(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialScaleY@WinRTScaleAnimation@@UEAAJPEAPEAU?$IReference@M@Foundation@Windows@@@Z
    virtual long get_InitialScaleY(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NormalizedOrigin@WinRTScaleAnimation@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_NormalizedOrigin(::Windows::Foundation::Point *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTScaleAnimation@@UEAA@XZ
    virtual ~WinRTScaleAnimation();
};
