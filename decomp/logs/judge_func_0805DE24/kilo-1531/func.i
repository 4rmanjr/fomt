# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805DE24/kilo-1531/func.c" 2
s32 func_0805DEC0(void *, s32, s32, s32, s32, s32, s32);
s32 func_0805DF68(void *, s32, s32, s32, s32);
extern ? gUnk_080FB000;

void func_0805DE24(void *arg0) {
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;

    arg0->unk2CE = 0;
    var_r4 = 0;
    do {
        func_0805DEC0(arg0, 0x90, (var_r4 * 0x10) - (arg0->unk14C - 0x20), 3, (s32) ((*(arg0 + 0xAE0 + var_r4) * 0x14) + &gUnk_080FB000)->unk10, 4, 0xA);
        var_r4 += 1;
    } while (var_r4 <= 9);
    var_r4_2 = 0;
    var_r6 = 8;
    do {
        func_0805DF68(arg0, var_r6, 4, var_r4_2 + 0xD, 1);
        var_r6 += 8;
        var_r4_2 += 1;
    } while (var_r4_2 <= 0xA);
    func_0805DEC0(arg0, 0x88, 4, 1, arg0->unkAD0, 5, 0xA);
}
