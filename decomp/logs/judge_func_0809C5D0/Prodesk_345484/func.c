#include "common.h"
void func_0809C5D0(s32 *arg0, u32 arg1) {
    if (arg1 <= 0xDU) {
        *arg0 &= ~(1 << (0x1F & arg1));
    }
}

