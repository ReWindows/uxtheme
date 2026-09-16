#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 12 member(s).
class CThemeMenuPopup {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawClientArea@CThemeMenuPopup@@UEAAXPEAUHWND__@@PEAUHMENU__@@PEAUHDC__@@PEBUtagRECT@@@Z
    virtual void DrawClientArea(HWND__*, HMENU__*, HDC__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawItem@CThemeMenuPopup@@UEAAXPEAUHWND__@@PEBUtagUAHDRAWMENUITEM@@@Z
    virtual void DrawItem(HWND__*, tagUAHDRAWMENUITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawNonClientArea@CThemeMenuPopup@@QEAAXPEAUHWND__@@PEAUHDC__@@@Z
    void DrawNonClientArea(HWND__*, HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureItem@CThemeMenuPopup@@UEAAXPEAUtagUAHMEASUREMENUITEM@@PEAUtagSIZE@@@Z
    virtual void MeasureItem(tagUAHMEASUREMENUITEM *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CThemeMenuPopup@@SAHPEAUHWND__@@@Z
    static int OnDestroy(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEraseBkgnd@CThemeMenuPopup@@SAHPEAUHWND__@@_K_JPEA_J@Z
    static int OnEraseBkgnd(HWND__*, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNonClientCalcSize@CThemeMenuPopup@@SAHPEAUHWND__@@@Z
    static int OnNonClientCalcSize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNonClientPaint@CThemeMenuPopup@@SAHPEAUHWND__@@_K_JPEA_J@Z
    static int OnNonClientPaint(HWND__*, uint64_t, int64_t, int64_t *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawItemCheck@CThemeMenuPopup@@AEAAXPEAUHWND__@@PEBUtagUAHDRAWMENUITEM@@QEBUtagMENUITEMINFOW@@HPEBUDRAWITEMMETRICS@1@@Z
    void DrawItemCheck(HWND__*, tagUAHDRAWMENUITEM const *, tagMENUITEMINFOW const * const, int, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableRoundedCorners@CThemeMenuPopup@@AEAAXPEAUHWND__@@@Z
    void EnableRoundedCorners(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutItem@CThemeMenuPopup@@AEAAXPEBUtagMENUITEMINFOW@@PEBUtagRECT@@PEBUtagUAHMENUITEM@@PEAUDRAWITEMMETRICS@1@@Z
    void LayoutItem(tagMENUITEMINFOW const *, tagRECT const *, tagUAHMENUITEM const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeWindowRects@CThemeMenuPopup@@CAXPEAUHWND__@@PEAUHDC__@@PEAUtagRECT@@2@Z
    static void NormalizeWindowRects(HWND__*, HDC__*, tagRECT *, tagRECT *);
};
