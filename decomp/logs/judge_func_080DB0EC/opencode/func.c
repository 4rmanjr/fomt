#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 free();                                           /* extern */
s32 func_08008A68(void *, s32);                       /* extern */
s32 func_08009324(s32, s32);                          /* extern */
s32 func_080098DC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern ? vtable_unk_080E5C08;

void func_080DB0EC(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1_6;
    s32 var_r0;
    void **temp_r1_3;
    void **temp_r1_4;
    void **temp_r1_5;
    void *temp_r1;
    void *temp_r1_2;

    arg0->unkF4 = &vtable_unk_080E5C08;
    __builtin_delete(arg0->unkF0);
    if (arg0->unkD0 != 0) {
        free();
    }
    temp_r1 = arg0->unkB8;
    if (temp_r1 != 0) {
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    temp_r1_2 = arg0->unkB4;
    if (temp_r1_2 != 0) {
        temp_r1_2->unk4->unk8(temp_r1_2, 3);
    }
    temp_r1_3 = arg0->unkB0;
    if (temp_r1_3 != 0) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
    temp_r0 = arg0->unkAC;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    temp_r1_4 = arg0->unkA8;
    if (temp_r1_4 != 0) {
        (*temp_r1_4)->unk8(temp_r1_4, 3);
    }
    temp_r1_5 = arg0->unkA4;
    if (temp_r1_5 != 0) {
        (*temp_r1_5)->unk8(temp_r1_5, 3);
    }
    temp_r0_2 = arg0->unkA0;
    if (temp_r0_2 != 0) {
        func_08009324(temp_r0_2, 3);
    }
    func_080098DC(arg0 + 0x6C, 2);
    func_08008A68(arg0 + 0x68, 2);
    temp_r1_6 = arg0->unk4;
    var_r0 = arg0->unk0;
    if (var_r0 != temp_r1_6) {
        do {
            var_r0 += 0x10;
        } while (var_r0 != temp_r1_6);
    }
    if (arg0->unk0 != 0) {
        free();
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

