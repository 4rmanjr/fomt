#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[132];
    s32 unk8C;
} GenObj;
void func_0803AC78(GenObj *arg0, s32 arg1) {
    void **temp_r0;
    void *temp_r0_2;
    void *temp_r4;
    void *var_r5;

    temp_r0 = arg0->unk0;
    (*temp_r0)->unk4C(temp_r0, arg0->unk8C);
    temp_r0_2 = arg0 + 4;
    if (temp_r0_2 != 0) {
        var_r5 = arg0 + 0x88;
        if (temp_r0_2 != var_r5) {
            do {
                var_r5 -= 0x2C;
                temp_r4 = var_r5 + 0x20;
                func_08007C28(temp_r4, temp_r4->unk4);
                func_080079E8(temp_r4, 2);
            } while (temp_r0_2 != var_r5);
        }
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

