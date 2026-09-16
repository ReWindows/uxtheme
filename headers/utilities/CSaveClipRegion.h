#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 3 member(s).
class CSaveClipRegion {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restore@CSaveClipRegion@@QEAAJPEAUHDC__@@@Z
    long Restore(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CSaveClipRegion@@QEAAJPEAUHDC__@@@Z
    long Save(HDC__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSaveClipRegion@@QEAA@XZ
    ~CSaveClipRegion();
};
