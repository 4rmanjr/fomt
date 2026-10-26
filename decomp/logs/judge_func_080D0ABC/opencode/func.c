#include "common.h"
void func_080D0ABC(void) {
    u16 temp_r2;

    temp_r2 = *(u16 *)0x04000208;
    *(u16 *)0x04000208 = 0;
    *(u16 *)0x04000200 |= 0x80;
    *(u16 *)0x04000208 = temp_r2;
}

