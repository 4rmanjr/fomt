__attribute__((naked)) void sub_080868BC(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "add sp, #0x48\n"
    "pop {r3, r4, r5}\n"
    "mov r8, r3\n"
    "mov sb, r4\n"
    "mov sl, r5\n"
    "pop {r4, r5, r6, r7}\n"
    "pop {r0}\n"
    "bx r0\n"
    ".4byte 0x00003B9C\n"
    ".4byte gUnk_080FFCD8\n"
    ".4byte gUnk_080FFCA0\n"
    ".4byte gUnk_080FFD24\n"
    ".4byte gUnk_080FFCF4\n"
    ".4byte 0x00003B98\n"
    ".syntax divided"
    ::: "memory");
}
