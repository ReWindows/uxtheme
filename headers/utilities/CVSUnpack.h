#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uxtheme.dll by Windissect. 36 member(s).
class CVSUnpack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumClassDataMap@CVSUnpack@@QEAAJPEAU_VISUALSTYLEENUM@@@Z
    long EnumClassDataMap(_VISUALSTYLEENUM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumRootMap@CVSUnpack@@QEAAJPEAU_VISUALSTYLEENUM@@@Z
    long EnumRootMap(_VISUALSTYLEENUM *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassData@CVSUnpack@@QEAAJPEBG0PEAPEAXPEAJ@Z
    long GetClassData(unsigned short const *, unsigned short const *, void * *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootMap@CVSUnpack@@QEAAJPEAPEAXPEAJ@Z
    long GetRootMap(void * *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootPropertyValue@CVSUnpack@@QEAAJJJPEAXPEAJ@Z
    long GetRootPropertyValue(long, long, void *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootPropertyValue@CVSUnpack@@QEAAJPEBG0PEAXPEAJ@Z
    long GetRootPropertyValue(unsigned short const *, unsigned short const *, void *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootPropertyValue@CVSUnpack@@QEAAJPEBGJPEAXPEAJ@Z
    long GetRootPropertyValue(unsigned short const *, long, void *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubvariantInfo@CVSUnpack@@QEAAJW4SUBVARIANTTYPE@@KPEBGPEAU_VISUALSTYLEVARIANTINFO@@@Z
    long GetSubvariantInfo(int, unsigned long, unsigned short const *, _VISUALSTYLEVARIANTINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariantMap@CVSUnpack@@QEAAJPEAPEAXPEAJ@Z
    long GetVariantMap(void * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVSUnpack@@QEAAJPEAUHINSTANCE__@@JHH@Z
    long Initialize(HINSTANCE__*, long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadAnimationDataMap@CVSUnpack@@QEAAJPEAVIParserCallBack@@@Z
    long LoadAnimationDataMap(IParserCallBack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadBaseClassDataMap@CVSUnpack@@QEAAJPEAVIParserCallBack@@@Z
    long LoadBaseClassDataMap(IParserCallBack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadClassDataMap@CVSUnpack@@QEAAJPEBG0PEAVIParserCallBack@@@Z
    long LoadClassDataMap(unsigned short const *, unsigned short const *, IParserCallBack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadRootMap@CVSUnpack@@QEAAJPEAVIParserCallBack@@@Z
    long LoadRootMap(IParserCallBack *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVSUnpack@@QEAA@XZ
    ~CVSUnpack();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AcquireVersion@CVSUnpack@@AEAAJPEAJ@Z
    long _AcquireVersion(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddScaledBackgroundDataRecord@CVSUnpack@@AEAAJPEAVIParserCallBack@@@Z
    long _AddScaledBackgroundDataRecord(IParserCallBack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddVSDataRecord@CVSUnpack@@AEAAJPEAVIParserCallBack@@PEAUHINSTANCE__@@PEAU_VSRECORD@@@Z
    long _AddVSDataRecord(IParserCallBack *, HINSTANCE__*, _VSRECORD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateImageFromProperties@CVSUnpack@@AEAAJPEAU_IMAGEPROPERTIES@@HPEAU_MARGINS@@1PEAPEAEPEAJ@Z
    long _CreateImageFromProperties(_IMAGEPROPERTIES *, int, _MARGINS *, _MARGINS *, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DelayRecord@CVSUnpack@@CA_NPEBU_VSRECORD@@@Z
    static bool _DelayRecord(_VSRECORD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBufferSize@CVSUnpack@@AEAAJI@Z
    long _EnsureBufferSize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandVSRecordData@CVSUnpack@@AEAAJPEAVIParserCallBack@@PEAU_VSRECORD@@PEAEJ@Z
    long _ExpandVSRecordData(IParserCallBack *, _VSRECORD *, unsigned char *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandVSRecordForColor@CVSUnpack@@AEAAJPEAVIParserCallBack@@PEAU_VSRECORD@@PEAEJPEA_N@Z
    long _ExpandVSRecordForColor(IParserCallBack *, _VSRECORD *, unsigned char *, long, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandVSRecordForMargins@CVSUnpack@@AEAAJPEAVIParserCallBack@@PEAU_VSRECORD@@PEAEJPEA_N@Z
    long _ExpandVSRecordForMargins(IParserCallBack *, _VSRECORD *, unsigned char *, long, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindClass@CVSUnpack@@AEAAJPEBG@Z
    long _FindClass(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindRootRecord@CVSUnpack@@AEAAJPEBGJPEAPEAU_VSRECORD@@@Z
    long _FindRootRecord(unsigned short const *, long, _VSRECORD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindVSRecord@CVSUnpack@@AEAAJPEAXJJJJJPEAPEAU_VSRECORD@@@Z
    long _FindVSRecord(void *, long, long, long, long, long, _VSRECORD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindVariantClass@CVSUnpack@@AEAAJPEBG0PEAJ@Z
    long _FindVariantClass(unsigned short const *, unsigned short const *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FixSymbolAndAddVSDataRecord@CVSUnpack@@AEAAJPEAVIParserCallBack@@PEBU_VSRECORD@@J@Z
    long _FixSymbolAndAddVSDataRecord(IParserCallBack *, _VSRECORD const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushDelayedRecords@CVSUnpack@@AEAAJPEAVIParserCallBack@@@Z
    long _FlushDelayedRecords(IParserCallBack *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImagePropertiesForHC@CVSUnpack@@AEAAJPEAPEAU_IMAGEPROPERTIES@@PEAU_HCIMAGEPROPERTIES@@H@Z
    long _GetImagePropertiesForHC(_IMAGEPROPERTIES * *, _HCIMAGEPROPERTIES *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyValue@CVSUnpack@@AEAAJPEAXJJJJJ0PEAJ@Z
    long _GetPropertyValue(void *, long, long, long, long, long, void *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsGlyphImage@CVSUnpack@@AEAA_NPEBU_VSRECORD@@@Z
    bool _IsGlyphImage(_VSRECORD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTrueSizeImage@CVSUnpack@@AEAA_NPEBU_VSRECORD@@@Z
    bool _IsTrueSizeImage(_VSRECORD const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveRecord@CVSUnpack@@AEAAJPEBU_VSRECORD@@@Z
    long _SaveRecord(_VSRECORD const *);
};
