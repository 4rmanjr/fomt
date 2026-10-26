#include "common.h"
s32 free(void *);                                     /* extern */
s32 func_0805E824(void **, s32, u32, s32);            /* extern */
void *func_080D3BC0(s32);                           /* extern */
s32 func_080E3054(void **, void *, void **);          /* extern */
void *malloc(s32);                                  /* extern */
extern s32 gUnk_080FD3A0;
extern s32 gUnk_080FD540;
extern s32 gUnk_080FD548;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk1;
    s32 unk2;
    s32 unk3;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk14;
    u8 _pad18[436];
    s32 unk1CC;
} GenObj;
void func_080782EC(GenObj *arg0, GenObj *arg1, u32 arg2) {
s32 sp0;
    GenObj *sp1C;
    void *sp20;
    void *sp24;
    void *sp28;
    s32 sp2C;
    void *sp34;
    s32 sp38;
    s32 sp3C;
    u32 sp40;
    void *sp44;
    void *sp48;
    s32 *temp_r7;
    GenObj *var_r6;
    s16 temp_r1_2;
    s16 temp_r4;
    s32 *var_r0;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r5_3;
    s32 var_r2_2;
    s32 var_r3_3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_sl;
    u32 temp_r1;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r2;
    u8 temp_r4_2;
    u8 temp_r4_3;
    u8 temp_r5_2;
    void *temp_r0_2;
    void *temp_r0_4;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    GenObj *temp_r0_7;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r3;
    void *temp_r5;
    GenObj *temp_r6;
    GenObj *temp_r7_2;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r1;
    GenObj *var_r2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    void *var_r3;
    GenObj *var_r3_2;
    void *var_r5_3;

    sp40 = arg2;
    if (arg2 >= (u32) ((GenObj *)((u8 *)arg0 + 0x19C))->unk20) {
        return;
    }
    var_r6 = 0;
    temp_r1 = (u32) (arg1->unk0 << 0x16) >> 0x16;
    if (temp_r1 <= 0x33U) {
        temp_r7 = (temp_r1 * 8) + &gUnk_080FD3A0;
        temp_r5 = temp_r7->unk4;
        if (temp_r5 != 0) {
            temp_r4 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
            temp_r1_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
            var_r2 = temp_r5;
            if (((u32) var_r2->unk0 < (u32) var_r2->unk4) && ((u32) var_r2->unk2 < (u32) var_r2->unk6)) {
loop_6:
                if (((s32) var_r2->unk0 > (s32) temp_r4) || ((s32) temp_r4 >= (s32) var_r2->unk4) || ((s32) var_r2->unk2 > (s32) temp_r1_2) || ((s32) temp_r1_2 >= (s32) var_r2->unk6)) {
                    var_r2 += 0xC;
                    if (((u32) var_r2->unk0 < (u32) var_r2->unk4) && ((u32) var_r2->unk2 < (u32) var_r2->unk6)) {
                        goto loop_6;
                    }
                } else {
                    var_r6 = (GenObj *)((u8 *)var_r2 + 8);
                }
            }
        }
        if (var_r6 == 0) {
            var_r6 = temp_r7;
            goto block_19;
        }
        goto block_21;
    }
    if ((u32) (temp_r1 - 0x34) <= 0xFFU) {
        var_r6 = &gUnk_080FD540;
    } else if ((u32) (temp_r1 + 0xFFFFFECC) <= 0xFFU) {
        var_r6 = &gUnk_080FD548;
    }
block_19:
    if (var_r6 == 0) {
        return;
    }
block_21:
    temp_r7_2 = (GenObj *)((u8 *)arg0 + 0x1DC);
    var_r3 = temp_r7_2->unk4;
    var_r1 = var_r3->unk4;
    if (var_r1 != 0) {
        temp_r4_2 = var_r6->unk0;
        do {
            var_r5 = 0;
            temp_r0 = var_r1->unk10;
            if (((u32) temp_r0 < (u32) temp_r4_2) || (((u32) temp_r4_2 >= (u32) temp_r0) && ((u32) (var_r1 + 0x10)->unk1 < (u32) var_r6->unk1))) {
                var_r5 = 1;
            }
            if (var_r5 == 0) {
                var_r3 = var_r1;
                var_r1 = var_r3->unk8;
            } else {
                var_r1 = var_r1->unkC;
            }
        } while (var_r1 != 0);
    }
    sp1C.unk0 = var_r3;
    var_r5_2 = 0;
    temp_r0_2 = temp_r7_2->unk4;
    sp20 = temp_r0_2;
    var_r2_2 = 0;
    if (sp1C == temp_r0_2) {
        var_r2_2 = 1;
    }
    if (var_r2_2 == 0) {
        var_r4 = 0;
        temp_r2 = var_r6->unk0;
        temp_r0_3 = sp1C->unk10;
        if (((u32) temp_r2 < (u32) temp_r0_3) || (((u32) temp_r0_3 >= (u32) temp_r2) && ((u32) var_r6->unk1 < (u32) ((GenObj *)((u8 *)sp1C + 0x10))->unk1))) {
            var_r4 = 1;
        }
        if (var_r4 != 0) {
            goto block_39;
        }
    } else {
block_39:
        var_r5_2 = 1;
    }
    if (var_r5_2 != 0) {
        sp28 = sp1C;
        sp2C = (s32) var_r6->unk0;
        sp2C.unk4 = 0;
        sp34 = sp1C;
        func_080E3054(&sp24, temp_r7_2, &sp34);
        sp1C = sp24;
    }
    temp_r4_3 = sp1C->unk14;
    sp1C->unk14 = (u8) (temp_r4_3 + 1);
    temp_r5_2 = var_r6->unk1;
    temp_r4_4 = ((u32) (temp_r4_3 << 0x18) >> 0x15) + var_r6->unk0;
    func_0805E824(&sp1C, (GenObj *)((u8 *)arg0 + 0x19C), sp40, 0x100);
    sp0 = temp_r4_4;
    sp0.unk4 = (s32) temp_r5_2;
    temp_r1_3 = &(GenObj *)((u8 *)sp0 + 8);
    sp0.unk8 = (void *) sp1C.unk0;
    temp_r1_3->unk4 = (s32) sp1C.unk4;
    temp_r1_3->unk8 = (s32) sp1C.unk8;
    temp_r1_3->unkC = (s32) sp1C.unkC;
    ((GenObj *)((u8 *)temp_r1_3 + 0xC))->unk4 = (s32) (&(GenObj *)((u8 *)sp1C + 0xC))->unk4;
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x1CC);
    temp_r1_4 = temp_r6->unk4;
    if (temp_r1_4 != temp_r6->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_5 = &(GenObj *)((u8 *)sp0 + 0xC);
            temp_r1_4->unk0 = (s32) sp0;
            temp_r1_4->unk4 = (s32) sp0.unk4;
            temp_r1_4->unk8 = (void *) sp0.unk8;
            temp_r0_4 = temp_r1_4 + 0xC;
            temp_r1_4->unkC = (s32) sp0.unkC;
            temp_r0_4->unk4 = (s32) temp_r1_5->unk4;
            temp_r0_4->unk8 = (s32) temp_r1_5->unk8;
            temp_r0_4->unkC = (s32) temp_r1_5->unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x1C);
        return;
    }
    sp44 = temp_r1_4;
    sp3C = 1;
    temp_r4_5 = (s32) ((temp_r1_4 - arg0->unk1CC) * 0xB6DB6DB7) >> 2;
    sp38 = temp_r4_5;
    var_r0 = &sp38;
    if ((u32) temp_r4_5 < 1U) {
        var_r0 = &sp3C;
    }
    temp_r4_6 = temp_r4_5 + *var_r0;
    if (temp_r4_6 != 0) {
        temp_r5_3 = temp_r4_6 * 0x1C;
        var_r0_2 = malloc(temp_r5_3);
        var_sl = temp_r4_6 * 8;
        if (var_r0_2 == 0) {
            var_r0_2 = func_080D3BC0(temp_r5_3);
        }
    } else {
        var_r0_2 = 0;
        var_sl = 0;
    }
    sp48 = var_r0_2;
    var_r2_3 = arg0->unk1CC;
    var_r3_2 = var_r0_2;
    if (var_r2_3 != sp44) {
        do {
            if (var_r3_2 != 0) {
                temp_r1_6 = (GenObj *)((u8 *)var_r2_3 + 0xC);
                var_r3_2->unk0 = (s32) var_r2_3->unk0;
                var_r3_2->unk4 = (s32) var_r2_3->unk4;
                var_r3_2->unk8 = (s32) var_r2_3->unk8;
                temp_r0_5 = (GenObj *)((u8 *)var_r3_2 + 0xC);
                var_r3_2->unkC = (s32) var_r2_3->unkC;
                temp_r0_5->unk4 = (s32) temp_r1_6->unk4;
                temp_r0_5->unk8 = (s32) temp_r1_6->unk8;
                temp_r0_5->unkC = (s32) temp_r1_6->unkC;
            }
            var_r2_3 += 0x1C;
            var_r3_2 += 0x1C;
        } while (var_r2_3 != sp44);
    }
    if (sp3C == 1) {
        if (var_r3_2 != 0) {
            temp_r1_7 = &(GenObj *)((u8 *)sp0 + 0xC);
            var_r3_2->unk0 = (s32) sp0;
            var_r3_2->unk4 = (s32) sp0.unk4;
            var_r3_2->unk8 = (void *) sp0.unk8;
            temp_r0_6 = (GenObj *)((u8 *)var_r3_2 + 0xC);
            var_r3_2->unkC = (s32) sp0.unkC;
            temp_r0_6->unk4 = (s32) temp_r1_7->unk4;
            temp_r0_6->unk8 = (s32) temp_r1_7->unk8;
            temp_r0_6->unkC = (s32) temp_r1_7->unkC;
        }
        var_r5_3 = (GenObj *)((u8 *)var_r3_2 + 0x1C);
    } else {
        var_r3_3 = sp3C;
        var_r2_4 = var_r3_2;
        if (var_r3_3 != 0) {
            do {
                if (var_r2_4 != 0) {
                    temp_r1_8 = &(GenObj *)((u8 *)sp0 + 0xC);
                    var_r2_4->unk0 = (s32) sp0;
                    var_r2_4->unk4 = (s32) sp0.unk4;
                    var_r2_4->unk8 = (void *) sp0.unk8;
                    temp_r0_7 = (GenObj *)((u8 *)var_r2_4 + 0xC);
                    var_r2_4->unkC = (s32) sp0.unkC;
                    temp_r0_7->unk4 = (s32) temp_r1_8->unk4;
                    temp_r0_7->unk8 = (s32) temp_r1_8->unk8;
                    temp_r0_7->unkC = (s32) temp_r1_8->unkC;
                }
                var_r3_3 -= 1;
                var_r2_4 += 0x1C;
            } while (var_r3_3 != 0);
        }
        var_r5_3 = var_r2_4;
    }
    temp_r3 = temp_r6->unk4;
    temp_r1_9 = arg0->unk1CC;
    var_r0_3 = temp_r1_9;
    if (temp_r1_9 != temp_r3) {
        do {
            var_r0_3 += 0x1C;
        } while (var_r0_3 != temp_r3);
    }
    if (temp_r1_9 != 0) {
        free(temp_r1_9);
    }
    arg0->unk1CC = sp48;
    temp_r6->unk4 = var_r5_3;
    temp_r6->unkC = (void *) (((var_sl - temp_r4_6) * 4) + sp48);
}

