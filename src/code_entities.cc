#include "prelude.h"
#include <string.h> // memcpy

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[60];
    u8 unk3C;
} GenObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u16 unk0; u16 unk2; } EItem;
typedef struct { EItem *ptr; u16 count; } EPair;
typedef struct { u8 _00[12]; void (*unkC)(EPair *, void **, i32); } ETab;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj6 {
    u8 _pad0[6];
    u8 unk6;
} GenObj6;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08020080 {
    u8 _pad0[24];
    i32 unk18;
    i32 unk1C;
    u8 unk20;
} GenObj__func_08020080;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08021F88 {
    u8 _pad0[52];
    i32 unk34;
} GenObj__func_08021F88;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08022980 {
    u8 _pad0[52];
    i32 unk34;
} GenObj__func_08022980;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08025AFC {
    u8 _pad0[4];
    u16 unk4;
} GenObj__func_08025AFC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0802907C {
    u8 _pad0[52];
    i32 unk34;
    i32 unk38;
} GenObj__func_0802907C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0802B908 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_0802B908;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0802A7D8 {
    u8 _pad0[136];
    u8 unk88;
} GenObj__func_0802A7D8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08024C88 {
    u8 _pad0[60];
    u8 unk3C;
    u8 unk3D;
} GenObj__func_08024C88;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct T20060 {
    u8 _pad0[20];
    i32 (*unk14)(void *);
} T20060;
typedef struct O20060 {
    T20060 *unk0;
} O20060;
typedef struct GenObj__func_08020060 {
    O20060 *unk0;
    u16 unk4;
} GenObj__func_08020060;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0802BEFC {
    u8 _pad0[52];
    u8 unk34;
    u8 _pad35[31];
    u8 unk54;
    u8 _pad55[3];
    u8 unk58;
    u8 _pad59[3];
} GenObj__func_0802BEFC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Sub20130 { u8 _pad0[0xE]; u16 unkE; i16 unk10; } Sub20130;
typedef struct GenObj__func_08020130 { u8 _pad0[0x10]; i32 unk10; } GenObj__func_08020130;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Sub_08020460 { u8 _pad20[0x20]; i32 unk20; } Sub_08020460;
typedef struct GenObj__func_08020460 {
    u8 _pad0[0x34];
    Sub_08020460 *unk34;
} GenObj__func_08020460;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct VtA4 { u8 _pad[0x64]; void *unk64; } VtA4;
typedef struct HA4 { VtA4 *vt; } HA4;
typedef struct GenObj__func_0802A4C0 {
    struct GenObj__func_0802A4C0 *unk0;
    u8 _pad4[12];
    i32 unk10;
    u8 _pad14[116];
    u8 unk88;
    u8 _pad89[0x3F];
    u8 unkC8;
} GenObj__func_0802A4C0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vt10 { u8 _pad[0x64]; void *unk64; } Vt10;
typedef struct H10 { Vt10 *vt; } H10;
typedef struct S88 {
    u8 b0;
    u8 b1;
    u8 _pad2[2];
    i32 w4;
    i32 w8;
    u8 _padC[8];
    i32 w14;
} S88;
typedef struct GenObj__func_0802A510 {
    struct GenObj__func_0802A510 *unk0;
    u8 _pad4[12];
    i32 unk10;
    u8 _pad14[36];
    i32 unk38;
    u8 _pad3C[76];
} GenObj__func_0802A510;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0802B9C0 {
    u8 _pad0[0x14];
    void *unk14;
    u8 _pad18[28];
    u8 unk34;
} GenObj__func_0802B9C0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0802B944 {
    u8 _pad0[0x14];
    void *unk14;
} GenObj__func_0802B944;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct S38 {
    u8 _pad0[0xC];
    i32 unkC;
    i32 unk10;
    u8 _pad14[4];
    i32 unk18;
} S38;
typedef struct GenObj__func_0802BE68 {
    u8 _pad0[0x20];
    u8 unk20;
} GenObj__func_0802BE68;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct S38__func_0802BFA0 {
    u8 _pad0[0x38];
    u8 unk38;
} S38__func_0802BFA0;
typedef struct GenObj__func_0802BFA0 {
    S38__func_0802BFA0 *unk0;
    u8 _pad4[0xC7];
    u8 unkCB;
} GenObj__func_0802BFA0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct VtC908 { u8 _pad[0x14C]; void *unk14C; } VtC908;
typedef struct HC908 { VtC908 *vt; } HC908;
typedef struct PairObj { i32 *beg; i32 *end; } PairObj;
typedef struct GenObj__func_0802C908 {
    HC908 *unk0;
    u8 _pad4[0x3C];
    u8 unk40;
    u8 unk41;
    u8 unk42;
} GenObj__func_0802C908;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct VtC860 { u8 _pad[0x14C]; void *unk14C; } VtC860;
typedef struct HC860 { VtC860 *vt; } HC860;
typedef struct GenObj__func_0802C860 {
    HC860 *unk0;
    u8 _pad4[0x10];
    void *unk14;
    u8 _pad18[0x24];
    i32 unk38;
} GenObj__func_0802C860;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct V8E8 { u8 _pad[0x140]; void *f140; } V8E8;
typedef struct H8E8 { V8E8 *vt; } H8E8;
typedef struct PS8 { i32 sp0; i32 sp4; } PS8;
typedef struct GenObj__func_0802D8E8 {
    u8 _pad0[4];
    u16 unk4;
} GenObj__func_0802D8E8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj6 GenObj6;
typedef struct GenObj__func_0802D844 {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad8[26];
    u8 unk20;
    u8 _pad18[27];
    u8 unk3C;
    u8 _pad40[134];
    u8 unkC3;
} GenObj__func_0802D844;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Obj22950 {
    u8 _pad[0x24];
    i32 unk24;
    u8 _p2[2];
    u8 unk2A;
} Obj22950;
typedef struct GenObj__func_08022950 {
    u8 _pad0[0x34];
    Obj22950 *unk34;
} GenObj__func_08022950;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vt40 {
    u8 _pad0[0x40];
    void *fn40;
} Vt40;
typedef struct GenObj__func_080216BC {
    u8 _pad0[0x14];
    void *unk14;
    u8 _pad18[8];
    u8 unk20;
    u8 _pad21[0x13];
    i32 unk34;
    u8 _pad38[5];
    u8 unk3D;
    u8 unk3E;
} GenObj__func_080216BC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0802110C {
    u8 _pad0[0x34];
    i32 unk34;
} GenObj__func_0802110C;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_08020060 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities.08020060")))
i32 func_08020060(GenObj__func_08020060 *arg0) {
    i32 temp_r0;
    i32 var_r1;

    temp_r0 = arg0->unk0->unk0->unk14(arg0->unk0);
    var_r1 = 0;
    if (temp_r0 == arg0->unk4) {
        var_r1 = 1;
    }
    return var_r1;
}

/* ATTEMPT-NOTE manual: vcall 1-arg di +0x14; unk4 u16 (ldrh). */
}

// DECOMP-MATCHED func_08020080 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities.08020080")))
void func_08020080(GenObj__func_08020080 *arg0, i32 arg1) {
    GenObj__func_08020080 *a3 = arg0;
    i32 var_r4;
    i32 var_r5;
    u8 t;

    var_r4 = 0;
    var_r5 = 0;
    if (arg1 != 0) {
        t = a3->unk20;
        switch (t) {
        case 0:
            var_r5 = arg1;
            break;
        case 1:
            var_r5 = 0 - arg1;
            break;
        case 2:
            var_r4 = 0 - arg1;
            break;
        case 3:
            var_r4 = arg1;
            break;
        }
    }
    a3->unk18 = var_r4;
    a3->unk1C = var_r5;
}

