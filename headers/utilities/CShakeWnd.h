#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 16 member(s).
class CShakeWnd {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReference@CShakeWnd@@QEAAPEAV1@XZ
    CShakeWnd * AddReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@CShakeWnd@@SAPEAV1@PEAUHWND__@@@Z
    static CShakeWnd * Attach(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@CShakeWnd@@SAXPEAUHWND__@@K@Z
    static void Detach(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromHwnd@CShakeWnd@@SAPEAV1@PEAUHWND__@@@Z
    static CShakeWnd * FromHwnd(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FromHwndAddRef@CShakeWnd@@SAPEAV1@PEAUHWND__@@@Z
    static CShakeWnd * FromHwndAddRef(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMsgProc@CShakeWnd@@SA_JH_K_J@Z
    static int64_t GetMsgProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEscapeAction@CShakeWnd@@QEAAXW4_ESC_ACTION@1@@Z
    void HandleEscapeAction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGoodAngle@CShakeWnd@@QEBAHXZ
    int IsGoodAngle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGoodLength@CShakeWnd@@QEBAHXZ
    int IsGoodLength() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGoodRatio@CShakeWnd@@QEBAHXZ
    int IsGoodRatio() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseReference@CShakeWnd@@QEAAJXZ
    long ReleaseReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shift@CShakeWnd@@QEAAXXZ
    void Shift();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trigger@CShakeWnd@@QEAA_JPEAUHWND__@@@Z
    int64_t Trigger(HWND__*);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShakeWnd@@AEAA@XZ
    CShakeWnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MessageToShell@CShakeWnd@@CA_JPEAUHWND__@@@Z
    static int64_t MessageToShell(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShakeWnd@@AEAA@XZ
    ~CShakeWnd();
};
