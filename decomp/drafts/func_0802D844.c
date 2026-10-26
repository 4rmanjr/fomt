s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
s32 func_080323C8(void *);                            /* extern */

void func_0802D844(void *arg0, void *arg1) {
    u16 var_r5;

    var_r5 = 0;
    if (arg1 != 0) {
        var_r5 = arg1->unk4;
    }
    if ((arg0->unkC3 != 0) || (0x3F3 & var_r5)) {
        func_080323C8(arg0);
        arg0->unk3C = 0x18;
        if (0x20 & var_r5) {
            if (arg0->unk20 != 2) {
                SetAnimFacing__12AActorEntityUi(arg0, 2);
            }
        } else if (0x10 & var_r5) {
            if (arg0->unk20 != 3) {
                SetAnimFacing__12AActorEntityUi(arg0, 3);
            }
        } else if (0x40 & var_r5) {
            if (arg0->unk20 != 1) {
                SetAnimFacing__12AActorEntityUi(arg0, 1);
            }
        } else if ((var_r5 & 0x80) && (arg0->unk20 != 0)) {
            SetAnimFacing__12AActorEntityUi(arg0, 0);
        }
    }
}
