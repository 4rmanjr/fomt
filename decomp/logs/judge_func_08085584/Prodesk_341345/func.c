#include "common.h"
s32 func_080C7F58();                                  /* extern */
s32 memcpy(void *, ? *, u32);                         /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_080FFC6C;
extern ? vtable_unk_080E7D30;

void *func_08085584(void *arg0, s32 arg2) {
    s32 var_r0;
    s32 var_r1;
    u32 var_r4;
    void *temp_r6;
    void *var_r0_2;

    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7D30;
    if (arg2 != 0) {
        if (arg2 != 1) {
            arg0->unk6A4 = 6;
        } else {
            arg0->unk6A4 = 5;
        }
    } else {
        arg0->unk6A4 = arg2;
    }
    arg0->unk6A8 = 0;
    arg0->unk72C = 0;
    var_r0 = 0x10;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r6 = arg0 + 0x3AB4;
    var_r4 = strlen(&gUnk_080FFC6C);
    if (var_r4 > 0x7FU) {
        var_r4 = 0x7F;
    }
    memcpy(temp_r6, &gUnk_080FFC6C, var_r4);
    *(temp_r6 + var_r4) = 0;
    arg0->unk3B34 = 0;
    var_r0_2 = arg0 + 0x3B98;
    var_r1 = 0xF;
    do {
        var_r0_2->unk4 = 0;
        var_r0_2 += 0x84;
        var_r1 -= 1;
    } while (var_r1 != -1);
    return arg0;
}

