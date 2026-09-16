#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 8 member(s).
class CThemeMenuMetrics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureMetricsInitialized@CThemeMenuMetrics@@SAJPEAUHWND__@@HPEAPEAV1@@Z
    static long EnsureMetricsInitialized(HWND__*, int, CThemeMenuMetrics * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindThemeMetrics@CThemeMenuMetrics@@SAPEAV1@PEAUHWND__@@HPEAPEAU2@@Z
    static CThemeMenuMetrics * FindThemeMetrics(HWND__*, int, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CThemeMenuMetrics@@QEAAXXZ
    void Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAll@CThemeMenuMetrics@@SAXXZ
    static void FlushAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CThemeMenuMetrics@@SAXPEAUHWND__@@@Z
    static void Remove(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticInitialize@CThemeMenuMetrics@@SA_NXZ
    static bool StaticInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticTerminate@CThemeMenuMetrics@@SAXXZ
    static void StaticTerminate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CThemeMenuMetrics@@AEAAJXZ
    long Initialize();
};
