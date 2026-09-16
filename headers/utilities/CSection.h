#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 5 member(s).
class CSection {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSection@@UEAA@XZ
    virtual ~CSection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSection@CSection@@IEAAJKKK@Z
    long CreateSection(unsigned long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSection@CSection@@IEAAJPEBG_N@Z
    long OpenSection(unsigned short const *, bool);
};
