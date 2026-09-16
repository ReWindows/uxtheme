#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 16 member(s).
class WinRTReferenceFloat {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WinRTReferenceFloat@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WinRTReferenceFloat@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WinRTReferenceFloat@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WinRTReferenceFloat@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WinRTReferenceFloat@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WinRTReferenceFloat@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTReferenceFloat@@QEAA@XZ
    WinRTReferenceFloat();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@WinRTReferenceFloat@@UEAAJPEAM@Z
    virtual long get_Value(float *);
};