/* ATTEMPT-NOTE opencode: unk20 u8 + u8 t switch (bukan if-else): switch polos comparator-chain beq/bgt/beq + push r4,r5 via var i32 + t. */
}

// DECOMP-MATCHED func_08020130 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0805E894(void *);                          /* extern */

__attribute__((section(".text.code_entities.08020130")))
i32 func_08020130(GenObj__func_08020130 *arg0) {
    i32 var_r4;
    u32 var_r1;
    Sub20130 *temp_r2;
    i32 temp_r1_2;

    if (arg0->unk10 != 0) {
        var_r4 = 0;
        temp_r2 = (Sub20130 *)(arg0->unk10 + 0x30);
        var_r1 = 0;
        if (temp_r2->unkE != 0) {
            temp_r1_2 = temp_r2->unk10;
            var_r1 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
        }
        if ((var_r1 == 0) || ((func_0805E894(temp_r2) << 0x18) != 0)) {
            var_r4 = 1;
        }
        return var_r4;
    }
    return 1;
}
}

// DECOMP-MATCHED func_080202C4 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.080202C4")))
void func_080202C4(void) {

}
}

// DECOMP-MATCHED gData_code_entities_080215FC.data.080215FC
extern "C" {
// data tak-dirujuk di 0x080215FC (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_entities_080215FC[32] __attribute__((section(".text.code_entities.080215FC"))) = {0x10, 0xB5, 0x0A, 0x23, 0xCA, 0x5E, 0x0E, 0x24, 0x0B, 0x5F, 0xD1, 0x1F, 0x01, 0x80, 0x19, 0x1F, 0x41, 0x80, 0x07, 0x32, 0x82, 0x80, 0x05, 0x33, 0xC3, 0x80, 0x10, 0xBC, 0x04, 0xBC, 0x10, 0x47};
}

// DECOMP-MATCHED func_08020460 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities.08020460")))
i32 func_08020460(GenObj__func_08020460 *arg0) {
    i32 var_r1;

    var_r1 = 0;
    if (arg0->unk34->unk20 == 5) {
        var_r1 = 1;
    }
    return var_r1;
}
}

// DECOMP-MATCHED func_0802110C (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetGrowthStage__C3Dog(i32);                     /* extern */
extern i32 gUnk_080F0908;

__attribute__((section(".text.code_entities.0802110C")))
u16 func_0802110C(GenObj__func_0802110C *arg0, i32 arg1) {
    i32 i;
    u8 *tbl;

    i = arg1;
    tbl = (u8 *) &gUnk_080F0908;
    i *= 2;
    if (GetGrowthStage__C3Dog((i32)(arg0->unk34)) == 1) {
        i += 0x1A;
    }
    return *(u16 *) (tbl + i);
}
}

// DECOMP-MATCHED func_0802161C (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.0802161C")))
i32 func_0802161C(void) {
    return 0;
}
}
// DECOMP-MATCHED func_08021620 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.08021620")))
i32 func_08021620(i32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 6;
    case 1:
        return 8;
    }
}
}
// DECOMP-MATCHED func_080216BC (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 __5ActorRC5Actor(i32 *, i32);                       /* extern */
i32 func_08020038(void *, void **, i32 *, i32);         /* extern */
i32 func_08022048(void *, i32, u8);                   /* extern */
i32 func_080220D4(void *);                          /* extern */
extern i32 vtable_unk_080E6428;

__attribute__((section(".text.code_entities.080216BC")))
void *func_080216BC(GenObj__func_080216BC *arg0, void **arg1, i32 arg2) {
    i32 sp0[2];
    u32 var_r0;
    GenObj__func_080216BC *temp_r0;

    __5ActorRC5Actor((i32 *)(sp0), arg2);
    func_08020038(arg0, arg1, (i32 *)(sp0), 0x782);
    arg0->unk14 = &vtable_unk_080E6428;
    arg0->unk34 = arg2;
    arg0->unk3D = 0;
    temp_r0 = (GenObj__func_080216BC *) ((void *(*)(void **, i32)) ((Vt40 *) *arg1)->fn40)(arg1, 0);
    var_r0 = 0;
    if (temp_r0 != 0) {
        var_r0 = (u32) (0 - (i32) (u8) ((i32 (*)(void *)) ((Vt40 *) temp_r0->unk14)->fn40)(temp_r0)) >> 0x1F;
    }
    arg0->unk3E = (u8) var_r0;
    func_08022048(arg0, func_080220D4(arg0), (u8)(arg0->unk20));
    return arg0;
}
}

// DECOMP-MATCHED gData_code_entities_08021634.data.08021634
extern "C" {
// data tak-dirujuk di 0x08021634 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_entities_08021634[136] __attribute__((section(".text.code_entities.08021634"))) = {0x70, 0xB5, 0x46, 0x46, 0x40, 0xB4, 0x84, 0xB0, 0x05, 0x1C, 0x68, 0x6B, 0x7A, 0xF0, 0x78, 0xFA, 0x06, 0x1C, 0x8C, 0x20, 0xDE, 0xF7, 0xC4, 0xFF, 0x80, 0x46, 0x30, 0x1C, 0xFF, 0xF7, 0xE4, 0xFF, 0x04, 0x1C, 0x30, 0x1C, 0xFF, 0xF7, 0xE2, 0xFF, 0x00, 0x94, 0x01, 0x90, 0x00, 0x26, 0x02, 0x96, 0x03, 0xA8, 0x06, 0x70, 0x40, 0x46, 0x29, 0x1C, 0x02, 0x22, 0x06, 0x23, 0x10, 0xF0, 0x24, 0xFF, 0x04, 0x1C, 0xA0, 0x46, 0x41, 0x35, 0x28, 0x78, 0x08, 0x28, 0x15, 0xD1, 0x20, 0x1C, 0x70, 0x30, 0x08, 0x21, 0x3D, 0xF0, 0xEB, 0xF8, 0x20, 0x1C, 0x84, 0x30, 0x01, 0x21, 0x01, 0x70, 0x02, 0x30, 0x06, 0x70, 0x01, 0x30, 0x01, 0x70, 0x22, 0x1C, 0x8A, 0x32, 0x02, 0x23, 0x11, 0x78, 0x04, 0x20, 0x40, 0x42, 0x08, 0x40, 0x18, 0x43, 0x10, 0x70, 0x40, 0x46, 0x04, 0xB0, 0x08, 0xBC, 0x98, 0x46, 0x70, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED gData_code_entities_080222F4.data.080222F4
extern "C" {
// data tak-dirujuk di 0x080222F4 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_entities_080222F4[44] __attribute__((section(".text.code_entities.080222F4"))) = {0x30, 0xB5, 0x04, 0x1C, 0x0D, 0x1C, 0x22, 0x68, 0x90, 0x88, 0x0A, 0x23, 0xD1, 0x5E, 0x0E, 0x23, 0xD2, 0x5E, 0x10, 0xF0, 0xFB, 0xFA, 0x21, 0x1C, 0x8B, 0x31, 0x08, 0x70, 0x20, 0x1C, 0x29, 0x1C, 0x10, 0xF0, 0xBC, 0xF9, 0x30, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_08021F88 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetGrowthStage__C5Horse(i32);                   /* extern */
extern u8 gUnk_080F09AC;

__attribute__((section(".text.code_entities.08021F88")))
u16 func_08021F88(GenObj__func_08021F88 *arg0, i32 arg1) {
    u8 *base = &gUnk_080F09AC;
    i32 v = GetGrowthStage__C5Horse((i32)(arg0->unk34));
    return *(u16 *)(base + (v * 7 + arg1) * 2);
}
}

// DECOMP-MATCHED func_08022320 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.08022320")))
i32 func_08022320(i32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 1;
    case 1:
        return 2;
    }
}
}
// DECOMP-MATCHED func_08022334 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.08022334")))
i32 func_08022334(i32 arg0) {
    if (arg0 == 0) {
        return 0xE;
    }
    if (arg0 == 1) {
        return 0xF;
    }
    return 0xE;
}
}

