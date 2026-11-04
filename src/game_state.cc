#include "prelude.h"

/* Vtable gabungan: slot 0x40 (func_0801FAA8) + 0x44 (func_0801FAB8). Offset jangan digeser. */
typedef struct Vtbl1FAB8 {
    u8 _pad0[0x40];
    i32 (*unk40)(void *, i32);
    i32 (*unk44)(void *, i32);
} Vtbl1FAB8;
typedef struct GenObj {
    Vtbl1FAB8 *unk0;
    i32 *unk4;
    i32 unk8;
    u8 _padC[8];
    struct GenObj *unk14;
    u8 _pad18[0x1064];
    i32 unk107C;
} GenObj;
struct Fb7cV {
    void *f0;
    void *f4;
    i32 f8;
};
struct Fb7cObj {
    Fb7cV *vtab;
};

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Fb7cV Fb7cV;
typedef struct Fb7cObj Fb7cObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08010F1C {
    u8 _pad0[3];
    u8 unk3;
} GenObj__func_08010F1C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801140C {
    u8 _pad0[13509];
    u8 unk34C5;
} GenObj__func_0801140C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08011498 {
    u8 _pad0[2];
    u16 unk2;
} GenObj__func_08011498;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080114C8 {
    u8 _pad0[3];
    u8 unk3;
} GenObj__func_080114C8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08011510 {
    i32 unk0;
    i32 unk4;
    u8 unk8;
} GenObj__func_08011510;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08011520 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_08011520;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08011524 {
    u8 _pad0[4];
    i32 unk4;
    u8 unk8;
} GenObj__func_08011524;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08011544 {
    i32 unk0;
    i32 unk4;
    u8 unk8;
} GenObj__func_08011544;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08011550 {
    i32 unk0;
    i32 unk4;
} GenObj__func_08011550;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08011568 {
    i32 unk0;
    i32 unk4;
    u8 unk8;
} GenObj__func_08011568;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08011FE8 {
    void *unk0;
    i32 unk4;
    struct GenObj__func_08011FE8 *unk8;
    u8 _padC[232];
    struct GenObj__func_08011FE8 *unkF4;
} GenObj__func_08011FE8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08012454 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_08012454;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08012658 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[148];
    struct GenObj__func_08012658 *unk9C;
    u8 _padA0[12];
    struct GenObj__func_08012658 *unkAC;
} GenObj__func_08012658;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801274C {
    u8 _pad0[4];
    struct GenObj__func_0801274C *unk4;
    u8 _pad8[164];
    i32 unkAC;
} GenObj__func_0801274C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801278C {
    u8 _pad0[4];
    struct GenObj__func_0801278C *unk4;
    u8 _pad8[164];
    i32 unkAC;
} GenObj__func_0801278C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801284C {
    u8 _pad0[4];
    struct GenObj__func_0801284C *unk4;
    u8 _pad8[164];
    i32 unkAC;
} GenObj__func_0801284C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08012AA4 {
    u8 _pad0[4];
    struct GenObj__func_08012AA4 *unk4;
    u8 _pad8[168];
    struct GenObj__func_08012AA4 *unkB0;
} GenObj__func_08012AA4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08012ADC {
    u8 _pad0[4];
    struct GenObj__func_08012ADC *unk4;
    u8 _pad8[168];
    struct GenObj__func_08012ADC *unkB0;
} GenObj__func_08012ADC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08012B04 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_08012B04;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08012BAC {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[148];
    i32 unk9C;
    u8 _padA0[64];
    u16 unkE0;
} GenObj__func_08012BAC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801468C {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_0801468C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08016784 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_08016784;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080167CC {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080167CC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801A054 {
    struct GenObj__func_0801A054 *unk0;
    struct GenObj__func_0801A054 *unk4;
    u16 unk8;
    u16 unkA;
    u8 _padC[12];
    i32 unk18;
    i32 unk1C;
    u16 unk20;
    u16 unk22;
    u8 _pad26[8];
    struct GenObj__func_0801A054 *unk2C;
    u8 _pad30[4104];
    i32 unk1038;
    u8 _pad103C[20];
    i32 unk1050;
} GenObj__func_0801A054;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct C24 {
    u8 _pad0[8];
    void (*unk8)(void *, i32);
} C24;
typedef struct O24 {
    u8 _pad0[0x24];
    C24 *unk24;
} O24;
typedef struct GenObj__func_0801DCA8 {
    u8 _pad0[0x1058];
    O24 *unk1058;
} GenObj__func_0801DCA8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DD18 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_0801DD18;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DD24 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_0801DD24;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DD30 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_0801DD30;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DDCC {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[4144];
    i32 unk1038;
} GenObj__func_0801DDCC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DDF8 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[4144];
    i32 unk1038;
} GenObj__func_0801DDF8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DE24 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_0801DE24;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DE3C {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_0801DE3C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801F5F0 {
    u8 _pad0[4152];
    i32 unk1038;
} GenObj__func_0801F5F0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801468C GenObj__func_0801468C;
typedef struct GenObj__func_0801DB44 {
    u8 _pad0[4180];
    i32 unk1054;
} GenObj__func_0801DB44;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V14034 {
    u8 _pad0[132];
    void (*unk84)(void *);
} V14034;
typedef struct O14034 {
    V14034 *vt;
} O14034;
typedef struct I14034 {
    u8 _pad0[168];
    O14034 *unkA8;
} I14034;
typedef struct GenObj__func_08014034 {
    u8 _pad0[4];
    I14034 *unk4;
    u8 _pad8[160];
    i32 unkA8;
} GenObj__func_08014034;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Sub08012ACC {
    u8 _pad0[176];
    i32 unkB0;
} Sub08012ACC;
typedef struct GenObj__func_08012ACC {
    u8 _pad0[4];
    Sub08012ACC *unk4;
    u8 _pad8[168];
    i32 unkB0;
} GenObj__func_08012ACC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V1404C {
    u8 _pad0[136];
    void (*unk88)(void *);
} V1404C;
typedef struct O1404C {
    V1404C *vt;
} O1404C;
typedef struct I1404C {
    u8 _pad0[168];
    O1404C *unkA8;
} I1404C;
typedef struct GenObj__func_0801404C {
    u8 _pad0[4];
    I1404C *unk4;
    u8 _pad8[160];
    i32 unkA8;
} GenObj__func_0801404C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V14064 {
    u8 _pad0[140];
    void (*unk8C)(void *);
} V14064;
typedef struct O14064 {
    V14064 *vt;
} O14064;
typedef struct I14064 {
    u8 _pad0[168];
    O14064 *unkA8;
} I14064;
typedef struct GenObj__func_08014064 {
    u8 _pad0[4];
    I14064 *unk4;
    u8 _pad8[160];
    i32 unkA8;
} GenObj__func_08014064;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V1407C {
    u8 _pad0[144];
    void (*unk90)(void *);
} V1407C;
typedef struct O1407C {
    V1407C *vt;
} O1407C;
typedef struct I1407C {
    u8 _pad0[168];
    O1407C *unkA8;
} I1407C;
typedef struct GenObj__func_0801407C {
    u8 _pad0[4];
    I1407C *unk4;
    u8 _pad8[160];
    i32 unkA8;
} GenObj__func_0801407C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V14094 {
    u8 _pad0[148];
    void (*unk94)(void *);
} V14094;
typedef struct O14094 {
    V14094 *vt;
} O14094;
typedef struct I14094 {
    u8 _pad0[168];
    O14094 *unkA8;
} I14094;
typedef struct GenObj__func_08014094 {
    u8 _pad0[4];
    I14094 *unk4;
    u8 _pad8[160];
    i32 unkA8;
} GenObj__func_08014094;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V140AC {
    u8 _pad0[152];
    void (*unk98)(void *);
} V140AC;
typedef struct O140AC {
    V140AC *vt;
} O140AC;
typedef struct I140AC {
    u8 _pad0[168];
    O140AC *unkA8;
} I140AC;
typedef struct GenObj__func_080140AC {
    u8 _pad0[4];
    I140AC *unk4;
    u8 _pad8[160];
    i32 unkA8;
} GenObj__func_080140AC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V140C4 {
    u8 _pad0[156];
    void (*unk9C)(void *, i32);
} V140C4;
typedef struct O140C4 {
    V140C4 *vt;
} O140C4;
typedef struct I140C4 {
    u8 _pad0[168];
    O140C4 *unkA8;
} I140C4;
typedef struct GenObj__func_080140C4 {
    u8 _pad0[4];
    I140C4 *unk4;
} GenObj__func_080140C4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V140DC {
    u8 _pad0[160];
    void (*unkA0)(void *, i32);
} V140DC;
typedef struct O140DC {
    V140DC *vt;
} O140DC;
typedef struct I140DC {
    u8 _pad0[168];
    O140DC *unkA8;
} I140DC;
typedef struct GenObj__func_080140DC {
    u8 _pad0[4];
    I140DC *unk4;
} GenObj__func_080140DC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V140F4 {
    u8 _pad0[128];
    void (*unk80)(void *);
} V140F4;
typedef struct O140F4 {
    V140F4 *vt;
} O140F4;
typedef struct I140F4 {
    u8 _pad0[168];
    O140F4 *unkA8;
} I140F4;
typedef struct GenObj__func_080140F4 {
    u8 _pad0[4];
    I140F4 *unk4;
    u8 _pad8[160];
    i32 unkA8;
} GenObj__func_080140F4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct R1410C R1410C;
typedef struct T2_1410C {
    u8 _pad0[64];
    i32 (*unk40)(R1410C *);
} T2_1410C;
struct R1410C {
    u8 _pad0[20];
    T2_1410C *unk14;
};
typedef struct VtA1410C {
    u8 _pad0[64];
    R1410C *(*unk40)(void *, i32);
} VtA1410C;
typedef struct OA1410C {
    VtA1410C *vt;
} OA1410C;
typedef struct IA1410C {
    u8 _pad0[168];
    OA1410C *unkA8;
} IA1410C;
typedef struct GenObj__func_0801410C {
    u8 _pad0[4];
    IA1410C *unk4;
} GenObj__func_0801410C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct R1412C R1412C;
typedef struct T2_1412C {
    u8 _pad0[72];
    i32 (*unk48)(R1412C *);
} T2_1412C;
struct R1412C {
    u8 _pad0[20];
    T2_1412C *unk14;
};
typedef struct VtA1412C {
    u8 _pad0[64];
    R1412C *(*unk40)(void *, i32);
} VtA1412C;
typedef struct OA1412C {
    VtA1412C *vt;
} OA1412C;
typedef struct T4_1412C {
    u8 _pad0[156];
    i32 unk9C;
    u8 _padA0[8];
    OA1412C *unkA8;
} T4_1412C;
typedef struct GenObj__func_0801412C {
    u8 _pad0[4];
    T4_1412C *unk4;
} GenObj__func_0801412C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct R14198 R14198;
typedef struct T2_14198 {
    u8 _pad0[96];
    void (*unk60)(R14198 *);
} T2_14198;
struct R14198 {
    u8 _pad0[20];
    T2_14198 *unk14;
};
typedef struct VtA14198 {
    u8 _pad0[64];
    R14198 *(*unk40)(void *, i32);
} VtA14198;
typedef struct OA14198 {
    VtA14198 *vt;
} OA14198;
typedef struct T4_14198 {
    u8 _pad0[156];
    i32 unk9C;
    u8 _padA0[8];
    OA14198 *unkA8;
} T4_14198;
typedef struct GenObj__func_08014198 {
    u8 _pad0[4];
    T4_14198 *unk4;
} GenObj__func_08014198;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct R141C4 R141C4;
typedef struct T2_141C4 {
    u8 _pad0[76];
    void (*unk4C)(R141C4 *);
} T2_141C4;
struct R141C4 {
    u8 _pad0[20];
    T2_141C4 *unk14;
};
typedef struct VtA141C4 {
    u8 _pad0[64];
    R141C4 *(*unk40)(void *, i32);
} VtA141C4;
typedef struct OA141C4 {
    VtA141C4 *vt;
} OA141C4;
typedef struct T4_141C4 {
    u8 _pad0[156];
    i32 unk9C;
    u8 _padA0[8];
    OA141C4 *unkA8;
} T4_141C4;
typedef struct GenObj__func_080141C4 {
    u8 _pad0[4];
    T4_141C4 *unk4;
} GenObj__func_080141C4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct R141EC R141EC;
typedef struct T2_141EC {
    u8 _pad0[80];
    void (*unk50)(R141EC *);
} T2_141EC;
struct R141EC {
    u8 _pad0[20];
    T2_141EC *unk14;
};
typedef struct VtA141EC {
    u8 _pad0[64];
    R141EC *(*unk40)(void *, i32);
} VtA141EC;
typedef struct OA141EC {
    VtA141EC *vt;
} OA141EC;
typedef struct T4_141EC {
    u8 _pad0[156];
    i32 unk9C;
    u8 _padA0[8];
    OA141EC *unkA8;
} T4_141EC;
typedef struct GenObj__func_080141EC {
    u8 _pad0[4];
    T4_141EC *unk4;
} GenObj__func_080141EC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V14234 {
    u8 _pad0[164];
    i32 (*unkA4)(void *);
} V14234;
typedef struct O14234 {
    V14234 *vt;
} O14234;
typedef struct I14234 {
    u8 _pad0[168];
    O14234 *unkA8;
} I14234;
typedef struct GenObj__func_08014234 {
    u8 _pad0[4];
    I14234 *unk4;
    u8 _pad8[160];
    i32 unkA8;
} GenObj__func_08014234;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V1424C {
    u8 _pad0[168];
    i32 (*unkA8)(void *, i32);
} V1424C;
typedef struct O1424C {
    V1424C *vt;
} O1424C;
typedef struct I1424C {
    u8 _pad0[168];
    O1424C *unkA8;
} I1424C;
typedef struct GenObj__func_0801424C {
    u8 _pad0[4];
    I1424C *unk4;
} GenObj__func_0801424C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct R14264 R14264;
typedef struct T2_14264 {
    u8 _pad0[56];
    void (*unk38)(R14264 *, i32);
} T2_14264;
struct R14264 {
    u8 _pad0[20];
    T2_14264 *unk14;
};
typedef struct VtA14264 {
    u8 _pad0[64];
    R14264 *(*unk40)(void *, i32);
} VtA14264;
typedef struct OA14264 {
    VtA14264 *vt;
} OA14264;
typedef struct T4_14264 {
    u8 _pad0[156];
    i32 unk9C;
    u8 _padA0[8];
    OA14264 *unkA8;
} T4_14264;
typedef struct GenObj__func_08014264 {
    u8 _pad0[4];
    T4_14264 *unk4;
} GenObj__func_08014264;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct R14290 R14290;
typedef struct T2_14290 {
    u8 _pad0[56];
    void (*unk38)(R14290 *, i32);
} T2_14290;
struct R14290 {
    u8 _pad0[20];
    T2_14290 *unk14;
};
typedef struct VtA14290 {
    u8 _pad0[64];
    R14290 *(*unk40)(void *, i32);
} VtA14290;
typedef struct OA14290 {
    VtA14290 *vt;
} OA14290;
typedef struct T4_14290 {
    u8 _pad0[156];
    i32 unk9C;
    u8 _padA0[8];
    OA14290 *unkA8;
} T4_14290;
typedef struct GenObj__func_08014290 {
    u8 _pad0[4];
    T4_14290 *unk4;
} GenObj__func_08014290;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Inner142F0 { u8 _pad0[140]; void *unk8C; } Inner142F0;
typedef struct GenObj__func_080142F0 {
    u8 _pad0[4];
    Inner142F0 *unk4;
} GenObj__func_080142F0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Inner14304 { u8 _pad0[140]; void *unk8C; } Inner14304;
typedef struct GenObj__func_08014304 {
    u8 _pad0[4];
    Inner14304 *unk4;
} GenObj__func_08014304;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DD78 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_0801DD78;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0801DE48 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_0801DE48;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Mid08016BDC { u8 _pad0[168]; void **unkA8; } Mid08016BDC;
typedef struct GenObj__func_08016BDC { u8 _pad0[4]; Mid08016BDC *unk4; } GenObj__func_08016BDC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08014214 {
    void *unk0;
    struct GenObj__func_08014214 *unk4;
    u8 _pad8[12];
    struct GenObj__func_08014214 *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[16];
    void *unk54;
    u8 _pad58[80];
    struct GenObj__func_08014214 *unkA8;
} GenObj__func_08014214;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080158CC {
    void *unk0;
    struct GenObj__func_080158CC *unk4;
    u8 _pad8[12];
    struct GenObj__func_080158CC *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[60];
    void *unk80;
    u8 _pad84[24];
    i32 unk9C;
    u8 _padA0[8];
    struct GenObj__func_080158CC *unkA8;
} GenObj__func_080158CC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080158F8 {
    void *unk0;
    struct GenObj__func_080158F8 *unk4;
    u8 _pad8[12];
    struct GenObj__func_080158F8 *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[56];
    void *unk7C;
    u8 _pad80[28];
    i32 unk9C;
    u8 _padA0[8];
    struct GenObj__func_080158F8 *unkA8;
} GenObj__func_080158F8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08016E9C {
    void *unk0;
    struct GenObj__func_08016E9C *unk4;
    u8 _pad8[12];
    struct GenObj__func_08016E9C *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[44];
    void *unk70;
    u8 _pad74[40];
    i32 unk9C;
    u8 _padA0[8];
    struct GenObj__func_08016E9C *unkA8;
} GenObj__func_08016E9C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08016CAC {
    void *unk0;
    struct GenObj__func_08016CAC *unk4;
    u8 _pad8[12];
    struct GenObj__func_08016CAC *unk14;
    u8 _pad18[40];
    void *unk40;
    u8 _pad44[100];
    void *unkA8;
} GenObj__func_08016CAC;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_08010348 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 rand();                                         /* extern */

__attribute__((section(".text.game_state.08010348")))
i32 func_08010348(void) {
    i32 r;
    do {
        r = rand();
    } while (r == 0);
    return r;
}
}

// DECOMP-MATCHED func_08010E48 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010E48")))
u32 func_08010E48(u8 *arg0) {
    return (u32) (*arg0 << 0x1F) >> 0x1F;
}
}

