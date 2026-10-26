#include "common.h"
s32 func_080200C4(void *, s32);                       /* extern */
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_0809C068(void *, s32);                       /* extern */
s32 func_0809C0C8(void *, s32 *);                     /* extern */
s32 func_080AB788(s32);                             /* extern */

void func_08039DA8(void *arg0) {
    s32 sp0;

    if (arg0->unk34->unkC != 1) {
        sp0 = ((((sp0 & 0xFFFF0000) | (u16) (func_080AB788(0x78) + 0xF0)) & 0xFF80FFFF) | 0x3C0000) & 0xFF7FFFFF & 0xFFFFFF;
        func_0809C0C8(arg0->unk34, &sp0);
        func_0809C068(arg0->unk34, 0xF);
        func_08032384(arg0, 2, 0);
        func_080200C4(arg0, 0xAA);
    }
}

