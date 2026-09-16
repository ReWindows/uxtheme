#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 17 member(s).
class CImageFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildRgnData@CImageFile@@QEAAJPEAKHHPEBUDIBINFO@@PEBVCRenderObj@@HPEAPEAU_RGNDATA@@PEAH@Z
    long BuildRgnData(unsigned long *, int, int, DIBINFO const *, CRenderObj const *, int, _RGNDATA * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaledBackgroundImage@CImageFile@@QEAAJPEBVCRenderObj@@HHPEAPEAUDIBINFO@@@Z
    long CreateScaledBackgroundImage(CRenderObj const *, int, int, DIBINFO * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundContentRect@CImageFile@@QEAAJPEBVCRenderObj@@PEAUHDC__@@PEBUtagRECT@@PEAU4@@Z
    long GetBackgroundContentRect(CRenderObj const *, HDC__*, tagRECT const *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackgroundRegion@CImageFile@@QEAAJPEBVCRenderObj@@PEAUHDC__@@HPEBUtagRECT@@PEAPEAUHRGN__@@@Z
    long GetBackgroundRegion(CRenderObj const *, HDC__*, int, tagRECT const *, HRGN__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmap@CImageFile@@QEAAJPEBVCRenderObj@@HKPEAPEAUHBITMAP__@@@Z
    long GetBitmap(CRenderObj const *, int, unsigned long, HBITMAP__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestBackground@CImageFile@@QEAAJPEBVCRenderObj@@PEAUHDC__@@HKPEBUtagRECT@@PEAUHRGN__@@UtagPOINT@@PEAG@Z
    long HitTestBackground(CRenderObj const *, HDC__*, int, unsigned long, tagRECT const *, HRGN__*, tagPOINT, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyProperty@CImageFile@@SAHH@Z
    static int KeyProperty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleMargins@CImageFile@@QEAAJPEAU_MARGINS@@PEAUHDC__@@PEBVCRenderObj@@PEBUDIBINFO@@PEBUtagSIZE@@PEAM5@Z
    long ScaleMargins(_MARGINS *, HDC__*, CRenderObj const *, DIBINFO const *, tagSIZE const *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectCorrectImageFile@CImageFile@@QEAAPEAUDIBINFO@@PEBVCRenderObj@@PEAUHDC__@@PEBUtagRECT@@HPEAUTRUESTRETCHINFO@@@Z
    DIBINFO * SelectCorrectImageFile(CRenderObj const *, HDC__*, tagRECT const *, int, TRUESTRETCHINFO *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawBackgroundDS@CImageFile@@IEAAJPEBUDIBINFO@@PEBUTMBITMAPHEADER@@HPEBVCRenderObj@@PEAUHDC__@@HPEBUtagRECT@@HPEBU_MARGINS@@MMPEBU_DTBGOPTS@@@Z
    long DrawBackgroundDS(DIBINFO const *, TMBITMAPHEADER const *, int, CRenderObj const *, HDC__*, int, tagRECT const *, int, _MARGINS const *, float, float, _DTBGOPTS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawFontGlyph@CImageFile@@IEAAJPEAVCRenderObj@@PEAUHDC__@@PEAUtagRECT@@PEBU_DTBGOPTS@@@Z
    long DrawFontGlyph(CRenderObj *, HDC__*, tagRECT *, _DTBGOPTS const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawImageInfo@CImageFile@@IEAAJPEBUDIBINFO@@PEBVCRenderObj@@PEAUHDC__@@HPEBUtagRECT@@PEBU_DTBGOPTS@@PEBUTRUESTRETCHINFO@@@Z
    long DrawImageInfo(DIBINFO const *, CRenderObj const *, HDC__*, int, tagRECT const *, _DTBGOPTS const *, TRUESTRETCHINFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindBackgroundImageToScale@CImageFile@@IEBAPEBUDIBINFO@@XZ
    DIBINFO const * FindBackgroundImageToScale() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledContentMargins@CImageFile@@IEAAJPEBVCRenderObj@@PEAUHDC__@@PEBUtagRECT@@PEAU_MARGINS@@@Z
    long GetScaledContentMargins(CRenderObj const *, HDC__*, tagRECT const *, _MARGINS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSizingMargin@CImageFile@@IEBAHXZ
    int HasSizingMargin() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackProperties@CImageFile@@IEAAJPEBVCRenderObj@@HH@Z
    long PackProperties(CRenderObj const *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageInfo@CImageFile@@IEAAJPEAUDIBINFO@@PEBVCRenderObj@@HH@Z
    long SetImageInfo(DIBINFO *, CRenderObj const *, int, int);
};