// DECOMP-MATCHED func_08010E50 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010E50")))
u32 func_08010E50(u8 *arg0) {
    return (u32) (*arg0 << 0x1E) >> 0x1F;
}
}

// DECOMP-MATCHED func_08010E58 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010E58")))
u32 func_08010E58(u8 *arg0) {
    return (u32) (*arg0 << 0x1D) >> 0x1F;
}
}

// DECOMP-MATCHED func_08010E60 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010E60")))
u32 func_08010E60(u8 *arg0) {
    return (u32) (*arg0 << 0x1C) >> 0x1F;
}
}

// DECOMP-MATCHED func_08010F04 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010F04")))
u32 func_08010F04(u8 *arg0) {
    return (u32) (*arg0 << 0x1B) >> 0x1F;
}
}

// DECOMP-MATCHED func_08010F0C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010F0C")))
u32 func_08010F0C(i32 *arg0) {
    return (u32) (*arg0 << 0xE) >> 0x1B;
}
}

// DECOMP-MATCHED gData_game_state_08010F14.data.08010F14
extern "C" {
// data tak-dirujuk di 0x08010F14 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_game_state_08010F14[8] __attribute__((section(".text.game_state.08010F14"))) = {0x40, 0x88, 0xC0, 0x05, 0x40, 0x0E, 0x70, 0x47};
}