// DECOMP-MATCHED func_08022950 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities.08022950")))
u8 func_08022950(GenObj__func_08022950 *arg0) {
    i32 temp_r1;
    u8 var_r1;
    i32 v;
    Obj22950 *temp_r0;

    temp_r0 = (Obj22950 *)(arg0->unk34);
    temp_r1 = temp_r0->unk24;
    switch (temp_r1) {
    case 0:
        return temp_r0->unk2A;
    case 1:
        {
            v = 0x7F & temp_r0->unk2A;
            var_r1 = 1;
            if (v != 0) {
                var_r1 = 4;
            }
            return var_r1;
        }
    default:
        return 0U;
    }
}
}

// DECOMP-MATCHED func_08022980 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetGrowthStage__C7Chicken(i32);                 /* extern */
extern u8 gUnk_080F0A68;

__attribute__((section(".text.code_entities.08022980")))
u16 func_08022980(GenObj__func_08022980 *arg0, i32 arg1) {
    u8 *base = &gUnk_080F0A68;
    i32 v = GetGrowthStage__C7Chicken((i32)(arg0->unk34));
    return *(u16 *)(base + (v * 5 + arg1) * 2);
}
}

// DECOMP-MATCHED func_08022B58 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.08022B58")))
i32 func_08022B58(void) {
    return 0;
}
}
// DECOMP-MATCHED func_08022B5C (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.08022B5C")))
i32 func_08022B5C(i32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 6;
    case 1:
        return 7;
    }
}
}

// DECOMP-MATCHED func_080237F0 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.080237F0")))
i32 func_080237F0(u32 arg0) {
    if (arg0 <= 1U) {
        goto ret1;
    }
    if (arg0 != 2) {
        goto ret1;
    }
    goto ret2;
ret1:
    return 1;
ret2:
    return 2;
}

/* ATTEMPT-NOTE opencode: goto-chain agar bls/beq + urutan movs. */
}

// DECOMP-MATCHED func_080244C4 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.080244C4")))
i32 func_080244C4(i32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 1;
    case 1:
        return 2;
    }
}
// DECOMP-MATCHED func_080244D8 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.080244D8")))
i32 func_080244D8(i32 arg0) {
    switch (arg0) {                                 /* irregular */
    case 0:
    default:
        return 0xA;
    case 1:
        return 0xD;
    }
}
// DECOMP-MATCHED func_080245E0 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 rand();                                         /* extern */

__attribute__((section(".text.code_entities.080245E0")))
i32 func_080245E0(i32 arg0) {
    u32 temp_r0;

    temp_r0 = arg0 - 0x32;
    switch (temp_r0) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 3;
    case 4:
        return 4;
    case 5:
        return 5;
    case 6:
        return 6;
    case 7:
        return 7;
    case 8:
        return 8;
    case 9:
        return 9;
    case 10:
        return 0xA;
    case 11:
        return 0xB;
    case 12:
        return 0xC;
    case 13:
        return 0xD;
    case 14:
        return 0xE;
    case 15:
        return 0x14;
    case 16:
        return 0xF;
    case 17:
        return 0x10;
    case 18:
        if ((u32) (u8) ((i32) (rand() % 1000) / 10) <= 4U) {
            return 0x12;
        }
        return 0x11;
    case 19:
        return 0x13;
    default:
        return 0x15;
    }
}
}
// DECOMP-MATCHED func_080246BC (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetId__C4Tool(i32);                             /* extern */

__attribute__((section(".text.code_entities.080246BC")))
u32 func_080246BC(u32 arg0, i32 arg1) {
    u32 var_r4;
    u32 var_r0;

    var_r4 = arg0;
    switch (GetId__C4Tool(arg1) - 0x20) {
    case 0:
        var_r0 = 0;
        break;
    case 1:
        var_r0 = 1;
        break;
    case 2:
        var_r0 = 2;
        break;
    case 3:
        var_r0 = 3;
        break;
    case 4:
        var_r0 = 4;
        break;
    case 5:
    case 6:
        var_r0 = 5;
        break;
    case 7:
        var_r0 = 6;
        break;
    default:
        return var_r4;
    }
    if (var_r0 > var_r4) {
        var_r4 = var_r0;
    }
    return var_r4;
}

/* ATTEMPT-NOTE opencode: switch polos (jump-table) bukan compare-chain; default return. */
}

/* ATTEMPT-NOTE opencode: switch polos (jump-table) bukan compare-chain; default return. */

// DECOMP-MATCHED gData_code_entities_080244EC.data.080244EC
extern "C" {
// data tak-dirujuk di 0x080244EC (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_entities_080244EC[244] __attribute__((section(".text.code_entities.080244EC"))) = {0x70, 0xB5, 0x46, 0x46, 0x40, 0xB4, 0x84, 0xB0, 0x05, 0x1C, 0x68, 0x6B, 0x77, 0xF0, 0xF0, 0xFC, 0x06, 0x1C, 0x8C, 0x20, 0xDC, 0xF7, 0x68, 0xF8, 0x80, 0x46, 0x30, 0x1C, 0xFF, 0xF7, 0xDC, 0xFF, 0x04, 0x1C, 0x30, 0x1C, 0xFF, 0xF7, 0xE2, 0xFF, 0x00, 0x94, 0x01, 0x90, 0x00, 0x26, 0x02, 0x96, 0x03, 0xA8, 0x06, 0x70, 0x40, 0x46, 0x29, 0x1C, 0x04, 0x22, 0x0B, 0x23, 0x0D, 0xF0, 0xC8, 0xFF, 0x04, 0x1C, 0xA0, 0x46, 0x38, 0x35, 0x28, 0x78, 0x04, 0x28, 0x15, 0xD1, 0x20, 0x1C, 0x70, 0x30, 0x08, 0x21, 0x3A, 0xF0, 0x8F, 0xF9, 0x20, 0x1C, 0x84, 0x30, 0x01, 0x21, 0x01, 0x70, 0x02, 0x30, 0x06, 0x70, 0x01, 0x30, 0x01, 0x70, 0x22, 0x1C, 0x8A, 0x32, 0x02, 0x23, 0x11, 0x78, 0x04, 0x20, 0x40, 0x42, 0x08, 0x40, 0x18, 0x43, 0x10, 0x70, 0x40, 0x46, 0x04, 0xB0, 0x08, 0xBC, 0x98, 0x46, 0x70, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00, 0xCB, 0x1F, 0x03, 0x80, 0x13, 0x1F, 0x43, 0x80, 0x07, 0x31, 0x81, 0x80, 0x05, 0x32, 0xC2, 0x80, 0x70, 0x47, 0x00, 0x00, 0xCB, 0x1F, 0x03, 0x80, 0x13, 0x1F, 0x43, 0x80, 0x07, 0x31, 0x81, 0x80, 0x05, 0x32, 0xC2, 0x80, 0x70, 0x47, 0x00, 0x00, 0x00, 0xB5, 0x02, 0x1C, 0x11, 0x1C, 0x30, 0x31, 0x00, 0x20, 0x08, 0x70, 0x90, 0x8C, 0x00, 0x28, 0x01, 0xD0, 0x01, 0x38, 0x00, 0xE0, 0xD0, 0x8C, 0x90, 0x84, 0x12, 0x69, 0x00, 0x2A, 0x04, 0xD0, 0x50, 0x68, 0xC1, 0x68, 0x10, 0x1C, 0xAF, 0xF0, 0xA5, 0xF9, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0xCB, 0x1F, 0x03, 0x80, 0x13, 0x1C, 0x09, 0x3B, 0x43, 0x80, 0x07, 0x31, 0x81, 0x80, 0x05, 0x32, 0xC2, 0x80, 0x70, 0x47};
}

}

}

