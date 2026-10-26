s32 SetAnimFacing__12AActorEntityUi(void *, s32);     /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_08020080(void *, s32);                       /* extern */
s32 func_08021F88(void *, u8);                      /* extern */
s32 func_08021FAC(void *, u8);                      /* extern */
s32 func_08032384(void *, s32, s32);                  /* extern */
s32 func_080323C8(void *);                            /* extern */

typedef struct GenObj {
    u8 _pad0[32];
    s32 unk20;
    s32 unk22;
    u8 _pad26[22];
    s32 unk3C;
    s32 unk3D;
    s32 unk3E;
} GenObj;
void func_08022048(GenObj *arg0, u8 arg1, s32 arg2) {
    s32 var_r1;
    u8 var_r5;

    var_r5 = arg1;
    if ((var_r5 != 6) && (arg0->unk3D != 0)) {
        var_r5 = 6;
    }
    if (arg0->unk22 != func_08021F88(arg0, var_r5)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    func_08020080(arg0, func_08021FAC(arg0, var_r5));
    if ((var_r5 != arg0->unk3C) && (arg0->unk3E == 0)) {
        var_r1 = -1;
        if (var_r5 == 4) {
            var_r1 = 8;
        }
        if (var_r1 >= 0) {
            func_08032384(arg0, var_r1, 1);
        } else {
            func_080323C8(arg0);
        }
    }
    arg0->unk3C = var_r5;
}
