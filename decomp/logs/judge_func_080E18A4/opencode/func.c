#include "common.h"
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E76F8;

void func_080E18A4(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;

    arg0->unkAEC = &vtable_unk_080E76F8;
    temp_r4 = arg0 + 0x144;
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = arg0 + 0x13C;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    temp_r4_3 = arg0 + 0x134;
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    func_08007184(temp_r4_3, 2);
    temp_r4_4 = arg0 + 0x12C;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = arg0 + 0x124;
    func_080073E0(temp_r4_5, temp_r4_5->unk4);
    func_08007184(temp_r4_5, 2);
    temp_r4_6 = arg0 + 0x11C;
    func_08007C28(temp_r4_6, temp_r4_6->unk4);
    func_080079E8(temp_r4_6, 2);
    arg0->unk50 = &vtable_unk_080E5A28;
    arg0->unk20 = &vtable_unk_080E5A28;
    temp_r0 = arg0->unk10;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}

