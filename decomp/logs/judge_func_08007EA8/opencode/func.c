#include "common.h"
s32 func_080D6EEC(s32);                               /* extern */

void func_08007EA8(void *arg0) {
    func_080D6EEC(arg0 + 4);
    func_080D6EEC(arg0 + 0x80);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}

