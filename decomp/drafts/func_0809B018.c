typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
void *func_0809B018(GenObj *arg0, u32 arg1) {
    u32 temp_r2;

    temp_r2 = arg0->unk8;
    if (arg1 >= temp_r2) {
        return arg0 + 0xC;
    }
    return arg0 + 8 + (((temp_r2 - (arg1 + 1)) * 8) + 4);
}
