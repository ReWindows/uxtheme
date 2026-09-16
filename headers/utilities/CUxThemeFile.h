#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 13 member(s).
class CUxThemeFile {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUxThemeFile@@QEAA@XZ
    CUxThemeFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckColorDepth@CUxThemeFile@@QEAAJXZ
    long CheckColorDepth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearStockObjects@CUxThemeFile@@SAJPEAXH@Z
    static long ClearStockObjects(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFile@CUxThemeFile@@QEAAXXZ
    void CloseFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFileW@CUxThemeFile@@QEAAJPEAGIH0IHH@Z
    long CreateFileW(unsigned short *, unsigned int, int, unsigned short *, unsigned int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalTheme@CUxThemeFile@@SAJPEAPEAX0@Z
    static long GetGlobalTheme(void * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenFromHandle@CUxThemeFile@@QEAAJPEAX0KH@Z
    long OpenFromHandle(void *, void *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unload@CUxThemeFile@@QEAAXXZ
    void Unload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateObj@CUxThemeFile@@QEAAHXZ
    int ValidateObj();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateThemeData@CUxThemeFile@@QEAAJH@Z
    long ValidateThemeData(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUxThemeFile@@QEAA@XZ
    ~CUxThemeFile();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteStockBitmap@CUxThemeFile@@CAXPEAUHBITMAP__@@@Z
    static void DeleteStockBitmap(HBITMAP__*);
};
