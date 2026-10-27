s32 func_0804EE30(s32, s32, u16, u16, s32);           /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
    u16 unk14;
    u16 unk16;
    s32 unk18;
} GenObj;
s32 func_0804EE9C(GenObj *arg0) {
    func_0804EE30(arg0->unkC, arg0->unk10, arg0->unk14, arg0->unk16, arg0->unk18);
    return 0;
}
