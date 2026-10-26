#include "common.h"
s32 free();                                           /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_080756D0(void *, s32);                       /* extern */
s32 func_080E20C0(s32, s32);                          /* extern */
extern ? vtable_unk_080E5A28;

void func_080E2018(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r1;
    s32 var_r4;
    void **temp_r1;

    temp_r0 = arg0 + 0xE0;
    if (temp_r0 != 0) {
        var_r4 = arg0 + 0x1A0;
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 0x30;
                func_080E20C0(var_r4, 0);
            } while (temp_r0 != var_r4);
        }
    }
    temp_r2 = (arg0 + 0xD0)->unk4;
    var_r1 = arg0->unkD0;
    if (var_r1 != temp_r2) {
        do {
            var_r1 += 0x1C;
        } while (var_r1 != temp_r2);
    }
    if (arg0->unkD0 != 0) {
        free();
    }
    arg0->unkA0 = &vtable_unk_080E5A28;
    arg0->unk20 = &vtable_unk_080E5A28;
    func_080756D0(arg0 + 0x18, 2);
    temp_r1 = arg0->unkC;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    func_080086BC(arg0, arg1);
}

