#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 39 member(s).
class CRenderObj {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRenderObj@@SAJPEAVCUxThemeFile@@HHHH_J_NPEAVCDrawBase@@PEAVCTextDraw@@H2HKPEAPEAV1@@Z
    static long Create(CUxThemeFile *, int, int, int, int, int64_t, bool, CDrawBase *, CTextDraw *, int, bool, int, unsigned long, CRenderObj * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetBitmap@CRenderObj@@QEBAJPEAUHDC__@@HKPEAPEAUHBITMAP__@@@Z
    long ExternalGetBitmap(HDC__*, int, unsigned long, HBITMAP__* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetBool@CRenderObj@@QEBAJHHHPEAH@Z
    long ExternalGetBool(int, int, int, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetColor@CRenderObj@@QEBAJHHHPEAK@Z
    long ExternalGetColor(int, int, int, unsigned long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetEnumValue@CRenderObj@@QEBAJHHHPEAH@Z
    long ExternalGetEnumValue(int, int, int, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetFont@CRenderObj@@QEBAJPEAUHDC__@@HHHHPEAUtagLOGFONTW@@@Z
    long ExternalGetFont(HDC__*, int, int, int, int, tagLOGFONTW *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetInt@CRenderObj@@QEBAJHHHPEAH@Z
    long ExternalGetInt(int, int, int, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetIntList@CRenderObj@@QEBAJHHHPEAU_INTLIST@@@Z
    long ExternalGetIntList(int, int, int, _INTLIST *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetMargins@CRenderObj@@QEBAJPEAUHDC__@@HHHPEBUtagRECT@@PEAU_MARGINS@@@Z
    long ExternalGetMargins(HDC__*, int, int, int, tagRECT const *, _MARGINS *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetPosition@CRenderObj@@QEBAJHHHPEAUtagPOINT@@@Z
    long ExternalGetPosition(int, int, int, tagPOINT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExternalGetStream@CRenderObj@@QEBAJHHHPEAPEAXPEAKPEAUHINSTANCE__@@@Z
    long ExternalGetStream(int, int, int, void * *, unsigned long *, HINSTANCE__*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapHeader@CRenderObj@@QEBAPEAUTMBITMAPHEADER@@H@Z
    TMBITMAPHEADER * GetBitmapHeader(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDpi@CRenderObj@@QEBAXPEAUHDC__@@PEAH1H@Z
    void GetEffectiveDpi(HDC__*, int *, int *, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExactFont@CRenderObj@@QEAAJAEBUtagLOGFONTW@@PEAPEAVCFont@@@Z
    long GetExactFont(tagLOGFONTW const &, CFont * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyOrigin@CRenderObj@@QEBAJHHHPEAW4PROPERTYORIGIN@@@Z
    long GetPropertyOrigin(int, int, int, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaledFont@CRenderObj@@QEAAJPEAUHDC__@@GPEAPEAVCFont@@@Z
    long GetScaledFont(HDC__*, unsigned short, CFont * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionDuration@CRenderObj@@QEBAJHHHHPEAK@Z
    long GetTransitionDuration(int, int, int, int, unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueIndex@CRenderObj@@QEBAHHHH@Z
    int GetValueIndex(int, int, int) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRenderObj@@QEAA@XZ
    ~CRenderObj();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CachePartObjects@CRenderObj@@IEAAJXZ
    long CachePartObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CachePartObjects_TESTONLY@CRenderObj@@IEAAJPEAVCDrawBase@@PEAVCTextDraw@@@Z
    long CachePartObjects_TESTONLY(CDrawBase *, CTextDraw *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandPartObjectCache@CRenderObj@@IEAAJH@Z
    long ExpandPartObjectCache(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheObject@CRenderObj@@IEAAPEAVCRenderCache@@XZ
    CRenderCache * GetCacheObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAlphaBitmap_TESTONLY@CRenderObj@@IEAAJPEAUHBITMAP__@@@Z
    long PrepareAlphaBitmap_TESTONLY(HBITMAP__*);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRenderObj@@AEAA@PEAVCUxThemeFile@@HHH_J_NH2HK@Z
    CRenderObj(CUxThemeFile *, int, int, int, int64_t, bool, int, bool, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreePartObjectCache@CRenderObj@@AEAAXXZ
    void FreePartObjectCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init_TESTONLY@CRenderObj@@AEAAJPEAVCDrawBase@@PEAVCTextDraw@@@Z
    long Init_TESTONLY(CDrawBase *, CTextDraw *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ColorizeAtlasSubImage@CRenderObj@@AEBAJAEAVAtlasColorizationData@@PEAEKUtagRECT@@@Z
    long _ColorizeAtlasSubImage(AtlasColorizationData &, unsigned char *, unsigned long, tagRECT) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ColorizeDwmAtlas@CRenderObj@@AEBAJPEAXPEBEPEAEKUtagRECT@@@Z
    long _ColorizeDwmAtlas(void *, unsigned char const *, unsigned char *, unsigned long, tagRECT) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAtlasHighContrastImage@CRenderObj@@AEBAJHHPEAU_IMAGEPROPERTIES@@@Z
    long _GetAtlasHighContrastImage(int, int, _IMAGEPROPERTIES *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDWMAtlas@CRenderObj@@AEBA_NXZ
    bool _IsDWMAtlas() const;
};
