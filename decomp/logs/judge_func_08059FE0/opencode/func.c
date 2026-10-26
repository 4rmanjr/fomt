#include "common.h"
s32 GetName__C6Animal(s32);                         /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008E64(s32 *, s32, u16);                     /* extern */
s32 func_08008EB8(s32, void *, s32);                  /* extern */
s32 func_0804E7A0(s32, s32 *, s32);                     /* extern */
s32 func_0804E958(s32, s32 *, s32, s32);                /* extern */
s32 func_0805E790(s32 *, s32, s32);                     /* extern */
extern s32 gUnk_080FA796;
extern s32 gUnk_080FAE9C;
extern s32 gUnk_080FAEB8;
extern s32 gUnk_080FAEC4;
extern s32 gUnk_0875196C;
extern s32 gUnk_087519EC;
extern s32 gUnk_08752F8C;
extern s32 gUnk_0875300C;

typedef struct GenObj {
    u8 _pad0[2];
    s32 unk2;
    struct GenObj *unk4;
    u8 _pad8[24];
    struct GenObj *unk20;
    u8 _pad24[5304];
    s32 unk14DC;
} GenObj;
void func_08059FE0(GenObj *arg0, s32 arg1, ? arg8, ? argC9, s16 arg2C9, ? arg2CA, ? arg2CB, s16 arg2CC, s16 arg2CD, s16 arg2CE, ? arg2CF, ? arg2D0, s32 arg2D1, s32 *arg2D2, GenObj *arg2D3, GenObj *arg2D4, GenObj *arg2D5, s32 *arg2D6, GenObj *arg2D7) {
    s16 *var_r1_2;
    s16 *var_r2_3;
    s16 var_r3;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r3;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r7;
    s32 var_sb;
    u16 temp_r0_7;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r5;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_3;
    GenObj *temp_r0_4;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    void *temp_r5;
    void *temp_r7;
    GenObj *var_r4;

    arg2D1 = arg1;
    if (arg1 == 0) {
        func_0805E790(&unkspC, (GenObj *)((u8 *)arg0 + 0x170), 0);
        temp_r0 = (GenObj *)((u8 *)arg0 + 0x648);
        temp_r1 = (func_080074C0(temp_r0, temp_r0->unk4) << 5) + 0x05000200;
        var_r2 = 0;
        if (unksp1C != 0) {
            var_r2 = unksp1C.unk4;
        }
        func_08008E64(unksp1C, temp_r1, var_r2);
        temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x640);
        temp_r1_2 = (func_08007D4C(temp_r0_2, temp_r0_2->unk4) << 5) + 0x06010000;
        var_r2_2 = 0;
        if (unksp14 != 0) {
            var_r2_2 = unksp14.unk4;
        }
        func_08008E64(unksp14, temp_r1_2, var_r2_2);
        temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x610);
        func_08008E64(&gUnk_08752F8C, (func_08007D4C(temp_r0_3, temp_r0_3->unk4) << 5) + 0x06010600, 0x80U);
        temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x620);
        func_08008E64(&gUnk_0875300C, (func_080074C0(temp_r0_4, temp_r0_4->unk4) << 5) + 0x05000200, 0x20U);
    } else {
        temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x610);
        func_08008E64(&gUnk_0875196C, (func_08007D4C(temp_r0_5, temp_r0_5->unk4) << 5) + 0x06010600, 0x80U);
        temp_r0_6 = (GenObj *)((u8 *)arg0 + 0x620);
        func_08008E64(&gUnk_087519EC, (func_080074C0(temp_r0_6, temp_r0_6->unk4) << 5) + 0x05000200, 0x20U);
    }
    var_r4 = (GenObj *)((u8 *)arg0 + 0x142C);
    arg2D7 = &arg2C9;
    arg2D6 = &unksp0 + 0x30;
    arg2D3 = &arg2CC;
    arg2D4 = &arg2CD;
    arg2D2 = &argC9;
    arg2D5 = &arg2CE;
    var_sb = 0x06002800;
    var_r7 = 3;
    do {
        arg2C9 = 0xC;
        arg2D7->unk2 = 2;
        func_0804E7A0((s32) arg2C9, &arg8, 0);
        temp_r0_7 = var_r4->unk20;
        if ((u32) temp_r0_7 <= 0x27U) {
            arg2CA.unk0 = 0xC;
            arg2CA.unk2 = 2;
            unksp0 = (0xD * temp_r0_7) + &gUnk_080FA796;
            unksp4 = 0;
            unksp8 = 1;
            func_0804E958((s32) arg2CA.unk0, &arg8, 0, 0);
        } else {
            temp_r0_8 = GetName__C6Animal(arg0->unk14DC);
            arg2CB.unk0 = 0xC;
            arg2CB.unk2 = 2;
            unksp0 = temp_r0_8;
            unksp4 = 0;
            unksp8 = 1;
            func_0804E958((s32) arg2CB.unk0, &arg8, 0, 0);
        }
        func_08008E64(arg2D6, var_sb, 0x300U);
        var_sb += 0x300;
        var_r7 -= 1;
        var_r4 += 0x2C;
    } while (var_r7 >= 0);
    arg2CC = 0x20;
    arg2D3->unk2 = 2;
    func_0804E7A0((s32) arg2CC, &argC9, 0);
    arg2CD = 0x20;
    arg2D4->unk2 = 2;
    unksp0 = &gUnk_080FAE9C;
    unksp4 = 0;
    unksp8 = 1;
    func_0804E958((s32) arg2CD, &argC9, 0, 0);
    func_08008E64(arg2D2, 0x06004000, 0x800U);
    arg2CE = 0x20;
    arg2D5->unk2 = 2;
    func_0804E7A0((s32) arg2CE, arg2D2, 0);
    if (arg2D1 == 0) {
        arg2CF.unk0 = 0x20;
        arg2CF.unk2 = 2;
        unksp0 = &gUnk_080FAEB8;
        unksp4 = 0;
        unksp8 = 1;
        func_0804E958((s32) arg2CF.unk0, arg2D2, 0, 0);
    } else {
        arg2D0.unk0 = 0x20;
        arg2D0.unk2 = 2;
        unksp0 = &gUnk_080FAEC4;
        unksp4 = 0;
        unksp8 = 1;
        func_0804E958((s32) arg2D0.unk0, arg2D2, 0, 0);
    }
    func_08008E64(arg2D2, 0x06004800, 0x800U);
    func_08008EB8(-1, (GenObj *)((u8 *)arg0 + 0xBEA), 0x800);
    var_r5 = 0x2140;
    var_r1 = 0;
    temp_r7 = (GenObj *)((u8 *)arg0 + 0xBF2);
    do {
        var_r4_2 = 0;
        temp_r0_9 = var_r1 * 2;
        var_r3 = var_r5 + 0xC;
        var_r2_3 = ((temp_r0_9 + 7) << 6) + temp_r7;
        var_r1_2 = ((temp_r0_9 + 6) << 6) + temp_r7;
loop_17:
        *var_r1_2 = var_r5 + var_r4_2;
        *var_r2_3 = var_r3;
        var_r3 += 1;
        var_r2_3 += 2;
        var_r1_2 += 2;
        var_r4_2 += 1;
        if (var_r4_2 <= 0xB) {
            goto loop_17;
        }
        var_r5 += 0x18;
        var_r1 += 1;
    } while (var_r1 <= 3);
    var_r4_3 = 0;
    temp_r5 = (GenObj *)((u8 *)arg0 + 0xBEA);
    do {
        var_r3_2 = var_r4_3;
        if (var_r4_3 < 0) {
            var_r3_2 += 0x1F;
        }
        temp_r3 = var_r3_2 >> 5;
        temp_r2 = (var_r4_3 - (temp_r3 << 5)) * 2;
        *(temp_r5 + (temp_r2 + ((temp_r3 + 4) << 6))) = var_r4_3 + 0x2200;
        *(temp_r5 + (temp_r2 + ((temp_r3 + 0xF) << 6))) = var_r4_3 + 0x2240;
        var_r4_3 += 1;
    } while (var_r4_3 <= 0x3F);
    func_08008E64((GenObj *)((u8 *)arg0 + 0xBEA), 0x0600F000, 0x800U);
}

