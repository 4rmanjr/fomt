s32 func_080A5A9C(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_0801FD3C(GenObj *arg0) {
    return func_080A5A9C(arg0->unk4);
}
