typedef struct GenObj {
    u16 a : 6;
    u16 b : 7;
    u16 c : 3;
} GenObj;

void func_080A0A54(GenObj *arg0, s32 arg1) {
    u32 tmp[2];

    tmp[0] = arg0->b + arg1;
    tmp[1] = 0x7F;
    arg0->b = tmp[tmp[0] > 0x7F];
}
