#include "common.h"
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E76F8;

void func_080E3C3C(void *arg0, s32 arg1) {
    ? **temp_r0;
    ? **temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;

    arg0->unk33D8 = &vtable_unk_080E76F8;
    temp_r4 = arg0 + 0x328;
    func_08007C28(temp_r4, temp_r4->unk4);
    func_080079E8(temp_r4, 2);
    temp_r4_2 = arg0 + 0x320;
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    temp_r4_3 = arg0 + 0x318;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x310;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = arg0 + 0x308;
    func_080073E0(temp_r4_5, temp_r4_5->unk4);
    func_08007184(temp_r4_5, 2);
    temp_r4_6 = arg0 + 0x300;
    func_08007C28(temp_r4_6, arg0->unk304);
    func_080079E8(temp_r4_6, 2);
    temp_r4_7 = arg0 + 0x2F8;
    func_080073E0(temp_r4_7, temp_r4_7->unk4);
    func_08007184(temp_r4_7, 2);
    temp_r4_8 = arg0 + 0x2F0;
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    func_080079E8(temp_r4_8, 2);
    temp_r4_9 = arg0 + 0x2E8;
    func_080073E0(temp_r4_9, temp_r4_9->unk4);
    func_08007184(temp_r4_9, 2);
    temp_r4_10 = arg0 + 0x2E0;
    func_08007C28(temp_r4_10, temp_r4_10->unk4);
    func_080079E8(temp_r4_10, 2);
    arg0->unk128 = &vtable_unk_080E5A28;
    arg0->unkF8 = &vtable_unk_080E5A28;
    temp_r0 = (arg0 + 0xF8) - 0x30;
    *temp_r0 = &vtable_unk_080E5A28;
    temp_r0_2 = temp_r0 - 0x30;
    *temp_r0_2 = &vtable_unk_080E5A28;
    func_08050D0C(temp_r0_2 - 0x18, 2);
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

