__attribute__((naked)) void func_080D116A(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r4, #8\n"
    "b func_080D11A4\n"
    ".syntax divided"
    : : : "r0","r1","r2","r3","r4","r5","r6","lr","memory");
}
__asm__(
  ".syntax unified\n"
  ".space 54\n"
  "func_080D11A4:\n"
  "push {r5, r6, lr}\n"
  "movs r5, #0x20\n"
  "subs r5, r5, r4\n"
  "adds r6, r2, #0\n"
  "lsrs r6, r5\n"
  "subs r3, r3, r4\n"
  "bmi sub_080D11B8\n"
  "lsls r2, r4\n"
  "adds r4, r6, #0\n"
  "pop {r5, r6, pc}\n"
  "sub_080D11B8:\n"
  "ldm r0!, {r2}\n"
  "rsbs r5, r3, #0\n"
  "adds r4, r2, #0\n"
  "lsls r2, r5\n"
  "adds r3, #0x20\n"
  "lsrs r4, r3\n"
  "orrs r4, r6\n"
  "pop {r5, r6, pc}\n"
  ".syntax divided\n"
);