// DECOMP-MATCHED func_08024BE8 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0802A588(i32);                               /* extern */
i32 vfunc_10__7AEntity();                             /* extern */

__attribute__((section(".text.code_entities.08024BE8")))
void func_08024BE8(i32 arg0) {
    vfunc_10__7AEntity();
    func_0802A588(arg0);
}
}

// DECOMP-MATCHED func_08024C54 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_080323C8(GenObj6 *);                            /* extern */

__attribute__((section(".text.code_entities.08024C54")))
void func_08024C54(GenObj6 *arg0) {
    arg0->unk6 = 1;
    func_080323C8(arg0);
}
}
// DECOMP-MATCHED func_08024C64 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_080323C8(GenObj6 *);                            /* extern */

__attribute__((section(".text.code_entities.08024C64")))
void func_08024C64(GenObj6 *arg0) {
    arg0->unk6 = 0;
    func_080323C8(arg0);
}
}

// DECOMP-MATCHED func_08024C88 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities.08024C88")))
void func_08024C88(GenObj__func_08024C88 *arg0) {
    arg0->unk3C = 8;
    arg0->unk3D = 0xFF;
}
}

// DECOMP-MATCHED func_08024C98 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities.08024C98")))
void func_08024C98(GenObj *arg0) {
    arg0->unk3C = 0;
}

/* ATTEMPT-NOTE opencode: member u8 (strb) bukan i32; offset 0x3C muat adds+strb. */
}

