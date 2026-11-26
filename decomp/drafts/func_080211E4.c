s32 SetAnimFacing__12AActorEntityUi(void *, s32);
s32 SetAnim__12AActorEntityUi(void *);
s32 func_08020080(void *, s32);
s32 func_0802110C(void *, s32);
s32 func_08021130(void *, s32);
s32 func_08032384(void *, s32, s32);
s32 func_080323C8(void *);

typedef struct GenObj {
    u8 _pad0[0x20];
    u8 unk20;
    u8 _pad21[1];
    u16 unk22;
    u8 _pad24[0x1C];
    u8 unk40;
    u8 unk41;
} GenObj;

void func_080211E4(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 var_r1;
    s32 var_r5;
    s32 cur;
    u8 *t;
    u8 *p;

    var_r5 = arg1;
    if (var_r5 != 0xC) {
        if (arg0->unk40 != 0) {
            var_r5 = 0xC;
        }
    }
    cur = func_0802110C(arg0, var_r5);
    if (cur != arg0->unk22) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    func_08020080(arg0, func_08021130(arg0, var_r5));
    t = (u8 *)((u8 *)arg0 + 0x41);
    p = t;
    if (var_r5 != *p) {
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
    *p = var_r5;
}
