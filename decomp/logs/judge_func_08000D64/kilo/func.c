#include "common.h"
s32 **__builtin_new(s32);                             /* extern */
s32 func_08000E1C(void *);                            /* extern */
s32 func_08000FF8(void *);                          /* extern */
extern s32 vtable_unk_080E59EC;
extern s32 vtable_unk_080E59FC;

typedef struct GenObj {
    u8 _pad0[27758];
    s32 unk6C6E;
    u8 _pad6C72[182];
    s32 unk6D28;
} GenObj;
s32 ***func_08000D64(s32 ***arg0, GenObj *arg1) {
    s32 **sp0;
    s32 ***sp4;
    s32 **sp8;
    s32 ***spC;
    s32 **sp10;
    s32 **temp_r0_2;
    s32 **temp_r0_3;
    s32 temp_r0;
    s32 var_r0;
    s8 temp_r4;

loop_1:
    temp_r0 = arg1->unk6D28;
    switch (temp_r0) {                              /* irregular */
    case 0:
        func_08000E1C(arg1);
        var_r0 = 1;
block_7:
        arg1->unk6D28 = var_r0;
    default:
        if (0 == 0) {
            goto loop_1;
        }
        break;
    case 1:
        if (func_08000FF8(arg1) != 1) {
            var_r0 = 0;
            goto block_7;
        }
        break;
    }
    temp_r4 = arg1->unk6C6E;
    if (temp_r4 == 0) {
        temp_r0_2 = __builtin_new(4);
        *temp_r0_2 = &vtable_unk_080E59FC;
        sp0 = temp_r0_2;
        sp4 = &sp0;
        sp8 = temp_r0_2;
        sp0 = (s32 **) temp_r4;
        *arg0 = temp_r0_2;
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
    } else {
        temp_r0_3 = __builtin_new(4);
        *temp_r0_3 = &vtable_unk_080E59EC;
        sp0 = temp_r0_3;
        spC = &sp0;
        sp10 = temp_r0_3;
        sp0 = 0;
        *arg0 = temp_r0_3;
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
    }
    return arg0;
}

