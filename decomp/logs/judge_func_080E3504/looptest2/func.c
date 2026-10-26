#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(void *, s32);                       /* extern */
s32 func_080CE3DC(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;

void func_080E3504(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r5;
    void *temp_r5_2;

    temp_r0 = arg0->unk94;
    if (temp_r0 != 0) {
        func_080CE3DC(temp_r0, 3);
    }
    temp_r5 = arg0->unk90;
    if (temp_r5 != 0) {
        temp_r4 = temp_r5 + 0x74;
        func_080073E0(temp_r4, temp_r4->unk4);
        func_08007184(temp_r4, 2);
        temp_r4_2 = temp_r4 - 8;
        func_08007C28(temp_r4_2, temp_r4_2->unk4);
        func_080079E8(temp_r4_2, 2);
        temp_r5->unk4 = &vtable_unk_080E5A28;
        __builtin_delete(temp_r5);
    }
    temp_r5_2 = arg0->unk8C;
    if (temp_r5_2 != 0) {
        temp_r5_2->unk24 = &vtable_unk_080E5A28;
        temp_r4_3 = temp_r5_2 + 0x1C;
        func_080073E0(temp_r4_3, temp_r4_3->unk4);
        func_08007184(temp_r4_3, 2);
        temp_r4_4 = temp_r4_3 - 8;
        func_08007C28(temp_r4_4, temp_r4_4->unk4);
        func_080079E8(temp_r4_4, 2);
        __builtin_delete(temp_r5_2);
    }
    func_08050D0C(arg0 + 0x80, 2);
    temp_r1 = arg0->unk7C;
    if (temp_r1 != 0) {
        temp_r1->unk210->unk8(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk78;
    if (temp_r1_2 != 0) {
        temp_r1_2->unk210->unk8(temp_r1_2, 3);
    }
    arg0->unk10 = &vtable_unk_080E5A28;
    func_080086BC(arg0, arg1);
}

