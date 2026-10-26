#include "common.h"
s32 func_0800FFF4(s32, u8);                           /* extern */
s32 func_08037F74();                                  /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[4];
    s32 unk18;
} GenObj;
void func_08037EB4(GenObj *arg0, u8 *arg1) {
    func_0800FFF4(arg0->unk18, *arg1);
    if (arg0->unk10 != 0) {
        func_08037F74();
    }
}

