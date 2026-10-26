# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D64C8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D64C8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D64C8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D64C8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D64C8/opencode/func.c" 2
s32 func_080D657C(void *, void *);
s32 func_080D66A4(void *, void *);
s32 memcpy(void *, void *, s32);
s32 strcpy();

void *func_080D64C8(void *arg0, void *arg1) {
    s32 *var_r2;
    s32 *var_r3;
    s32 temp_r0;
    s32 var_r1;
    u8 temp_r3;

    strcpy();
    arg0->unk10 = (u16) ((0xFFFFFC00 & arg0->unk10) | ((u32) (arg1->unk10 << 0x16) >> 0x16));
    temp_r3 = arg1->unk11;
    arg0->unk11 = (u8) ((((((-5 & arg0->unk11) | (4 & temp_r3)) & ~8) | (8 & temp_r3)) & ~0x10) | (0x10 & temp_r3));
    var_r3 = arg0 + 0x14;
    var_r1 = 0xA;
    var_r2 = arg1 + 0x14;
    do {
        temp_r0 = *var_r2;
        var_r2 += 4;
        *var_r3 = temp_r0;
        var_r3 += 4;
        var_r1 -= 1;
    } while (var_r1 != -1);
    memcpy(arg0 + 0x40, arg1 + 0x40, 0x1A0);
    memcpy(arg0 + 0x1E0, arg1 + 0x1E0, 0x21C);
    func_080D66A4(arg0 + 0x3FC, arg1 + 0x3FC);
    func_080D657C(arg0 + 0x5DC, arg1 + 0x5DC);
    memcpy(arg0 + 0x9C8, arg1 + 0x9C8, 0x10CC);
    return arg0;
}
