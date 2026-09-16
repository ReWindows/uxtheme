#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 3 member(s).
class CImmersiveColor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastColorChangeMessage@CImmersiveColor@@SAXW4IMMERSIVE_COLOR_BROADCAST_SCENARIO@@@Z
    static void BroadcastColorChangeMessage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z
    static unsigned long GetColor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsColorSchemeChangeMessage@CImmersiveColor@@SA_NI_J@Z
    static bool IsColorSchemeChangeMessage(unsigned int, int64_t);
};
