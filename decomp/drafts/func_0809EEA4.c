typedef struct GenObj_9EEA4 {
    u8 _pad0[0x14];
    u16 unk14;
    u8 unk16;
} GenObj_9EEA4;

s32 func_0809EEA4(GenObj_9EEA4 *arg0, u32 arg1) {
    u32 m;

    m = 1 << arg1;
    if (arg1 >= arg0->unk16) {
        return 0;
    }
    if ((arg0->unk14 & m) != 0) {
        return 0;
    }
    return 1;
}
