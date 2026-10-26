#include "common.h"
s32 __builtin_delete(s32);                            /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
s32 func_080E4860(s32, s32);                          /* extern */

void func_080E4564(void *arg0, s32 arg1) {
    s32 *var_r4;
    s32 *var_r4_2;
    s32 *var_r4_3;
    s32 *var_r4_4;
    s32 *var_r4_5;
    s32 *var_r4_6;
    s32 *var_r4_7;
    s32 temp_r0_8;
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
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r1;

    func_080E4860(arg0 + 0x888, 2);
    func_080098AC(arg0 + 0x82C, 2);
    func_080098AC(arg0 + 0x820, 2);
    __builtin_delete(arg0->unk7E8);
    __builtin_delete(arg0->unk7E4);
    __builtin_delete(arg0->unk7C0);
    __builtin_delete(arg0->unk7BC);
    temp_r0 = arg0 + 0x708;
    if (temp_r0 != 0) {
        var_r4 = arg0 + 0x71C;
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 4;
                __builtin_delete(*var_r4);
            } while ((arg0 + 0x708) != var_r4);
        }
    }
    temp_r0_2 = arg0 + 0x6F4;
    if (temp_r0_2 != 0) {
        var_r4_2 = arg0 + 0x708;
        if (temp_r0_2 != var_r4_2) {
            do {
                var_r4_2 -= 4;
                __builtin_delete(*var_r4_2);
            } while ((arg0 + 0x6F4) != var_r4_2);
        }
    }
    temp_r0_3 = arg0 + 0x6E0;
    if (temp_r0_3 != 0) {
        var_r4_3 = arg0 + 0x6F4;
        if (temp_r0_3 != var_r4_3) {
            do {
                var_r4_3 -= 4;
                __builtin_delete(*var_r4_3);
            } while ((arg0 + 0x6E0) != var_r4_3);
        }
    }
    temp_r0_4 = arg0 + 0x62C;
    if (temp_r0_4 != 0) {
        var_r4_4 = arg0 + 0x640;
        if (temp_r0_4 != var_r4_4) {
            do {
                var_r4_4 -= 4;
                __builtin_delete(*var_r4_4);
            } while ((arg0 + 0x62C) != var_r4_4);
        }
    }
    temp_r0_5 = arg0 + 0x618;
    if (temp_r0_5 != 0) {
        var_r4_5 = arg0 + 0x62C;
        if (temp_r0_5 != var_r4_5) {
            do {
                var_r4_5 -= 4;
                __builtin_delete(*var_r4_5);
            } while ((arg0 + 0x618) != var_r4_5);
        }
    }
    temp_r0_6 = arg0 + 0x564;
    if (temp_r0_6 != 0) {
        var_r4_6 = arg0 + 0x578;
        if (temp_r0_6 != var_r4_6) {
            do {
                var_r4_6 -= 4;
                __builtin_delete(*var_r4_6);
            } while ((arg0 + 0x564) != var_r4_6);
        }
    }
    temp_r0_7 = arg0 + 0x550;
    if (temp_r0_7 != 0) {
        var_r4_7 = arg0 + 0x564;
        if (temp_r0_7 != var_r4_7) {
            do {
                var_r4_7 -= 4;
                __builtin_delete(*var_r4_7);
            } while ((arg0 + 0x550) != var_r4_7);
        }
    }
    __builtin_delete(arg0->unk52C);
    __builtin_delete(arg0->unk528);
    __builtin_delete(arg0->unk504);
    __builtin_delete(arg0->unk500);
    __builtin_delete(arg0->unk4DC);
    __builtin_delete(arg0->unk4D8);
    __builtin_delete(arg0->unk4B4);
    __builtin_delete(arg0->unk4B0);
    __builtin_delete(arg0->unk48C);
    __builtin_delete(arg0->unk488);
    __builtin_delete(arg0->unk464);
    __builtin_delete(arg0->unk460);
    temp_r1 = arg0->unk43C;
    if (temp_r1 != 0) {
        temp_r1->unk8->unkC(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk438;
    if (temp_r1_2 != 0) {
        (*temp_r1_2)->unk8(temp_r1_2, 3);
    }
    temp_r1_3 = arg0->unk434;
    if (temp_r1_3 != 0) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
    temp_r1_4 = arg0->unk430;
    if (temp_r1_4 != 0) {
        (*temp_r1_4)->unk8(temp_r1_4, 3);
    }
    temp_r1_5 = arg0->unk42C;
    if (temp_r1_5 != 0) {
        (*temp_r1_5)->unk8(temp_r1_5, 3);
    }
    temp_r1_6 = arg0->unk428;
    if (temp_r1_6 != 0) {
        (*temp_r1_6)->unk8(temp_r1_6, 3);
    }
    temp_r1_7 = arg0->unk424;
    if (temp_r1_7 != 0) {
        (*temp_r1_7)->unk8(temp_r1_7, 3);
    }
    temp_r1_8 = arg0->unk420;
    if (temp_r1_8 != 0) {
        (*temp_r1_8)->unk8(temp_r1_8, 3);
    }
    temp_r1_9 = arg0->unk41C;
    if (temp_r1_9 != 0) {
        (*temp_r1_9)->unk8(temp_r1_9, 3);
    }
    temp_r0_8 = arg0->unk418;
    if (temp_r0_8 != 0) {
        func_08050D0C(temp_r0_8, 3);
    }
    func_080086BC(arg0, arg1);
}

