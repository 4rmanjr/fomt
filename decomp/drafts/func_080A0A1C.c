typedef struct GenObj {
    u8 a : 6;
    u8 b : 2;
} GenObj;

void func_080A0A1C(GenObj *arg0, s32 arg1) {
    u32 tmp[2];

    tmp[0] = arg0->a + arg1;
    tmp[1] = 0x3F;
    arg0->a = tmp[tmp[0] > 0x3F];
}
