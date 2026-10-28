typedef struct GenObj {
    u8 _pad0[4];
    u16 unk4;
} GenObj;
s32 func_08025AFC(GenObj *arg0) {
    s32 v = arg0->unk4;
    if (v <= 8) {
        return 1;
    }
    return 0;
}
