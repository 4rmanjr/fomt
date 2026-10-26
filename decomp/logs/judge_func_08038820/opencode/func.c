#include "common.h"
s32 __builtin_delete(s32 *);                          /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_080A4740(void *, void **, s32, s32);         /* extern */
s32 func_080A47B4(void *, s32);                       /* extern */
s32 *func_080DCB7C(void *, void **, s32);           /* extern */
extern ? vtable_unk_080E602C;
extern ? vtable_unk_080E736C;

void *func_08038820(void *arg0, void ***arg1) {
    u16 *sp0;
    s32 *temp_r0_2;
    s32 *temp_r6;
    s32 var_r2;
    u32 temp_r0;
    void **temp_r4;
    void **temp_r5;
    void *temp_r3;
    void *temp_r4_2;
    void *temp_r5_2;
    void *var_r4;
    void *var_r6;

    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E736C;
    temp_r0 = (u32) (arg1->unk18->unk54 << 0x19) >> 0x1E;
    if (temp_r0 == 1) {
        var_r6 = __builtin_new(0x4C);
        temp_r4 = arg1->unk0;
        temp_r5 = (*temp_r4)->unk74(temp_r4);
        func_080A4740(var_r6, temp_r4, 6, 0x1B);
        var_r6->unk24 = &vtable_unk_080E602C;
        temp_r4_2 = *temp_r5;
        temp_r4_2->unkC(&sp0, temp_r5, 0);
        temp_r4_2->unk10(var_r6 + 0x28, temp_r5, *sp0);
        var_r6->unk48 = (s8) temp_r0;
    } else {
        var_r6 = 0;
    }
    arg0->unk8 = var_r6;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    temp_r3 = __builtin_new(0x194);
    var_r2 = 0;
    if (((u32) (arg1->unk18->unk5D << 0x1C) >> 0x1E) == 1) {
        var_r2 = 1;
    }
    temp_r0_2 = func_080DCB7C(temp_r3, *arg0->unk0, var_r2);
    temp_r6 = arg0->unk14;
    if ((temp_r0_2 != temp_r6) && (temp_r6 != 0)) {
        temp_r5_2 = temp_r6 + ((*temp_r6 * 0x50) + 4);
        var_r4 = temp_r6 + 4;
        if (var_r4 != temp_r5_2) {
            do {
                func_080A47B4(var_r4, 2);
                var_r4 += 0x50;
            } while (var_r4 != temp_r5_2);
        }
        __builtin_delete(temp_r6);
    }
    arg0->unk14 = temp_r0_2;
    return arg0;
}

