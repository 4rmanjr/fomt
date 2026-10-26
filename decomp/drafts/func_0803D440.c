typedef struct GenObj {
    u8 _pad0[753];
    s32 unk2F1;
    u8 _pad2F5[63];
    s32 unk334;
} GenObj;
void func_0803D440(void **arg0) {
    GenObj *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1->unk2F1 != 0) {
        temp_r1->unk2F1 = 0U;
        temp_r1->unk334 = 1;
    }
}
