__attribute__((naked)) void func_080D1564(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r4, #0\n"
    "loop1564:\n"
    "ldrh r2, [r0, #2]\n"
    "adds r4, r4, r2\n"
    "strh r4, [r0, #2]\n"
    "adds r0, #2\n"
    "cmp r0, r8\n"
    "blo loop1564\n"
    "bx lr\n"
    ".syntax divided"
    : : : "r0","r2","r4","memory");
}