// DECOMP-MATCHED gData_code_entities_0802B51C.data.0802B51C
extern "C" {
// data tak-dirujuk di 0x0802B51C (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_entities_0802B51C[976] __attribute__((section(".text.code_entities.0802B51C"))) = {0xF0, 0xB5, 0x57, 0x46, 0x4E, 0x46, 0x45, 0x46, 0xE0, 0xB4, 0x9E, 0xB0, 0x13, 0x90, 0x14, 0x91, 0x00, 0x68, 0x15, 0x90, 0x81, 0x88, 0x89, 0x46, 0x02, 0x68, 0x92, 0x46, 0x13, 0x98, 0x44, 0x30, 0x00, 0x78, 0x16, 0x90, 0x15, 0x9B, 0x9E, 0x68, 0x31, 0x14, 0xD8, 0x68, 0x07, 0x1C, 0x3A, 0x14, 0x0D, 0xAC, 0x14, 0x9D, 0x28, 0x68, 0xAB, 0x68, 0x0D, 0x90, 0x63, 0x60, 0x48, 0x46, 0x07, 0xF0, 0xD1, 0xF9, 0x80, 0x46, 0x13, 0x98, 0x8B, 0x30, 0x41, 0x46, 0x01, 0x70, 0x15, 0x9D, 0x88, 0x35, 0x00, 0x21, 0x28, 0x78, 0x01, 0x28, 0x00, 0xD1, 0x01, 0x21, 0x00, 0x29, 0x00, 0xD1, 0xA2, 0xE0, 0x15, 0x98, 0xA4, 0x30, 0x00, 0x78, 0x00, 0x28, 0x00, 0xD1, 0x9C, 0xE0, 0x68, 0x68, 0x30, 0x18, 0x00, 0x14, 0x14, 0x9A, 0x0C, 0x23, 0xD1, 0x5E, 0x40, 0x1A, 0x17, 0x90, 0xA8, 0x68, 0x3C, 0x18, 0x21, 0x14, 0x0E, 0x27, 0xD0, 0x5F, 0x0E, 0x1A, 0x80, 0x20, 0x00, 0x02, 0x40, 0x1A, 0x18, 0x90, 0x00, 0x21, 0x68, 0x78, 0x01, 0x28, 0x00, 0xD1, 0x01, 0x21, 0x00, 0x29, 0x0D, 0xD0, 0x51, 0x46, 0x08, 0x68, 0x81, 0x6D, 0x50, 0x46, 0xA8, 0xF0, 0xA5, 0xF9, 0x14, 0x9A, 0x91, 0x68, 0x00, 0x22, 0x00, 0x92, 0x17, 0x9A, 0x33, 0x1C, 0x0F, 0xF0, 0x41, 0xFC, 0x68, 0x69, 0x21, 0x1A, 0x09, 0x14, 0x14, 0x9B, 0x0E, 0x24, 0x1A, 0x5F, 0x89, 0x1A, 0x1D, 0x91, 0x02, 0x21, 0x00, 0x14, 0x0F, 0x28, 0x06, 0xDD, 0x4D, 0x46, 0x08, 0x2D, 0x02, 0xDC, 0x47, 0x46, 0x01, 0x2F, 0x00, 0xD1, 0x01, 0x21, 0x13, 0x9D, 0x8C, 0x35, 0x0D, 0xA8, 0x80, 0x46, 0x08, 0x1C, 0x84, 0x00, 0x04, 0x43, 0x01, 0x01, 0x0C, 0x43, 0x80, 0x01, 0x04, 0x43, 0x13, 0x98, 0xB4, 0x30, 0x01, 0x68, 0x0B, 0x68, 0x82, 0x89, 0x13, 0x98, 0xB8, 0x30, 0x92, 0x00, 0x00, 0x68, 0x80, 0x18, 0x02, 0x88, 0x05, 0xA8, 0x1B, 0x69, 0xA8, 0xF0, 0x74, 0xF9, 0x05, 0xAE, 0x0E, 0x9B, 0x2A, 0x68, 0x13, 0x98, 0x90, 0x30, 0x41, 0x68, 0x48, 0x42, 0x08, 0x43, 0x00, 0x28, 0x13, 0xDA, 0xA8, 0x89, 0x13, 0x99, 0x9C, 0x31, 0x18, 0x9F, 0x00, 0x97, 0x01, 0x96, 0x02, 0x92, 0x03, 0x90, 0x04, 0x91, 0x18, 0x1C, 0x17, 0x99, 0x1D, 0x9A, 0x23, 0x1C, 0x02, 0x4C, 0xA8, 0xF0, 0x5C, 0xF9, 0x03, 0xE0, 0x00, 0x00, 0xDC, 0x04, 0x00, 0x03, 0x00, 0x20, 0x00, 0x28, 0x27, 0xD0, 0x28, 0x1C, 0x3C, 0x30, 0x01, 0x78, 0x07, 0x1C, 0x00, 0x29, 0x21, 0xD0, 0x40, 0x46, 0x01, 0x68, 0x32, 0x1C, 0x08, 0x32, 0x28, 0x1C, 0x79, 0xF0, 0xC0, 0xF8, 0x28, 0x1C, 0x3D, 0x30, 0x00, 0x78, 0x00, 0x28, 0x06, 0xD0, 0x31, 0x1C, 0x10, 0x31, 0x28, 0x1C, 0x01, 0x22, 0x79, 0xF0, 0x51, 0xF9, 0x0C, 0xE0, 0x2C, 0x1C, 0x3E, 0x34, 0x20, 0x78, 0x00, 0x28, 0x07, 0xD1, 0x31, 0x1C, 0x10, 0x31, 0x28, 0x1C, 0x01, 0x22, 0x79, 0xF0, 0x45, 0xF9, 0x01, 0x20, 0x20, 0x70, 0x00, 0x20, 0x38, 0x70, 0x00, 0x21, 0x19, 0x91, 0x6A, 0x46, 0x34, 0x32, 0x1A, 0x92, 0x13, 0x9B, 0xE4, 0x33, 0x1B, 0x93, 0x13, 0x9D, 0xD8, 0x35, 0x13, 0x9C, 0xD4, 0x34, 0xA0, 0x46, 0x13, 0x9F, 0xD0, 0x37, 0x1C, 0x97, 0x14, 0x98, 0x0C, 0x22, 0x81, 0x5E, 0x0E, 0x23, 0xC2, 0x5E, 0x1C, 0x9C, 0x20, 0x78, 0x00, 0x28, 0x5B, 0xD0, 0x3C, 0x27, 0xE8, 0x5F, 0x40, 0x1A, 0x81, 0x46, 0x3E, 0x21, 0x68, 0x5E, 0x84, 0x1A, 0x46, 0x46, 0x69, 0x6A, 0x0B, 0x68, 0x2A, 0x8E, 0x92, 0x00, 0xA8, 0x6A, 0x80, 0x18, 0x02, 0x88, 0x05, 0xA8, 0x1B, 0x69, 0xA8, 0xF0, 0xFF, 0xF8, 0x05, 0xAF, 0x0E, 0x9B, 0x32, 0x68, 0x69, 0x68, 0x48, 0x42, 0x08, 0x43, 0x00, 0x28, 0x14, 0xDA, 0x28, 0x89, 0x80, 0x21, 0x09, 0x02, 0x00, 0x91, 0x39, 0x1C, 0x01, 0x91, 0x02, 0x92, 0x03, 0x90, 0x1B, 0x9A, 0x04, 0x92, 0x18, 0x1C, 0x49, 0x46, 0x22, 0x1C, 0xAA, 0x23, 0x02, 0x4C, 0xA8, 0xF0, 0xE8, 0xF8, 0x03, 0xE0, 0x00, 0x00, 0xDC, 0x04, 0x00, 0x03, 0x00, 0x20, 0x00, 0x28, 0x28, 0xD0, 0x30, 0x1C, 0x3C, 0x30, 0x01, 0x78, 0x81, 0x46, 0x00, 0x29, 0x22, 0xD0, 0x1A, 0x9B, 0x19, 0x68, 0x3A, 0x1C, 0x08, 0x32, 0x30, 0x1C, 0x79, 0xF0, 0x4C, 0xF8, 0x30, 0x1C, 0x3D, 0x30, 0x00, 0x78, 0x00, 0x28, 0x06, 0xD0, 0x39, 0x1C, 0x10, 0x31, 0x30, 0x1C, 0x01, 0x22, 0x79, 0xF0, 0xDD, 0xF8, 0x0C, 0xE0, 0x34, 0x1C, 0x3E, 0x34, 0x20, 0x78, 0x00, 0x28, 0x07, 0xD1, 0x39, 0x1C, 0x10, 0x31, 0x30, 0x1C, 0x01, 0x22, 0x79, 0xF0, 0xD1, 0xF8, 0x01, 0x20, 0x20, 0x70, 0x00, 0x20, 0x4C, 0x46, 0x20, 0x70, 0x1B, 0x9F, 0x48, 0x37, 0x1B, 0x97, 0x48, 0x35, 0x48, 0x20, 0x80, 0x44, 0x1C, 0x99, 0x48, 0x31, 0x1C, 0x91, 0x19, 0x9A, 0x01, 0x32, 0x19, 0x92, 0x05, 0x2A, 0x8C, 0xD9, 0x13, 0x98, 0x14, 0x99, 0x06, 0xF0, 0x60, 0xFF, 0x16, 0x9B, 0x00, 0x2B, 0x05, 0xD1, 0x13, 0x9C, 0x0D, 0x4D, 0x60, 0x19, 0x00, 0x78, 0x00, 0x28, 0x77, 0xD0, 0x15, 0x9F, 0xB8, 0x6B, 0xE2, 0xF7, 0x89, 0xFE, 0x4F, 0x28, 0x14, 0xD9, 0x51, 0x46, 0x08, 0x68, 0x82, 0x6C, 0x50, 0x46, 0x00, 0x21, 0xA8, 0xF0, 0x8C, 0xF8, 0x02, 0x1C, 0x53, 0x46, 0x18, 0x68, 0x04, 0x49, 0x44, 0x6D, 0x50, 0x46, 0x01, 0x23, 0xA8, 0xF0, 0x87, 0xF8, 0x30, 0xE0, 0x81, 0x02, 0x00, 0x00, 0x08, 0xBA, 0x58, 0x08, 0x13, 0x9C, 0x32, 0x4D, 0x60, 0x19, 0x00, 0x78, 0x00, 0x28, 0x26, 0xD0, 0x57, 0x46, 0x38, 0x68, 0x81, 0x6E, 0x50, 0x46, 0xA8, 0xF0, 0x70, 0xF8, 0x04, 0x1C, 0x15, 0x98, 0x42, 0x8C, 0x20, 0x30, 0x00, 0x78, 0x12, 0x18, 0x25, 0x68, 0x0F, 0xA8, 0xEB, 0x68, 0x21, 0x1C, 0xA8, 0xF0, 0x68, 0xF8, 0x0F, 0x98, 0x02, 0x88, 0x05, 0xA8, 0x2B, 0x69, 0x21, 0x1C, 0xA8, 0xF0, 0x61, 0xF8, 0x38, 0x68, 0x82, 0x6C, 0x50, 0x46, 0x00, 0x21, 0xA8, 0xF0, 0x59, 0xF8, 0x02, 0x1C, 0x38, 0x68, 0x09, 0x99, 0x44, 0x6D, 0x50, 0x46, 0x01, 0x23, 0xA8, 0xF0, 0x55, 0xF8, 0x15, 0x9D, 0x7C, 0x35, 0x29, 0x88, 0x1B, 0x48, 0x81, 0x42, 0x24, 0xD0, 0x51, 0x46, 0x08, 0x68, 0x41, 0x6E, 0x50, 0x46, 0xA8, 0xF0, 0x43, 0xF8, 0x04, 0x1C, 0x2A, 0x88, 0x25, 0x68, 0x11, 0xA8, 0xEB, 0x68, 0x21, 0x1C, 0xA8, 0xF0, 0x3F, 0xF8, 0x11, 0x98, 0x02, 0x88, 0x05, 0xA8, 0x2B, 0x69, 0x21, 0x1C, 0xA8, 0xF0, 0x38, 0xF8, 0x52, 0x46, 0x10, 0x68, 0x82, 0x6C, 0x50, 0x46, 0x02, 0x21, 0xA8, 0xF0, 0x2F, 0xF8, 0x02, 0x1C, 0x53, 0x46, 0x18, 0x68, 0x09, 0x99, 0x44, 0x6D, 0x50, 0x46, 0x01, 0x23, 0xA8, 0xF0, 0x2A, 0xF8, 0x13, 0x9C, 0x06, 0x4D, 0x61, 0x19, 0x00, 0x20, 0x08, 0x70, 0x1E, 0xB0, 0x38, 0xBC, 0x98, 0x46, 0xA1, 0x46, 0xAA, 0x46, 0xF0, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0x81, 0x02, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00};
}

// DECOMP-MATCHED func_08025AFC (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities.08025AFC")))
i32 func_08025AFC(GenObj__func_08025AFC *arg0) {
    i32 v = arg0->unk4;
    if (v <= 8) {
        return 1;
    }
    return 0;
}
}

