#include "common.h"
s32 func_080A5BD8(void *, ? *, s32, s32);             /* extern */
extern ? gUnk_08106A7C;

void func_080A6138(void *arg0) {
    s32 temp_r0;
    s32 var_r2;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 41:
        var_r2 = 0x19;
block_8:
        func_080A5BD8(arg0, &gUnk_08106A7C, var_r2, 0xF);
        break;
    case 42:
        var_r2 = 0x28;
        goto block_8;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106A7C, 0x36, 0xF);
        break;
    }
    arg0->unk29 = 1;
}

