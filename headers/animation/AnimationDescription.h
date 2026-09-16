#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 24 member(s).
class AnimationDescription {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnimationDescription@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimationDescription@@QEAA@XZ
    AnimationDescription();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AnimationDescription@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AnimationDescription@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AnimationDescription@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@AnimationDescription@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@AnimationDescription@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnimationDescription@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnimationDescription@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AnimationDescription@@QEAAJW4AnimationEffect@AnimationMetrics@Core@UI@Windows@@W4AnimationEffectTarget@3456@@Z
    long RuntimeClassInitialize(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Animations@AnimationDescription@@UEAAJPEAPEAU?$IVectorView@PEAUIPropertyAnimation@AnimationMetrics@Core@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Animations(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DelayLimit@AnimationDescription@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_DelayLimit(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StaggerDelay@AnimationDescription@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_StaggerDelay(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StaggerDelayFactor@AnimationDescription@@UEAAJPEAM@Z
    virtual long get_StaggerDelayFactor(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ZOrder@AnimationDescription@@UEAAJPEAH@Z
    virtual long get_ZOrder(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationDescription@@UEAA@XZ
    virtual ~AnimationDescription();
};
