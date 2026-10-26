s32 func_0804E9F4(s32, u16, s32, s32, s32, s32);      /* extern */

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    s32 unk10;
    s32 unk12;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} GenObj;
s32 func_0804EEFC(GenObj *arg0) {
    func_0804E9F4(arg0->unkC, arg0->unk12, arg0->unk14, arg0->unk18, (s32) arg0->unk10, arg0->unk1C);
    return 0;
}
