# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B46C/kilo-1531/func.c" 2
s32 func_0805E860(void *, s32);

void func_0802B46C(void *arg0) {
    s32 sp0;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r3;
    u32 temp_r0_2;
    u32 var_r1_2;
    u8 temp_r6;
    u8 temp_r7;
    void *temp_r0;
    void *temp_r1;
    void *temp_r4;

    temp_r1 = arg0->unk0;
    temp_r7 = arg0->unk280;
    temp_r6 = temp_r1->unk20;
    temp_r5 = temp_r7 & 1;
    temp_r4 = arg0 + 0xCC + ((temp_r7 * 0x48) + 4);
    temp_r4->unk0 = 1;
    sp0.unk0 = (s16) temp_r1->unkA;
    sp0.unk2 = (s16) temp_r1->unkE;
    temp_r4->unk44 = sp0;
    switch (temp_r6) {
    default:
        var_r1 = temp_r5 + 0x650;
        break;
    case 1:
        var_r3 = 0x652;
block_8:
        var_r1 = temp_r5 + var_r3;
        break;
    case 2:
        var_r1 = temp_r5 + 0x654;
        break;
    case 3:
        var_r3 = 0x656;
        goto block_8;
    }
    func_0805E860(temp_r4 + 0x2C, var_r1);
    temp_r0 = temp_r4 + 0x40;
    temp_r4->unk40 = 1;
    temp_r0->unk2 = 0;
    (temp_r0 + 2)->unk1 = 1;
    temp_r0_2 = temp_r7 + 1;
    var_r1_2 = 0;
    if (temp_r0_2 <= 5U) {
        var_r1_2 = temp_r0_2;
    }
    arg0->unk280 = (u8) var_r1_2;
}
