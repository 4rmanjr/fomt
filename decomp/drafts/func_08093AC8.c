typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[444];
    s32 unk1C4;
} GenObj;
s32 func_08093AC8(GenObj *arg0) {
    return arg0->unk4->unk1C4;
}
