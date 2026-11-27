s32 func_0809C22C(void);

void func_0809C3BC(u8 *arg0) {
    s32 i = func_0809C22C();

    if (arg0[i] == 0) {
        arg0[i] = 1;
        arg0[i + 0xC] = 0;
    }
}
