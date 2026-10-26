#include "common.h"
void *GetMapData(s32);                              /* extern */
s32 func_080167CC(s32);                             /* extern */
s32 func_0801A13C(void *, u32, u32, s32);             /* extern */
s32 func_0801DB58(void *);                            /* extern */
s32 func_0809C5F4(s32);                             /* extern */
extern s32 gUnk_080F0748;
extern s32 gUnk_080F0770;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk4;
    void *unk8;
    u8 _padC[4];
    s32 unk10;
    struct GenObj *unk14;
    s32 unk18;
    u8 _pad1C[264];
    s32 unk124;
    s32 unk128;
    u8 _pad12C[3852];
    s32 unk1038;
    s32 unk103C;
    void *unk1040;
    u8 _pad1044[16];
    s32 unk1054;
} GenObj;
void func_0801EAA0(GenObj *arg0, u16 *arg1, s32 arg61, void *arg62, ? argC6, u16 *argC8, u16 *argC9, s32 argCA, void **argCB, void *argCC, void *argCD, u8 argCE, u8 argCF) {
    s32 *temp_r0_3;
    s32 *temp_r0_6;
    s32 *var_r2;
    s32 *var_r4_2;
    s32 temp_r0_8;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2_5;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3_2;
    u32 temp_r0_5;
    u32 temp_r0_7;
    u32 temp_r1_4;
    u32 temp_r1_7;
    u32 var_r2_2;
    u32 var_r3;
    u32 var_r5;
    u8 temp_r0;
    u8 temp_r1_6;
    u8 temp_r2_2;
    u8 temp_r3_4;
    void **temp_r5;
    void **temp_r6;
    void **var_r4;
    void **var_r4_3;
    void **var_r4_4;
    void **var_r4_5;
    GenObj *temp_r0_10;
    void *temp_r0_2;
    void *temp_r0_4;
    GenObj *temp_r0_9;
    GenObj *temp_r1_3;
    GenObj *temp_r1_5;
    GenObj *temp_r2;
    GenObj *temp_r2_3;
    GenObj *temp_r2_4;
    GenObj *temp_r3_2;
    GenObj *temp_r3_3;
    GenObj *temp_r4;
    GenObj *temp_r6_2;

    argC8 = arg1;
    argC9 = arg0->unk1038 + 0x12;
    temp_r0 = arg0->unk103C;
    argCA = (s32) temp_r0;
    if (temp_r0 != 0) {
        ((void (*)(void *,...))(arg0->unk0->unk128))(arg0);
    }
    temp_r5 = (GenObj *)((u8 *)arg0 + 8);
    argCB = temp_r5;
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x198);
    argCC = temp_r0_2;
    var_r4 = temp_r5;
    temp_r6 = var_r4;
    if (temp_r6 != temp_r0_2) {
        do {
            temp_r2 = *var_r4;
            if (temp_r2 != 0) {
                ((void (*)(void *,...))(temp_r2->unk14->unk14))(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != argCC);
    }
    unksp0 = 0;
    var_r3 = 0;
    var_r2 = &gUnk_080F0748;
    do {
        temp_r1 = *((u8 *)temp_r6 + (*var_r2 * 4));
        if ((temp_r1 != 0) && (unksp0 <= 0x63U)) {
            temp_r0_3 = (unksp0 * 4) + 4 + sp;
            if (temp_r0_3 != 0) {
                *temp_r0_3 = temp_r1;
            }
            unksp0 += 1;
        }
        var_r2 += 4;
        var_r3 += 1;
    } while (var_r3 <= 9U);
    temp_r0_4 = (unksp0 * 4) + 4 + sp;
    unksp0.unk194 = 0U;
    var_r5 = 0;
    var_r4_2 = &gUnk_080F0770;
    do {
        temp_r3 = *((u8 *)temp_r6 + (*var_r4_2 * 4));
        if (temp_r3 != 0) {
            temp_r0_5 = unksp0.unk194;
            if (temp_r0_5 <= 0x63U) {
                temp_r0_6 = &unksp0 + 0x194 + ((temp_r0_5 * 4) + 4);
                if (temp_r0_6 != 0) {
                    *temp_r0_6 = temp_r3;
                }
                unksp0.unk194 = (u32) (unksp0.unk194 + 1);
            }
        }
        var_r4_2 += 4;
        var_r5 += 1;
    } while (var_r5 <= 0x23U);
    argCD = &arg61 + ((arg61 * 4) + 4);
    argC6.unk0 = 0;
    argC6.unk4 = 0;
    temp_r6_2 = (GenObj *)((u8 *)arg0 + 0x1040);
loop_24:
    temp_r0_7 = temp_r6_2->unk4 + 1;
    if (temp_r0_7 < 0x19U) {
        temp_r6_2->unk4 = (u8) temp_r0_7;
        var_r0 = 0;
    } else {
        temp_r6_2->unk4 = 0U;
        temp_r4 = arg0->unk1040;
        temp_r1_2 = ((u32) (temp_r4->unk0 << 5) >> 0x1A) + 1;
        temp_r4->unk2 = (u16) ((0xFFFFF81F & temp_r4->unk2) | ((0x3F & temp_r1_2) << 5));
        if ((u32) (temp_r1_2 & 0x3F) > 0x3BU) {
            temp_r1_3 = arg0->unk1040;
            temp_r1_3->unk2 = (u16) (0xFFFFF81F & temp_r1_3->unk2);
            temp_r3_2 = arg0->unk1040;
            temp_r1_4 = (((u32) (temp_r3_2->unk0 << 0xB) >> 0x1B) + 1) & 0x1F;
            temp_r3_2->unk2 = (s8) ((-0x20 & (u8) temp_r3_2->unk2) | temp_r1_4);
            if (temp_r1_4 > 0x17U) {
                temp_r1_5 = arg0->unk1040;
                temp_r1_5->unk2 = (s8) (-0x20 & (u8) temp_r1_5->unk2);
                temp_r3_3 = arg0->unk1040;
                temp_r2_2 = temp_r3_3->unk1;
                var_r0_2 = ((u32) (temp_r2_2 << 0x19) >> 0x1B) + 1;
                if (var_r0_2 == 0x1E) {
                    temp_r0_8 = ((u32) (temp_r2_2 << 0x1E) >> 0x1E) & 3;
                    temp_r1_6 = (((-4 & argCE) | temp_r0_8) & ~3) | ((temp_r0_8 + 1) & 3);
                    argCE = temp_r1_6;
                    temp_r3_3->unk1 = (u8) ((-4 & temp_r2_2) | (((u32) (temp_r1_6 << 0x1E) >> 0x1E) & 3));
                    var_r0_2 = 0;
                }
                temp_r3_3->unk1 = (u8) ((-0x7D & temp_r3_3->unk1) | ((var_r0_2 & 0x1F) * 4));
                argCF = argCF & ~3 & ~0x7C;
                temp_r2_3 = arg0->unk1040;
                var_r3_2 = 0;
                if (!(0x7F & temp_r2_3->unk1)) {
                    var_r3_2 = 1;
                }
                if (var_r3_2 != 0) {
                    temp_r3_4 = (u8) temp_r2_3->unk0;
                    var_r2_2 = ((u32) (temp_r3_4 << 0x1D) >> 0x1D) + 1;
                    if (var_r2_2 > 6U) {
                        var_r2_2 = 0;
                        temp_r1_7 = temp_r3_4 >> 3;
                        if (temp_r1_7 <= 0x1CU) {
                            temp_r2_3->unk0 = (s8) ((7 & temp_r3_4) | ((temp_r1_7 + 1) * 8));
                        }
                    }
                    temp_r2_3->unk0 = (s8) (((u8) temp_r2_3->unk0 & ~7) | (var_r2_2 & 7));
                }
            }
        }
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        var_r4_3 = &unksp4;
        if (var_r4_3 != temp_r0_4) {
            do {
                temp_r0_9 = *var_r4_3;
                var_r4_3 += 4;
                ((void (*)(void *,...))(temp_r0_9->unk14->unk18))(temp_r0_9, &argC6);
            } while (var_r4_3 != temp_r0_4);
        }
        goto loop_24;
    }
    argC6.unk4 = 1;
    var_r4_4 = &arg62;
    if (var_r4_4 != argCD) {
        do {
            temp_r0_10 = *var_r4_4;
            var_r4_4 += 4;
            ((void (*)(void *,...))(temp_r0_10->unk14->unk18))(temp_r0_10, &argC6);
        } while (var_r4_4 != argCD);
    }
    if ((0x7FF & *argC8) != (0x7FF & *argC9)) {
        argC6.unk4 = 0;
        goto loop_24;
    }
    var_r4_5 = argCB;
    if (var_r4_5 != argCC) {
        do {
            temp_r2_4 = *var_r4_5;
            if (temp_r2_4 != 0) {
                ((void (*)(void *,...))(temp_r2_4->unk14->unk10))(temp_r2_4);
            }
            var_r4_5 += 4;
        } while (var_r4_5 != argCC);
    }
    if (argCA != 0) {
        ((void (*)(void *,...))(arg0->unk0->unk124))(arg0);
    }
    if (GetMapData(arg0->unk4->unk4)->unk24 == 0) {
        temp_r2_5 = arg0->unk1040->unk0;
        func_0801A13C(arg0, (u32) (temp_r2_5 << 0xB) >> 0x1B, (u32) (temp_r2_5 << 5) >> 0x1A, 0);
    }
    arg0->((void (*)(void *,...))(unk8->unk14->unkA4))();
    if (((func_080167CC(arg0->unk1054) << 0x18) != 0) && ((func_0809C5F4(arg0->unk1038 + 0x214C) << 0x18) == 0)) {
        func_0801DB58(arg0);
    }
}

