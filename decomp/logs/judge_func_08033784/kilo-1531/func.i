# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033784/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033784/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033784/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033784/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033784/kilo-1531/func.c" 2
u16 func_08033784(void *arg0, void **arg2) {
    s32 var_r1;
    u32 temp_r0_2;
    void *temp_r0;

    temp_r0_2 = (u32) (arg0->unk0 << 0x1C) >> 0x1C;
    switch (temp_r0_2) {
    case 1:
    case 2:
        return 2U;
    case 3:
        return 0x11U;
    case 4:
    case 5:
        return 0x25U;
    case 6:
        var_r1 = arg0->unk1 + 0x36;
block_8:
        temp_r0 = (*arg2)->unk44(arg2, var_r1);
        if (temp_r0 == 0) {
        default:
            return 0x234U;
        }
        return temp_r0->unk4;
    case 7:
        var_r1 = arg0->unk1 + 0x2E;
        goto block_8;
    case 8:
        var_r1 = arg0->unk1 + 0x4C;
        goto block_8;
    }
}
