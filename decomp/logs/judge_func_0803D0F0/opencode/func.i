# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D0F0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D0F0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D0F0/opencode/common.h" 1
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h"
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/limits.h" 1
# 32 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 2



typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;



typedef int intptr_t;
typedef unsigned int uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D0F0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D0F0/opencode/func.c" 2
s32 memcpy(void *, s32 *, s32);
s32 memset(s32 *, s32, s32);
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
