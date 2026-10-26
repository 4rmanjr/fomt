#include "common.h"
s32 __builtin_delete(s32);                            /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
s32 func_080E5324(s32, s32);                          /* extern */

void func_080E4FF0(void *arg0, s32 arg1) {
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r0_3;
    void **temp_r1_10;
    void **temp_r1_2;
    void **temp_r1_3;
    void **temp_r1_4;
    void **temp_r1_5;
    void **temp_r1_6;
    void **temp_r1_7;
    void **temp_r1_8;
    void **temp_r1_9;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;

    func_080E5324(arg0 + 0x83C, 2);
    func_080098AC(arg0 + 0x830, 2);
    func_080098AC(arg0 + 0x824, 2);
    __builtin_delete(arg0->unk7EC);
    __builtin_delete(arg0->unk7E8);
    __builtin_delete(arg0->unk7C4);
    __builtin_delete(arg0->unk7C0);
    __builtin_delete(arg0->unk79C);
    __builtin_delete(arg0->unk798);
    __builtin_delete(arg0->unk754);
    __builtin_delete(arg0->unk750);
    __builtin_delete(arg0->unk72C);
    __builtin_delete(arg0->unk728);
    temp_r0 = arg0 + 0x6A4;
    if (temp_r0 != 0) {
        var_r4 = arg0 + 0x708;
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 4;
                __builtin_delete(*var_r4);
            } while ((arg0 + 0x6A4) != var_r4);
        }
    }
    __builtin_delete(arg0->unk6A0);
    temp_r0_2 = arg0 + 0x61C;
    if (temp_r0_2 != 0) {
        var_r4_2 = arg0 + 0x680;
        if (temp_r0_2 != var_r4_2) {
            do {
                var_r4_2 -= 4;
                __builtin_delete(*var_r4_2);
            } while ((arg0 + 0x61C) != var_r4_2);
        }
    }
    __builtin_delete(arg0->unk618);
    __builtin_delete(arg0->unk5F4);
    __builtin_delete(arg0->unk5F0);
    __builtin_delete(arg0->unk5CC);
    __builtin_delete(arg0->unk5C8);
    __builtin_delete(arg0->unk5A4);
    __builtin_delete(arg0->unk5A0);
    __builtin_delete(arg0->unk57C);
    __builtin_delete(arg0->unk578);
    __builtin_delete(arg0->unk554);
    __builtin_delete(arg0->unk550);
    temp_r1 = arg0->unk544;
    if (temp_r1 != 0) {
        temp_r1->unk8->unkC(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk540;
    if (temp_r1_2 != 0) {
        (*temp_r1_2)->unk8(temp_r1_2, 3);
    }
    temp_r1_3 = arg0->unk53C;
    if (temp_r1_3 != 0) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
    temp_r1_4 = arg0->unk538;
    if (temp_r1_4 != 0) {
        (*temp_r1_4)->unk8(temp_r1_4, 3);
    }
    temp_r1_5 = arg0->unk534;
    if (temp_r1_5 != 0) {
        (*temp_r1_5)->unk8(temp_r1_5, 3);
    }
    temp_r1_6 = arg0->unk530;
    if (temp_r1_6 != 0) {
        (*temp_r1_6)->unk8(temp_r1_6, 3);
    }
    temp_r1_7 = arg0->unk52C;
    if (temp_r1_7 != 0) {
        (*temp_r1_7)->unk8(temp_r1_7, 3);
    }
    temp_r1_8 = arg0->unk528;
    if (temp_r1_8 != 0) {
        (*temp_r1_8)->unk8(temp_r1_8, 3);
    }
    temp_r1_9 = arg0->unk524;
    if (temp_r1_9 != 0) {
        (*temp_r1_9)->unk8(temp_r1_9, 3);
    }
    temp_r1_10 = arg0->unk520;
    if (temp_r1_10 != 0) {
        (*temp_r1_10)->unk8(temp_r1_10, 3);
    }
    temp_r0_3 = arg0->unk51C;
    if (temp_r0_3 != 0) {
        func_08050D0C(temp_r0_3, 3);
    }
    func_080086BC(arg0, arg1);
}

