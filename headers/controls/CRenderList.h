#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 8 member(s).
class CRenderList {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderList@@QEAA@XZ
    CRenderList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRenderObject@CRenderList@@QEAAJPEAX@Z
    long CloseRenderObject(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseThemeHandle@CRenderList@@QEAAXH@Z
    void CloseThemeHandle(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeRenderObjects@CRenderList@@QEAAXH@Z
    void FreeRenderObjects(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenRenderObject@CRenderList@@QEAAJPEAVCUxThemeFile@@HHHPEAVCDrawBase@@PEAVCTextDraw@@PEAUHWND__@@HHK_NPEAPEAX@Z
    long OpenRenderObject(CUxThemeFile *, int, int, int, CDrawBase *, CTextDraw *, HWND__*, int, int, unsigned long, bool, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderList@@QEAA@XZ
    ~CRenderList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEffectiveDpi@CRenderList@@CAHPEAUHWND__@@H_NPEA_N@Z
    static int ComputeEffectiveDpi(HWND__*, int, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteCheck@CRenderList@@AEAAHPEAURENDER_OBJ_ENTRY@@@Z
    int DeleteCheck(RENDER_OBJ_ENTRY *);
};
