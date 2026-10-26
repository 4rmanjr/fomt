typedef struct GenObj {
    u8 _pad0[252];
    s32 unkFC;
} GenObj;
void *func_0809B038(GenObj *arg0, u32 arg1) {
    u32 temp_r2;

    temp_r2 = arg0->unkFC;
    if (arg1 >= temp_r2) {
        return arg0 + 0x100;
    }
    return arg0 + 0xFC + (((temp_r2 - (arg1 + 1)) * 8) + 4);
}