// DECOMP-MATCHED func_0802907C (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetId__C7Article(i8 *);                         /* extern */
i32 func_0800ED2C(i32);                               /* extern */
i32 func_0800F190(i32);                             /* extern */
i32 func_0800F204(i32);                             /* extern */
i8 func_0800F258(i32);                              /* extern */
i32 func_0800F390(i32);                               /* extern */
void func_0802A7D8(GenObj__func_0802A7D8 *arg0);              /* extern */

__attribute__((section(".text.code_entities.0802907C")))
void func_0802907C(GenObj__func_0802907C *arg0) {
    i8 sp0;
    i32 temp_r4;

    temp_r4 = arg0->unk34 + 0x1C2C;
    if ((func_0800F190(temp_r4) << 0x18) == 0) {
        if (func_0800F204(temp_r4) == 1) {
            sp0 = func_0800F258(temp_r4);
            if (GetId__C7Article(&sp0) == 0x35) {
                func_0800ED2C((i32)(arg0->unk38));
            }
        }
        func_0800F390((i32)(arg0->unk38 + 0x54));
        func_0802A7D8((GenObj__func_0802A7D8 *)arg0);
    }
}
}

// DECOMP-MATCHED func_080299D0 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 SetAnim__12AActorEntityUi(void *, u16);

__attribute__((section(".text.code_entities.080299D0")))
void func_080299D0(u8 *arg0) {
    u8 *p = arg0 + 0xa4;
    *p = 0;
    *(p - 0x1c) = 0;
    SetAnim__12AActorEntityUi(arg0, 402);
}
}

// DECOMP-MATCHED func_0802A4C0 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0805E850(void *, i32, i32);                  /* extern */

__attribute__((section(".text.code_entities.0802A4C0")))
void func_0802A4C0(GenObj__func_0802A4C0 *arg0, i32 arg1, i32 arg2) {
    register GenObj__func_0802A4C0 *a0 __asm__("r3") = arg0;
    register i32 a1 __asm__("r5") = arg1;
    register u8 *t0 __asm__("r0");
    GenObj__func_0802A4C0 *temp_r4;
    u8 *b;
    void *obj;
    i32 rv;

    b = (u8 *)a0 + 0x88;
    *b = 1;
    if (arg2 != 1) {
        if (arg2 != 0)
            goto skip;
    }
    b[1] = arg2;
skip:
    temp_r4 = (GenObj__func_0802A4C0 *)(a0->unk10);
    if (temp_r4 != 0) {
        i32 v1;
        i32 v0;
        obj = *(void **)temp_r4->unk0;
        rv = ((i32 (*)(void *))(((HA4 *)obj)->vt->unk64))(obj);
        func_0805E850((void *)((u8 *)temp_r4 + 0xB4), rv, a1);
        t0 = (u8 *)temp_r4 + 0xC8;
        v0 = 0;
        v1 = 1;
        *t0 = v1;
        t0 += 2;
        *t0 = v0;
        t0 += 1;
        *t0 = v1;
        __asm__ volatile("" : "+r"(t0));
    }
}
}
// DECOMP-MATCHED func_0802A510 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
u16 GetIconId__C4Tool(i8 *);
i32 GetTool__C9ToolStack(i32);
i8 func_0800E550(i32, i32);
i32 func_0805E850(void *, i32, i32);

__attribute__((section(".text.code_entities.0802A510")))
void func_0802A510(GenObj__func_0802A510 *arg0) {
    register GenObj__func_0802A510 *a0 __asm__("r3") = arg0;
    register u8 *b __asm__("r0");
    i8 sp0;
    i32 temp38;
    u16 icon;
    GenObj__func_0802A510 *temp_r5;
    u8 *t0;
    void *obj;
    i32 rv;
    i32 v0;
    i32 v1;
    i32 c1;
    i32 c2;
    S88 *bs;

    b = (u8 *)arg0 + 0x88;
    __asm__ volatile("" : "+r"(b));
    v0 = 0;
    v1 = 1;
    bs = (S88 *)b;
    bs->b0 = v1;
    bs->b1 = v0;
    c1 = 0xFFF80000;
    c2 = 0x110000;
    bs->w4 = c1;
    bs->w8 = v0;
    bs->w14 = c2;
    temp_r5 = (GenObj__func_0802A510 *)(a0->unk10);
    if (temp_r5 != 0) {
        temp38 = a0->unk38;
        sp0 = func_0800E550(temp38, GetTool__C9ToolStack(temp38 + 0x5C));
        icon = GetIconId__C4Tool(&sp0);
        obj = *(void **)temp_r5->unk0;
        rv = ((i32 (*)(void *))(((H10 *)obj)->vt->unk64))(obj);
        func_0805E850((void *)((u8 *)temp_r5 + 0xB4), rv, icon);
        t0 = (u8 *)temp_r5 + 0xC8;
        *t0 = v1;
        t0 += 2;
        *t0 = v0;
        t0 += 1;
        *t0 = v1;
        __asm__ volatile("" : "+r"(t0));
    }
}
}

// DECOMP-MATCHED func_0802A7D8 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities.0802A7D8")))
void func_0802A7D8(GenObj__func_0802A7D8 *arg0) {
    arg0->unk88 = 0;
}
}

// DECOMP-MATCHED func_0802B8EC (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_08024974(i32, i32, i32);                     /* extern */

__attribute__((section(".text.code_entities.0802B8EC")))
i32 func_0802B8EC(i32 arg0, i32 arg1) {
    return func_08024974(__builtin_new(0xC8), arg0, arg1);
}
}
// DECOMP-MATCHED func_0802B908 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, i32, i32 *, i32, i32); /* extern */
i32 func_0800E924(i32 *, i32);                          /* extern */
extern i32 vtable_unk_080E676C;

__attribute__((section(".text.code_entities.0802B908")))
void *func_0802B908(GenObj__func_0802B908 *arg0, i32 arg1, i32 arg2) {
struct { i32 sp4; i32 _b; } fr;

    func_0800E924(&fr.sp4, arg2 + 0x1BD8);
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, &fr.sp4, 2, 0x192);
    arg0->unk14 = &vtable_unk_080E676C;
    return arg0;
}
}
// DECOMP-MATCHED func_0802B944 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, i32, i32 *, i32, i32);
extern i32 vtable_unk_080E671C;

__attribute__((section(".text.code_entities.0802B944")))
void *func_0802B944(void *arg0, i32 arg1) {
    register GenObj__func_0802B944 *a0 __asm__("r5");
    register i32 a1 __asm__("r9");
    register i32 z8 __asm__("r8");
    register i32 MASK __asm__("r3");
    register i32 v __asm__("r2");
    u8 sp4[8];
    u8 spC[8];
    u8 *b;
    u8 *p4;
    i32 z6;
    i32 K;

    a0 = (GenObj__func_0802B944 *)arg0;
    a1 = arg1;
    b = (u8 *)(spC);
    K = 0x234;
    z8 = 0;
    v = *(u16 *)b;
    MASK = 0xFFFFFC00;
    *(u16 *)b = (u16)((v & MASK) | K);
    z6 = 0;
    *(b + 1) &= 3;
    *(u16 *)(b + 2) &= MASK;
    *(b + 3) &= 3;
    *(u16 *)(b + 4) &= MASK;
    p4 = (u8 *)(sp4);
    memcpy((void *)(p4), (const void *)(spC), 6);
    p4[6] = z6;
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(a0, a1, (i32 *)sp4, 2, z8);
    a0->unk14 = &vtable_unk_080E671C;
    return (void *)(a0);
}
}

// DECOMP-MATCHED func_0802B9C0 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
void* func_0802B944(void *arg0, i32 arg1);                             /* extern */
i32 vfunc_10__7AEntity();
extern i32 vtable_unk_080E65F4;

