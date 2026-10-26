#include "common.h"
s32 func_08050C64(void *);                            /* extern */
s32 func_0805E860(void *, u32);                       /* extern */

void func_08050C2C(void *arg0, u32 arg1) {
    if (arg1 >= (u32) (arg0 + 0x504)->unk20) {
        func_08050C64(arg0);
        return;
    }
    arg0->unk500 = 1;
    func_0805E860(arg0 + 0x534, arg1);
}

