#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 5 member(s).
class CDataSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDataSection@@QEAAJW4ThemeDataNamespace@@HK@Z
    long Create(int, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachAll@CDataSection@@QEAAJPEAPEAEPEAPEAXPEAGI@Z
    long DetachAll(unsigned char * *, void * *, unsigned short *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeThemeDataSectionName@CDataSection@@AEAAJPEAGIW4ThemeDataNamespace@@K@Z
    long MakeThemeDataSectionName(unsigned short *, unsigned int, int, unsigned long);
};
