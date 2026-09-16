#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 6 member(s).
class WinRTAnimationBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Control1@WinRTAnimationBase@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Control1(::Windows::Foundation::Point *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Control2@WinRTAnimationBase@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Control2(::Windows::Foundation::Point *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Delay@WinRTAnimationBase@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Delay(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Duration@WinRTAnimationBase@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Duration(::Windows::Foundation::TimeSpan *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@WinRTAnimationBase@@UEAAJPEAW4PropertyAnimationType@AnimationMetrics@Core@UI@Windows@@@Z
    virtual long get_Type(int *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WinRTAnimationBase@@IEAA@XZ
    WinRTAnimationBase();
};
