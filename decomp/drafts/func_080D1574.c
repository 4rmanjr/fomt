__attribute__((naked)) void func_080D1574(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r3, #0xff\n"
    "lsls r6, r3, #8\n"
    "movs r4, #0\n"
    "movs r5, #0\n"
    "loop1574:\n"
    "ldrh r2, [r0, #2]\n"
    "adds r4, r4, r2\n"
    "ands r4, r3\n"
    "adds r5, r5, r2\n"
    "ands r5, r6\n"
    "adds r1, r5, #0\n"
    "orrs r1, r4\n"
    "strh r1, [r0, #2]\n"
    "adds r0, #2\n"
    "cmp r0, r8\n"
    "blo loop1574\n"
    "bx lr\n"
    ".syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","r6","memory");
}
