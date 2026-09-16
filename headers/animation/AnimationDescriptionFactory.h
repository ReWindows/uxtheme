#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 18 member(s).
class AnimationDescriptionFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnimationDescriptionFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AnimationDescriptionFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AnimationDescriptionFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AnimationDescriptionFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnimationDescriptionFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnimationDescriptionFactory@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@AnimationDescriptionFactory@@EEAAJW4AnimationEffect@AnimationMetrics@Core@UI@Windows@@W4AnimationEffectTarget@3456@PEAPEAUIAnimationDescription@3456@@Z
    virtual long CreateInstance(int, int, ::Windows::UI::Core::AnimationMetrics::IAnimationDescription * *);
};
