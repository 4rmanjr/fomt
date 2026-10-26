typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[24];
    s32 unk20;
    u8 _pad24[132];
    s32 unkA8;
} GenObj;
u8 func_08012114(GenObj *arg0) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        return temp_r0->unk20;
    }
    return 0U;
}