// DECOMP-MATCHED func_08010F1C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08010F1C")))
u32 func_08010F1C(GenObj__func_08010F1C *arg0) {
    return (u32) (arg0->unk3 << 0x19) >> 0x1A;
}
}

// DECOMP-MATCHED func_08010F24 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010F24")))
void func_08010F24(u8 *arg0) {
    *arg0 |= 1;
}
}

// DECOMP-MATCHED func_08010F30 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010F30")))
void func_08010F30(u8 *arg0) {
    *arg0 |= 2;
}
}

// DECOMP-MATCHED func_08010F3C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010F3C")))
void func_08010F3C(u8 *arg0) {
    *arg0 |= 4;
}
}

// DECOMP-MATCHED func_08010F48 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08010F48")))
void func_08010F48(u8 *arg0) {
    *arg0 |= 8;
}
}

// DECOMP-MATCHED func_0801140C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetValueShipped__C11ShippingBin(i32);           /* extern */
i32 ResetValueShipped__11ShippingBin(i32);            /* extern */
i32 func_0809ABD8(i32, i32);                          /* extern */

__attribute__((section(".text.game_state.0801140C")))
u32 func_0801140C(GenObj__func_0801140C *arg0) {
    i32 temp_r0;
    i32 temp_r6;
    i32 temp_r7;

    temp_r7 = (i32)((u8 *)arg0 + 0x54);
    temp_r0 = GetValueShipped__C11ShippingBin(temp_r7);
    temp_r6 = (i32)((u8 *)arg0 + 0x1AA8);
    func_0809ABD8(temp_r6, temp_r0);
    if (arg0->unk34C5 != 0) {
        func_0809ABD8(temp_r6, temp_r0);
        arg0->unk34C5 = 0U;
    }
    ResetValueShipped__11ShippingBin(temp_r7);
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}
}

// DECOMP-MATCHED func_08011458 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08011458")))
void func_08011458(u8 *arg0) {
    *arg0 |= 0x10;
}
}

// DECOMP-MATCHED func_08011464 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08011464")))
i32 func_08011464(i32 *arg0, u32 arg1) {
    register i32 *ptr __asm__ ("r4") = arg0;
    register u32 var_r2 __asm__ ("r2") = arg1;
    register i32 temp_r3 __asm__ ("r3");
    register i32 shift __asm__ ("r1");
    i32 mask;

    if (var_r2 > 0x63U) {
        var_r2 = 0x63;
    }
    temp_r3 = *ptr;
    if ((u32) ((u32) (temp_r3 << 0xE) >> 0x1B) < var_r2) {
        shift = 0x1F;
        shift &= var_r2;
        shift <<= 0xD;
        mask = 0xFFFC1FFF;
        mask &= temp_r3;
        *ptr = shift | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE worker-11464: register-pin r4/r2/r3/r1 agar push{r4,lr}+regalloc pas; pola store tiru 11498 (shift-var, mask-var). */
}

// DECOMP-MATCHED func_08011498 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08011498")))
i32 func_08011498(GenObj__func_08011498 *arg0, u32 arg1) {
    u32 var_r1;
    u16 temp_r2;
    u32 mask;

    var_r1 = arg1;
    if (var_r1 > 0x63U) {
        var_r1 = 0x63;
    }
    temp_r2 = arg0->unk2;
    if ((u32) ((u32) (temp_r2 << 0x17) >> 0x19) < var_r1) {
        var_r1 &= 0x7F;
        var_r1 *= 4;
        mask = 0xFFFFFE03;
        mask &= temp_r2;
        arg0->unk2 = var_r1 | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE opencode: b via andeq/muleq (r1) + mask-var andeq (dst r0): ands r0,r2 + orrs r0,r1. */
}

// DECOMP-MATCHED func_080114C8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080114C8")))
i32 func_080114C8(GenObj__func_080114C8 *arg0, u32 arg1) {
    u32 var_r1;
    u8 temp_r2;
    i32 mask;
    i32 seven = 0x7F;

    var_r1 = arg1;
    if (var_r1 > 0x63U) {
        var_r1 = 0x63;
    }
    temp_r2 = arg0->unk3;
    if ((u32) ((u32) (temp_r2 << 0x19) >> 0x1A) < var_r1) {
        var_r1 &= 0x3F;
        var_r1 *= 2;
        mask = seven;
        mask = 0 - mask;
        mask &= temp_r2;
        arg0->unk3 = var_r1 | mask;
        return 1;
    } else {
        return 0;
    }
}

/* ATTEMPT-NOTE opencode: seven-var cegah fold subs (movs+negs); mask-var andeq dst r0. */
}

// DECOMP-MATCHED func_080114F8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.080114F8")))
void func_080114F8(u8 *arg0) {
    i32 v;
    i32 w;
    w = *arg0;
    v = -2;
    v &= w;
    v |= 2;
    v |= 4;
    v |= 8;
    *arg0 = v;
}
}

// DECOMP-MATCHED func_08011510 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08011510")))
void func_08011510(GenObj__func_08011510 *arg0) {
    arg0->unk0 = 0x10;
    arg0->unk4 = 0x10;
    arg0->unk8 = 0;
}
}

// DECOMP-MATCHED func_0801151C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.0801151C")))
i32 func_0801151C(i32 *arg0) {
    return *arg0;
}
}

// DECOMP-MATCHED func_08011520 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08011520")))
i32 func_08011520(GenObj__func_08011520 *arg0) {
    return arg0->unk4;
}
}

// DECOMP-MATCHED func_08011524 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08011524")))
i32 func_08011524(GenObj__func_08011524 *arg0) {
    i32 var_r2;

    var_r2 = 0;
    if ((arg0->unk4 != 0x10) && (arg0->unk8 == 0)) {
        var_r2 = 1;
    }
    return var_r2;
}
}

// DECOMP-MATCHED func_08011540 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08011540")))
void func_08011540(i32 *arg0, i32 arg1) {
    *arg0 = arg1;
}
}

// DECOMP-MATCHED func_08011544 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08011544")))
void func_08011544(GenObj__func_08011544 *arg0) {
    arg0->unk4 = (i32) arg0->unk0;
    arg0->unk8 = 2;
}
}

// DECOMP-MATCHED func_08011550 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08011550")))
void func_08011550(GenObj__func_08011550 *arg0) {
    if (arg0->unk4 == arg0->unk0) {
        arg0->unk0 = 0x10;
    }
    arg0->unk4 = 0x10;
}
}

// DECOMP-MATCHED func_08011568 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08011568")))
void func_08011568(GenObj__func_08011568 *arg0) {
    if ((arg0->unk0 != 0x10) && (arg0->unk4 != 0x10) && (arg0->unk8 != 0)) {
        arg0->unk8--;
    }
}
}
// DECOMP-MATCHED func_08011588 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08011588")))
i32 func_08011588(u8 *arg0, i32 arg1) {
    i32 sum = 0;
    u8 *p;
    i32 n;
    if ((arg0 != 0) && (arg1 != 0)) {
        p = arg0;
        n = arg1;
        do {
            sum += *p;
            p++;
            n--;
        } while (n != 0);
    }
    return sum;
}
}

