#include "common.h"
s32 func_080884F4(void *, s32);                       /* extern */
s32 func_080CEB80(s32);                             /* extern */

typedef struct GenObj {
    u8 _pad0[148];
    s32 unk94;
} GenObj;
void func_08088574(GenObj *arg0) {
    func_080884F4(arg0, func_080CEB80(arg0->unk94));
}

