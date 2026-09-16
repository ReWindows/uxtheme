#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 7 member(s).
class CBorderFill {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBackground@CBorderFill@@QEAAJPEAVCRenderObj@@PEAUHDC__@@PEBUtagRECT@@PEBU_DTBGOPTS@@@Z
    long DrawBackground(CRenderObj *, HDC__*, tagRECT const *, _DTBGOPTS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawComplexBackground@CBorderFill@@QEAAJPEAVCRenderObj@@PEAUHDC__@@PEBUtagRECT@@HHH2@Z
    long DrawComplexBackground(CRenderObj *, HDC__*, tagRECT const *, int, int, int, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundRegion@CBorderFill@@QEAAJPEAVCRenderObj@@PEAUHDC__@@PEBUtagRECT@@PEAPEAUHRGN__@@@Z
    long GetBackgroundRegion(CRenderObj *, HDC__*, tagRECT const *, HRGN__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPartSize@CBorderFill@@QEAAJPEAUHDC__@@W4THEMESIZE@@PEAUtagSIZE@@@Z
    long GetPartSize(HDC__*, int, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackgroundPartiallyTransparent@CBorderFill@@QEAAHXZ
    int IsBackgroundPartiallyTransparent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyProperty@CBorderFill@@SAHH@Z
    static int KeyProperty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackProperties@CBorderFill@@QEAAJPEAVCRenderObj@@HHH@Z
    long PackProperties(CRenderObj *, int, int, int);
};
