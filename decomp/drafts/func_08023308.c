s32 func_080233B4(u8 *);
void SetAnim__12AActorEntityUi(u8 *, s32);
void SetAnimFacing__12AActorEntityUi(u8 *, s32);
s32 func_08023400(u8 *, s32);
void func_08020080(u8 *, s32);
void func_08032384(u8 *, s32, s32);
void func_080323C8(u8 *);

void func_08023308(u8 *arg0, s32 arg1, s32 arg2) {
    s32 v;
    s32 t;

    v = func_080233B4(arg0);
    if (*(u16 *)(arg0 + 0x22) != v) {
        SetAnim__12AActorEntityUi(arg0, v);
    }
    if (*(u8 *)(arg0 + 0x20) != arg2) {
        SetAnimFacing__12AActorEntityUi(arg0, arg2);
    }
    v = func_08023400(arg0, arg1);
    func_08020080(arg0, v);
    if (arg1 != *(u8 *)(arg0 + 0x38)) {
        t = -1;
        if (arg1 == 4) {
            t = 8;
        }
        if (t >= 0) {
            func_08032384(arg0, t, 1);
        } else {
            func_080323C8(arg0);
        }
        *(u8 *)(arg0 + 0x38) = (u8)arg1;
    }
}
