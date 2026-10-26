# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9E1C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9E1C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9E1C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9E1C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B9E1C/opencode/func.c" 2
u8 func_080B9F64(s32, s32, u32);
u16 rand();

void func_080B9E1C(s32 arg0, u8 arg1) {
    s32 sp0;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r6;
    u32 temp_r1;
    u32 temp_r4_2;
    u32 var_r8;
    u8 temp_r0;

    sp0 = (s32) arg1;
    temp_r1 = (u32) ((arg1 << 0x18) + 0x01000000) >> 0x18;
    var_r8 = temp_r1;
    if (temp_r1 > 1U) {
        var_r8 = 0;
    }
    temp_r4 = sp0 << 6;
    temp_r5 = arg0 + 0x74;
    var_r6 = *(temp_r5 + temp_r4);
    if ((u32) (rand() >> 8) < (u32) (arg0 + temp_r4)->unk8E) {
        temp_r4_2 = rand() >> 0xF;
        temp_r0 = func_080B9F64(arg0, sp0, var_r8);
        switch (temp_r0) {
        case 0:
            var_r6 = *(temp_r5 + temp_r4);
            break;
        case 4:
            if ((s32) temp_r4_2 > 0) {
            case 1:
block_9:
                var_r6 = *(temp_r5 + temp_r4) + 1;
            }
            break;
        case 5:
            if ((s32) temp_r4_2 > 0) {
                goto block_9;
            }
        case 2:
block_11:
            var_r6 = *(temp_r5 + temp_r4) + 2;
            break;
        case 6:
            if ((s32) temp_r4_2 <= 0) {
                goto block_11;
            }
        case 3:
block_13:
            var_r6 = *(temp_r5 + temp_r4) + 3;
            break;
        case 7:
            if ((s32) temp_r4_2 > 0) {
                goto block_13;
            }
            break;
        }
    }
    if (var_r6 > 3) {
        var_r6 -= 4;
    }
    *(temp_r5 + temp_r4) = var_r6;
    *(arg0 + 0x6C + temp_r4) = 0;
}
