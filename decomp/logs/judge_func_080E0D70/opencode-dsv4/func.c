#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080098AC(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;

void func_080E0D70(void *arg0, s32 arg1) {
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;

    func_080098AC(arg0 + 0x340, 2);
    temp_r4 = arg0 + 0x338;
    func_08007C28(temp_r4, temp_r4->unk4);
    func_080079E8(temp_r4, 2);
    func_080098AC(arg0 + 0x31C, 2);
    temp_r4_2 = arg0 + 0x314;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    func_080098AC(arg0 + 0x2FC, 2);
    temp_r4_3 = arg0 + 0x2F4;
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    func_08007184(temp_r4_3, 2);
    func_080098AC(arg0 + 0x2D8, 2);
    temp_r4_4 = arg0 + 0x2D0;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    func_080098AC(arg0 + 0x2B4, 2);
    temp_r4_5 = arg0 + 0x2A8;
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    func_080079E8(temp_r4_5, 2);
    func_080098AC(arg0 + 0x190, 2);
    temp_r4_6 = arg0 + 0x184;
    func_08007C28(temp_r4_6, temp_r4_6->unk4);
    func_080079E8(temp_r4_6, 2);
    func_080098AC(arg0 + 0x68, 2);
    temp_r4_7 = arg0 + 0x60;
    func_080073E0(temp_r4_7, temp_r4_7->unk4);
    func_08007184(temp_r4_7, 2);
    arg0->unk30 = &vtable_unk_080E5A28;
    arg0->unk0 = &vtable_unk_080E5A28;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

