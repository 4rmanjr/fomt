#include "common.h"
s32 CountChickens__C4Coop(s32);                     /* extern */
s32 CountCows__C4Barn(s32);                         /* extern */
s32 CountSheeps__C4Barn(s32);                       /* extern */
s32 func_08069C34(void *, s32);                       /* extern */
s32 func_08075E7C(void *, u8);                        /* extern */
extern ? vtable_unk_080E7A88;

void *func_0805FD78(void *arg0, s32 arg1, u8 arg2) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_5;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;

    func_08075E7C(arg0, arg2);
    arg0->unk4 = &vtable_unk_080E7A88;
    arg0->unk120 = arg1;
    arg0->unk124 = 0U;
    sp0 = 0;
    sp0.unk4 = 0;
    sp0 = 0;
    temp_r2 = arg0 + 0x128;
    if (temp_r2 != 0) {
        arg0->unk128 = sp0;
        temp_r2->unk4 = sp4;
    }
    arg0->unk124 = (u32) (arg0->unk124 + 1);
    temp_r0 = CountChickens__C4Coop(arg0->unk120 + 0x410);
    if ((s32) ((0 - temp_r0) | temp_r0) < 0) {
        sp0 = 1;
        temp_r0_2 = arg0->unk124;
        if (temp_r0_2 <= 6U) {
            temp_r2_2 = arg0 + 0x124 + ((temp_r0_2 * 8) + 4);
            if (temp_r2_2 != 0) {
                temp_r2_2->unk0 = sp0;
                temp_r2_2->unk4 = sp4;
            }
            arg0->unk124 = (u32) (arg0->unk124 + 1);
        }
    }
    temp_r0_3 = CountCows__C4Barn(arg0->unk120 + 0x5F0);
    if ((s32) ((0 - temp_r0_3) | temp_r0_3) < 0) {
        sp0 = 2;
        temp_r0_4 = arg0->unk124;
        if (temp_r0_4 <= 6U) {
            temp_r3 = arg0 + 0x124 + ((temp_r0_4 * 8) + 4);
            if (temp_r3 != 0) {
                temp_r3->unk0 = sp0;
                temp_r3->unk4 = sp4;
            }
            arg0->unk124 = (u32) (arg0->unk124 + 1);
        }
    }
    temp_r0_5 = CountSheeps__C4Barn(arg0->unk120 + 0x5F0);
    if ((s32) ((0 - temp_r0_5) | temp_r0_5) < 0) {
        sp0 = 3;
        temp_r0_6 = arg0->unk124;
        if (temp_r0_6 <= 6U) {
            temp_r3_2 = arg0 + 0x124 + ((temp_r0_6 * 8) + 4);
            if (temp_r3_2 != 0) {
                temp_r3_2->unk0 = sp0;
                temp_r3_2->unk4 = sp4;
            }
            arg0->unk124 = (u32) (arg0->unk124 + 1);
        }
    }
    sp0 = 4;
    temp_r0_7 = arg0->unk124;
    if (temp_r0_7 <= 6U) {
        temp_r3_3 = arg0 + 0x124 + ((temp_r0_7 * 8) + 4);
        if (temp_r3_3 != 0) {
            temp_r3_3->unk0 = sp0;
            temp_r3_3->unk4 = sp4;
        }
        arg0->unk124 = (u32) (arg0->unk124 + 1);
    }
    sp0 = 5;
    temp_r0_8 = arg0->unk124;
    if (temp_r0_8 <= 6U) {
        temp_r3_4 = arg0 + 0x124 + ((temp_r0_8 * 8) + 4);
        if (temp_r3_4 != 0) {
            temp_r3_4->unk0 = sp0;
            temp_r3_4->unk4 = sp4;
        }
        arg0->unk124 = (u32) (arg0->unk124 + 1);
    }
    sp0 = 6;
    temp_r0_9 = arg0->unk124;
    if (temp_r0_9 <= 6U) {
        temp_r3_5 = arg0 + 0x124 + ((temp_r0_9 * 8) + 4);
        if (temp_r3_5 != 0) {
            temp_r3_5->unk0 = sp0;
            temp_r3_5->unk4 = sp4;
        }
        arg0->unk124 = (u32) (arg0->unk124 + 1);
    }
    arg0->unk160 = 0;
    func_08069C34(arg0, arg0->unk128);
    return arg0;
}

