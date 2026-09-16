#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 5 member(s).
class CGlobalBufferPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CGlobalBufferPool@@SAHPEAVCPaintBuffer@@@Z
    static int Add(CPaintBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prune@CGlobalBufferPool@@SAXXZ
    static void Prune();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClient@CGlobalBufferPool@@SAXXZ
    static void RemoveClient();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsPruning@CGlobalBufferPool@@KAHXZ
    static int NeedsPruning();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Search@CGlobalBufferPool@@KAPEAVCPaintBuffer@@AEBUtagRECT@@W4_BP_BUFFERFORMAT@@@Z
    static CPaintBuffer * Search(tagRECT const &, int);
};
