#include "common.h"
s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_08020080(void *, s32);                       /* extern */
s32 func_0802405C();                                /* extern */
s32 func_080240BC(void *, u8);                      /* extern */
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_080323C8(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[32];
    s32 unk20;
    s32 unk22;
    u8 _pad26[18];
    s32 unk38;
} GenObj;
void func_08023FB0(GenObj *arg0, u8 arg1, s32 arg2) {
    s32 var_r1;

    if (arg0->unk22 != func_0802405C()) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    func_08020080(arg0, func_080240BC(arg0, arg1));
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