// DECOMP-MATCHED gData_game_state_08011ED8.data.08011ED8
extern "C" {
// data tak-dirujuk di 0x08011ED8 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_game_state_08011ED8[272] __attribute__((section(".text.game_state.08011ED8"))) = {0xF0, 0xB5, 0x85, 0xB0, 0x05, 0x1C, 0x0E, 0x1C, 0x3B, 0x48, 0x28, 0x60, 0xF8, 0x20, 0xEE, 0xF7, 0x75, 0xFB, 0x07, 0x1C, 0x02, 0x20, 0x00, 0x90, 0x39, 0x1C, 0xF4, 0x31, 0x37, 0x48, 0x08, 0x60, 0x00, 0x24, 0x3C, 0x60, 0x7C, 0x60, 0x38, 0x1C, 0x08, 0x30, 0x44, 0x60, 0x08, 0x30, 0xF7, 0xF7, 0xD3, 0xFB, 0x38, 0x1C, 0x68, 0x30, 0xF6, 0xF7, 0x37, 0xFD, 0x3A, 0x1C, 0x6C, 0x32, 0xFC, 0x66, 0x54, 0x60, 0x2F, 0x48, 0x90, 0x60, 0x39, 0x1C, 0x7C, 0x31, 0xD1, 0x60, 0xFC, 0x67, 0x4C, 0x60, 0x2C, 0x48, 0x88, 0x60, 0x38, 0x1C, 0x78, 0x30, 0x10, 0x61, 0x51, 0x61, 0x10, 0x30, 0x05, 0x60, 0x04, 0x30, 0x06, 0x60, 0x14, 0x31, 0x68, 0x46, 0x4C, 0xC8, 0x4C, 0xC1, 0x38, 0x1C, 0xA0, 0x30, 0x04, 0x60, 0x04, 0x30, 0x04, 0x60, 0x04, 0x30, 0x04, 0x60, 0x04, 0x30, 0x04, 0x60, 0x04, 0x30, 0x04, 0x60, 0x04, 0x30, 0x04, 0x60, 0x04, 0x30, 0x04, 0x60, 0x04, 0x30, 0x00, 0x21, 0xF6, 0xF7, 0xF5, 0xFD, 0x38, 0x1C, 0xC0, 0x30, 0x01, 0x21, 0xF6, 0xF7, 0xF0, 0xFD, 0x38, 0x1C, 0xC4, 0x30, 0x02, 0x21, 0xF6, 0xF7, 0xEB, 0xFD, 0x38, 0x1C, 0xC8, 0x30, 0x03, 0x21, 0xF6, 0xF7, 0xE6, 0xFD, 0x38, 0x1C, 0xCC, 0x30, 0x04, 0x21, 0xF6, 0xF7, 0xE1, 0xFD, 0x38, 0x1C, 0xD0, 0x30, 0x04, 0x60, 0x44, 0x60, 0x08, 0x30, 0x44, 0x60, 0x10, 0x30, 0x04, 0x70, 0x02, 0x30, 0x04, 0x70, 0x06, 0x30, 0x04, 0x60, 0xB8, 0x8A, 0x08, 0x21, 0x08, 0x43, 0xB8, 0x82, 0x0B, 0x49, 0x08, 0x80, 0x6F, 0x60, 0x0A, 0x48, 0x00, 0x68, 0x08, 0x30, 0x29, 0x1C, 0x2D, 0xF0, 0x6E, 0xFC, 0x28, 0x1C, 0x05, 0xB0, 0xF0, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00, 0x64, 0x5E, 0x0E, 0x08, 0x08, 0x5C, 0x0E, 0x08, 0xB4, 0x5B, 0x0E, 0x08, 0xD8, 0x5B, 0x0E, 0x08, 0x04, 0x00, 0x00, 0x04, 0x0C, 0x04, 0x00, 0x03};
}

// DECOMP-MATCHED func_08011FE8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 ClearUnk__12ScriptEngine(i32);                    /* extern */
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 gUnk_0300040C;
extern i32 vtable_unk_080E5E64;

__attribute__((section(".text.game_state.08011FE8")))
void func_08011FE8(GenObj__func_08011FE8 *arg0, i32 arg1) {
    GenObj__func_08011FE8 *temp_r1;

    arg0->unk0 = &vtable_unk_080E5E64;
    ClearUnk__12ScriptEngine(gUnk_0300040C + 8);
    temp_r1 = (GenObj__func_08011FE8 *) arg0->unk4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unkF4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08012218 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.08012218")))
void func_08012218(void) {

}
}

// DECOMP-MATCHED func_08012454 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008BE0(i32);                               /* extern */

__attribute__((section(".text.game_state.08012454")))
void func_08012454(GenObj__func_08012454 *arg0) {
    func_08008BE0(arg0->unk4 + 0xBC);
}
}

// DECOMP-MATCHED func_080124C4 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008DE8();                                  /* extern */

__attribute__((section(".text.game_state.080124C4")))
void func_080124C4(void) {
    func_08008DE8();
}
}

// DECOMP-MATCHED func_08012658 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050D74();                                  /* extern */
i32 func_080D7F60(void *);                            /* extern */
i32 func_080D7F74(void *);                            /* extern */
i32 func_080D7F88(void *);                            /* extern */

__attribute__((section(".text.game_state.08012658")))
void func_08012658(GenObj__func_08012658 *arg0) {
    GenObj__func_08012658 *temp_r4;

    temp_r4 = (GenObj__func_08012658 *)arg0->unk4;
    if (temp_r4->unkAC != 0) {
        func_08050D74();
        func_080D7F88(temp_r4);
        func_080D7F74(temp_r4);
        func_080D7F60(temp_r4);
        temp_r4->unk9C = (struct GenObj__func_08012658 *)0xF;
    }
}
}

// DECOMP-MATCHED func_0801274C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050E74();                                  /* extern */

__attribute__((section(".text.game_state.0801274C")))
void func_0801274C(GenObj__func_0801274C *arg0) {
    if (arg0->unk4->unkAC != 0) {
        func_08050E74();
    }
}
}

// DECOMP-MATCHED func_0801278C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050E5C();                                  /* extern */

__attribute__((section(".text.game_state.0801278C")))
void func_0801278C(GenObj__func_0801278C *arg0) {
    if (arg0->unk4->unkAC != 0) {
        func_08050E5C();
    }
}
}

// DECOMP-MATCHED func_0801284C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050E8C();                                  /* extern */

__attribute__((section(".text.game_state.0801284C")))
void func_0801284C(GenObj__func_0801284C *arg0) {
    if (arg0->unk4->unkAC != 0) {
        func_08050E8C();
    }
}
}

// DECOMP-MATCHED func_08012AA4 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
void func_0803B6B8(i32, i32, i32);                        /* extern (truth: src/code_0803A8A4.cc) */
i32 func_0804EC84(i32, i32 *, i32);                     /* extern */

__attribute__((section(".text.game_state.08012AA4")))
void func_08012AA4(GenObj__func_08012AA4 *arg0, i32 arg1, i32 arg2) {
u8 sp0[0x34];
    GenObj__func_08012AA4 *temp_r4;

    temp_r4 = (GenObj__func_08012AA4 *)arg0->unk4;
    func_0804EC84(arg2, (i32 *)(&sp0), 0);
    func_0803B6B8((i32)(temp_r4->unkB0), arg1, (i32)(&sp0));
}
}

// DECOMP-MATCHED func_08012ACC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
void func_0803B6B8(i32, i32, i32);                        /* extern (truth di src/code_0803A8A4.cc) */

__attribute__((section(".text.game_state.08012ACC")))
void func_08012ACC(GenObj__func_08012ACC *arg0, i32 arg1, i32 arg2) {
    func_0803B6B8((i32)(arg0->unk4->unkB0), arg1, arg2);
}

/* ATTEMPT-NOTE manual: unk4 -> struct dalam (i32 di +0xB0), bukan void*. */
}

// DECOMP-MATCHED func_08012ADC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
void func_0803B6B8(i32, i32, i32);                        /* extern (truth: src/code_0803A8A4.cc) */
i32 func_0804EC84(i32, i32 *, i32);                     /* extern */

__attribute__((section(".text.game_state.08012ADC")))
void func_08012ADC(GenObj__func_08012ADC *arg0, i32 arg1, i32 arg2, i32 arg3) {
u8 sp0[0x34];
    GenObj__func_08012ADC *temp_r4;

    temp_r4 = (GenObj__func_08012ADC *)arg0->unk4;
    func_0804EC84(arg2, (i32 *)(&sp0), arg3);
    func_0803B6B8((i32)(temp_r4->unkB0), arg1, (i32)(&sp0));
}
}

// DECOMP-MATCHED func_08012B04 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 LoadById__12ScriptEngineii(i32);                  /* extern */
i32 func_080D7F3C(i32);                               /* extern */
extern i32 gUnk_0300040C;

__attribute__((section(".text.game_state.08012B04")))
void func_08012B04(GenObj__func_08012B04 *arg0) {
    i32 temp_r4;

    temp_r4 = arg0->unk4;
    LoadById__12ScriptEngineii(gUnk_0300040C + 8);
    func_080D7F3C(temp_r4);
}
}

// DECOMP-MATCHED func_08012BAC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08012BAC")))
void func_08012BAC(GenObj__func_08012BAC *arg0, i16 arg1) {
    GenObj__func_08012BAC *temp_r0;

    temp_r0 = (GenObj__func_08012BAC *)arg0->unk4;
    temp_r0->unkE0 = arg1;
    temp_r0->unk9C = 0x15;
}

/* ATTEMPT-NOTE opencode: unkE0 u16 (strh). */
}

// DECOMP-MATCHED func_08014034 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014034")))
void func_08014034(GenObj__func_08014034 *arg0) {
    O14034 *o = arg0->unk4->unkA8;
    o->vt->unk84(o);
}

/* ATTEMPT-NOTE manual: unk4 -> struct dalam (obj di +0xA8); vcall 1-arg (r0 tetap). */
}
// DECOMP-MATCHED func_0801404C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.0801404C")))
void func_0801404C(GenObj__func_0801404C *arg0) {
    O1404C *o = arg0->unk4->unkA8;
    o->vt->unk88(o);
}

/* ATTEMPT-NOTE manual: pola 08014034; vcall 1-arg di +0x88. */
}
// DECOMP-MATCHED func_08014064 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014064")))
void func_08014064(GenObj__func_08014064 *arg0) {
    O14064 *o = arg0->unk4->unkA8;
    o->vt->unk8C(o);
}

/* ATTEMPT-NOTE manual: pola 08014034; vcall 1-arg di +0x8C. */
}
// DECOMP-MATCHED func_0801407C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.0801407C")))
void func_0801407C(GenObj__func_0801407C *arg0) {
    O1407C *o = arg0->unk4->unkA8;
    o->vt->unk90(o);
}

