typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[332];
    s32 unk158;
} GenObj;
s32 func_08050DF0(void **arg0) {
    GenObj *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1->unk8 != 6) {
        return temp_r1->unk158;
    }
    return 0;
}
