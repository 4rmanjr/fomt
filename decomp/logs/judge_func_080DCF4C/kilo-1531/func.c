#include "common.h"
s32 __builtin_delete(void *);                         /* extern */
extern ? __vt_7AEntity;
extern ? vtable_unk_080E7568;

void func_080DCF4C(void *arg0, s32 arg1) {
    s32 var_r5;
    u32 temp_r7;
    u32 var_r6;
    void **var_r4;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    arg0->unk14 = &vtable_unk_080E7568;
    temp_r0 = arg0->unk10;
    if (temp_r0 != 0) {
        var_r6 = 0;
        temp_r7 = temp_r0->unk8;
        if (temp_r7 > 0U) {
            var_r5 = arg0->unk18;
            var_r4 = temp_r0 + 0xC;
            do {
                temp_r1 = *var_r4;
                if (temp_r1 != 0) {
                    temp_r1->unk4C->unk14(temp_r1, var_r5);
                }
                var_r5 += 0x10;
                var_r4 += 4;
                var_r6 += 1;
            } while (var_r6 < temp_r7);
        }
    }
    arg0->unk14 = &__vt_7AEntity;
    temp_r1_2 = arg0->unk10;
    if (temp_r1_2 != 0) {
        temp_r1_2->unk4->unk8(temp_r1_2, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}

