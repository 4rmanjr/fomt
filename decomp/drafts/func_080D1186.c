__attribute__((naked)) void func_080D1186(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r4, #0x20\n"
    "loop1186:\n"
    "subs r3, #1\n"
    "bmi sub_080D119E\n"
    "lsrs r5, r2, #0x1f\n"
    "lsls r2, r2, #1\n"
    "lsls r5, r5, #1\n"
    "adds r5, r5, r4\n"
    "ldrsh r4, [r7, r5]\n"
    "tst r4, r4\n"
    "bpl loop1186\n"
    "mvns r4, r4\n"
    "bx lr\n"
    ".syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","lr","memory");
}
