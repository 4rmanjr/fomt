void func_0809E988(s32 arg0, s32 arg1, s32 *arg2) {
    arg1 = (arg1 << 3) + arg0;
    __asm__ volatile ("ldm %0!, {r0, r3}\n\tstm %1!, {r0, r3}" : "+l" (arg2), "+l" (arg1) : : "r0", "r3", "memory");
}
