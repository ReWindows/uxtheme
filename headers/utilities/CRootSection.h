#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 6 member(s).
class CRootSection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRootSection@@QEAA@KKK@Z
    CRootSection(unsigned long, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootSectionData@CRootSection@@QEAAJPEAPEAUROOTSECTION@@@Z
    long GetRootSectionData(ROOTSECTION * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataSectionNames@CRootSection@@QEAAJPEBG0PEAK@Z
    long SetDataSectionNames(unsigned short const *, unsigned short const *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRootSection@@UEAA@XZ
    virtual ~CRootSection();
};
