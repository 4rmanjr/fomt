__attribute__((naked)) void func_080D117E(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "push {r5, lr}\n"
    "bl func_080D1186\n"
    "pop {r5, pc}\n"
    ".syntax divided"
    ::: "r0","r1","r2","r3","r4","r5","r6","lr","memory");
}
