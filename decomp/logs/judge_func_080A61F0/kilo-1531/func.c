#include "common.h"
s32 func_080A5BD8(void *, ? *, s32, s32);             /* extern */
extern ? gUnk_08106AAC;

void func_080A61F0(void *arg0) {
    s32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 42:
        func_080A5BD8(arg0, &gUnk_08106AAC, 0xB, 3);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106AAC, 0x13, 3);
        break;
    }
    arg0->unk29 = 1;
}

