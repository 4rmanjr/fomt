# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B3B4/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B3B4/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B3B4/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B3B4/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B3B4/kilo-1531/func.c" 2
s32 func_0803260C();
s32 func_0805E8F0(void *);

void func_0802B3B4(void *arg0) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r2;
    s8 *var_r1_2;
    s8 *var_r6;
    s8 var_r0;
    u16 temp_r1;
    u32 var_r7;
    u8 *var_r5;
    void *temp_r4;
    void *var_r4;

    func_0803260C();
    temp_r4 = arg0->unk0;
    temp_r1 = temp_r4->unk7C;
    if ((temp_r1 != 0xFFFF) && (arg0->unk44 == 0)) {
        temp_r4->unk7C = (u16) (0xFFFF | temp_r1);
    }
    var_r1 = 0;
    if (temp_r4->unk88 == 1) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        var_r1_2 = arg0 + 0xCB;
        if (arg0->unkCB == 0) {
            if ((s32) (func_0805E8F0(arg0 + 0xB4) << 0x1E) < 0) {
                var_r1_2 = arg0 + 0xC8;
                var_r0 = 1;
                goto block_10;
            }
        } else {
            var_r0 = 0;
block_10:
            *var_r1_2 = var_r0;
        }
    }
    var_r7 = 0;
    var_r2 = 0;
    var_r4 = arg0 + 0xFC;
    var_r6 = arg0 + 0x113;
    var_r5 = arg0 + 0xD0;
    do {
        if (*var_r5 != 0) {
            if (var_r4->unk17 == 0) {
                sp0 = var_r2;
                temp_r0 = func_0805E8F0(var_r4);
                if ((s32) (temp_r0 << 0x1E) < 0) {
                    var_r4->unk14 = 1;
                }
                var_r0_2 = temp_r0;
            } else {
                *var_r6 = (s8) var_r2;
                var_r0_2 = 2;
            }
            if ((s32) (var_r0_2 << 0x1D) < 0) {
                *var_r5 = (u8) var_r2;
            }
        }
        var_r4 += 0x48;
        var_r6 += 0x48;
        var_r5 += 0x48;
        var_r7 += 1;
    } while (var_r7 <= 5U);
}
