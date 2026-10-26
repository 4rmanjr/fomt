#include "common.h"
s32 func_080D6F1C(s32);                               /* extern */

void func_080D6F3C(void *arg0) {
    func_080D6F1C(arg0 + 0x20);
    func_080D6F1C(arg0 + 4);
    arg0->unk0 = 0;
    arg0->unk1 = 1;
}

