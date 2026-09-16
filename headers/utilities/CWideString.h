#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 7 member(s).
class CWideString {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Assign@CWideString@@QEAAXPEBGH@Z
    void Assign(unsigned short const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWideString@@QEAA@AEBV0@@Z
    CWideString(CWideString const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CWideString@@QEAAHXZ
    int GetLength();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWideString@@QEAA@XZ
    ~CWideString();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StringDup@CWideString@@IEAAXIPEBG@Z
    void _StringDup(unsigned int, unsigned short const *);
};
