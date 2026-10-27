#include "common.h"
s32 func_080A59BC(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
void func_080ADB9C(GenObj *arg0) {
    func_080A59BC(arg0->unk4);
}

