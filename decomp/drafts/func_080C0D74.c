s32 func_080BCCD4(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080C0D74(GenObj *arg0) {
    return func_080BCCD4(arg0->unk4);
}
