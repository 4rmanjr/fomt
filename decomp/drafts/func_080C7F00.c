s32 func_080C12B8(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080C7F00(GenObj *arg0) {
    return func_080C12B8(arg0->unk4);
}
