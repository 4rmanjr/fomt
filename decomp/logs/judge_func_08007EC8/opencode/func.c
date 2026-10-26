#include "common.h"
s32 func_080D6F5C(s32);                               /* extern */

void func_08007EC8(void *arg0) {
    func_080D6F5C(arg0 + 0x80);
    func_080D6F5C(arg0 + 4);
    arg0->unk0 = 0;
    arg0->unk1 = 1;
}

