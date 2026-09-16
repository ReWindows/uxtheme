#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 7 member(s).
class AnimationLoader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimationLoader@@QEAA@HH@Z
    AnimationLoader(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDword@AnimationLoader@@QEAAJW4TA_PROPERTY@@PEAK@Z
    long GetDword(int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeSpan@AnimationLoader@@QEAAJW4TA_PROPERTY@@PEAUTimeSpan@Foundation@Windows@@@Z
    long GetTimeSpan(int, ::Windows::Foundation::TimeSpan *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@AnimationLoader@@QEAAJIPEAPEAUIPropertyAnimation@AnimationMetrics@Core@UI@Windows@@@Z
    long GetTransform(unsigned int, ::Windows::UI::Core::AnimationMetrics::IPropertyAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AnimationLoader@@QEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationLoader@@QEAA@XZ
    ~AnimationLoader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OpenThemeData@AnimationLoader@@CAJPEBGPEAPEAX@Z
    static long _OpenThemeData(unsigned short const *, void * *);
};
