#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 9 member(s).
class CVSSymbolManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSymbolsFromMemory@CVSSymbolManager@@QEAAJPEBDK@Z
    long AddSymbolsFromMemory(char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSymbolsFromResourceDLL@CVSSymbolManager@@QEAAJPEAUHINSTANCE__@@@Z
    long AddSymbolsFromResourceDLL(HINSTANCE__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClass@CVSSymbolManager@@QEAAHPEBG@Z
    int FindClass(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSymbol@CVSSymbolManager@@QEAAHPEBGPEAJ1PEAH@Z
    int FindSymbol(unsigned short const *, long *, long *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVSSymbolName@CVSSymbolManager@@QEAAJJPEAGK0K@Z
    long GetVSSymbolName(long, unsigned short *, unsigned long, unsigned short *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVSSymbolManager@@QEAA@XZ
    ~CVSSymbolManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSymbol@CVSSymbolManager@@AEAAJPEBGJJH@Z
    long AddSymbol(unsigned short const *, long, long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSymbolValue@CVSSymbolManager@@AEAAHJ@Z
    int FindSymbolValue(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSymbolIndex@CVSSymbolManager@@AEAAHPEBG@Z
    int GetSymbolIndex(unsigned short const *);
};
