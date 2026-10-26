#include "common.h"
s32 func_080D6ECC(s32);                               /* extern */

void func_080D6EEC(void *arg0) {
    func_080D6ECC(arg0 + 4);
    func_080D6ECC(arg0 + 0x40);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}

