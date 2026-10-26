#include "common.h"
s32 func_030004DC(s32, s32, s32, s32);              /* extern */
s32 func_08032690(void *, void *);                    /* extern */
s32 func_08032900(u16, s32, s32);                   /* extern */
s32 func_0803AE58(s32, s32, s32, s32);                /* extern */
s32 func_080A480C(void *, s32, void *);               /* extern */
s32 func_080A4944(void *, void *, s32);               /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unkE;
    s32 unk10;
    u8 _pad14[36];
    struct GenObj *unk38;
    struct GenObj *unk3C;
    struct GenObj *unk3D;
    struct GenObj *unk3E;
    u8 _pad42[2];
    s32 unk44;
    u8 _pad48[67];
    s32 unk8B;
    s32 unk8C;
    u8 _pad90[36];
    s32 unkB4;
    u8 _padB8[20];
    s32 unkCC;
} GenObj;
void func_0802BFE4(GenObj *arg0, GenObj *arg1) {
    s32 sp0;
    s32 *sp4;
    s32 sp8;
    s32 spC;
    void *sp10;
s32 sp14;
    GenObj *sp34;
    u16 *sp3C;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 *sp60;
    s8 *sp64;
    s32 sp68;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r4_3;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    u16 temp_r0;
    void **temp_r0_5;
    void **temp_r1_2;
    void **temp_sb;
    GenObj *temp_r0_4;
    GenObj *temp_r4;
    void *temp_r4_2;
    GenObj *temp_r5;
    GenObj *temp_r5_2;

    temp_r4 = arg0->unk0;
    temp_r0 = temp_r4->unk4;
    sp44 = (s32) temp_r0;
    temp_sb = temp_r4->unk0;
    sp48 = (s32) arg0->unk44;
    temp_r2 = temp_r4->unk8;
    sp68 = temp_r2;
    temp_r0_2 = temp_r4->unkC;
    sp4C = temp_r0_2;
    sp34 = arg1->unk0;
    sp34.unk4 = (s32) arg1->unk8;
    sp50 = func_08032900(temp_r0, temp_r2 >> 0x10, temp_r0_2 >> 0x10);
    arg0->unk8B = (u8) sp50;
    temp_r4_2 = (GenObj *)((u8 *)temp_r4 + 0x38);
    var_r1 = 0;
    if (temp_r4->unk38 == 1) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {

    } else {
        sp54 = ((s32) (sp68 + temp_r4_2->unk4) >> 0x10) - arg1->unkC;
        temp_r4_3 = sp4C + temp_r4_2->unk8;
        temp_r1 = temp_r4_3 >> 0x10;
        temp_r7 = temp_r1 - arg1->unkE;
        sp58 = 0x8000 - temp_r1;
        var_r1_2 = 0;
        if (temp_r4_2->unk1 == 1) {
            var_r1_2 = 1;
        }
        if (var_r1_2 != 0) {
            temp_r0_3 = (*temp_sb)->unk58(temp_sb);
            sp0 = 0;
            func_0803AE58(temp_r0_3, arg1->unk8, sp54, temp_r7);
        }
        sp5C = ((s32) (temp_r4_3 - temp_r4_2->unk14) >> 0x10) - arg1->unkE;
        if (sp44 <= 8) {
            var_r0 = 1;
            if (sp50 != 1) {
                var_r0 = 2;
            }
        } else {
            var_r0 = 1;
        }
        temp_r5 = (GenObj *)((u8 *)arg0 + 0x8C);
        sp60 = &sp0 + 0x34;
        temp_r0_4 = (GenObj *)((u8 *)arg0 + 0xB4);
        temp_r1_2 = arg0->unkB4;
        (*temp_r1_2)->unk10(&sp14, temp_r1_2, *(temp_r0_4->unk4 + (temp_r0_4->unkC * 4)));
        temp_r1_3 = ((GenObj *)((u8 *)arg0 + 0x90))->unk4;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
            sp0 = sp58;
            sp4 = &sp14;
            sp8 = arg0->unk8C;
            spC = (s32) temp_r5->unkC;
            sp10 = (GenObj *)((u8 *)arg0 + 0x9C);
            var_r0_2 = func_030004DC(sp60->unk4, sp54, sp5C, (var_r0 * 4) | var_r0 | (var_r0 * 0x10) | (var_r0 << 6));
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            sp64 = (GenObj *)((u8 *)temp_r5 + 0x3C);
            if (temp_r5->unk3C != 0) {
                func_080A480C(temp_r5, sp60->unk0, &sp14 + 8);
                if (temp_r5->unk3D != 0) {
                    func_080A4944(temp_r5, &sp14 + 0x10, 1);
                } else if (temp_r5->unk3E == 0) {
                    func_080A4944(temp_r5, &sp14 + 0x10, 1);
                    temp_r5->unk3E = 1U;
                }
                *sp64 = 0;
            }
        }
    }
    func_08032690(arg0, arg1);
    if (sp48 != 0) {
        var_r1_3 = 0;
        if (temp_r4->unk38 == 1) {
            var_r1_3 = 1;
        }
        if ((var_r1_3 == 0) && (arg0->unkCC != 0xFFFF)) {
            temp_r0_5 = (*temp_sb)->unk64(temp_sb);
            temp_r5_2 = *temp_r0_5;
            temp_r5_2->unkC(&sp3C, temp_r0_5, arg0->unkCC);
            temp_r5_2->unk10(&sp14, temp_r0_5, *sp3C);
            (*temp_sb)->unk54(temp_sb, sp24, (*temp_sb)->unk48(temp_sb, 2), 1);
        }
    }
}

