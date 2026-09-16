#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 9 member(s).
class CThemeSignature {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Verify@CThemeSignature@@QEAAJPEAX@Z
    long Verify(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Verify@CThemeSignature@@QEAAJPEBG@Z
    long Verify(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThemeSignature@@UEAA@XZ
    virtual ~CThemeSignature();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateHash@CThemeSignature@@IEAAJPEAXW4KEY_TYPES@1@@Z
    long CalculateHash(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSignature@CThemeSignature@@IEAAJPEAX0@Z
    long ReadSignature(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixCryptoError@CThemeSignature@@IEAAJK@Z
    long _FixCryptoError(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CThemeSignature@@IEAAXPEBEK@Z
    void _Init(unsigned char const *, unsigned long);
};
