#include "common.h"
s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_08020080(void *, s32);                       /* extern */
s32 func_080233B4();                                /* extern */
s32 func_08023400(void *, u8);                      /* extern */
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_080323C8(void *);                            /* extern */

void func_08023308(void *arg0, u8 arg1, s32 arg2) {
    s32 var_r1;

    if (arg0->unk22 != func_080233B4()) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    func_08020080(arg0, func_08023400(arg0, arg1));
    if (arg1 != arg0->unk38) {
        var_r1 = -1;
        if (arg1 == 4) {
            var_r1 = 8;
        }
        if (var_r1 >= 0) {
            func_08032384(arg0, var_r1, 1);
        } else {
            func_080323C8(arg0);
        }
    }
    arg0->unk38 = arg1;
}

