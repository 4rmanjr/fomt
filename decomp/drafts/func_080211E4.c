s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_08020080(void *, s32);                       /* extern */
s32 func_0802110C(void *, u8);                      /* extern */
s32 func_08021130(void *, u8);                      /* extern */
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_080323C8(void *);                            /* extern */

void func_080211E4(void *arg0, u8 arg1, s32 arg2) {
    s32 var_r1;
    u8 var_r5;

    var_r5 = arg1;
    if ((var_r5 != 0xC) && (arg0->unk40 != 0)) {
        var_r5 = 0xC;
    }
    if (arg0->unk22 != func_0802110C(arg0, var_r5)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    func_08020080(arg0, func_08021130(arg0, var_r5));
    if (var_r5 != arg0->unk41) {
        var_r1 = -1;
        if (var_r5 == 8) {
            var_r1 = 8;
        }
        if (var_r1 >= 0) {
            func_08032384(arg0, var_r1, 1);
        } else {
            func_080323C8(arg0);
        }
    }
    arg0->unk41 = var_r5;
}
