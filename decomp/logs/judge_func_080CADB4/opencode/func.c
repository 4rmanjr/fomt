#include "common.h"
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? vtable_unk_080E85CC;

void *func_080CADB4(void *arg0, s32 arg1) {
    void *temp_r4;
    void *var_r0;

    arg0->unk210 = &vtable_unk_080E85CC;
    arg0->unk0 = arg1;
    temp_r4 = arg0 + 4;
    temp_r4->unk4 = 0;
    var_r0 = malloc(0xC);
    if (var_r0 == 0) {
        var_r0 = func_080D3BC0(0xC);
    }
    var_r0->unk0 = var_r0;
    var_r0->unk4 = var_r0;
    temp_r4->unk4 = var_r0;
    return arg0;
}

