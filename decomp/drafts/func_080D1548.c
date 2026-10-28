__attribute__((naked)) void func_080D1548(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r5, #0xff\n"
    "movs r4, #0\n"
    "loop1548:\n"
    "ldrh r2, [r0, #2]\n"
    "lsrs r3, r2, #8\n"
    "adds r2, r2, r4\n"
    "ands r2, r5\n"
    "adds r4, r3, r2\n"
    "lsls r1, r4, #8\n"
    "orrs r1, r2\n"
    "strh r1, [r0, #2]\n"
    "adds r0, #2\n"
    "cmp r0, r8\n"
    "blo loop1548\n"
    "bx lr\n"
    ".syntax divided"
    : : : "r0", "r1", "r2", "r3", "r4", "r5", "memory");
}
