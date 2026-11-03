#include "prelude.h"
typedef struct MapData_All { u8 _pad0[32]; u16 unk20; u16 unk22; } MapData_All;
MapData_All *GetMapData(void);
// DECOMP-MATCHED func_080B3C78 (dari code_809E804.s; cek manusia sebelum ke src/)
i32 func_080AE4D8(i32);

typedef struct GenObj__func_080B3C78 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080B3C78;

__attribute__((section(".text.code_809E804.080B3C78")))
i32 func_080B3C78(GenObj__func_080B3C78 *arg0) {
    return func_080AE4D8(arg0->unk4);
}
// DECOMP-MATCHED func_080BC8F0 (dari code_809E804.s; cek manusia sebelum ke src/)
i32 func_080B44E0(i32);

typedef struct GenObj__func_080BC8F0 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080BC8F0;

__attribute__((section(".text.code_809E804.080BC8F0")))
i32 func_080BC8F0(GenObj__func_080BC8F0 *arg0) {
    return func_080B44E0(arg0->unk4);
}
// DECOMP-MATCHED func_080C0D74 (dari code_809E804.s; cek manusia sebelum ke src/)
i32 func_080BCCD4(i32);

typedef struct GenObj__func_080C0D74 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080C0D74;

__attribute__((section(".text.code_809E804.080C0D74")))
i32 func_080C0D74(GenObj__func_080C0D74 *arg0) {
    return func_080BCCD4(arg0->unk4);
}
// DECOMP-MATCHED func_080C12B8 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct GenObj__func_080C12B8 {
    u8 _pad0[2410];
    u8 unk96A;
} GenObj__func_080C12B8;

__attribute__((section(".text.code_809E804.080C12B8")))
u8 func_080C12B8(GenObj__func_080C12B8 *arg0) {
    return arg0->unk96A;
}
// DECOMP-MATCHED func_080A0504 (dari code_809E804.s; cek manusia sebelum ke src/)
u32 func_080A0490();

__attribute__((section(".text.code_809E804.080A0504")))
u32 func_080A0504(void) {
    i32 temp_r0;

    temp_r0 = func_080A0490();
    return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
}
// DECOMP-MATCHED func_080A1C94 (dari code_809E804.s; cek manusia sebelum ke src/)
u32 func_080A1EA8();

__attribute__((section(".text.code_809E804.080A1C94")))
void func_080A1C94(i32 arg0) {
    u32 temp_r0;
    u32 temp_r0_2;
    u8 *temp_r2;

    temp_r0 = func_080A1EA8();
    temp_r0_2 = temp_r0 >> 3;
    if (temp_r0_2 <= 6U) {
        temp_r2 = (u8 *)(arg0 + temp_r0_2);
        *temp_r2 &= ~(1 << (7 & temp_r0));
    }
}
// DECOMP-MATCHED func_080A1ED4 (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((section(".text.code_809E804.080A1ED4")))
i32 func_080A1ED4(i32 arg0) {
    u32 temp_r0;

    temp_r0 = func_080A1EA8();
    return ((i32) *((u8 *)(arg0 + (temp_r0 >> 3))) >> (7 & temp_r0)) & 1;
}
// DECOMP-MATCHED func_080AD944 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080A63B8();

__attribute__((section(".text.code_809E804.080AD944")))
void func_080AD944(i32 *arg0) { func_080A63B8(arg0[1]); }
// DECOMP-MATCHED func_080BA574 (dari code_809E804.s; cek manusia sebelum ke src/)
void func_08050D8C();
extern i32 gUnk_08107B28;
extern i32 gUnk_08107B5C;
extern i32 gUnk_08107C18;
extern i32 gUnk_08107CB0;
extern i32 gUnk_08107CE0;

typedef struct GenObj__func_080BA574 {
    u8 _pad0[1816];
    i32 unk718;
} GenObj__func_080BA574;