/* ATTEMPT-NOTE manual: pola 08014034; vcall 1-arg di +0x90. */
}
// DECOMP-MATCHED func_08014094 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014094")))
void func_08014094(GenObj__func_08014094 *arg0) {
    O14094 *o = arg0->unk4->unkA8;
    o->vt->unk94(o);
}

/* ATTEMPT-NOTE manual: pola 08014034; vcall 1-arg di +0x94. */
}
// DECOMP-MATCHED func_080140AC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080140AC")))
void func_080140AC(GenObj__func_080140AC *arg0) {
    O140AC *o = arg0->unk4->unkA8;
    o->vt->unk98(o);
}

/* ATTEMPT-NOTE manual: pola 08014034; vcall 1-arg di +0x98. */
}
// DECOMP-MATCHED func_080140C4 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080140C4")))
void func_080140C4(GenObj__func_080140C4 *arg0, i32 arg1) {
    O140C4 *o = arg0->unk4->unkA8;
    o->vt->unk9C(o, arg1);
}

/* ATTEMPT-NOTE manual: vcall 2-arg (arg1 passthrough di r1); tabel di r2. */
}
// DECOMP-MATCHED func_080140DC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080140DC")))
void func_080140DC(GenObj__func_080140DC *arg0, i32 arg1) {
    O140DC *o = arg0->unk4->unkA8;
    o->vt->unkA0(o, arg1);
}

/* ATTEMPT-NOTE manual: vcall 2-arg (arg1 passthrough di r1); tabel di r2. */
}
// DECOMP-MATCHED func_080140F4 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080140F4")))
void func_080140F4(GenObj__func_080140F4 *arg0) {
    O140F4 *o = arg0->unk4->unkA8;
    o->vt->unk80(o);
}

/* ATTEMPT-NOTE manual: pola 08014034; vcall 1-arg di +0x80. */
}
// DECOMP-MATCHED func_0801410C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.0801410C")))
i32 func_0801410C(GenObj__func_0801410C *arg0) {
    OA1410C *o = arg0->unk4->unkA8;
    R1410C *tmp = o->vt->unk40(o, 0);
    return tmp->unk14->unk40(tmp);
}

/* ATTEMPT-NOTE manual: rantai vcall ganda; fnA(o,0)->R; fnB(R). */
}
// DECOMP-MATCHED func_0801412C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.0801412C")))
i32 func_0801412C(GenObj__func_0801412C *arg0) {
    T4_1412C *temp_r4;
    OA1412C *o;
    R1412C *tmp;
    i32 var_r0;

    temp_r4 = (T4_1412C *)(arg0->unk4);
    o = (OA1412C *)(temp_r4->unkA8);
    tmp = o->vt->unk40(o, 0);
    if ((tmp->unk14->unk48(tmp) << 0x18) != 0) {
        temp_r4->unk9C = 0x19;
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}

/* ATTEMPT-NOTE manual: rantai vcall + store word 0x19 di +0x9C. */
}

// DECOMP-MATCHED func_08014198 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014198")))
i32 func_08014198(GenObj__func_08014198 *arg0) {
    T4_14198 *temp_r4;
    OA14198 *o;
    R14198 *tmp;

    temp_r4 = (T4_14198 *)(arg0->unk4);
    o = (OA14198 *)(temp_r4->unkA8);
    tmp = o->vt->unk40(o, 0);
    tmp->unk14->unk60(tmp);
    temp_r4->unk9C = 0x19;
    return 1;
}

/* ATTEMPT-NOTE manual: rantai vcall + store word 0x19 in-place. */
}
// DECOMP-MATCHED func_080141C4 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080141C4")))
void func_080141C4(GenObj__func_080141C4 *arg0) {
    T4_141C4 *temp_r4;
    OA141C4 *o;
    R141C4 *tmp;

    temp_r4 = (T4_141C4 *)(arg0->unk4);
    o = (OA141C4 *)(temp_r4->unkA8);
    tmp = o->vt->unk40(o, 0);
    tmp->unk14->unk4C(tmp);
    temp_r4->unk9C = 0x19;
}

/* ATTEMPT-NOTE manual: rantai vcall + store word 0x19 in-place. */
}
// DECOMP-MATCHED func_080141EC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080141EC")))
void func_080141EC(GenObj__func_080141EC *arg0) {
    T4_141EC *temp_r4;
    OA141EC *o;
    R141EC *tmp;

    temp_r4 = (T4_141EC *)(arg0->unk4);
    o = (OA141EC *)(temp_r4->unkA8);
    tmp = o->vt->unk40(o, 0);
    tmp->unk14->unk50(tmp);
    temp_r4->unk9C = 0x19;
}

/* ATTEMPT-NOTE manual: rantai vcall + store word 0x19 in-place. */
}

// DECOMP-MATCHED func_08014214 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014214")))
void func_08014214(GenObj__func_08014214 *arg0) {
    GenObj__func_08014214 *t;
    GenObj__func_08014214 *m;
    GenObj__func_08014214 *x;
    t = arg0->unk4->unkA8;
    m = (GenObj__func_08014214 *)(t->unk0);
    x = ((GenObj__func_08014214 *(*)(GenObj__func_08014214 *, i32))(m->unk40))(t, 0);
    ((void (*)(GenObj__func_08014214 *))(x->unk14->unk54))(x);
}
}

// DECOMP-MATCHED func_08014234 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014234")))
i32 func_08014234(GenObj__func_08014234 *arg0) {
    O14234 *o = arg0->unk4->unkA8;
    return o->vt->unkA4(o);
}

/* ATTEMPT-NOTE manual: pola 08014034; vcall 1-arg di +0xA4. */
}
// DECOMP-MATCHED func_0801424C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.0801424C")))
i32 func_0801424C(GenObj__func_0801424C *arg0, i32 arg1) {
    O1424C *o = arg0->unk4->unkA8;
    return o->vt->unkA8(o, arg1);
}

/* ATTEMPT-NOTE manual: vcall 2-arg (arg1 passthrough); tabel di r2. */
}
// DECOMP-MATCHED func_08014264 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014264")))
void func_08014264(GenObj__func_08014264 *arg0, i32 arg1, i32 arg2) {
    T4_14264 *t = arg0->unk4;
    R14264 *tmp = t->unkA8->vt->unk40(t->unkA8, arg1);
    if (tmp != 0) {
        tmp->unk14->unk38(tmp, arg2);
    }
}

/* ATTEMPT-NOTE manual: 3-arg; fnA(o,arg1)->R; fnB(R,arg2). */
}
// DECOMP-MATCHED func_08014290 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014290")))
void func_08014290(GenObj__func_08014290 *arg0, i32 arg1) {
    T4_14290 *t = arg0->unk4;
    R14290 *tmp = t->unkA8->vt->unk40(t->unkA8, arg1);
    if (tmp != 0) {
        tmp->unk14->unk38(tmp, 0);
    }
}

/* ATTEMPT-NOTE manual: fnA(o,arg1)->R; fnB(R,0). */
}

// DECOMP-MATCHED func_080142F0 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080142F0")))
void func_080142F0(GenObj__func_080142F0 *arg0) {
    ((u8 *)arg0->unk4->unk8C)[0x34C4] = 1;
}
}
// DECOMP-MATCHED func_08014304 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08014304")))
void func_08014304(GenObj__func_08014304 *arg0) {
    ((u8 *)arg0->unk4->unk8C)[0x34C4] = 0;
}
}

// DECOMP-MATCHED func_0801468C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.0801468C")))
i32 func_0801468C(GenObj__func_0801468C *arg0) {
    return arg0->unk4 + 0xD0;
}
}

// DECOMP-MATCHED gData_game_state_08016758.data.08016758
extern "C" {
// data tak-dirujuk di 0x08016758 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_game_state_08016758[44] __attribute__((section(".text.game_state.08016758"))) = {0x10, 0xB5, 0x40, 0x68, 0x04, 0x1C, 0xBC, 0x34, 0xA8, 0x30, 0x00, 0x68, 0x01, 0x68, 0xA4, 0x22, 0x52, 0x00, 0x89, 0x18, 0x09, 0x68, 0xBD, 0xF0, 0xCF, 0xF8, 0x01, 0x1C, 0x09, 0x04, 0x09, 0x0C, 0x20, 0x1C, 0xF2, 0xF7, 0x05, 0xFA, 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47};
}

// DECOMP-MATCHED func_080158CC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080158CC")))
void func_080158CC(GenObj__func_080158CC *arg0) {
    GenObj__func_080158CC *temp_r4;
    GenObj__func_080158CC *t;
    GenObj__func_080158CC *m;
    GenObj__func_080158CC *x;
    temp_r4 = (GenObj__func_080158CC *)(arg0->unk4);
    t = (GenObj__func_080158CC *)(temp_r4->unkA8);
    m = (GenObj__func_080158CC *)(t->unk0);
    x = ((GenObj__func_080158CC *(*)(GenObj__func_080158CC *, i32))(m->unk40))(t, 0);
    ((void (*)(GenObj__func_080158CC *))(x->unk14->unk80))(x);
    temp_r4->unk9C = 0x19;
}
}
// DECOMP-MATCHED func_080158F8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.080158F8")))
void func_080158F8(GenObj__func_080158F8 *arg0) {
    GenObj__func_080158F8 *temp_r4;
    GenObj__func_080158F8 *t;
    GenObj__func_080158F8 *m;
    GenObj__func_080158F8 *x;
    temp_r4 = (GenObj__func_080158F8 *)(arg0->unk4);
    t = (GenObj__func_080158F8 *)(temp_r4->unkA8);
    m = (GenObj__func_080158F8 *)(t->unk0);
    x = ((GenObj__func_080158F8 *(*)(GenObj__func_080158F8 *, i32))(m->unk40))(t, 0);
    ((void (*)(GenObj__func_080158F8 *))(x->unk14->unk7C))(x);
    temp_r4->unk9C = 0x19;
}
}

