#include "common.h"
void func_080CA6F4(void) {
    s32 var_r0;
    u8 temp_r0;

    temp_r0 = *(u8 *)0x04000006;
    switch (temp_r0) {                              /* irregular */
    case 0x17:
        if (!(2 & *(void *)0x04000004)) {
            do {

            } while (!(2 & *(void *)0x04000004));
        }
        *(void *)0x0400000C = 0x3E43;
        *(void *)0x04000004 = (u16) (0xFF & *(void *)0x04000004);
        var_r0 = 0x9F00;
block_8:
        *(void *)0x04000004 = (u16) (var_r0 | *(void *)0x04000004);
        return;
    case 0x9F:
        *(s16 *)0x0400000C = 0x3E41;
        *(u16 *)0x04000004 &= 0xFF;
        var_r0 = 0x1700;
        goto block_8;
    }
}

