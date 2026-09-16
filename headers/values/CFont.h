#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 4 member(s).
class CFont {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFont@@SAJPEBUtagLOGFONTW@@PEAPEAV1@@Z
    static long Create(tagLOGFONTW const *, CFont * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFont@@QEAAXXZ
    void Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFont@@AEAA@XZ
    ~CFont();
};