// DECOMP-MATCHED func_08016784 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008BF8(i32, i32);                          /* extern */
i32 func_08008CD0(i32);                             /* extern */

__attribute__((section(".text.game_state.08016784")))
i32 func_08016784(GenObj__func_08016784 *arg0) {
    i32 temp_r4;

    temp_r4 = arg0->unk4 + 0xBC;
    if ((func_08008CD0(temp_r4) << 0x18) == 0) {
        return 0;
    }
    func_08008BF8(temp_r4, 5);
    return 1;
}
}

// DECOMP-MATCHED func_080167CC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008CD0(i32);                               /* extern */

__attribute__((section(".text.game_state.080167CC")))
i32 func_080167CC(GenObj__func_080167CC *arg0) {
    return func_08008CD0((i32)(arg0->unk4 + 0xBC));
}
}

// DECOMP-MATCHED func_08016BDC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08016BDC")))
void func_08016BDC(GenObj__func_08016BDC *arg0) {
    register void *p asm("r1") = *arg0->unk4->unkA8;
    register void (*fn)(void) asm("r1");
    fn = *(void (**)(void))((u8 *)p + 0xFC);
    fn();
}
}

// DECOMP-MATCHED func_08016CAC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08016CAC")))
void func_08016CAC(GenObj__func_08016CAC *arg0) {
    GenObj__func_08016CAC *t;
    GenObj__func_08016CAC *m;
    GenObj__func_08016CAC *x;
    t = (GenObj__func_08016CAC *)(arg0->unk4->unkA8);
    m = (GenObj__func_08016CAC *)(t->unk0);
    x = ((GenObj__func_08016CAC *(*)(GenObj__func_08016CAC *, i32))(m->unk40))(t, 0);
    ((void (*)(GenObj__func_08016CAC *))(x->unk14->unkA8))(x);
}
}

// DECOMP-MATCHED func_08016E9C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.08016E9C")))
void func_08016E9C(GenObj__func_08016E9C *arg0) {
    GenObj__func_08016E9C *temp_r4;
    GenObj__func_08016E9C *t;
    GenObj__func_08016E9C *m;
    GenObj__func_08016E9C *x;
    temp_r4 = (GenObj__func_08016E9C *)(arg0->unk4);
    t = (GenObj__func_08016E9C *)(temp_r4->unkA8);
    m = (GenObj__func_08016E9C *)(t->unk0);
    x = ((GenObj__func_08016E9C *(*)(GenObj__func_08016E9C *, i32))(m->unk40))(t, 0);
    ((void (*)(GenObj__func_08016E9C *))(x->unk14->unk70))(x);
    temp_r4->unk9C = 0x19;
}
}

// DECOMP-MATCHED func_0801A054 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
void *GetMapData(i32);                              /* extern */
i32 GetUpgradeLevel__C4Barn(i32);                   /* extern */
i32 GetUpgradeLevel__C4Coop(i32);                   /* extern */
i32 GetUpgradeLevel__C9FarmHouse(i32);              /* extern */
i32 func_0800E324(i32);                             /* extern */
i32 func_0803A8A4(u32, i32, i32, i32, i32);         /* extern */

__attribute__((section(".text.game_state.0801A054")))
void *func_0801A054(GenObj__func_0801A054 *arg0, GenObj__func_0801A054 *arg1, u32 arg2) {
    i32 sp4;
    i32 temp_r5;
    i32 temp_r6;
    i32 temp_r8;
    i32 var_r0;
    i32 var_r0_2;
    i32 var_r1;
    u16 temp_r5_2;
    u16 temp_r6_2;
    GenObj__func_0801A054 *temp_r0;
    GenObj__func_0801A054 *temp_r0_2;
    GenObj__func_0801A054 *temp_r4;

    if (arg2 > 0x233U) {
        arg0->unk0 = (struct GenObj__func_0801A054 *)(0);
        arg0->unk4 = (struct GenObj__func_0801A054 *)(0);
        arg0->unk8 = 0U;
        arg0->unkA = 0U;
    } else {
        temp_r0 = (GenObj__func_0801A054 *)(arg1->unk4);
        sp4 = (i32)(temp_r0->unk0);
        if ((arg2 == 2) && (sp4 != 2)) {
            i32 v0 = arg1->unk1050;
            u16 a = 0x80;
            u16 b = 0x58;
            arg0->unk0 = (struct GenObj__func_0801A054 *)(v0);
            arg0->unk4 = (struct GenObj__func_0801A054 *)(0);
            arg0->unk8 = a;
            arg0->unkA = b;
        } else {
            if (sp4 == arg2) {
                var_r0 = (i32)(temp_r0->unk4);
            } else {
                u8 *b1038 = (u8 *)arg1 + 0x1038;
                temp_r8 = func_0800E324(*(i32 *)b1038 + 0x10);
                temp_r6 = GetUpgradeLevel__C9FarmHouse(*(i32 *)b1038 + (0xFA << 1));
                temp_r5 = GetUpgradeLevel__C4Coop(*(i32 *)b1038 + (0x82 << 3));
                var_r0 = func_0803A8A4(arg2, temp_r8, temp_r6, temp_r5, GetUpgradeLevel__C4Barn(*(i32 *)b1038 + (0xBE << 3)));
            }
            temp_r0_2 = (GenObj__func_0801A054 *)(GetMapData(var_r0));
            temp_r5_2 = temp_r0_2->unk20;
            temp_r6_2 = temp_r0_2->unk22;
            if (sp4 == arg2) {
                temp_r4 = (GenObj__func_0801A054 *)(arg1->unk4);
                GetMapData((i32)(temp_r4->unk4));
                var_r1 = 0;
                var_r0_2 = (i32)(temp_r4->unk2C);
            } else {
                var_r1 = temp_r0_2->unk1C;
                var_r0_2 = temp_r0_2->unk18;
            }
            arg0->unk0 = (struct GenObj__func_0801A054 *)(var_r0_2);
            arg0->unk4 = (struct GenObj__func_0801A054 *)(var_r1);
            arg0->unk8 = temp_r5_2;
            arg0->unkA = temp_r6_2;
        }
    }
    return arg0;
}

/* ATTEMPT-NOTE opencode: layout struct tepat (_padC[12], _pad26[8]) agar offset pool 0x1038/0x1050 pas; u16 member; shift-konstanta. */
}

// DECOMP-MATCHED func_0801A8C0 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.game_state.0801A8C0")))
i32 func_0801A8C0(i32 arg0, u32 arg1) {
    if (arg1 <= 5U) {
        return 3;
    } else if (arg1 <= 0xBU) {
        return 0;
    } else if (arg1 > 0x11U) {
        return 2;
    }
    return 1;
}
}

// DECOMP-MATCHED gData_game_state_0801D9BC.data.0801D9BC
extern "C" {
// data tak-dirujuk di 0x0801D9BC (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_game_state_0801D9BC[392] __attribute__((section(".text.game_state.0801D9BC"))) = {0x70, 0xB5, 0x04, 0x1C, 0x04, 0x49, 0x60, 0x18, 0x01, 0x68, 0x0E, 0x1C, 0x08, 0x36, 0x88, 0x68, 0x01, 0x28, 0x03, 0xD1, 0x0A, 0x20, 0xB4, 0xE0, 0x38, 0x10, 0x00, 0x00, 0x03, 0x38, 0x01, 0x28, 0x01, 0xD8, 0x0B, 0x20, 0xAD, 0xE0, 0xFA, 0x22, 0x52, 0x00, 0x88, 0x18, 0xEE, 0xF7, 0x48, 0xFB, 0x05, 0x1C, 0x20, 0x68, 0x41, 0x69, 0x20, 0x1C, 0xB5, 0xF0, 0x8C, 0xFF, 0x02, 0x1C, 0x11, 0x1C, 0x34, 0x39, 0x06, 0x48, 0x81, 0x42, 0x00, 0xD8, 0x02, 0x22, 0x2B, 0x2A, 0x00, 0xD9, 0x8C, 0xE0, 0x90, 0x00, 0x03, 0x49, 0x40, 0x18, 0x00, 0x68, 0x87, 0x46, 0x00, 0x00, 0xFF, 0x01, 0x00, 0x00, 0x20, 0xDA, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0x22, 0xDB, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x22, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x22, 0xDB, 0x01, 0x08, 0x22, 0xDB, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0x26, 0xDB, 0x01, 0x08, 0xD0, 0xDA, 0x01, 0x08, 0xB0, 0x7A, 0xC0, 0x06, 0xC0, 0x08, 0xFA, 0x21, 0x09, 0x06, 0x40, 0x18, 0x00, 0x0E, 0x0D, 0x28, 0x2C, 0xD8, 0x00, 0x2D, 0x09, 0xD0, 0x28, 0x1C, 0xEE, 0xF7, 0x44, 0xF8, 0x00, 0x06, 0x00, 0x28, 0x03, 0xD0, 0x28, 0x1C, 0xEE, 0xF7, 0x42, 0xF8, 0x21, 0xE0, 0x30, 0x1C, 0x08, 0x30, 0xF0, 0xF7, 0x11, 0xFC, 0x01, 0x28, 0x07, 0xD0, 0x01, 0x28, 0x03, 0xDD, 0x02, 0x28, 0x05, 0xD0, 0x03, 0x28, 0x05, 0xD0, 0x01, 0x20, 0x13, 0xE0, 0x02, 0x20, 0x11, 0xE0, 0x03, 0x20, 0x0F, 0xE0, 0x04, 0x20, 0x0D, 0xE0, 0x0C, 0x20, 0x0B, 0xE0, 0xB0, 0x7A, 0xC0, 0x06, 0xC0, 0x08, 0xFA, 0x22, 0x12, 0x06, 0x80, 0x18, 0x00, 0x0E, 0x0D, 0x28, 0x01, 0xD8, 0x0D, 0x20, 0x00, 0xE0, 0x0E, 0x20, 0x70, 0xBC, 0x02, 0xBC, 0x08, 0x47};
}

