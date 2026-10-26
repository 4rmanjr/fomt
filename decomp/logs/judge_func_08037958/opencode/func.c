#include "common.h"
s32 SetAnimFacing__12AActorEntityUi(void *);          /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_08037098(void *, s32);                       /* extern */
s32 func_08037A38(void *, s32);                     /* extern */
s32 func_08037A48(void *, s32);                     /* extern */
s32 func_080AB788(s32);                             /* extern */
s32 func_080AB7A4(u8);                              /* extern */
s32 func_080AB82C(s32 *, s32);                        /* extern */
extern s32 gUnk_080F1638;

typedef struct GenObj {
    u8 _pad0[1];
    s32 unk1;
    s32 unk2;
    u8 _pad6[26];
    s32 unk20;
    s32 unk22;
} GenObj;
s32 func_08037958(GenObj *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    void *temp_r4;

    temp_r0 = func_080AB82C(&gUnk_080F1638, 3);
    temp_r4 = (temp_r0 * 4) + &gUnk_080F1638;
    temp_r5 = (0x3C * temp_r4->unk1) + func_080AB788(0x3C * temp_r4->unk2);
    temp_r0_2 = func_080AB788(4);
    if ((temp_r0_2 != 0) && (temp_r0_2 != 3) && (arg0->unk20 != func_080AB7A4(arg0->unk20))) {
        SetAnimFacing__12AActorEntityUi(arg0);
    }
    func_08037098(arg0, func_08037A48(arg0, temp_r0));
    if (arg0->unk22 != func_08037A38(arg0, temp_r0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    return temp_r5;
}

