#include "common.h"
s32 GetLocation__C7AEntity(s32 *, void *);            /* extern */
s32 func_0802151C(s32, s32 *);                        /* extern */
s32 func_080ABBA0(s32 *);                             /* extern */
s32 func_080ABBC4(s32 *);                             /* extern */
s32 func_080ABBEC(s32 *);                             /* extern */
s32 func_080ABC14(s32 *);                             /* extern */
s32 memcpy(s32, s32 *, s32);                          /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    u8 _pad10[4];
    struct GenObj *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk25;
} GenObj;
void func_08038110(GenObj *arg0, ? arg3) {
    GenObj sp0;
    GenObj *spC;
s32 sp1C;
    s32 sp28;
    s32 sp2C;
    s32 sp34;
    s32 sp3C;
    s32 sp40;
    s32 *var_r0_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_5;
    s32 temp_r1;
    s32 temp_r3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r4;
    s32 var_r7;
    u16 temp_r0_3;
    u8 temp_r0_6;
    u8 var_r0;
    void **temp_r0_4;
    void **temp_r7;

    if (arg0->unk25 == 0) {
        return;
    }
    temp_r7 = arg0->unk0;
    (*temp_r7)->unk34(&sp0, temp_r7, arg0->unk4);
    temp_r1 = arg0->unk20 + 0xFFFFB85D;
    arg0->unk20 = temp_r1;
    temp_r0 = arg0->unk1C + temp_r1;
    arg0->unk1C = temp_r0;
    if (temp_r0 <= 0) {
        arg0->unk1C = 0;
        arg0->unk25 = 0U;
        GetLocation__C7AEntity(&spC, arg0);
        memcpy(arg0->unk18, &spC, 6);
        temp_r0_2 = (s32) arg0->unk8 >> 0x13;
        temp_r3 = (s32) arg0->unkC >> 0x13;
        temp_r0_3 = sp0.unk8;
        if ((sp0 != 0) && ((u32) temp_r0_2 <= (u32) temp_r0_3) && ((u32) temp_r3 <= (u32) sp0.unkA)) {
            var_r0 = (temp_r3 * temp_r0_3) + temp_r0_2;
            if (sp4 != 0) {
                var_r0 = *((u8 *)sp4 + var_r0);
            }
            var_r0_2 = sp0 + (var_r0 * 4);
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 == 0) {
            (*temp_r7)->unk13C(temp_r7, 1);
            return;
        }
        if ((s32) (*var_r0_2 << 0x1E) < 0) {
            (*temp_r7)->unk13C(temp_r7, 0);
            return;
        }
        temp_r0_4 = arg0->unk0;
        temp_r0_5 = (*temp_r0_4)->unk40(temp_r0_4, 0x2B);
        if (temp_r0_5 != 0) {
            func_0802151C(temp_r0_5, &spC);
        }
        return;
    }
    ((void (*)(void *,...))(arg0->unk14->unkC))(&sp34, arg0);
    sp3C = sp34;
    sp40 = sp38;
    spC = 0x21;
    spC.unk4 = -0x21;
    spC.unk8 = -0x21;
    spC.unkC = 0x21;
    sp1C = (s32) sp0;
    sp1C.unk4 = (s32) sp0.unk4;
    sp1C.unk8 = (s32) sp0.unk8;
    sp28 = sp3C;
    sp2C = sp40;
    spC.unk24 = 0x20;
    var_r4 = arg0->unk8;
    var_r7 = arg0->unkC;
    temp_r0_6 = arg0->unk24;
    switch (temp_r0_6) {                            /* irregular */
    case 1:
        if ((s64) (sp10 + sp30) < 0) {
            func_080ABBC4(&spC);
        }
        var_r1 = sp10 << 0x10;
        if (var_r1 <= 0xFFFE38E4) {
            var_r7 += 0xFFFE38E4;
        } else {
block_20:
            var_r7 += var_r1;
        }
        break;
    case 0:
        if (spC > sp30) {
            func_080ABBA0(&spC);
        }
        var_r1 = spC << 0x10;
        if (var_r1 <= 0x1C71B) {
            goto block_20;
        }
        var_r7 += 0x1C71C;
        break;
    case 3:
        if (sp18 > sp30) {
            func_080ABC14(&spC);
        }
        var_r1_2 = sp18 << 0x10;
        if (var_r1_2 > 0x1C71B) {
            var_r1_2 = 0x1C71C;
        }
block_27:
        var_r4 += var_r1_2;
        break;
    case 2:
        if ((s64) (sp14 + sp30) < 0) {
            func_080ABBEC(&spC);
        }
        var_r1_2 = sp14 << 0x10;
        if (var_r1_2 <= 0xFFFE38E4) {
            var_r4 += 0xFFFE38E4;
        } else {
            goto block_27;
        }
        break;
    }
    arg0->unk8 = var_r4;
    arg0->unkC = var_r7;
}

