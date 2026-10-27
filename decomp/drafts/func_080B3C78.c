s32 func_080AE4D8(s32);

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080B3C78(GenObj *arg0) {
    return func_080AE4D8(arg0->unk4);
}