__attribute__((section(".text.code_entities.0802B9C0")))
void *func_0802B9C0(GenObj__func_0802B9C0 *arg0, i32 arg1) {
    register GenObj__func_0802B9C0 *a0 __asm__("r4") = arg0;
    u8 *p;
    i32 v0;

    func_0802B944(a0, arg1);
    a0->unk14 = &vtable_unk_080E65F4;
    p = (u8 *)a0 + 0x34;
    __asm__ volatile("" : "+r"(p));
    v0 = 0;
    *p = v0;
    p += 1;
    *p = v0;
    p += 3;
    *p = v0;
    p[1] = v0;
    *(i32 *)(p + 4) = v0;
    *(i32 *)(p + 8) = v0;
    *(i32 *)(p + 12) = v0;
    *(i32 *)(p + 16) = v0;
    *(i32 *)(p + 20) = v0;
    *(i32 *)(p + 24) = v0;
    p += 0x1C;
    *p = v0;
    p += 2;
    *(u16 *)p = v0;
    p += 2;
    *p = v0;
    p += 1;
    *p = v0;
    vfunc_10__7AEntity(a0);
    return (void *)(a0);
}
}

// DECOMP-MATCHED func_0802BE68 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 SetAnim__12AActorEntityUi(void *, u16);
u16 func_0802BC48(void *);

__attribute__((section(".text.code_entities.0802BE68")))
void func_0802BE68(GenObj__func_0802BE68 *arg0) {
    register GenObj__func_0802BE68 *a0 __asm__("r5");
    register i32 var_r2 __asm__("r2");
    u8 *w;
    i32 var_r1;
    S38 *var_r0;

    a0 = arg0;
    var_r2 = arg0->unk20;
    switch (var_r2) {
    case 2:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0xFFFE5556;
        var_r2 = 0;
        var_r0->unkC = var_r1;
        var_r0->unk10 = var_r2;
        var_r0->unk18 = var_r2;
        break;
    case 3:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0x1AAAA;
        var_r2 = 0;
        var_r0->unkC = var_r1;
        var_r0->unk10 = var_r2;
        var_r0->unk18 = var_r2;
        break;
    case 1:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r2 = 0;
        var_r1 = 0xFFFE5556;
        var_r0->unkC = var_r2;
        var_r0->unk10 = var_r1;
        var_r0->unk18 = var_r2;
        break;
    case 0:
        var_r0 = (S38 *)((u8 *)a0 + 0x38);
        var_r1 = 0x1AAAA;
        var_r0->unkC = var_r2;
        var_r0->unk10 = var_r1;
        var_r0->unk18 = var_r2;
        break;
    }
    w = (u8 *)a0;
    w += 0x34;
    *w = 1;
    w += 0x24;
    *w = 1;
    {
        u16 icon = func_0802BC48(a0);
        SetAnim__12AActorEntityUi(a0, icon);
    }
    w = (u8 *)a0;
    w += 0x54;
    *w = 1;
}
}

// DECOMP-MATCHED func_0802BEFC (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 SetAnim__12AActorEntityUi(void *, u16);           /* extern */
u16 func_0802BC48(void *);                          /* extern */

__attribute__((section(".text.code_entities.0802BEFC")))
void func_0802BEFC(GenObj__func_0802BEFC *arg0) {
    arg0->unk34 = 2;
    arg0->unk58 = 1;
    SetAnim__12AActorEntityUi(arg0, func_0802BC48(arg0));
    arg0->unk54 = 1;
}
}

// DECOMP-MATCHED func_0802BFA0 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0803260C();
i32 func_0805E8F0(void *);

/* NOTE crouton-alpha-3: deref chain S38__func_0802BFA0 + byte pointer (u8) agar lebar
   ldrb/strb pas; pointer artimetic via cast (u8*) bukan GenObj__func_0802BFA0* agar
   tak diskala sizeof. */
__attribute__((section(".text.code_entities.0802BFA0")))
void func_0802BFA0(GenObj__func_0802BFA0 *arg0) {
    i32 var_r1;
    i8 *var_r1_2;
    i8 var_r0;
    S38__func_0802BFA0 *p;
    u8 *b;

    func_0803260C();
    p = (S38__func_0802BFA0 *)(arg0->unk0);
    b = (u8 *)p + 0x38;
    var_r1 = 0;
    if (*b == 1) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        var_r1_2 = (i8 *)((u8 *)arg0 + 0xCB);
        if (arg0->unkCB == 0) {
            if ((i32) (func_0805E8F0((u8 *)arg0 + 0xB4) << 0x1E) < 0) {
                var_r1_2 = (i8 *)((u8 *)arg0 + 0xC8);
                var_r0 = 1;
                goto block_7;
            }
        } else {
            var_r0 = 0;
block_7:
            *var_r1_2 = var_r0;
        }
    }
}
}

// DECOMP-MATCHED func_0802C2DC (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities.0802C2DC")))
void func_0802C2DC(void) {

}
}

// DECOMP-MATCHED func_0802C860 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetId__C4Tool(i32);
i32 GetTool__C9ToolStack(i32);
i32 func_08008B6C(i32, i32);
i32 func_08008CD0(i32);
i8 func_0800E550(i32, i32);
i32 func_08025B10(void *);

struct GenObj__func_0802A510;
void func_0802A510(GenObj__func_0802A510 *arg0);                             /* extern */
__attribute__((section(".text.code_entities.0802C860")))
void func_0802C860(GenObj__func_0802C860 *arg0) {
    register GenObj__func_0802C860 *a0 __asm__("r6");
    i8 sp0;
    i32 *p;
    i32 *end;
    i32 var_r0;
    i32 temp_r4;
    PairObj *obj;
    HC860 *o;
    register void *idx __asm__("r4");
    register i32 neg2 __asm__("r5");
    i32 res;

    a0 = arg0;
    {
        register u8 *b __asm__("r1");
        b = (u8 *)a0;
        b += 0x3C;
        *b = 0xA;
        b += 1;
        __asm__ volatile("" : "+r"(b));
        *b = 0x14;
    }
    func_0802A510((struct GenObj__func_0802A510 *)a0);
    o = (HC860 *)(a0->unk0);
    obj = ((PairObj *(*)(HC860 *))(o->vt->unk14C))(o);
    p = (i32 *)(obj->beg);
    end = (i32 *)(obj->end);
    if (p == end) goto block_8;
loop_1:
    if ((func_08008CD0(*p) << 0x18) == 0) goto found;
    p += 1;
    if (p != end) goto loop_1;
    goto block_8;
block_8:
    var_r0 = *(end - 1);
    goto after;
after:
    ;
    func_08008B6C(var_r0, 0xBC);
    temp_r4 = *(i32 *)((u8 *)a0 + 0x38);
    sp0 = func_0800E550(temp_r4, GetTool__C9ToolStack(temp_r4 + 0x5C));
    if (GetId__C4Tool((i32)&sp0) != 0x4D) goto path_else;
    idx = a0->unk14;
    neg2 = -2;
    res = func_08025B10(a0);
    ((void (*)(void *, i32, i32))(*(void **)((u8 *)idx + 0x64)))(a0, neg2, res);
    return;
found:
    var_r0 = *p;
    goto after;
path_else:
    idx = a0->unk14;
    res = func_08025B10(a0);
    ((void (*)(void *, i32, i32))(*(void **)((u8 *)idx + 0x64)))(a0, 0, res);
}
}

// DECOMP-MATCHED func_0802C908 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008B6C(i32, i32);
i32 func_08008CD0(i32);

