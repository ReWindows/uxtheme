#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 4 member(s).
class CRenderCache {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderCache@@QEAA@PEBVCRenderObj@@@Z
    CRenderCache(CRenderObj const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExactFont@CRenderCache@@QEAAJAEBUtagLOGFONTW@@PEAPEAVCFont@@@Z
    long GetExactFont(tagLOGFONTW const &, CFont * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledFont@CRenderCache@@QEAAJPEAUHDC__@@PEBUtagLOGFONTW@@PEAPEAVCFont@@@Z
    long GetScaledFont(HDC__*, tagLOGFONTW const *, CFont * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderCache@@QEAA@XZ
    ~CRenderCache();
};
