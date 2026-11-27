// fragmen lanjutan Unpack/sub_080D1224: memakai r4/r2/r3 dari pemanggil.
__attribute__((naked)) void func_080D11A4(void) {
  __asm__ volatile (
    ".syntax unified\n"
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
  );
}
