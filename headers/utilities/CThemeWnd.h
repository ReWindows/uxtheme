#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 58 member(s).
class CThemeWnd {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireFrameIcon@CThemeWnd@@QEAAPEAUHICON__@@KKH@Z
    HICON__* AcquireFrameIcon(unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssignFrameRgn@CThemeWnd@@QEAAXHK@Z
    void AssignFrameRgn(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@CThemeWnd@@SAPEAV1@PEAUHWND__@@PEAU_NCEVALUATE@@@Z
    static CThemeWnd * Attach(HWND__*, _NCEVALUATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeTheme@CThemeWnd@@QEAAXPEBU_THEME_MSG@@@Z
    void ChangeTheme(_THEME_MSG const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositeRgn@CThemeWnd@@QEAAPEAUHRGN__@@PEBU_NCWNDMET@@QEAPEAU2@1@Z
    HRGN__* CreateCompositeRgn(_NCWNDMET const *, HRGN__* * const, HRGN__* * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@CThemeWnd@@SAXPEAUHWND__@@K@Z
    static void Detach(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachAll@CThemeWnd@@SAXK@Z
    static void DetachAll(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDwmNcRendering@CThemeWnd@@QEAAXH@Z
    void EnableDwmNcRendering(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateStyle@CThemeWnd@@SAKKK@Z
    static unsigned long EvaluateStyle(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateWindowStyle@CThemeWnd@@SAKPEAUHWND__@@@Z
    static unsigned long EvaluateWindowStyle(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExileDwmNcRendering@CThemeWnd@@SAXPEAUHWND__@@H@Z
    static void ExileDwmNcRendering(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardCapturedMouseMessage@CThemeWnd@@QEAAJI_K_J@Z
    long ForwardCapturedMouseMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardMouseEvent@CThemeWnd@@QEAAHPEAU_THEME_MSG@@@Z
    int ForwardMouseEvent(_THEME_MSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromHdcAddRef@CThemeWnd@@SAPEAV1@PEAUHDC__@@H@Z
    static CThemeWnd * FromHdcAddRef(HDC__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromHwndAddRef@CThemeWnd@@SAPEAV1@PEAUHWND__@@@Z
    static CThemeWnd * FromHwndAddRef(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomDrawing@CThemeWnd@@QEBAPEAUICustomDrawing@@XZ
    ICustomDrawing * GetCustomDrawing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNcWindowMetrics@CThemeWnd@@QEAAHPEBUtagRECT@@PEAPEAU_NCWNDMET@@PEAU_NCTHEMEMET@@K@Z
    int GetNcWindowMetrics(tagRECT const *, _NCWNDMET * *, _NCTHEMEMET *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBarInfoEx@CThemeWnd@@QEAAXPEAUtagTITLEBARINFOEX@@@Z
    void GetTitleBarInfoEx(tagTITLEBARINFOEX *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCompositedFrame@CThemeWnd@@QEAAHXZ
    int IsCompositedFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDwmNcRendering@CThemeWnd@@SAHPEAUHWND__@@@Z
    static int IsDwmNcRendering(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFrameThemed@CThemeWnd@@QEAAHXZ
    int IsFrameThemed();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNcThemed@CThemeWnd@@QEAAHXZ
    int IsNcThemed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMdiBtns@CThemeWnd@@QEAAPEAVCMdiBtns@@PEAUHDC__@@I@Z
    CMdiBtns * LoadMdiBtns(HDC__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModifyMDIMenubar@CThemeWnd@@QEAAXHH@Z
    void ModifyMDIMenubar(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NcBackgroundHitTest@CThemeWnd@@QEAAGUtagPOINT@@PEBUtagRECT@@KKW4FRAMESTATES@@QEBW4WINDOWPARTS@@3QEBU3@@Z
    unsigned short NcBackgroundHitTest(tagPOINT, tagRECT const *, unsigned long, unsigned long, int, int const * const, int const * const, tagRECT const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NcHitTest@CThemeWnd@@QEAA_J_K_JPEAH@Z
    int64_t NcHitTest(uint64_t, int64_t, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NcMouseLeave@CThemeWnd@@QEAAXXZ
    void NcMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NcMouseMove@CThemeWnd@@QEAAX_K_J@Z
    void NcMouseMove(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NcPaint@CThemeWnd@@QEAAXPEAUHDC__@@KPEAUHRGN__@@PEAU_NCPAINTOVERIDE@@@Z
    void NcPaint(HDC__*, unsigned long, HRGN__*, _NCPAINTOVERIDE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NcPaintCaption@CThemeWnd@@QEAAXPEAUHDC__@@PEAU_NCWNDMET@@PEAU_NCTHEMEMET@@HK@Z
    void NcPaintCaption(HDC__*, _NCWNDMET *, _NCTHEMEMET *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reject@CThemeWnd@@SAHPEAUHWND__@@H@Z
    static int Reject(HWND__*, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CThemeWnd@@QEAAJXZ
    long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFrameTheme@CThemeWnd@@QEAAXK@Z
    void RemoveFrameTheme(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetFrameRgn@CThemeWnd@@QEAAXXZ
    void ResetFrameRgn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revoke@CThemeWnd@@QEAAHXZ
    int Revoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScreenToWindow@CThemeWnd@@QEAAXPEAUtagPOINT@@I@Z
    void ScreenToWindow(tagPOINT *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCustomFrame@CThemeWnd@@QEAAXH@Z
    void SetCustomFrame(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyFrameRgn@CThemeWnd@@QEAAXHH@Z
    void SetDirtyFrameRgn(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFrameTheme@CThemeWnd@@QEAAXKPEAUtagWINDOWINFO@@@Z
    void SetFrameTheme(unsigned long, tagWINDOWINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldTrackFrameButton@CThemeWnd@@QEAAHI@Z
    int ShouldTrackFrameButton(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThemeMDIMenuButtons@CThemeWnd@@QEAAXHH@Z
    void ThemeMDIMenuButtons(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackFrameButton@CThemeWnd@@QEAAHPEAUHWND__@@HPEA_KH@Z
    int TrackFrameButton(HWND__*, int, uint64_t *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddRef@CThemeWnd@@QEAAJXZ
    long TryAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadMdiBtns@CThemeWnd@@QEAAXI@Z
    void UnloadMdiBtns(unsigned int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThemeWnd@@AEAA@XZ
    CThemeWnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldNotMirror@CThemeWnd@@CAHXZ
    static int ShouldNotMirror();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AcquireThemeHandle@CThemeWnd@@CAPEAXPEAUHWND__@@PEAK@Z
    static void * _AcquireThemeHandle(HWND__*, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AssignRgn@CThemeWnd@@AEAAXPEAUHRGN__@@K@Z
    void _AssignRgn(HRGN__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttachInstance@CThemeWnd@@AEAAHPEAUHWND__@@PEAXK@Z
    int _AttachInstance(HWND__*, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseTheme@CThemeWnd@@AEAAXXZ
    void _CloseTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DetachInstance@CThemeWnd@@AEAAHK@Z
    int _DetachInstance(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Evaluate@CThemeWnd@@CAKPEAUHWND__@@PEAU_NCEVALUATE@@@Z
    static unsigned long _Evaluate(HWND__*, _NCEVALUATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EvaluateExclusions@CThemeWnd@@CAKPEAUHWND__@@PEAU_NCEVALUATE@@@Z
    static unsigned long _EvaluateExclusions(HWND__*, _NCEVALUATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeRegionHandles@CThemeWnd@@AEAAXXZ
    void _FreeRegionHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseCustomFrameIcon@CThemeWnd@@AEAAXXZ
    void _ReleaseCustomFrameIcon();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?_SetThemeWndProp@CThemeWnd@@CAHPEAUHWND__@@PEAV1@@Z
    static int _SetThemeWndProp(HWND__*, CThemeWnd *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DetachDesktopWindowsCB@CThemeWnd@@CAHPEAUHWND__@@_J@Z
    static int s_DetachDesktopWindowsCB(HWND__*, int64_t);
};
