#include "common.h"
void func_0800FF8C(s32 *arg0) {
    s32 *temp_r4;

    arg0[0] = 0;
    temp_r4 = (s32 *)((s8 *)arg0 + 0x24);
    *(u16 *)((s8 *)arg0 + 0x24) = (u16) ((0xFFFFFC00 & *(u16 *)((s8 *)arg0 + 0x24)) | 0x234);
    *((u8 *)temp_r4 + 1) = (u8) (3 & *((u8 *)temp_r4 + 1));
    *(u16 *)((s8 *)temp_r4 + 2) = (u16) (0xFFFFFC00 & *(u16 *)((s8 *)temp_r4 + 2));
    *((u8 *)temp_r4 + 3) = (u8) (3 & *((u8 *)temp_r4 + 3));
    *(u16 *)((s8 *)temp_r4 + 4) = (u16) (0xFFFFFC00 & *(u16 *)((s8 *)temp_r4 + 4));
}

