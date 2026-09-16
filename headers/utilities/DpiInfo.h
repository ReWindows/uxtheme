#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 5 member(s).
class DpiInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@DpiInfo@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Ensure@DpiInfo@@QEAAJXZ
    long Ensure();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConnectedDpi@DpiInfo@@QEAAJI@Z
    long RegisterConnectedDpi(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscoverCurrentlyPresentPlateaus@DpiInfo@@AEAAJXZ
    long DiscoverCurrentlyPresentPlateaus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterActiveProcessesDpis@DpiInfo@@AEAAXXZ
    void RegisterActiveProcessesDpis();
};
