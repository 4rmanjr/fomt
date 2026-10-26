typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1532];
    s32 unk604;
} GenObj;
s32 func_080C0D80(GenObj *arg0) {
    return arg0->unk4->unk604;
}
