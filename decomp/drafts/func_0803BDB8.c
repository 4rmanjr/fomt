typedef struct GenObj {
    u8 _pad0[11];
    s32 unkB;
    s32 unkC;
} GenObj;
void func_0803BDB8(GenObj *arg0) {
    u8 temp_r3;

    temp_r3 = arg0->unkB;
    if ((((arg0->unkC & 0x7F) * 2) | (temp_r3 >> 7)) != 0) {
        arg0->unkB = (u8) (0x7F & temp_r3);
        arg0->unkC = (u8) (-0x80 & arg0->unkC);
    }
}
