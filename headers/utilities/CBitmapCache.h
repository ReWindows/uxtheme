#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 5 member(s).
class CBitmapCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireBitmap@CBitmapCache@@QEAAPEAUHBITMAP__@@PEAUHDC__@@HH@Z
    HBITMAP__* AcquireBitmap(HDC__*, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapCache@@QEAA@XZ
    CBitmapCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnBitmap@CBitmapCache@@QEAAXXZ
    void ReturnBitmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapCache@@QEAA@XZ
    ~CBitmapCache();
};
