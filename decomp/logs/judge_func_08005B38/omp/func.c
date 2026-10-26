#include "common.h"
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5AB4;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[17904];
    s32 unk45F8;
} GenObj;
void func_08005B38(GenObj *arg0, s32 arg1) {
    s32 temp_r0;

    arg0->unk4 = &vtable_unk_080E5AB4;
    temp_r0 = arg0->unk45F8;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}

