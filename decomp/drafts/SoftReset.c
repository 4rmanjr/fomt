typedef unsigned char u8;

void SoftReset(void) __attribute__((noreturn));

void SoftReset(void) {
    *(volatile u8 *) 0x04000208 = 0;
    asm("ldr r1, =0x03007F00\n\tmov sp, r1\n\tsvc #1\n\tsvc #0\n\tmov r0, r0");
}
