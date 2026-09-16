#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 3 member(s).
class CThemePNGDecoder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToDIB@CThemePNGDecoder@@QEAAJPEBEKPEAH@Z
    long ConvertToDIB(unsigned char const *, unsigned long, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThemePNGDecoder@@QEAA@XZ
    ~CThemePNGDecoder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CThemePNGDecoder@@AEAAJXZ
    long _Init();
};
