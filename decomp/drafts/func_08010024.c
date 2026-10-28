void func_08010024(s32 *arg0) {
    register s32 *a asm("r3") = arg0;
    register u8 *start asm("r5") = (u8 *)a + 4;
    register u8 *end asm("r0") = (u8 *)a + (*a + 4);
    register u8 *limit asm("r2") = end;
    register u8 *p asm("r1") = start;
    register s32 val asm("r4") = *(volatile s32 *)a;
    s32 diff;

    while (p != limit) {
        p += 1;
    }
    diff = end - start;
    diff = val - diff;
    *a = diff;
}
