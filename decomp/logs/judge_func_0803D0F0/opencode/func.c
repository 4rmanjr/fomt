#include "common.h"
s32 memcpy(void *, s32 *, s32);                       /* extern */
s32 memset(s32 *, s32, s32);                          /* extern */
extern ? gUnk_0875A440;

void func_0803D0F0(void **arg0, u32 arg1, u32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 var_r0;
    s8 *var_r1;
    u32 temp_r0;
    void *temp_r7;

    temp_r7 = *arg0;
    temp_r0 = arg1 / 10U;
    if ((s32) temp_r0 > 0) {
        memcpy(temp_r7 + 0xC4, (temp_r0 << 5) + &gUnk_0875A440, 0x20);
        var_r1 = temp_r7 + 0x18C;
    } else {
        memset(&sp0, 0, 0x20);
        memcpy(temp_r7 + 0xC4, &sp0, 0x20);
        var_r1 = temp_r7 + 0x18C;
    }
    *var_r1 = 1;
    memcpy(temp_r7 + 0xE4, ((arg1 % 10U) << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk18C = 1;
    switch (arg2) {
    default:
        sp0 = 0x60;
        sp4 = 0x61;
        var_r0 = 0x62;
        break;
    case 1:
        sp0 = 0x63;
        sp4 = 0x64;
        var_r0 = 0x65;
        break;
    case 2:
        sp0 = 0x66;
        sp4 = 0x67;
        var_r0 = 0x68;
        break;
    case 3:
        sp0 = 0x69;
        sp4 = 0x6A;
        var_r0 = 0x6B;
        break;
    case 4:
        sp0 = 0x6C;
        sp4 = 0x6D;
        var_r0 = 0x6E;
        break;
    case 5:
        sp0 = 0x6F;
        sp4 = 0x70;
        var_r0 = 0x71;
        break;
    case 6:
        sp0 = 0x72;
        sp4 = 0x73;
        var_r0 = 0x74;
        break;
    }
    sp8 = var_r0;
    memcpy(temp_r7 + 0x1A8, (sp0 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
    memcpy(temp_r7 + 0x1C8, (sp4 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
    memcpy(temp_r7 + 0x1E8, (sp8 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk2B0 = 1;
}

