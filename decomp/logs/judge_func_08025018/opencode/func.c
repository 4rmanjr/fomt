#include "common.h"
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
u16 func_0802D158(void *);                          /* extern */
s32 func_0802F0EC(void *, s32, s32);                  /* extern */
s32 func_0803242C(void *, s32);                       /* extern */

void func_08025018(void *arg0, s32 arg1) {
    arg0->unkC1 = 0;
    if (arg0->unkC2 == 0) {
        if (arg0->unkC0 != 0) {
            func_0802F0EC(arg0, 0, 0);
            if (arg0->unk22 != func_0802D158(arg0)) {
                SetAnim__12AActorEntityUi(arg0);
            }
        }
        func_0803242C(arg0, arg1);
    }
}

