#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 28 member(s).
class WinRTAnimationVector {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WinRTAnimationVector@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@WinRTAnimationVector@@UEAAJPEAPEAU?$IIterator@PEAUIPropertyAnimation@AnimationMetrics@Core@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@WinRTAnimationVector@@UEAAJIPEAPEAUIPropertyAnimation@AnimationMetrics@Core@UI@Windows@@@Z
    virtual long GetAt(unsigned int, ::Windows::UI::Core::AnimationMetrics::IPropertyAnimation * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WinRTAnimationVector@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@WinRTAnimationVector@@UEAAJIIPEAPEAUIPropertyAnimation@AnimationMetrics@Core@UI@Windows@@PEAI@Z
    virtual long GetMany(unsigned int, unsigned int, ::Windows::UI::Core::AnimationMetrics::IPropertyAnimation * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WinRTAnimationVector@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WinRTAnimationVector@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@WinRTAnimationVector@@UEAAJPEAUIPropertyAnimation@AnimationMetrics@Core@UI@Windows@@PEAIPEAE@Z
    virtual long IndexOf(::Windows::UI::Core::AnimationMetrics::IPropertyAnimation *, unsigned int *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WinRTAnimationVector@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WinRTAnimationVector@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WinRTAnimationVector@@QEAAJI@Z
    long RuntimeClassInitialize(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTAnimationVector@@QEAA@XZ
    WinRTAnimationVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@WinRTAnimationVector@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTAnimationVector@@UEAA@XZ
    virtual ~WinRTAnimationVector();
};
