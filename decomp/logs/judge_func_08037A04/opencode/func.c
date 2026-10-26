#include "common.h"
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, s32 *); /* extern */
s32 func_08037A38(void *, s32);                     /* extern */
s32 func_080A19EC(s32 *);                               /* extern */

typedef struct GenObj {
    u8 _pad0[34];
    s32 unk22;
} GenObj;
void func_08037A04(GenObj *arg0) {
s32 sp0;

    func_080A19EC(&sp0);
    SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp0);
    if (arg0->unk22 != func_08037A38(arg0, 0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
}

