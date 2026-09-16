#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 6 member(s).
class CMessageBroadcast {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMessageBroadcast@@QEAA@XZ
    ~CMessageBroadcast();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildWindowCallBack@CMessageBroadcast@@CAHPEAUHWND__@@_J@Z
    static int ChildWindowCallBack(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopCallBack@CMessageBroadcast@@CAHPEAG_J@Z
    static int DesktopCallBack(unsigned short *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumRequestedWindows@CMessageBroadcast@@AEAAXXZ
    void EnumRequestedWindows();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TopWindowCallBack@CMessageBroadcast@@CAHPEAUHWND__@@_J@Z
    static int TopWindowCallBack(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Worker@CMessageBroadcast@@AEAAXPEAUHWND__@@@Z
    void Worker(HWND__*);
};
