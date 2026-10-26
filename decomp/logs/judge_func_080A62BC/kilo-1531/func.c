#include "common.h"
s32 func_080A5BD8(void *, ? *, s32, s32);             /* extern */
extern ? gUnk_08106AF4;

void func_080A62BC(void *arg0) {
    s32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 42:
        func_080A5BD8(arg0, &gUnk_08106AF4, 0xF, 2);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106AF4, 0x17, 2);
        break;
    }
    arg0->unk29 = 1;
}

