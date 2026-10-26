# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1EF4/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1EF4/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1EF4/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1EF4/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1EF4/kilo-1531/func.c" 2
u32 func_080A1EF4(void *arg0, u32 arg1) {
    u32 temp_r0;
    u32 var_r0;
    u32 var_r1;
    u8 var_r0_2;

    var_r1 = 0;
    if (arg1 > 0x5FU) {
        temp_r0 = arg1 - 0x60;
        switch (temp_r0) {
        case 0:
            var_r0 = arg0->unk7 << 0x1D;
block_19:
            var_r1 = var_r0 >> 0x1D;
            break;
        case 1:
            var_r0 = arg0->unk7 << 0x1A;
            goto block_19;
        case 2:
            var_r1 = ((arg0->unk8 & 1) * 4) | ((u8) arg0->unk7 >> 6);
            break;
        case 3:
            var_r0 = arg0->unk8 << 0x1C;
            goto block_19;
        case 4:
            var_r0 = arg0->unk8 << 0x19;
            goto block_19;
        case 5:
            var_r0 = (u16) arg0->unk8 << 0x16;
            goto block_19;
        case 6:
            var_r0_2 = arg0->unk9;
block_18:
            var_r0 = var_r0_2 << 0x1B;
            goto block_19;
        case 7:
            var_r1 = (u8) arg0->unk9 >> 5;
            break;
        case 8:
            var_r0 = arg0->unkA << 0x1D;
            goto block_19;
        case 9:
            var_r0 = arg0->unkA << 0x1A;
            goto block_19;
        case 10:
            var_r0 = (u16) arg0->unkA << 0x17;
            goto block_19;
        case 11:
            var_r0 = arg0->unkB << 0x1C;
            goto block_19;
        case 12:
            var_r0 = arg0->unkB << 0x19;
            goto block_19;
        case 13:
            var_r1 = ((arg0->unkC & 3) * 2) | ((u8) arg0->unkB >> 7);
            break;
        case 14:
            var_r0_2 = arg0->unkC;
            goto block_18;
        }
    }
    return var_r1;
}
