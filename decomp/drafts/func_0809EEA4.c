typedef struct GenObj {
    u8 _pad0[20];
    s32 unk14;
    s32 unk16;
} GenObj;
s32 func_0809EEA4(GenObj *arg0, u32 arg1) {
    if ((arg1 < (u32) arg0->unk16) && !(arg0->unk14 & (1 << arg1))) {
        return 1;
    }
    return 0;
}
