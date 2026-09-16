#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 4 member(s).
class CThemeMenuBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawClientArea@CThemeMenuBar@@UEAAXPEAUHWND__@@PEAUHMENU__@@PEAUHDC__@@PEBUtagRECT@@@Z
    virtual void DrawClientArea(HWND__*, HMENU__*, HDC__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawItem@CThemeMenuBar@@UEAAXPEAUHWND__@@PEBUtagUAHDRAWMENUITEM@@@Z
    virtual void DrawItem(HWND__*, tagUAHDRAWMENUITEM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureItem@CThemeMenuBar@@UEAAXPEAUtagUAHMEASUREMENUITEM@@PEAUtagSIZE@@@Z
    virtual void MeasureItem(tagUAHMEASUREMENUITEM *, tagSIZE *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutItem@CThemeMenuBar@@AEAAXPEBUtagRECT@@PEBUtagSIZE@@PEAUDRAWITEMMETRICS@1@@Z
    void LayoutItem(tagRECT const *, tagSIZE const *, WindissectOpaque *);
};
