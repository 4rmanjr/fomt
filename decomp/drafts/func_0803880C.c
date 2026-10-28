s32 func_080390D0();                                /* extern */

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
} GenObj;
s32 func_0803880C(GenObj *arg0) {
    if (arg0->unk10 != 0) {
        return func_080390D0();
    }
    return 0;
}
