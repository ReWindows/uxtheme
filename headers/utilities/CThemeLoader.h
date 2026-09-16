#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 34 member(s).
class CThemeLoader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBaseClass@CThemeLoader@@UEAAJHH@Z
    virtual long AddBaseClass(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@CThemeLoader@@UEAAJFEPEBXK@Z
    virtual long AddData(short, unsigned char, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIndex@CThemeLoader@@UEAAJPEBG0HHHH@Z
    virtual long AddIndex(unsigned short const *, unsigned short const *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToDIBDataArray@CThemeLoader@@UEAAHPEAXFF@Z
    virtual int AddToDIBDataArray(void *, short, short);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThemeLoader@@QEAA@XZ
    CThemeLoader();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextDataIndex@CThemeLoader@@UEAAHXZ
    virtual int GetNextDataIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadTheme@CThemeLoader@@QEAAJPEAXPEAUHINSTANCE__@@PEBG22PEAPEAXPEAGI34IP6AJPEAVCUxThemeFile@@4IH4IHH@Z3H@Z
    long LoadTheme(void *, HINSTANCE__*, unsigned short const *, unsigned short const *, unsigned short const *, void * *, unsigned short *, unsigned int, void * *, unsigned short *, unsigned int, long ( *)(CUxThemeFile *, unsigned short *, unsigned int, int, unsigned short *, unsigned int, int, int), void * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadThemeForTesting@CThemeLoader@@QEAAJPEAULOADTHEMEFORTESTPARAMS@@@Z
    long LoadThemeForTesting(LOADTHEMEFORTESTPARAMS *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThemeLoader@@QEAA@XZ
    ~CThemeLoader();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataInternal@CThemeLoader@@IEAAJFEPEBXK@Z
    long AddDataInternal(short, unsigned char, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIndexInternal@CThemeLoader@@IEAAJPEBG0HHHH@Z
    long AddIndexInternal(unsigned short const *, unsigned short const *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMissingParent@CThemeLoader@@IEAAJPEBG0HH@Z
    long AddMissingParent(unsigned short const *, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateThemeFileBytes@CThemeLoader@@IEAAJPEAEK@Z
    long AllocateThemeFileBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyClassGroup@CThemeLoader@@IEAAJPEAUAPPCLASSLOCAL@@AEATMIXEDPTRS@@PEAUAPPCLASSLIVE@@@Z
    long CopyClassGroup(APPCLASSLOCAL *, MIXEDPTRS &, APPCLASSLIVE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyDummyNonSharableDataToLive@CThemeLoader@@IEAAJXZ
    long CopyDummyNonSharableDataToLive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyLocalThemeToLive@CThemeLoader@@IEAAJPEAXHPEBG11@Z
    long CopyLocalThemeToLive(void *, int, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyNonSharableDataToLive@CThemeLoader@@IEAAJPEAX@Z
    long CopyNonSharableDataToLive(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPartGroup@CThemeLoader@@IEAAJPEAUAPPCLASSLOCAL@@AEATMIXEDPTRS@@HPEAHHHH@Z
    long CopyPartGroup(APPCLASSLOCAL *, MIXEDPTRS &, int, int *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReuseSection@CThemeLoader@@IEAAJPEBGPEAPEAX@Z
    long CreateReuseSection(unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitAndCopyBlock@CThemeLoader@@IEAAJAEATMIXEDPTRS@@PEAXK@Z
    long EmitAndCopyBlock(MIXEDPTRS &, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitEntryHdr@CThemeLoader@@IEAAJAEATMIXEDPTRS@@FE@Z
    long EmitEntryHdr(MIXEDPTRS &, short, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitString@CThemeLoader@@IEAAJAEATMIXEDPTRS@@PEBGKPEAH@Z
    long EmitString(MIXEDPTRS &, unsigned short const *, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndEntry@CThemeLoader@@IEAAHAEATMIXEDPTRS@@@Z
    int EndEntry(MIXEDPTRS &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeLocalTheme@CThemeLoader@@IEAAXXZ
    void FreeLocalTheme();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFontTableIndex@CThemeLoader@@IEAAJPEBUtagLOGFONTW@@PEAG@Z
    long GetFontTableIndex(tagLOGFONTW const *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexExists@CThemeLoader@@IEAAHPEBG0HH@Z
    int IndexExists(unsigned short const *, unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeStockObject@CThemeLoader@@IEAAJPEAVCRenderObj@@PEAUDIBINFO@@@Z
    long MakeStockObject(CRenderObj *, DIBINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackAndLoadTheme@CThemeLoader@@IEAAJPEAXPEBG11KPEAGI2IPEAPEAXP6AJPEAVCUxThemeFile@@2IH2IHH@Z@Z
    long PackAndLoadTheme(void *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, unsigned short *, unsigned int, unsigned short *, unsigned int, void * *, long ( *)(CUxThemeFile *, unsigned short *, unsigned int, int, unsigned short *, unsigned int, int, int));
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackDrawObject@CThemeLoader@@IEAAJAEATMIXEDPTRS@@PEAVCRenderObj@@HH@Z
    long PackDrawObject(MIXEDPTRS &, CRenderObj *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackDrawObjects@CThemeLoader@@IEAAJAEATMIXEDPTRS@@PEAVCRenderObj@@HH@Z
    long PackDrawObjects(MIXEDPTRS &, CRenderObj *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackImageFileInfo@CThemeLoader@@IEAAJPEAUDIBINFO@@PEAVCImageFile@@AEATMIXEDPTRS@@PEAVCRenderObj@@HH@Z
    long PackImageFileInfo(DIBINFO *, CImageFile *, MIXEDPTRS &, CRenderObj *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackMetrics@CThemeLoader@@IEAAJXZ
    long PackMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackTextObject@CThemeLoader@@IEAAJAEATMIXEDPTRS@@PEAVCRenderObj@@HH@Z
    long PackTextObject(MIXEDPTRS &, CRenderObj *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackTextObjects@CThemeLoader@@IEAAJAEATMIXEDPTRS@@PEAVCRenderObj@@HH@Z
    long PackTextObjects(MIXEDPTRS &, CRenderObj *, int, int);
};
