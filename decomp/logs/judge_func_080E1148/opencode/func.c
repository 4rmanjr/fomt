#include "common.h"
s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
extern ? vtable_unk_080E5A28;

void func_080E1148(void *arg0, s32 arg1) {
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = arg0 + 0xB0;
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = temp_r4 - 8;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    arg0->unk10 = &vtable_unk_080E5A28;
    func_080086BC(arg0, arg1);
}

