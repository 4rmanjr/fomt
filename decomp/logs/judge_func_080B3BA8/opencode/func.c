#include "common.h"
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_080B0934(void *);                            /* extern */
s32 func_080B0970(void *);                            /* extern */

void func_080B3BA8(void *arg0) {
    func_08008B6C(arg0 + 0x818, 0xB8);
    if (arg0->unk83C == 0) {
        arg0->unk83C = 1;
        func_080B0934(arg0);
        return;
    }
    arg0->unk83C = 0;
    func_080B0970(arg0);
}