// DECOMP-MATCHED func_0801DB44 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01: callee 1468C sbnrnya terima pointer (ref: ldr r0,[r0,4]);
// 1DB44 meneruskan pointer yg di-load dari [arg0+0x1054] (ref: ldr r1,=0x1054; add; ldr; bl).
// m2c salah-tipe (i32); cast eksplisit no-op codegen (terbukti identik via agbcc probe).
i32 func_0801468C(GenObj__func_0801468C *arg0);                             /* extern */
__attribute__((section(".text.game_state.0801DB44")))
i32 func_0801DB44(GenObj__func_0801DB44 *arg0) {
    return func_0801468C((GenObj__func_0801468C *)arg0->unk1054);
}
}

// DECOMP-MATCHED func_0801DCA8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.0801DCA8")))
void func_0801DCA8(GenObj__func_0801DCA8 *arg0) {
    O24 **p = &arg0->unk1058;
    O24 *v;
    O24 *zero = 0;

    v = *p;
    if ((zero != v) && (v != 0)) {
        v->unk24->unk8(v, 3);
    }
    *p = zero;
}
}

// DECOMP-MATCHED func_0801DD18 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A6138(i32);                               /* extern */

__attribute__((section(".text.game_state.0801DD18")))
void func_0801DD18(GenObj__func_0801DD18 *arg0) {
    func_080A6138((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED func_0801DD24 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A6194(i32);                               /* extern */

__attribute__((section(".text.game_state.0801DD24")))
void func_0801DD24(GenObj__func_0801DD24 *arg0) {
    func_080A6194((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED func_0801DD30 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A61F0(i32);                               /* extern */

__attribute__((section(".text.game_state.0801DD30")))
void func_0801DD30(GenObj__func_0801DD30 *arg0) {
    func_080A61F0((i32)(arg0->unk4));
}
}
// DECOMP-MATCHED func_0801DD78 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A601C(i32);                               /* extern */

__attribute__((section(".text.game_state.0801DD78")))
void func_0801DD78(GenObj__func_0801DD78 *arg0) {
    func_080A601C((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED gData_game_state_0801DD3C.data.0801DD3C
extern "C" {
// data tak-dirujuk di 0x0801DD3C (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_game_state_0801DD3C[60] __attribute__((section(".text.game_state.0801DD3C"))) = {0x00, 0xB5, 0x40, 0x68, 0x88, 0xF0, 0x78, 0xFA, 0x01, 0xBC, 0x00, 0x47, 0x00, 0xB5, 0x40, 0x68, 0x88, 0xF0, 0x94, 0xFA, 0x01, 0xBC, 0x00, 0x47, 0x00, 0xB5, 0x40, 0x68, 0x88, 0xF0, 0xB0, 0xFA, 0x01, 0xBC, 0x00, 0x47, 0x00, 0xB5, 0x40, 0x68, 0x88, 0xF0, 0x8A, 0xF9, 0x01, 0xBC, 0x00, 0x47, 0x00, 0xB5, 0x40, 0x68, 0x88, 0xF0, 0x58, 0xF9, 0x01, 0xBC, 0x00, 0x47};
}

// DECOMP-MATCHED gData_game_state_0801DD84.data.0801DD84
extern "C" {
// data tak-dirujuk di 0x0801DD84 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_game_state_0801DD84[72] __attribute__((section(".text.game_state.0801DD84"))) = {0x30, 0xB5, 0x82, 0xB0, 0x04, 0x1C, 0x0F, 0x49, 0x60, 0x18, 0x00, 0x68, 0xFA, 0x21, 0x49, 0x00, 0x40, 0x18, 0xEE, 0xF7, 0x71, 0xF9, 0x05, 0x1C, 0x60, 0x68, 0x88, 0xF0, 0xAF, 0xFA, 0x68, 0x46, 0x29, 0x1C, 0xED, 0xF7, 0xFD, 0xFE, 0x20, 0x1C, 0xFF, 0xF7, 0xD4, 0xFE, 0x68, 0x46, 0xF0, 0xF7, 0x51, 0xF9, 0x01, 0x1C, 0x01, 0xA8, 0x01, 0x70, 0xF0, 0xF7, 0xCA, 0xF8, 0x02, 0xB0, 0x30, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x38, 0x10, 0x00, 0x00};
}

// DECOMP-MATCHED func_0801DDCC (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0809C5B4(i32, i32);                          /* extern */
i32 func_080AA850(i32, i32);                          /* extern */

__attribute__((section(".text.game_state.0801DDCC")))
void func_0801DDCC(GenObj__func_0801DDCC *arg0, i32 arg1) {
    func_0809C5B4((i32)(arg0->unk1038 + 0x34D8), arg1);
    func_080AA850((i32)(arg0->unk4), arg1);
}
}

// DECOMP-MATCHED func_0801DDF8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0809C5D0(i32, i32);                          /* extern */
i32 func_080AA850(i32, i32);                          /* extern */

__attribute__((section(".text.game_state.0801DDF8")))
void func_0801DDF8(GenObj__func_0801DDF8 *arg0, i32 arg1) {
    func_0809C5D0((i32)(arg0->unk1038 + 0x34D8), arg1);
    func_080AA850((i32)(arg0->unk4), arg1);
}
}

// DECOMP-MATCHED func_0801DE24 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A63B8(i32);                               /* extern */

__attribute__((section(".text.game_state.0801DE24")))
void func_0801DE24(GenObj__func_0801DE24 *arg0) {
    func_080A63B8((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED gData_game_state_0801DE30.data.0801DE30
extern "C" {
// data tak-dirujuk di 0x0801DE30 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_game_state_0801DE30[12] __attribute__((section(".text.game_state.0801DE30"))) = {0x00, 0xB5, 0x40, 0x68, 0x8C, 0xF0, 0x32, 0xFD, 0x01, 0xBC, 0x00, 0x47};
}

// DECOMP-MATCHED func_0801DE3C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080AA8BC(i32);                               /* extern */

__attribute__((section(".text.game_state.0801DE3C")))
void func_0801DE3C(GenObj__func_0801DE3C *arg0) {
    func_080AA8BC((i32)(arg0->unk4));
}
}
// DECOMP-MATCHED func_0801DE48 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080AA8DC(i32);                               /* extern */

__attribute__((section(".text.game_state.0801DE48")))
void func_0801DE48(GenObj__func_0801DE48 *arg0) {
    func_080AA8DC((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED gData_game_state_0801F518.data.0801F518
extern "C" {
// data tak-dirujuk di 0x0801F518 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_game_state_0801F518[216] __attribute__((section(".text.game_state.0801F518"))) = {0x70, 0xB5, 0x83, 0xB0, 0x06, 0x1C, 0x0C, 0x1C, 0x1D, 0x2C, 0x07, 0xD0, 0x1D, 0x2C, 0x02, 0xDC, 0x12, 0x2C, 0x17, 0xD0, 0x58, 0xE0, 0x27, 0x2C, 0x1E, 0xD0, 0x55, 0xE0, 0x08, 0x48, 0x35, 0x18, 0x28, 0x68, 0xFA, 0x21, 0x49, 0x00, 0x40, 0x18, 0xEC, 0xF7, 0x40, 0xFD, 0x00, 0x06, 0x00, 0x28, 0x19, 0xD1, 0x28, 0x68, 0xFA, 0x21, 0x49, 0x00, 0x40, 0x18, 0xEC, 0xF7, 0x83, 0xFE, 0x12, 0xE0, 0x38, 0x10, 0x00, 0x00, 0x03, 0x49, 0x70, 0x18, 0x02, 0x68, 0xD0, 0x78, 0x80, 0x21, 0x08, 0x43, 0xD0, 0x70, 0x08, 0xE0, 0x38, 0x10, 0x00, 0x00, 0x1D, 0x49, 0x70, 0x18, 0x02, 0x68, 0x10, 0x79, 0x01, 0x21, 0x08, 0x43, 0x10, 0x71, 0x30, 0x68, 0x41, 0x69, 0x30, 0x1C, 0xB4, 0xF0, 0xC4, 0xF9, 0xA0, 0x42, 0x29, 0xD1, 0x83, 0x20, 0x40, 0x01, 0x31, 0x18, 0x00, 0x25, 0x01, 0x20, 0x08, 0x70, 0x40, 0x20, 0xE1, 0xF7, 0x1B, 0xF8, 0x04, 0x1C, 0x30, 0x68, 0x01, 0x6E, 0x30, 0x1C, 0xB4, 0xF0, 0xB3, 0xF9, 0x01, 0x1C, 0x02, 0x20, 0x00, 0x90, 0x1B, 0x20, 0x01, 0x90, 0x02, 0xA8, 0x05, 0x70, 0x20, 0x1C, 0x02, 0x22, 0x33, 0x1C, 0x85, 0xF0, 0x1F, 0xFA, 0x0A, 0x49, 0x75, 0x18, 0x04, 0x1C, 0x29, 0x68, 0x8C, 0x42, 0x07, 0xD0, 0x00, 0x29, 0x05, 0xD0, 0x48, 0x6A, 0x82, 0x68, 0x08, 0x1C, 0x03, 0x21, 0xB4, 0xF0, 0x9B, 0xF9, 0x2C, 0x60, 0x03, 0xB0, 0x70, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x38, 0x10, 0x00, 0x00, 0x5C, 0x10, 0x00, 0x00};
}

// DECOMP-MATCHED func_0801F5F0 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 SetVaseArticleId__9FarmHouseUi(i32, i32);         /* extern */
i32 func_0801F3E4(void *);                            /* extern */

__attribute__((section(".text.game_state.0801F5F0")))
void func_0801F5F0(GenObj__func_0801F5F0 *arg0, i32 arg1) {
    SetVaseArticleId__9FarmHouseUi((i32)((u8 *)arg0->unk1038 + (0xFA << 1)), arg1);
    func_0801F3E4(arg0);
}
}

// DECOMP-MATCHED func_0801FAA8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.game_state.0801FAA8")))
i32 func_0801FAA8(GenObj *arg0, i32 arg1) {
    return arg0->unk0->unk40(arg0, arg1);
}
}

// DECOMP-MATCHED func_0801FAB8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0801FAB8(GenObj *arg0, i32 arg1) {
    return arg0->unk0->unk44(arg0, arg1);
}
}

// DECOMP-MATCHED func_0801FAC8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
void *__builtin_new(i32);                             /* extern */
i32 func_0803AEA0(i32, void *, i32, i32, i32);      /* extern */
i32 func_0803B0A8(i32, i32);                          /* extern */

void func_0801FAC8(GenObj *arg0, i32 arg1) {
    i32 temp_r5;
    i32 var_r7;
    void *var_r8;
    u32 var_r3;
    void **var_r1;
    GenObj *temp_r0;
    void **temp_r2;
    i32 res;
    i32 nv;
    i32 *slot;

    var_r8 = 0;
    if (arg1 != 0) {
        if (arg1 == 1) {
            var_r8 = (void *)((u8 *)arg0 + 0xED4);
        }
    } else {
        var_r8 = (void *)((u8 *)arg0 + 0xEA4);
    }
    if (var_r8 != 0) {
        var_r7 = 0x20;
        temp_r5 = *arg0->unk4;
        if (temp_r5 == 2) {
            var_r3 = 0;
            var_r1 = (void **)((u8 *)arg0 + 8);
            temp_r2 = (void **)((u8 *)arg0 + 0x198);
            if (var_r1 != temp_r2) {
                do {
                    temp_r0 = (GenObj *)*var_r1;
                    if ((temp_r0 != 0) && (*(u16 *)((u8 *)temp_r0 + 4) == temp_r5)) {
                        var_r3 += 1;
                    }
                    var_r1 += 1;
                } while (var_r1 != temp_r2);
            }
            if ((u32) (var_r3 + 0xA) > 0xAU) {
                if (var_r3 <= 0x15U) {
                    var_r7 = 0x20 - var_r3;
                } else {
                    var_r7 = 0xA;
                }
            }
        }
        /* res menahan hasil call di r0 melewati hitung-alamat slot;
           salinan nv = res yg memaksa urutan emisi ldr/adds/adds */
        res = func_0803AEA0((i32)__builtin_new(0x46C), arg0, (i32)var_r8, arg1, var_r7);
        slot = &arg0->unk107C;
        nv = res;
        if ((nv != *slot) && (*slot != 0)) {
            func_0803B0A8(*slot, 3);
        }
        *slot = nv;
    }
}
}

// DECOMP-MATCHED func_0801FB7C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

void *__builtin_new(i32);                        /* extern */
i32 func_080A6474(void *, i32);                  /* extern */
/* NOTE: actual callee takes 5 args (u8 arg4); the 5th outgoing stack slot
 * aliases fr.s0 below, so the call is declared with 4 (value already in place). */
Fb7cObj *func_080175B4(void *, i32, i32, i32 *);  /* extern */

void ***func_0801FB7C(void ***arg0, i32 arg1, i32 arg2, u8 arg3) {
    struct FR { u8 s0; Fb7cObj *s4; i32 i8; Fb7cObj **sC; Fb7cObj *s10; } fr;
    Fb7cObj *nn;
    u8 *ps0;
    i32 *p8;
    Fb7cObj *chk2;
    Fb7cObj **qq;
    Fb7cObj **tmp;

    fr.i8 = func_080A6474(__builtin_new(0xBC), arg1);
    nn = (Fb7cObj *)__builtin_new(0x10CC);
    p8 = &fr.i8;
    ps0 = (u8 *)&fr;
    *ps0 = arg3;
    fr.s4 = func_080175B4(nn, arg1, arg2, p8);
    fr.sC = &fr.s4;
    fr.s10 = fr.s4;
    chk2 = fr.s4;
    qq = &fr.s4;
    /* hide &fr.s4 from CSE so the s4-home store and the reload-check survive */
    __asm__ ("" : "+r" (qq));
    /* exact copy/zero/store triple; "memory" keeps the s4 reload-check */
    __asm__ volatile ("add %0, %1, #0\nmovs %1, #0\nstr %1, [%0]" : "=&l" (tmp) : "r" (qq) : "memory");
    *arg0 = (void **)chk2;
    if (fr.s4 != 0) {
        ((void (*)(void *, i32))(fr.s4->vtab->f8))(fr.s4, 3);
    }
    return arg0;
}
}
// ekor tak-bermarker dari game_state.s (verbatim, jangan diubah)
asm(
"    .byte 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0xF4, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0xC4, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x94, 0x0F, 0x00, 0x00\n"
"    .byte 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x64, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0x34, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x04, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xD4, 0x0E, 0x00, 0x00\n"
"    .byte 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xA4, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0x74, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x44, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x14, 0x0E, 0x00, 0x00\n"
"    .byte 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xE4, 0x0D, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0xB4, 0x0D, 0x00, 0x00, 0x30, 0xB5, 0x07, 0x49, 0x44, 0x18, 0x00, 0x25\n"
"    .byte 0x20, 0x68, 0x85, 0x42, 0x04, 0xD0, 0x00, 0x28, 0x02, 0xD0, 0x03, 0x21, 0x1B, 0xF0, 0x0C, 0xFA\n"
"    .byte 0x25, 0x60, 0x30, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x7C, 0x10, 0x00, 0x00, 0x40, 0x68, 0x70, 0x47\n"
"    .byte 0x40, 0x68, 0x70, 0x47, 0x02, 0x49, 0x40, 0x18, 0x00, 0x68, 0x08, 0x30, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x38, 0x10, 0x00, 0x00, 0x10, 0xB5, 0xCE, 0x22, 0x52, 0x00, 0x83, 0x18, 0x5C, 0x18, 0x20, 0x78\n"
"    .byte 0x02, 0x1C, 0x10, 0x3A, 0x00, 0x2A, 0x05, 0xDA, 0x18, 0x1C, 0x8C, 0xF0, 0x4F, 0xFE, 0x02, 0x1C\n"
"    .byte 0x10, 0x30, 0x20, 0x70, 0x10, 0x1C, 0x10, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x4A, 0x01, 0x52, 0x18\n"
"    .byte 0x92, 0x00, 0x80, 0x18, 0x02, 0x49, 0x40, 0x18, 0x00, 0x21, 0x01, 0x70, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x3D, 0x02, 0x00, 0x00, 0x08, 0x30, 0x89, 0x00, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x08, 0x30, 0x89, 0x00, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_0801FD0C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

void func_0801FD0C(i32 arg0, i32 arg1) {
    GenObj **pp;
    GenObj *obj;

    arg0 += 8;
    pp = (GenObj **)(arg0 + arg1 * 4);
    obj = *pp;
    if (obj != 0) {
        ((void (*)(GenObj *, ...))(obj->unk14->unk8))(obj, 3);
        *pp = 0;
    }
}
}
// ekor tak-bermarker dari game_state.s (verbatim, jangan diubah)
asm(
"    .byte 0x01, 0x49, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x24, 0x10, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_0801FD3C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5A9C(i32);                               /* extern */

i32 func_0801FD3C(GenObj *arg0) {
    return func_080A5A9C((i32)arg0->unk4);
}
}
// ekor tak-bermarker dari game_state.s (verbatim, jangan diubah)
asm(
"    .byte 0x40, 0x68, 0x0E, 0x21, 0x40, 0x5E, 0x70, 0x47\n"
"    .byte 0x40, 0x68, 0x0A, 0x21, 0x40, 0x5E, 0x70, 0x47, 0x40, 0x68, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_0801FD60 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A59BC(i32);                               /* extern */

void func_0801FD60(GenObj *arg0) {
    func_080A59BC((i32)arg0->unk4);
}
}

// DECOMP-MATCHED func_0801FD6C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5960(i32);                               /* extern */

void func_0801FD6C(GenObj *arg0) {
    func_080A5960((i32)arg0->unk4);
}
}
