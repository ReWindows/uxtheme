#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 20 member(s).
class WinRTAnimationVectorIterator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@WinRTAnimationVectorIterator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@WinRTAnimationVectorIterator@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@WinRTAnimationVectorIterator@@UEAAJIPEAPEAUIPropertyAnimation@AnimationMetrics@Core@UI@Windows@@PEAI@Z
    virtual long GetMany(unsigned int, ::Windows::UI::Core::AnimationMetrics::IPropertyAnimation * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@WinRTAnimationVectorIterator@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@WinRTAnimationVectorIterator@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@WinRTAnimationVectorIterator@@UEAAJPEAE@Z
    virtual long MoveNext(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@WinRTAnimationVectorIterator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WinRTAnimationVectorIterator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTAnimationVectorIterator@@QEAA@PEAVWinRTAnimationVector@@@Z
    WinRTAnimationVectorIterator(WinRTAnimationVector *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Current@WinRTAnimationVectorIterator@@UEAAJPEAPEAUIPropertyAnimation@AnimationMetrics@Core@UI@Windows@@@Z
    virtual long get_Current(::Windows::UI::Core::AnimationMetrics::IPropertyAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HasCurrent@WinRTAnimationVectorIterator@@UEAAJPEAE@Z
    virtual long get_HasCurrent(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTAnimationVectorIterator@@UEAA@XZ
    virtual ~WinRTAnimationVectorIterator();
};
