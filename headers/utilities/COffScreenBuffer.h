#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 7 member(s).
class COffScreenBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@COffScreenBuffer@@QEAAJPEBUtagRECT@@@Z
    long Clear(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBuffer@COffScreenBuffer@@QEAAJPEAUHDC__@@PEAUHWND__@@AEBUtagRECT@@W4_BP_BUFFERFORMAT@@K@Z
    long CreateBuffer(HDC__*, HWND__*, tagRECT const &, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyBuffer@COffScreenBuffer@@QEAAXXZ
    void DestroyBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBits@COffScreenBuffer@@QEBAPEAUtagRGBQUAD@@XZ
    tagRGBQUAD * GetBits() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlpha@COffScreenBuffer@@QEAAJPEBUtagRECT@@E@Z
    long SetAlpha(tagRECT const *, unsigned char);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateNewBuffer@COffScreenBuffer@@AEAAJPEAUHDC__@@HHW4_BP_BUFFERFORMAT@@H@Z
    long _CreateNewBuffer(HDC__*, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionRect@COffScreenBuffer@@AEAAXPEAUtagRECT@@@Z
    void _PositionRect(tagRECT *);
};