__attribute__((section(".text.code_entities.0802C908")))
void func_0802C908(GenObj__func_0802C908 *arg0) {
    register GenObj__func_0802C908 *a0 __asm__("r4");
    register u8 *pa __asm__("r3");
    register u8 *pb __asm__("r2");
    register i32 t41 __asm__("r0");
    i32 *p;
    i32 *end;
    i32 var_r0;
    PairObj *obj;
    HC908 *o;

    a0 = arg0;
    pa = (u8 *)a0 + 0x41;
    t41 = *pa;
    if (t41 != 0) {
        pb = (u8 *)a0 + 0x40;
        if ((i32) *pb < (i32) (t41 - 1)) {
            register u8 *pc __asm__("r1");
            i32 t42;
            i32 t40;
            pc = (u8 *)a0 + 0x42;
            t42 = *pc + 1;
            *pc = t42;
            if ((u8)t42 != 0x14) {
                goto rest;
            }
            *pc = 0;
            t40 = *pb + 1;
            *pb = t40;
            if ((u8)t40 != 5) {
                goto rest;
            }
            o = (HC908 *)(a0->unk0);
            obj = ((PairObj *(*)(HC908 *))(o->vt->unk14C))(o);
            p = (i32 *)(obj->beg);
            end = (i32 *)(obj->end);
            if (p == end) {
                goto block_8;
            }
loop_5:
            if ((func_08008CD0(*p) << 0x18) != 0) {
                p += 1;
                if (p != end) {
                    goto loop_5;
                }
                goto block_8;
            }
            var_r0 = *p;
            goto after;
block_8:
            var_r0 = *(end - 1);
after:
            ;
            func_08008B6C(var_r0, 0xB8);
        }
    }
rest:;
}
}

// DECOMP-MATCHED func_0802D844 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 SetAnimFacing__12AActorEntityUi(void *, i32);     /* extern */

i32 func_080323C8(GenObj6 *);                            /* extern */

__attribute__((section(".text.code_entities.0802D844")))
void func_0802D844(GenObj__func_0802D844 *arg0, GenObj__func_0802D844 *arg1) {
    u16 var_r5;

    var_r5 = 0;
    if (arg1 != 0) {
        var_r5 = arg1->unk4;
    }
    if ((arg0->unkC3 != 0) || (0x3F3 & var_r5)) {
        func_080323C8((GenObj6 *)arg0);
        arg0->unk3C = 0x18;
        if (0x20 & var_r5) {
            if (arg0->unk20 != 2) {
                SetAnimFacing__12AActorEntityUi(arg0, 2);
            }
        } else if (0x10 & var_r5) {
            if (arg0->unk20 != 3) {
                SetAnimFacing__12AActorEntityUi(arg0, 3);
            }
        } else if (0x40 & var_r5) {
            if (arg0->unk20 != 1) {
                SetAnimFacing__12AActorEntityUi(arg0, 1);
            }
        } else if ((var_r5 & 0x80) && (arg0->unk20 != 0)) {
            SetAnimFacing__12AActorEntityUi(arg0, 0);
        }
    }
}
}

// DECOMP-MATCHED func_0802D8E8 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08025A40(void *, i32);

__attribute__((section(".text.code_entities.0802D8E8")))
void func_0802D8E8(GenObj__func_0802D8E8 *arg0, GenObj__func_0802D8E8 *arg1) {
    PS8 sp;
    i32 sp8v;
    i32 var_r2;
    i32 var_r3;
    i32 var_r4;
    register GenObj__func_0802D8E8 *a5 __asm__("r5");
    void *temp_r0;

    a5 = arg0;
    var_r3 = 0;
    sp8v = var_r3;
    var_r4 = 0;
    if (arg1 != 0) {
        var_r3 = *(u16 *)arg1;
        sp8v = *(u16 *)((u8 *)arg1 + 4);
        var_r4 = *(u16 *)((u8 *)arg1 + 8);
    }
    if (*(u8 *)((u8 *)a5 + 0xC3) != 0) {
        {
            register u8 *q __asm__("r1");
            q = (u8 *)a5 + 0x3C;
            *q = 0;
        }
        return;
    }
    var_r2 = ((u32)(var_r3 << 0x1E) >> 0x1F);
    var_r2 = var_r2 | ((u32)(var_r3 << 0x16) >> 0x1F);
    if (var_r2 != 0) {
        if ((((u32)(var_r4 << 0x19) >> 0x1F) | ((u32)(var_r4 << 0x1A) >> 0x1F)) != 0) {
            func_08025A40(a5, 1);
            return;
        }
        var_r2 = ((u32)(var_r4 << 0x18) >> 0x1F) | ((u32)(var_r4 << 0x1B) >> 0x1F);
        {
            register i32 tmp0 __asm__("r0");
            tmp0 = ((u32)(sp8v << 0x1E) >> 0x1F) | var_r2;
            var_r4 = ((u32)(sp8v << 0x16) >> 0x1F) | tmp0;
        }
        if (var_r4 != 0) {
            func_08025A40(a5, 0);
            return;
        }
        var_r2 = 1 & *(u8 *)&sp8v;
        if (var_r2 != 0) {
            temp_r0 = *(void **)a5;
            {
                void **vtp;
                void *fn;
                vtp = (void **)((u8 *)(((H8E8 *)temp_r0)->vt) + 0x140);
                sp.sp0 = 0x3CE;
                sp.sp4 = var_r4;
                fn = *vtp;
                ((void (*)(void *, void *, i32))(fn))(temp_r0, &sp, 0);
            }
            {
                register u8 *qq __asm__("r0");
                qq = (u8 *)a5;
                qq += 0x3C;
                *qq = (u8)var_r4;
            }
            return;
        }
        if (1 & *((u8 *)&sp8v + 1)) {
            goto block_12;
        }
    } else {
block_12:
        {
            register u8 *qq __asm__("r0");
            qq = (u8 *)a5;
            qq += 0x3C;
            *qq = (u8)var_r2;
        }
    }
}
}

// DECOMP-MATCHED func_0803205C (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0803205C(GenObj *arg0) {
    i32 var_r1;
    u8 temp_r0;

    var_r1 = 0;
    temp_r0 = arg0->unk3C;
    if ((temp_r0 == 7) || (temp_r0 == 0x2D)) {
        var_r1 = 1;
    }
    return var_r1;
}
}
// ekor tak-bermarker dari code_entities.s (verbatim, jangan diubah)
asm(
".L08032074:\n"
"    .byte 0xC0, 0x30, 0x00, 0x78, 0x70, 0x47, 0x00, 0x00, 0xCB, 0x1F, 0x03, 0x80\n"
"    .byte 0x13, 0x1C, 0x09, 0x3B, 0x43, 0x80, 0x07, 0x31, 0x81, 0x80, 0x05, 0x32, 0xC2, 0x80, 0x70, 0x47\n"
);

// DECOMP-MATCHED func_08032090 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_08032090(void **arg0, i32 arg1) {
    EPair tmp;
    EPair tmp2;
    register EPair *pp __asm__("r2");
    register EPair *pt0 __asm__("r0");
    register u32 sum __asm__("r4");
    register u32 i __asm__("r3");
    register u32 count __asm__("r1");
    register u32 lim __asm__("r2");
    EItem *p;
    EItem *q;
    register ETab *t __asm__("r1");
    register void **a4 __asm__("r4") = arg0;
    register i32 a2 __asm__("r2") = arg1;
    t = (ETab *)*a4;
    pt0 = &tmp;
    t->unkC(pt0, a4, a2);
    tmp2 = tmp;
    pp = &tmp2;
    sum = 0;
    i = 0;
    p = tmp2.ptr;
    count = 0;
    if (p != 0)
        count = pp->count;
    lim = count;
    if (sum < lim) {
        q = p;
        do {
            sum += q->unk2;
            q++;
            i++;
        } while (i < lim);
    }
    return sum;
}
}
