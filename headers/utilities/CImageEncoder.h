#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 4 member(s).
class CImageEncoder {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImageEncoder@@QEAA@AEBU_GUID@@@Z
    CImageEncoder(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Encode@CImageEncoder@@QEAAJIINNU_GUID@@PEAXK@Z
    long Encode(unsigned int, unsigned int, double, double, _GUID, void *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageEncoder@@QEAA@XZ
    ~CImageEncoder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CImageEncoder@@AEAAJ_K@Z
    long _Init(uint64_t);
};
