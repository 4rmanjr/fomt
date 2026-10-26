typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[12];
    void *unk14;
    s32 unk18;
    u8 _pad1C[412];
    s32 unk1B8;
    s32 unk1BA;
} GenObj;
u8 func_080E38B0(GenObj *arg0) {
    s32 temp_r2;

    if (arg0->unk1B8 != 0) {
        return arg0->unk1BA;
    }
    temp_r2 = arg0->unk14->unk4;
    if ((temp_r2 != 0) && (temp_r2 != arg0->unk18)) {
        return 1U;
    }
    return 0U;
}
