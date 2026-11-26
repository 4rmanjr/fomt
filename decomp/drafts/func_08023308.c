s32 SetAnimFacing__12AActorEntityUi(void *, s32);
s32 SetAnim__12AActorEntityUi(void *);
s32 func_08020080(void *, s32);
s32 func_080233B4();
s32 func_08023400(void *, s32);
s32 func_08032384(void *, s32, s32);
s32 func_080323C8(void *);

typedef struct GenObj {
    u8 _pad0[0x20];
    u8 unk20;
    u8 _pad21[1];
    u16 unk22;
    u8 _pad24[0x14];
    u8 unk38;
} GenObj;

void func_08023308(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 var_r1;
    s32 cur;
    u8 *p;

    cur = func_080233B4();
    if (arg0->unk22 != cur) {
        SetAnim__12AActorEntityUi(arg0);
    }
    if (arg0->unk20 != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    func_08020080(arg0, func_08023400(arg0, arg1));
    p = (u8 *)((u8 *)arg0 + 0x38);
    if (arg1 != *p) {
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
    *p = arg1;
}
