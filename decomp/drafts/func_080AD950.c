s32 func_080A635C(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080AD950(GenObj *arg0) {
    func_080A635C(arg0->unk4);
    return 0;
}
