typedef struct GenObj {
    u8 _pad0[11];
    s32 unkB;
    s32 unkC;
} GenObj;
s32 func_0803BE9C(void **arg0) {
    GenObj *temp_r0;

    temp_r0 = *arg0;
    return ((temp_r0->unkC & 0x7F) * 2) | ((u8) temp_r0->unkB >> 7);
}
