#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 4 member(s).
class CImageDecoder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Decode@CImageDecoder@@QEAAJPEAXH@Z
    long Decode(void *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageDecoder@@QEAA@XZ
    ~CImageDecoder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBufferSize@CImageDecoder@@AEAAJI@Z
    long _EnsureBufferSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CImageDecoder@@AEAAJXZ
    long _Init();
};
