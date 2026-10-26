# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A4DC/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A4DC/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A4DC/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A4DC/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A4DC/kilo-1531/func.c" 2
s32 func_0805A63C(void *, s32, s32, s32, s32, s32, s32);
s32 func_0805A6E4(void *, s32, s32, s32, s32);

void func_0805A4DC(void *arg0, s32 arg1) {
    s32 var_r4;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    void *var_r4_2;

    arg0->unkBD8 = 0;
    if (arg1 == 0) {
        func_0805A6E4(arg0, 0x10, 4, 0x18, 1);
        func_0805A63C(arg0, 0x28, 4, 1, arg0->unk1414, 0xA, 0xC);
    } else {
        var_r4 = 0;
        var_r6 = 8;
        do {
            func_0805A6E4(arg0, var_r6, 4, var_r4 + 0xD, 1);
            var_r6 += 8;
            var_r4 += 1;
        } while (var_r4 <= 0xA);
        func_0805A63C(arg0, 0x88, 4, 1, arg0->unk1418, 5, 0xA);
        func_0805A63C(arg0, 0xA0, 0x78, 2, (s32) arg0->unk141E, 4, 0xA);
        func_0805A6E4(arg0, 0, (arg0->unk13FE * 0x10) + 0x30, 0x18, 2);
    }
    func_0805A63C(arg0, 0x20, 0x20, 2, arg0->unk141C + 1, 1, 0);
    var_r4_2 = arg0 + 0x142C;
    var_r6_2 = 0x30;
    var_r7 = 3;
    do {
        func_0805A6E4(arg0, 0x88, var_r6_2, 0xB, 2);
        func_0805A63C(arg0, 0x90, var_r6_2, 2, (s32) var_r4_2->unk28, 2, 0xA);
        func_0805A63C(arg0, 0xC0, var_r6_2, 2, (s32) var_r4_2->unk2A, 2, 0xA);
        var_r6_2 += 0x10;
        var_r7 -= 1;
        var_r4_2 += 0x2C;
    } while (var_r7 >= 0);
}