__attribute__((section(".text.code_809E804.080BA574")))
void func_080BA574(GenObj__func_080BA574 *arg0, i32 arg1) {
    u32 temp_r0;

    temp_r0 = (u32)(arg1 - 1);
    switch (temp_r0) {
    case 0:
        func_08050D8C((i32)arg0->unk718, (i32)&gUnk_08107B28);
        return;
    case 1:
        func_08050D8C((i32)arg0->unk718, (i32)&gUnk_08107B5C);
        return;
    case 2:
        func_08050D8C((i32)arg0->unk718, (i32)&gUnk_08107C18);
        return;
    case 3:
        func_08050D8C((i32)arg0->unk718, (i32)&gUnk_08107CB0);
        return;
    case 4:
        func_08050D8C((i32)arg0->unk718, (i32)&gUnk_08107CE0);
        /* fallthrough */
    default:
        return;
    }
}
// DECOMP-MATCHED func_080D0444 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct S_03000420 {
    i32 unk0;
    i32 unk4;
    i32 unk8;
    i32 unkC;
    i32 unk10;
    i32 unk14;
    i32 unk18;
    i32 unk1C;
    i32 unk20;
    u8 _pad24[4];
    i32 unk28;
    u8 unk29;
    u8 unk2A;
    u8 unk2B;
    u8 _pad2C;
    i32 unk30;
    i32 unk34;
    i32 unk38;
    i32 unk3C;
    u8 _pad40[316];
    i32 unk17C;
    i32 unk180;
    i32 unk184;
} S_03000420;
extern S_03000420 *gUnk_03000420;
__attribute__((section(".text.code_809E804.080D0444")))
void func_080D0444(i32 arg0, i32 arg1) {
    gUnk_03000420->unk4 = arg0;
    gUnk_03000420->unk8 = arg1;
}
// DECOMP-MATCHED func_080D06B4 (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((section(".text.code_809E804.080D06B4")))
i32 func_080D06B4(void) {
    i32 var_r1;

    var_r1 = 0;
    if (gUnk_03000420->unk14 == 0) {
        var_r1 = 1;
    }
    return var_r1;
}
// DECOMP-MATCHED func_080D0C10 (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((section(".text.code_809E804.080D0C10")))
i32 func_080D0C10(void) {
    i32 var_r2;

    var_r2 = 0;
    if (gUnk_03000420->unk34 == gUnk_03000420->unk38) {
        var_r2 = 1;
    }
    return var_r2;
}
extern i32 *gUnk_0300041C;
// DECOMP-MATCHED gData_code_809E804_080D02B8.data.080D02B8
// data tak-dirujuk di 0x080D02B8 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
const u8 gData_code_809E804_080D02B8[20] __attribute__((section(".text.code_809E804.080D02B8"))) = {0x00, 0xB5, 0x00, 0x28, 0x02, 0xD0, 0x10, 0x38, 0x00, 0x68, 0x00, 0xE0, 0x00, 0x20, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00};
// DECOMP-MATCHED func_080D02CC (dari code_809E804.s; cek manusia sebelum ke src/)
void func_080D0B88(void);

__attribute__((section(".text.code_809E804.080D02CC")))
void func_080D02CC(i32 *arg0) {
    gUnk_03000420 = (S_03000420 *)arg0;
    *arg0 = 0;
    func_080D0B88();
    gUnk_03000420->unk4 = 0;
    gUnk_03000420->unk8 = 0;
}
// DECOMP-MATCHED func_080D0A54 (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((section(".text.code_809E804.080D0A54")))
void func_080D0A54(i32 arg0) {
    *gUnk_0300041C = 0;
    gUnk_03000420->unk180 = arg0;
}
// DECOMP-MATCHED func_080D0A74 (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((section(".text.code_809E804.080D0A74")))
void func_080D0A74(void) {
    *gUnk_0300041C = 0;
    gUnk_03000420->unk180 = 0;
}
// DECOMP-MATCHED func_080D0B88 (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((section(".text.code_809E804.080D0B88")))
void func_080D0B88(void) {
    gUnk_03000420->unk34 = 0;
    gUnk_03000420->unk38 = 0;
    gUnk_0300041C = (i32 *)((u8 *)gUnk_03000420 + 0x3C);
    gUnk_03000420->unk3C = 0;
}
// DECOMP-MATCHED func_080D02F0 (dari code_809E804.s; cek manusia sebelum ke src/)
i32 func_080D0ABC();
i32 func_080D0B14(i32, i32);
i32 func_080D0BA8(i32 *);

