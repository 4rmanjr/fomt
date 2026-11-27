s32 func_0809C22C(void);

void func_0809C3BC(u8 *arg0) {
    s32 i;
    u8 z;
    u8 *p;

    i = func_0809C22C();
    p = arg0 + i;
    z = *p;
    if (z == 0) {
        *p = 1;
        *((u8 *)(arg0 + 0xC) + i) = z;
    }
}
