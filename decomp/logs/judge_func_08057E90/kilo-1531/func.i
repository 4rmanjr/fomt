# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057E90/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057E90/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057E90/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057E90/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057E90/kilo-1531/func.c" 2
s32 func_08057F64(void *, s32);
s32 rand();

void func_08057E90(void *arg0, u8 arg1, ? arg2) {
    s32 var_r1;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r4;
    u8 *temp_r1;
    u8 *temp_r6;
    void *temp_r3;

    temp_r3 = arg0 + 0x2C;
    arg0->unk2C = (u8) (-4 & arg0->unk2C);
    temp_r3->unk2 = (u8) ((-0x21 & temp_r3->unk2) | ((arg1 & 1) << 5));
    var_r2 = 0;
    do {
        temp_r1 = arg0 + var_r2;
        *temp_r1 |= 0xFF;
        var_r2 += 1;
    } while (var_r2 <= 0xB);
    var_r4 = 0;
    do {
        temp_r6 = arg0 + var_r4;
loop_4:
        *temp_r6 = (u8) ((s32) (rand() >> 8) % 40);
        var_r2_2 = 0;
        var_r1 = 0;
loop_5:
        if ((var_r4 != var_r1) && (*(arg0 + var_r1) == *temp_r6)) {
            var_r2_2 = 1;
        }
        var_r1 += 1;
        if (var_r1 <= 0xB) {
            goto loop_5;
        }
        if (var_r2_2 != 0) {
            goto loop_4;
        }
        var_r4 += 1;
    } while (var_r4 <= 0xB);
    func_08057F64(arg0, arg2);
}
