#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 2 member(s).
class CThemeApiHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseHandle@CThemeApiHelper@@QEAAXXZ
    void CloseHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenHandle@CThemeApiHelper@@QEAAJPEAXPEAPEAVCRenderObj@@@Z
    long OpenHandle(void *, CRenderObj * *);
};
