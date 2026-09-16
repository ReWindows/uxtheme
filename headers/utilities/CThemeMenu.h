#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 17 member(s).
class CThemeMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTheme@CThemeMenu@@QEAA_NPEAUHWND__@@H@Z
    bool EnsureTheme(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushTheme@CThemeMenu@@SAXPEAUHWND__@@@Z
    static void FlushTheme(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDraw@CThemeMenu@@SAHPEAUHWND__@@_K_JPEA_J@Z
    static int OnDraw(HWND__*, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDrawItem@CThemeMenu@@SAHPEAUHWND__@@_K_JPEA_J@Z
    static int OnDrawItem(HWND__*, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInit@CThemeMenu@@SAHPEAUHWND__@@_K_JPEA_J@Z
    static int OnInit(HWND__*, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMeasureItem@CThemeMenu@@SAHPEAUHWND__@@_K_JPEA_J@Z
    static int OnMeasureItem(HWND__*, uint64_t, int64_t, int64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticInitialize@CThemeMenu@@SA_NXZ
    static bool StaticInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticTerminate@CThemeMenu@@SAXXZ
    static void StaticTerminate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@CThemeMenu@@KAHPEAUHWND__@@PEAUHMENU__@@H_NPEAPEAV1@@Z
    static int Attach(HWND__*, HMENU__*, int, bool, CThemeMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawItemBitmap@CThemeMenu@@IEAAXPEAUHWND__@@PEAUHDC__@@PEAUHBITMAP__@@_N3HPEBUtagRECT@@@Z
    void DrawItemBitmap(HWND__*, HDC__*, HBITMAP__*, bool, bool, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawOwnerDrawnItem@CThemeMenu@@IEAAXPEAUHWND__@@_NPEBUtagUAHDRAWMENUITEM@@W4POPUPITEMFOCUSABLESTATES@@PEBUtagRECT@@@Z
    void DrawOwnerDrawnItem(HWND__*, bool, tagUAHDRAWMENUITEM const *, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Find@CThemeMenu@@KAPEAV1@PEAUHWND__@@PEAUHMENU__@@H@Z
    static CThemeMenu * Find(HWND__*, HMENU__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThemeableMenu@CThemeMenu@@KAHPEAUHWND__@@PEBUtagUAHMENU@@_N@Z
    static int IsThemeableMenu(HWND__*, tagUAHMENU const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MenuKeyboardMsgProc@CThemeMenu@@KA_JH_K_J@Z
    static int64_t MenuKeyboardMsgProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeFromBitmap@CThemeMenu@@IEAAXPEAXPEAUHBITMAP__@@PEAUtagSIZE@@@Z
    void SizeFromBitmap(void *, HBITMAP__*, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToOemPartId@CThemeMenu@@KAHPEAUHBITMAP__@@HPEAX@Z
    static int ToOemPartId(HBITMAP__*, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToOemStateId@CThemeMenu@@KAHPEAUHBITMAP__@@HPEAX_NH@Z
    static int ToOemStateId(HBITMAP__*, int, void *, bool, int);
};
