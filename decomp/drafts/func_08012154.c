typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[25];
    s32 unk21;
    u8 _pad25[131];
    s32 unkA8;
} GenObj;
void func_08012154(GenObj *arg0, s8 arg2) {
    void *temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        temp_r0->unk21 = arg2;
    }
}
