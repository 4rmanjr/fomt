typedef struct GenObj {
    u8 _pad[20];
    u16 unk14;
    u8 unk16;
} GenObj;
s32 func_0809EEA4(GenObj *arg0, u32 arg1) {
    u32 mask = 1 << arg1;
    if (arg1 < arg0->unk16 && !(arg0->unk14 & mask)) {
        return 1;
    }
    return 0;
}
