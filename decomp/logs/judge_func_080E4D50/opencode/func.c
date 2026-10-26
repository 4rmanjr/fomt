#include "common.h"
s32 __builtin_delete(s32);                            /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
s32 func_080E4F34(s32, s32);                          /* extern */

void func_080E4D50(void *arg0, s32 arg1) {
    s32 temp_r0;
    void **temp_r1_2;
    void **temp_r1_3;
    void **temp_r1_4;
    void **temp_r1_5;
    void **temp_r1_6;
    void **temp_r1_7;
    void **temp_r1_8;
    void **temp_r1_9;
    void *temp_r1;

    func_080E4F34(arg0 + 0x5B0, 2);
    func_080098AC(arg0 + 0x594, 2);
    func_080098AC(arg0 + 0x588, 2);
    __builtin_delete(arg0->unk554);
    __builtin_delete(arg0->unk550);
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
    temp_r0 = arg0->unk418;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}

