#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 5 member(s).
class CMdiBtns {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Draw@CMdiBtns@@QEAAHPEAXPEAUtagDRAWITEMSTRUCT@@@Z
    int Draw(void *, tagDRAWITEMSTRUCT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CMdiBtns@@QEAAHPEAXPEAUHDC__@@I@Z
    int Load(void *, HDC__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThemeItem@CMdiBtns@@QEAAHPEAUHMENU__@@HPEAUtagMENUITEMINFOW@@H@Z
    int ThemeItem(HMENU__*, int, tagMENUITEMINFOW *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unload@CMdiBtns@@QEAAXI@Z
    void Unload(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindBtn@CMdiBtns@@AEAAPEAUMDIBTN@1@I@Z
    WindissectOpaque * _FindBtn(unsigned int);
};
