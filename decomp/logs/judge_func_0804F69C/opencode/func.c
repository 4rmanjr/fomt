#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080098AC(void *, s32);                       /* extern */
s32 func_080098DC(void *, s32);                       /* extern */
s32 func_080ADC84(void *, s32);                       /* extern */
s32 func_080E105C(void *, s32);                       /* extern */
extern ? vtable_unk_080E5A28;

void func_0804F69C(void *arg0, s32 arg1) {
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *var_r0;

    temp_r4 = arg0 + 0x548;
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    arg0->unk504 = &vtable_unk_080E5A28;
    temp_r4_2 = arg0 + 0x1E8;
    func_080073E0(temp_r4_2, temp_r4_2->unk4);
    func_08007184(temp_r4_2, 2);
    func_080ADC84(arg0 + 0x1E4, 2);
    temp_r4_3 = arg0 + 0x1D4;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    arg0->unk190 = &vtable_unk_080E5A28;
    arg0->unk160 = &vtable_unk_080E5A28;
    func_080098AC(arg0 + 0x148, 2);
    func_080098AC(arg0 + 0x130, 2);
    func_080098AC(arg0 + 0x120, 2);
    func_080E105C(arg0 + 0xD0, 2);
    func_080098AC(arg0 + 0xC0, 2);
    temp_r1 = arg0 + 0x3C + ((arg0->unk3C * 0x10) + 4);
    var_r0 = arg0 + 0x40;
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 0x10;
        } while (var_r0 != temp_r1);
    }
    func_080098DC(arg0 + 0x20, 2);
    temp_r4_4 = arg0 + 0x18;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = temp_r4_4 - 8;
    func_080073E0(temp_r4_5, temp_r4_5->unk4);
    func_08007184(temp_r4_5, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

