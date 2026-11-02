#include "prelude.h"

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
    i32 unk18;
    u8 unk1C;
} GenObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080361EC {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_080361EC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036AB4 GenObj__func_08036AB4;
typedef struct GenObj__func_08037EB4 {
    u8 _pad0[16];
    i32 unk10;
    u8 _pad14[4];
    i32 unk18;
} GenObj__func_08037EB4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08039F50 {
    u8 _pad0[8];
    struct GenObj__func_08039F50 *unk8;
    u8 _padC[24];
    struct GenObj__func_08039F50 *unk24;
    u8 _pad28[32];
    i32 unk48;
    void *unk4C;
} GenObj__func_08039F50;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035AE0 {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad6[8];
    i16 unkE;
} GenObj__func_08035AE0;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_08035AE0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities_08034CEC.08035AE0")))
i32 func_08035AE0(GenObj__func_08035AE0 *arg0) {
    i32 var_r2;

    var_r2 = 0;
    if ((arg0->unk4 == 0x1D) && ((i32) arg0->unkE <= 0x37)) {
        var_r2 = 1;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk4 u16 (ldrh), unkE i16 (ldrsh). */
}

// DECOMP-MATCHED func_08035CB8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08035C04(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035CB8")))
void func_08035CB8(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08035C04(arg0);
    }
}
}

// DECOMP-MATCHED func_08036138 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08036084(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036138")))
void func_08036138(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036084(arg0);
    }
}
}

// DECOMP-MATCHED func_080361EC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F6B4C;
extern i32 vtable_unk_080E6E58;

__attribute__((section(".text.code_entities_08034CEC.080361EC")))
void *func_080361EC(GenObj__func_080361EC *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6B4C, 0x8E4, 0x8E8, 0x3FF);
    arg0->unk14 = &vtable_unk_080E6E58;
    return arg0;
}
}

// DECOMP-MATCHED func_080364E4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08036430(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.080364E4")))
void func_080364E4(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036430(arg0);
    }
}
}

// DECOMP-MATCHED func_08036680 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_080365CC(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036680")))
void func_08036680(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_080365CC(arg0);
    }
}
}

// DECOMP-MATCHED func_080367AC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08036768(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.080367AC")))
void func_080367AC(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036768(arg0);
    }
}
}

// DECOMP-MATCHED func_080369C4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08036900(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.080369C4")))
void func_080369C4(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036900(arg0);
    }
}
}

// DECOMP-MATCHED func_08036B00 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
// PENYATUAN-MANUAL 2026-11-01 (pola A0030/A0384: arg0 pointer-sbg-i32 diteruskan ke
// 36AB4 (GenObj__36AB4*); ref: adds r0,r5; bl; cast no-op, verify MATCH + HIJAU).
extern "C" {
i32 func_08034F00();                                  /* extern */

void func_08036AB4(GenObj__func_08036AB4 *);               /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036B00")))
void func_08036B00(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036AB4((GenObj__func_08036AB4 *)arg0);
    }
}
}

// DECOMP-MATCHED func_08037618 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F1560;

__attribute__((section(".text.code_entities_08034CEC.08037618")))
u16 func_08037618(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F1560;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}
// DECOMP-MATCHED func_08037628 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.08037628")))
i32 func_08037628(i32 arg0, i32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}
}

// DECOMP-MATCHED func_080377C4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F15A4;

__attribute__((section(".text.code_entities_08034CEC.080377C4")))
u16 func_080377C4(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F15A4;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}
// DECOMP-MATCHED func_080377D4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.080377D4")))
i32 func_080377D4(i32 arg0, i32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}
}

// DECOMP-MATCHED func_080378EC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F161C;

__attribute__((section(".text.code_entities_08034CEC.080378EC")))
u16 func_080378EC(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F161C;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}
// DECOMP-MATCHED func_080378FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.080378FC")))
i32 func_080378FC(i32 arg0, u32 arg1) {
    switch (arg1) {
    default:
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
        return 0;
    case 1:
        return 0x8000;
    case 2:
    case 11:
        return 0x10000;
    }
}
}

// DECOMP-MATCHED func_08037A38 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F1644;

__attribute__((section(".text.code_entities_08034CEC.08037A38")))
u16 func_08037A38(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F1644;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}
// DECOMP-MATCHED func_08037A48 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.08037A48")))
i32 func_08037A48(i32 arg0, i32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}
}

// DECOMP-MATCHED func_08037EB4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800FFF4(i32, u8);                           /* extern */
i32 func_08037F74();                                  /* extern */

__attribute__((section(".text.code_entities_08034CEC.08037EB4")))
void func_08037EB4(GenObj__func_08037EB4 *arg0, u8 *arg1) {
    func_0800FFF4((i32)(arg0->unk18), *arg1);
    if (arg0->unk10 != 0) {
        func_08037F74();
    }
}
}

// DECOMP-MATCHED func_08038320 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08038110(i32);                               /* extern */
i32 vfunc_2C__7AEntityUi();                           /* extern */

__attribute__((section(".text.code_entities_08034CEC.08038320")))
void func_08038320(i32 arg0) {
    vfunc_2C__7AEntityUi();
    func_08038110(arg0);
}
}

// DECOMP-MATCHED func_080391C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.080391C0")))
i32 func_080391C0(i32 arg0, i32 arg1) {
    if (((arg1 <= 0x38) && (arg0 > 0x143) && (arg0 <= 0x164)) || ((arg1 > 0x27F) && (arg0 > 0xF7) && (arg0 <= 0x118))) {
        return 1;
    }
    return 0;
}
}
// DECOMP-MATCHED func_080391FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.080391FC")))
void func_080391FC(void) {

}
}
// DECOMP-MATCHED func_08039200 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.08039200")))
i32 func_08039200(void) {
    return 0;
}
}

