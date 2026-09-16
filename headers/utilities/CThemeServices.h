#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 22 member(s).
class CThemeServices {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTheme@CThemeServices@@SAJPEAVCUxThemeFile@@PEBG1KPEAUHWND__@@@Z
    static long ApplyTheme(CUxThemeFile *, unsigned short const *, unsigned short const *, unsigned long, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Client_LoadGlobalTheme@CThemeServices@@SAJPEBG00K@Z
    static long Client_LoadGlobalTheme(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentChangeNumber@CThemeServices@@SAJPEAH@Z
    static long GetCurrentChangeNumber(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallThemeHooks@CThemeServices@@SAKXZ
    static unsigned long InstallThemeHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemProcessContext@CThemeServices@@SA_NXZ
    static bool IsSystemProcessContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Process_LoaderEntry@CThemeServices@@SAJPEBG@Z
    static long Process_LoaderEntry(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReestablishServerConnection@CThemeServices@@SAJXZ
    static long ReestablishServerConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendAcquireOrAddTheme@CThemeServices@@SAJPEBG00KPEAXPEAPEAXPEA_N@Z
    static long SendAcquireOrAddTheme(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, void *, void * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendReleaseTheme@CThemeServices@@SAJPEBG@Z
    static long SendReleaseTheme(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalTheme@CThemeServices@@SAJPEBG0PEAX@Z
    static long SetGlobalTheme(unsigned short const *, unsigned short const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticTerminate@CThemeServices@@SAXXZ
    static void StaticTerminate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThemeEnforcedByPolicy@CThemeServices@@SA_N_N0@Z
    static bool ThemeEnforcedByPolicy(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ThemeHooksOn@CThemeServices@@SAJPEAUHWND__@@@Z
    static long ThemeHooksOn(HWND__*);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallThemeServer@CThemeServices@@CAJKPEATAPI_THEMES_SPECIFIC@@@Z
    static long CallThemeServer(unsigned long, API_THEMES_SPECIFIC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForDisconnectedPort@CThemeServices@@CAXJ@Z
    static void CheckForDisconnectedPort(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnection@CThemeServices@@CAXXZ
    static void CloseConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectedToService@CThemeServices@@CA_NXZ
    static bool ConnectedToService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLoadId@CThemeServices@@CAHPEAX0@Z
    static int GetLoadId(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockAcquire@CThemeServices@@CAXXZ
    static void LockAcquire();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRelease@CThemeServices@@CAXXZ
    static void LockRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendThemeChangedMsg@CThemeServices@@CAXHPEAUHWND__@@KH@Z
    static void SendThemeChangedMsg(int, HWND__*, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThemeRegistry@CThemeServices@@CAJHPEBG00HH@Z
    static long UpdateThemeRegistry(int, unsigned short const *, unsigned short const *, unsigned short const *, int, int);
};
