typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[2412];
    s32 unk974;
} GenObj;
s32 func_080C7F0C(GenObj *arg0) {
    return arg0->unk4->unk974;
}
