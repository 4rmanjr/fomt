#include "common.h"
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, ? *); /* extern */
s32 func_080378EC(void *, s32);                     /* extern */
s32 func_080A198C(s32 *);                               /* extern */

void func_080378B8(void *arg0) {
s32 sp0;

    func_080A198C(&sp0);
    SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp0);
    if (arg0->unk22 != func_080378EC(arg0, 0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
}

