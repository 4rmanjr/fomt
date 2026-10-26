#include "common.h"
s32 func_080384FC(void *);                            /* extern */
s32 func_080AC070(s32 *, ? *);                        /* extern */

void func_080212C0(void *arg0) {
s32 sp0;
s32 spC;
    s32 temp_r1;
    s32 temp_r8;
    s32 temp_sb;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_sl;
    u16 temp_r7;
    u8 temp_r0_3;
    void **temp_r0;
    void **temp_r4;
    void *temp_r0_2;

    temp_r0 = arg0->unk0;
    temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0x4B);
    if ((temp_r0_2 != 0) && (temp_r0_2->unk26 != 0)) {
        temp_sb = arg0->unk8;
        temp_r8 = arg0->unkC;
        var_sl = 8;
        temp_r7 = arg0->unk4;
        temp_r4 = arg0->unk0;
        if ((temp_r7 != (*temp_r4)->unk14(temp_r4)) && (temp_r7 != 2)) {
            var_sl = 0;
        }
        (*temp_r4)->unk34(&sp0, temp_r4, temp_r7);
loop_7:
        temp_r1 = var_sl << 0x10;
        temp_r0_3 = arg0->unk20;
        switch (temp_r0_3) {                        /* irregular */
        case 0:
            temp_r0_2->unk8 = temp_sb;
            var_r0 = temp_r8 + temp_r1;
block_19:
            temp_r0_2->unkC = var_r0;
            break;
        case 1:
            temp_r0_2->unk8 = temp_sb;
            var_r0 = temp_r8 - temp_r1;
            goto block_19;
        case 2:
            var_r0_2 = temp_sb - temp_r1;
block_18:
            temp_r0_2->unk8 = var_r0_2;
            var_r0 = temp_r8;
            goto block_19;
        case 3:
            var_r0_2 = temp_sb + temp_r1;
            goto block_18;
        }
        var_sl -= 1;
        if (var_sl >= 0) {
            temp_r0_2->unk14->unkC(&spC, temp_r0_2);
            if ((func_080AC070(&sp0, &spC) << 0x18) != 0) {
                goto loop_7;
            }
        }
        func_080384FC(temp_r0_2);
    }
}

