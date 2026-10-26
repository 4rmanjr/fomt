#include "common.h"
s32 SetAnim__12AActorEntityUi(void *, u16);           /* extern */
u16 func_0802BC48(void *);                          /* extern */

typedef struct GenObj {
    u8 _pad0[52];
    s32 unk34;
    u8 _pad38[28];
    s32 unk54;
    s32 unk58;
} GenObj;
void func_0802BEFC(GenObj *arg0) {
    arg0->unk34 = 2;
    arg0->unk58 = 1;
    SetAnim__12AActorEntityUi(arg0, func_0802BC48(arg0));
    arg0->unk54 = 1;
}

