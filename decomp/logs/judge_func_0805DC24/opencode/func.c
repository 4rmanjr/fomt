#include "common.h"
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008E64(void *, s32, u16);                  /* extern */
s32 func_08008EB8(s32, void *, s32);                  /* extern */
s32 func_0804E7A0(s32, s32 *, s32);                     /* extern */
s32 func_0804E958(s32, s32 *, s32);                     /* extern */
s32 func_0805E790(s32 *, void *, s32);                  /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
extern s32 gUnk_080FB000;

typedef struct GenObj {
    u8 _pad0[2];
    s32 unk2;
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkC;
    u8 _pad10[112];
    s32 unk80;
} GenObj;
void func_0805DC24(GenObj *arg0, GenObj *arg5, ? arg7, ? arg10, ? argF0, s16 argF1, GenObj *argF2, void *argF3) {
    s16 *var_r1_2;
    s16 *var_r2_4;
    s16 var_r3;
    s32 temp_r0_7;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 var_r1;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r5_2;
    void **temp_r1;
    GenObj *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r0_3;
    void *temp_r0_4;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r3;

    unkspC = 0;
    unkspC.unk4 = 0;
    unksp14 = 0;
    unksp14.unk4 = 0U;
    unksp1C = 0;
    unksp1C.unk4 = 0U;
    arg5 = 0;
    arg5.unk4 = 0;
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x80);
    temp_r1 = arg0->unk80;
    (*temp_r1)->unk10(&arg7, temp_r1, *(temp_r0->unk4 + (temp_r0->unkC * 4)));
    memcpy(&arg7, &arg7, 0x20);
    temp_r0_2 = &arg7 + 0xC;
    unkspC.unk0 = (s32) arg7.unk0;
    unkspC.unk4 = (s32) arg7.unk4;
    unkspC.unk8 = (s32) arg7.unk8;
    temp_r1_2 = &unkspC + 0xC;
    unkspC.unkC = (s32) arg7.unkC;
    temp_r1_2->unk4 = (s32) temp_r0_2->unk4;
    temp_r1_2->unk8 = (s32) temp_r0_2->unk8;
    temp_r1_2->unkC = (s32) temp_r0_2->unkC;
    ((GenObj *)((u8 *)temp_r1_2 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_2 + 0xC))->unk4;
    temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x134);
    temp_r1_3 = (func_080074C0(temp_r0_3, temp_r0_3->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (0 != 0) {
        var_r2 = unksp1C.unk4;
    }
    func_08008E64(unksp1C, temp_r1_3, var_r2);
    func_0805E790(&arg7, (GenObj *)((u8 *)arg0 + 0x50), 0);
    temp_r0_4 = &arg7 + 0xC;
    unkspC.unk0 = (s32) arg7.unk0;
    unkspC.unk4 = (s32) arg7.unk4;
    unkspC.unk8 = (s32) arg7.unk8;
    temp_r1_4 = &unkspC + 0xC;
    unkspC.unkC = (s32) arg7.unkC;
    temp_r1_4->unk4 = (s32) temp_r0_4->unk4;
    temp_r1_4->unk8 = (s32) temp_r0_4->unk8;
    temp_r1_4->unkC = (s32) temp_r0_4->unkC;
    ((GenObj *)((u8 *)temp_r1_4 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_4 + 0xC))->unk4;
    temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x144);
    temp_r1_5 = (func_080074C0(temp_r0_5, temp_r0_5->unk4) << 5) + 0x05000200;
    var_r2_2 = 0;
    if (unksp1C != 0) {
        var_r2_2 = unksp1C.unk4;
    }
    func_08008E64(unksp1C, temp_r1_5, var_r2_2);
    temp_r0_6 = (GenObj *)((u8 *)arg0 + 0x13C);
    temp_r1_6 = (func_08007D4C(temp_r0_6, temp_r0_6->unk4) << 5) + 0x06010000;
    var_r2_3 = 0;
    if (unksp14 != 0) {
        var_r2_3 = unksp14.unk4;
    }
    func_08008E64(unksp14, temp_r1_6, var_r2_3);
    var_r4 = 0;
    argF2 = &argF1;
    argF3 = &unksp0 + 0x50;
    var_r5 = 0x06002800;
    do {
        argF0.unk0 = 0xE;
        argF0.unk2 = 2;
        func_0804E7A0((s32) argF0.unk0, &arg10, 0);
        argF1 = 0xE;
        argF2->unk2 = 2;
        unksp0 = (*((u8 *)(GenObj *)((u8 *)arg0 + 0xAE0) + var_r4) * 0x14) + &gUnk_080FB000;
        unksp4 = 0;
        unksp8 = 1;
        func_0804E958((s32) argF1, &arg10, 0);
        func_08008E64(argF3, var_r5, 0x380U);
        var_r5 += 0x380;
        var_r4 += 1;
    } while (var_r4 <= 9);
    func_08008EB8(-1, (GenObj *)((u8 *)arg0 + 0x2D0), 0x800);
    var_r5_2 = 0x2140;
    var_r1 = 0;
    temp_r3 = (GenObj *)((u8 *)arg0 + 0x2D4);
    do {
        var_r4_2 = 0;
        temp_r0_7 = var_r1 * 2;
        var_r3 = var_r5_2 + 0xE;
        var_r2_4 = ((temp_r0_7 + 5) << 6) + temp_r3;
        var_r1_2 = ((temp_r0_7 + 4) << 6) + temp_r3;
loop_10:
        *var_r1_2 = var_r5_2 + var_r4_2;
        *var_r2_4 = var_r3;
        var_r3 += 1;
        var_r2_4 += 2;
        var_r1_2 += 2;
        var_r4_2 += 1;
        if (var_r4_2 <= 0xD) {
            goto loop_10;
        }
        var_r5_2 += 0x1C;
        var_r1 += 1;
    } while (var_r1 <= 9);
    func_08008E64((GenObj *)((u8 *)arg0 + 0x2D0), 0x0600F000, 0x800U);
}

