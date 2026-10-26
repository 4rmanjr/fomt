s32 func_080A6300(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080AD960(GenObj *arg0) {
    func_080A6300(arg0->unk4);
    return 0;
}