// DECOMP-MATCHED func_0803930C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.0803930C")))
i32 func_0803930C(void) {
    return 1;
}
}

// DECOMP-MATCHED func_08039A5C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.08039A5C")))
void func_08039A5C(void) {

}
}

// DECOMP-MATCHED func_08039D4C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F16AE;

__attribute__((section(".text.code_entities_08034CEC.08039D4C")))
u16 func_08039D4C(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F16AE;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}

// DECOMP-MATCHED func_08039F50 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_delete(void *);                         /* extern */
i32 func_080A47B4(void *, i32);                       /* extern */
extern i32 vtable_unk_080E76BC;

__attribute__((section(".text.code_entities_08034CEC.08039F50")))
void func_08039F50(GenObj__func_08039F50 *arg0, i32 arg1) {
    GenObj__func_08039F50 *temp_r1;

    arg0->unk4C = &vtable_unk_080E76BC;
    temp_r1 = (GenObj__func_08039F50 *)(arg0->unk48);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
    }
    func_080A47B4((GenObj__func_08039F50 *)((u8 *)arg0 + 8), 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}

// DECOMP-MATCHED func_0803A320 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F16D2;

__attribute__((section(".text.code_entities_08034CEC.0803A320")))
i16 func_0803A320(i32 arg0, i32 arg1) {
    i8 *temp_r0 = (i8 *) &gUnk_080F16D2;

    return *(i16 *) (temp_r0 + (((i32) (arg1 << 0x10)) >> 0xF));
}
}
// DECOMP-MATCHED func_0803A334 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F16D2;

__attribute__((section(".text.code_entities_08034CEC.0803A334")))
i16 func_0803A334(i32 dummy, i16 arg1) {
    u8 *base = (u8 *)&gUnk_080F16D2;
    i32 t = (arg1 + 0x40) & 0xFF;

    return *(i16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE opencode: arg di r1 (i32 dummy + i16 arg1); & 0xFF imm (movs belakangan, bukan var di awal); base (u8*) di var; ldrsh [r1,r2]. */
}

// DECOMP-MATCHED func_0803A798 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __7AEntityP10GameObjectRC8Location(void *, i32, i32 *); /* extern */
void *__builtin_new(i32);                           /* extern */
extern i32 vtable_unk_080E7568;

void *func_0803A798(i32 arg0, i32 arg1) {
    u8 buf[8];
    GenObj *r5;
    u8 *p;
    i32 m;
    register u16 t0 asm("r2");

    r5 = (GenObj *)__builtin_new(0x20);
    p = buf;
    t0 = *(u16 *)p;
    m = 0xFFFFFC00;
    *(u16 *)p = (u16)(m & t0);
    p[1] = (u8)(3 & p[1]);
    *(u16 *)&p[2] = (u16)(m & *(u16 *)&p[2]);
    p[3] = (u8)(3 & p[3]);
    *(u16 *)&p[4] = (u16)(m & *(u16 *)&p[4]);
    __7AEntityP10GameObjectRC8Location(r5, arg0, (i32 *)buf);
    r5->unk14 = &vtable_unk_080E7568;
    r5->unk18 = arg1;
    r5->unk1C = 1;
    return r5;
}
}
// ekor tak-bermarker dari code_entities_08034CEC.s (verbatim, jangan diubah)
asm(
".L0803A804:\n"
"    .byte 0x30, 0x30, 0x10, 0x21, 0x40, 0x5E, 0x70, 0x47, 0x30, 0x30, 0x01, 0x82\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0x00, 0xB5, 0x30, 0x30, 0x24, 0xF0, 0x3C, 0xF8, 0x02, 0xBC, 0x08, 0x47\n"
"    .byte 0x00, 0xB5, 0x01, 0x1C, 0x30, 0x31, 0x00, 0x22, 0xC8, 0x89, 0x00, 0x28, 0x04, 0xD0, 0x10, 0x20\n"
"    .byte 0x09, 0x5E, 0x48, 0x42, 0x08, 0x43, 0xC2, 0x0F, 0x10, 0x1C, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00\n"
"    .byte 0x10, 0xB5, 0x04, 0x1C, 0x21, 0x1C, 0x47, 0x31, 0x08, 0x78, 0x00, 0x28, 0x0A, 0xD1, 0x20, 0x1C\n"
"    .byte 0x30, 0x30, 0x24, 0xF0, 0x4D, 0xF8, 0x80, 0x07, 0x00, 0x28, 0x05, 0xDA, 0x21, 0x1C, 0x44, 0x31\n"
"    .byte 0x01, 0x20, 0x00, 0xE0, 0x00, 0x20, 0x08, 0x70, 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00\n"
"    .byte 0x30, 0xB5, 0x04, 0x1C, 0x0D, 0x1C, 0xA0, 0x88, 0xA8, 0x42, 0x0D, 0xD0, 0x20, 0x1C, 0x30, 0x30\n"
"    .byte 0x23, 0xF0, 0xEE, 0xFF, 0x20, 0x1C, 0x44, 0x30, 0x00, 0x22, 0x01, 0x21, 0x01, 0x70, 0x02, 0x30\n"
"    .byte 0x02, 0x70, 0x01, 0x30, 0x01, 0x70, 0xA5, 0x80, 0x30, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00\n"
"    .byte 0x00, 0x68, 0x70, 0x47\n"
);
