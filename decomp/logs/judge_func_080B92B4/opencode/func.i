# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B92B4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B92B4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B92B4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B92B4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B92B4/opencode/func.c" 2
s32 func_080B9428(void *);
s32 func_080B96AC(void *, u16, u16, s32, s32, s32, s32, s32);
s32 func_080B9F64(void *, s32, s32);
s32 rand();

void func_080B92B4(void *arg0) {
    s32 *temp_r0_2;
    s32 var_r2;
    u32 var_r1;
    u8 *var_r0;
    void *temp_r0;

    if ((u32) arg0->unkAC > 1U) {
        if ((u32) arg0->unkCE > 0x50U) {
            var_r1 = (u32) (0xFFFF & rand()) >> 9;
            var_r2 = 0xB70;
            goto block_18;
        }
        if ((u32) ((u32) (0xFFFF & rand()) >> 9) > (u32) arg0->unkB71) {
            func_080B9428(arg0);
        }
    } else {
        temp_r0 = arg0 + 0xCA;
        temp_r0_2 = (temp_r0 + 2) - 0x18;
        if ((func_080B96AC(arg0, arg0->unkCA, temp_r0->unk2, *temp_r0_2, (s32) *(temp_r0_2 - 0x2A), (s32) arg0->unk8C, (s32) arg0->unkB5D, (s32) arg0->unkB72) << 0x18) != 0) {
            if ((u32) arg0->unkCE > 0x50U) {
                var_r1 = (u32) (0xFFFF & rand()) >> 9;
                var_r2 = 0xB6A;
                goto block_18;
            }
            if ((u32) ((u32) (0xFFFF & rand()) >> 9) > (u32) arg0->unkB6B) {
                goto block_20;
            }
        } else if ((func_080B9F64(arg0, 1, 0) << 0x18) == 0) {
            if ((u32) arg0->unkCE > 0x50U) {
                var_r1 = (u32) (0xFFFF & rand()) >> 9;
                var_r2 = 0xB6C;
block_18:
                var_r0 = arg0 + var_r2;
                goto block_19;
            }
            if ((u32) ((u32) (0xFFFF & rand()) >> 9) > (u32) arg0->unkB6D) {
                goto block_20;
            }
        } else if ((u32) arg0->unkCE > 0x50U) {
            if ((u32) ((u32) (0xFFFF & rand()) >> 9) > (u32) arg0->unkB6E) {
                goto block_20;
            }
        } else {
            var_r1 = (u32) (0xFFFF & rand()) >> 9;
            var_r0 = arg0 + 0xB6F;
block_19:
            if (var_r1 < (u32) *var_r0) {
block_20:
                func_080B9428(arg0);
            }
        }
    }
}
