typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    u8 _pad10[60];
    struct GenObj *unk4C;
    struct GenObj *unk50;
} GenObj;
void func_08038E90(GenObj *arg0) {
    GenObj *temp_r0;

    temp_r0 = arg0->unkC;
    temp_r0->unk4C = 0x01200000;
    temp_r0->unk50 = 1;
}
