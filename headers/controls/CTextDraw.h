#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 4 member(s).
class CTextDraw {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextW@CTextDraw@@QEAAJPEAVCRenderObj@@PEAUHDC__@@HHPEBGKKPEAUtagRECT@@PEBU_DTTOPTS@@@Z
    long DrawTextW(CRenderObj *, HDC__*, int, int, unsigned short const *, unsigned long, unsigned long, tagRECT *, _DTTOPTS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextMetricsW@CTextDraw@@QEAAJPEAVCRenderObj@@PEAUHDC__@@HHPEAUtagTEXTMETRICW@@@Z
    long GetTextMetricsW(CRenderObj *, HDC__*, int, int, tagTEXTMETRICW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyProperty@CTextDraw@@SAHH@Z
    static int KeyProperty(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackProperties@CTextDraw@@QEAAJPEAVCRenderObj@@HH@Z
    long PackProperties(CRenderObj *, int, int);
};
