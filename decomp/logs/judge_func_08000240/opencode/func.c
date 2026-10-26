#include "common.h"
s32 SoftReset(s32);                                   /* extern */
s32 func_08000528(s32);                               /* extern */

void func_08000240(void) {
    s32 *temp_r1;
    s32 *temp_r1_2;

    func_08000528(0xFFFF);
    *(u16 *)0x04000000 = 0x80;
    *(u8 *)(0x04000000 + 0x84) = 0;
    if (0xF & ~*(u16 *)0x04000130) {
        do {

        } while (0xF & ~*(u16 *)0x04000130);
    }
    *(u16 *)(0x040000B0 + 0xA) = (u16) (0xC5FF & *(u16 *)(0x040000B0 + 0xA));
    *(u16 *)(0x040000B0 + 0xA) = (u16) (0x7FFF & *(u16 *)(0x040000B0 + 0xA));
    temp_r1 = (s32 *)(0x040000B0 + 0xC);
    *(u16 *)((s8 *)temp_r1 + 0xA) = (u16) (0xC5FF & *(u16 *)((s8 *)temp_r1 + 0xA));
    *(u16 *)((s8 *)temp_r1 + 0xA) = (u16) (0x7FFF & *(u16 *)((s8 *)temp_r1 + 0xA));
    temp_r1_2 = (s32 *)((s8 *)temp_r1 + 0xC);
    *(u16 *)((s8 *)temp_r1_2 + 0xA) = (u16) (0xC5FF & *(u16 *)((s8 *)temp_r1_2 + 0xA));
    *(u16 *)((s8 *)temp_r1_2 + 0xA) = (u16) (0x7FFF & *(u16 *)((s8 *)temp_r1_2 + 0xA));
    *(u16 *)(0x040000D4 + 0xA) = (u16) (0xC5FF & *(u16 *)(0x040000D4 + 0xA));
    *(u16 *)(0x040000D4 + 0xA) = (u16) (0x7FFF & *(u16 *)(0x040000D4 + 0xA));
    SoftReset(0xFF);
loop_4:
    goto loop_4;
}