__attribute__((section(".text.code_809E804.080D02F0")))
void func_080D02F0(void) {
    struct { i32 v; u8 _pad[28]; } sp0s;
    i32 *sp0 = &sp0s.v;
    i32 temp_r2;

    temp_r2 = gUnk_03000420->unk0;
    if (temp_r2 == 0) {
        gUnk_03000420->unk0 = 1;
        gUnk_03000420->unk14 = temp_r2;
        gUnk_03000420->unk18 = temp_r2;
        gUnk_03000420->unk1C = temp_r2;
        gUnk_03000420->unk20 = 1;
        gUnk_03000420->unk180 = temp_r2;
        gUnk_03000420->unk184 = temp_r2;
        gUnk_03000420->unk17C = temp_r2;
        gUnk_03000420->unkC = temp_r2;
        gUnk_03000420->unk10 = temp_r2;
        *sp0 = temp_r2;
        func_080D0BA8(sp0);
        func_080D0B14(0, 0);
        func_080D0ABC();
    }
}
// DECOMP-MATCHED gData_code_809E804_080AD9DC.data.080AD9DC
// data tak-dirujuk di 0x080AD9DC (label di-strip; tak dirujuk modul) — byte-identik dgn asm
const u8 gData_code_809E804_080AD9DC[168] __attribute__((section(".text.code_809E804.080AD9DC"))) = {0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xF4, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xC4, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x94, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x64, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x34, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x04, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xD4, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xA4, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x74, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x44, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x14, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xE4, 0x0D, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xB4, 0x0D, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x24, 0x10, 0x00, 0x00};
// DECOMP-MATCHED func_080ADA84 (dari code_809E804.s; cek manusia sebelum ke src/)
i32 func_0803A8A4(i32, i32, i32, i32, i32);

__attribute__((section(".text.code_809E804.080ADA84")))
i32 func_080ADA84(i32 dummy, i32 arg1) {
    func_0803A8A4(arg1, 1, 0, 0, 0);
    return GetMapData()->unk22 * 8;
}
// DECOMP-MATCHED func_080D0BE0 (dari code_809E804.s; cek manusia sebelum ke src/)
__attribute__((section(".text.code_809E804.080D0BE0")))
void func_080D0BE0(void) {
    u32 temp_r0;
    u32 temp_r1;

    temp_r1 = gUnk_03000420->unk34;
    if (temp_r1 != gUnk_03000420->unk38) {
        temp_r0 = (u32) (temp_r1 + 1) % 10U;
        gUnk_03000420->unk34 = temp_r0;
        gUnk_0300041C = (void *)((u8 *)gUnk_03000420 + ((temp_r0 << 5) + 0x3C));
    }
}
// DECOMP-MATCHED func_080D0678 (dari code_809E804.s; cek manusia sebelum ke src/)
typedef struct G0678 { u8 _pad0[44]; u8 unk2C; u8 unk2D; u8 unk2E; u8 unk2F; } G0678;

__attribute__((section(".text.code_809E804.080D0678")))
i32 func_080D0678(void) {
    G0678 *g = (G0678 *)gUnk_03000420;
    return g->unk2C | (g->unk2D << 8) | (g->unk2E << 0x10) | (g->unk2F << 0x18);
}
// DECOMP-MATCHED func_080ADAA8 (dari code_809E804.s; cek manusia sebelum ke src/)
i32 func_0803A8A4(i32, i32, i32, i32, i32);
__attribute__((section(".text.code_809E804.080ADAA8")))
i32 func_080ADAA8(i32 dummy, i32 arg1) {
    func_0803A8A4(arg1, 1, 0, 0, 0);
    return GetMapData()->unk20 * 8;
}
// DECOMP-MATCHED func_080D05DC (dari code_809E804.s; cek manusia sebelum ke src/)
i32 func_080D0BA8(i32 *);
typedef struct SP_D05DC { i32 v; u8 _pad4[12]; void *ptr; u8 _pad14[4]; i32 num; u16 tail; u8 _pad1E[2]; } SP_D05DC;

__attribute__((section(".text.code_809E804.080D05DC")))
void func_080D05DC(void) {
    SP_D05DC sp0;

    gUnk_03000420->unk14 = 5;
    if (gUnk_03000420->unk30 != 0) {
        sp0.v = 1;
        func_080D0BA8((i32 *)&sp0);
    }
    sp0.v = 4;
    sp0.ptr = (void *)((u8 *)gUnk_03000420 + 0x24);
    sp0.num = 2;
    sp0.tail = 0;
    func_080D0BA8((i32 *)&sp0);
    sp0.v = 3;
    sp0.ptr = (void *)((u8 *)gUnk_03000420 + 0x2C);
    sp0.num = 2;
    sp0.tail = 0;
    func_080D0BA8((i32 *)&sp0);
    sp0.v = 2;
    sp0.ptr = (void *)((u8 *)gUnk_03000420 + 0x28);
    sp0.num = 2;
    sp0.tail = 0;
    func_080D0BA8((i32 *)&sp0);
}
