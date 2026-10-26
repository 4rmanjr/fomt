# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A3F0/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A3F0/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A3F0/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A3F0/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A3F0/kilo-1531/func.c" 2
s32 func_08008E64(s32 *, s32, s32);
s32 func_08008EB8(s32, s32, s32);
s32 func_0804E7A0(s32, ? *, s32);
s32 func_0804E958(s32, ? *, s32, s32);
extern s32 gUnk_080FAFC8;

void func_0805A3F0(s32 arg200, ? arg201) {
    s16 *var_r1;
    s16 var_r0;
    s32 *temp_r0_2;
    s32 *var_r8;
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r7;
    u32 var_r2;
    u32 var_r3;

    func_08008EB8(0, 0x06008000, 0x2C00);
    func_08008EB8(0, 0x0600F800, 0x800);
    var_r2 = 0;
    var_r8 = &gUnk_080FAFC8;
    do {
        var_r3 = 0;
        temp_r1 = var_r2 << 6;
        temp_r0 = var_r2 << 5;
        var_r2 += 1;
        var_r0 = temp_r0 + 0x2000;
        var_r1 = temp_r1 + 0x0600F800;
loop_2:
        *var_r1 = var_r0;
        var_r0 += 1;
        var_r1 += 2;
        var_r3 += 1;
        if (var_r3 <= 0x1FU) {
            goto loop_2;
        }
    } while (var_r2 <= 0x15U);
    if (gUnk_080FAFC8 != 0) {
        var_r7 = 0x06008000;
        do {
            arg200.unk0 = 0x20;
            arg200.unk2 = 2;
            func_0804E7A0((s32) arg200.unk0, &unksp10, 0);
            temp_r0_2 = var_r8 + 4;
            var_r8 = temp_r0_2;
            arg201.unk0 = 0x20;
            arg201.unk2 = 2;
            unksp0 = *(temp_r0_2 - 4);
            unksp4 = 0;
            unksp8 = 1;
            func_0804E958((s32) arg201.unk0, &unksp10, 0, 0);
            func_08008E64(&unksp10, var_r7, 0x800);
            var_r7 += 0x800;
        } while (*var_r8 != 0);
    }
}
