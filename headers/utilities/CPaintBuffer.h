#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 26 member(s).
class CPaintBuffer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPaintBuffer@@QEAA@XZ
    CPaintBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUpdateAnimation@CPaintBuffer@@QEBA_NAEBUBEGINANIMATIONPARAMS@@@Z
    bool CanUpdateAnimation(BEGINANIMATIONPARAMS const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CPaintBuffer@@UEAAJPEBUtagRECT@@@Z
    virtual long Clear(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Conflict@CPaintBuffer@@QEBA_NPEAUHWND__@@AEBUtagRECT@@@Z
    bool Conflict(HWND__*, tagRECT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapDpiScaleValue@CPaintBuffer@@UEBAJXZ
    virtual long GetBitmapDpiScaleValue() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBits@CPaintBuffer@@UEBAJPEAPEAUtagRGBQUAD@@PEAH@Z
    virtual long GetBits(tagRGBQUAD * *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitsPerPixel@CPaintBuffer@@UEBAKXZ
    virtual unsigned long GetBitsPerPixel() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDC@CPaintBuffer@@UEBAPEAUHDC__@@XZ
    virtual HDC__* GetDC() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetDC@CPaintBuffer@@UEBAPEAUHDC__@@XZ
    virtual HDC__* GetTargetDC() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetRect@CPaintBuffer@@UEBAJPEAUtagRECT@@@Z
    virtual long GetTargetRect(tagRECT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationTimer@CPaintBuffer@@QEAAJXZ
    long OnAnimationTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlpha@CPaintBuffer@@UEAAJPEBUtagRECT@@E@Z
    virtual long SetAlpha(tagRECT const *, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFree@CPaintBuffer@@QEAAXXZ
    void SetFree();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPaintBuffer@@QEAA@XZ
    ~CPaintBuffer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginAnimation@CPaintBuffer@@AEAAJXZ
    long _BeginAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginNew@CPaintBuffer@@AEAAJPEAUBEGINANIMATIONPARAMS@@@Z
    long _BeginNew(BEGINANIMATIONPARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateAnimation@CPaintBuffer@@AEAAJXZ
    long _CreateAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyAnimation@CPaintBuffer@@AEAAJXZ
    long _DestroyAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndAnimation@CPaintBuffer@@AEAAJXZ
    long _EndAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintAnimated@CPaintBuffer@@AEAAJPEAUHDC__@@K@Z
    long _PaintAnimated(HDC__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PaintImmediate@CPaintBuffer@@AEAAJPEAUHDC__@@@Z
    long _PaintImmediate(HDC__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RedrawTargetWindow@CPaintBuffer@@AEAAXXZ
    void _RedrawTargetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAnimation@CPaintBuffer@@AEAAJXZ
    long _UpdateAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateExisting@CPaintBuffer@@AEAAJPEAUBEGINANIMATIONPARAMS@@@Z
    long _UpdateExisting(BEGINANIMATIONPARAMS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowSizeMatch@CPaintBuffer@@AEBA_NXZ
    bool _WindowSizeMatch() const;
};
