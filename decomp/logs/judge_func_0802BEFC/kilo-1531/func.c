#include "common.h"
s32 SetAnim__12AActorEntityUi(void *, u16);           /* extern */
u16 func_0802BC48(void *);                          /* extern */

void func_0802BEFC(void *arg0) {
    arg0->unk34 = 2;
    arg0->unk58 = 1;
    SetAnim__12AActorEntityUi(arg0, func_0802BC48(arg0));
    arg0->unk54 = 1;
}

