#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 3 member(s).
class CBitmapPixels {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseBitmap@CBitmapPixels@@QEAAXPEAUHDC__@@PEAUHBITMAP__@@@Z
    void CloseBitmap(HDC__*, HBITMAP__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenBitmap@CBitmapPixels@@QEAAJPEAUHDC__@@PEAUHBITMAP__@@HPEAPEAKPEAH3333I@Z
    long OpenBitmap(HDC__*, HBITMAP__*, int, unsigned long * *, int *, int *, int *, int *, int *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapPixels@@QEAA@XZ
    ~CBitmapPixels();
};
