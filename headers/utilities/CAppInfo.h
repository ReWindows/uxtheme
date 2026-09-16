#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 16 member(s).
class CAppInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppIsThemed@CAppInfo@@QEAAHXZ
    int AppIsThemed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BumpRefCount@CAppInfo@@QEAAJPEAVCUxThemeFile@@@Z
    long BumpRefCount(CUxThemeFile *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppInfo@@QEAA@XZ
    CAppInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseThemeFile@CAppInfo@@QEAAXPEAVCUxThemeFile@@@Z
    void CloseThemeFile(CUxThemeFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomAppTheme@CAppInfo@@QEAAHXZ
    int CustomAppTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppFlags@CAppInfo@@QEAAKXZ
    unsigned long GetAppFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForeignWindows@CAppInfo@@QEAAHPEAPEAPEAUHWND__@@PEAH@Z
    int GetForeignWindows(HWND__* * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasThemeChanged@CAppInfo@@QEAAHXZ
    int HasThemeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallPrivateThemeFileForTesting@CAppInfo@@QEAAJPEAX0PEAPEAVCUxThemeFile@@@Z
    long InstallPrivateThemeFileForTesting(void *, void *, CUxThemeFile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemThemeActive@CAppInfo@@QEAAHXZ
    int IsSystemThemeActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@CAppInfo@@QEAAHPEAUHWND__@@@Z
    int OnWindowDestroyed(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenThemeFile@CAppInfo@@QEAAJPEAX0PEAPEAVCUxThemeFile@@@Z
    long OpenThemeFile(void *, void *, CUxThemeFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenWindowThemeFile@CAppInfo@@QEAAJPEAUHWND__@@PEAPEAVCUxThemeFile@@@Z
    long OpenWindowThemeFile(HWND__*, CUxThemeFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAppTheme@CAppInfo@@QEAAXHHPEAH0@Z
    void ResetAppTheme(int, int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowHasTheme@CAppInfo@@QEAAHPEAUHWND__@@@Z
    int WindowHasTheme(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppInfo@@QEAA@XZ
    ~CAppInfo();
};
