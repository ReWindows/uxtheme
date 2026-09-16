#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 3 member(s).
class VSERRORCONTEXT {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogErrorMsg@VSERRORCONTEXT@@QEAAJJIZZ
    long LogErrorMsg(long, unsigned int, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogHResult@VSERRORCONTEXT@@QEAAJJPEBGZZ
    long LogHResult(long, unsigned short const *, ...);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogBasicInfo@VSERRORCONTEXT@@AEAAXXZ
    void _LogBasicInfo();
};
