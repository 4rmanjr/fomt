#include "common.h"
s32 func_080D6F3C(s32);                               /* extern */

void func_080D6F5C(void *arg0) {
    func_080D6F3C(arg0 + 0x40);
    func_080D6F3C(arg0 + 4);
    arg0->unk0 = 0;
    arg0->unk1 = 1;
}

