# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D657C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D657C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D657C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D657C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D657C/opencode/func.c" 2
s32 memcpy(void *, void *, s32);
s32 strcpy(void *, void *);

void *func_080D657C(void *arg0, void *arg1) {
    s32 var_r3;
    s32 var_r7;
    u8 *var_r1;
    u8 *var_r2;
    u8 temp_r2;
    u8 temp_r3;
    void *var_r4;
    void *var_r5;

    arg0->unk0 = (u8) ((-2 & arg0->unk0) | ((u32) (arg1->unk0 << 0x1F) >> 0x1F));
    arg0->unk0 = (s16) ((0xFFFFF801 & (u16) arg0->unk0) | (0x7FE & (u16) arg1->unk0));
    temp_r3 = arg1->unk1;
    arg0->unk1 = (u8) ((((-9 & arg0->unk1) | (8 & temp_r3)) & ~0x10) | (0x10 & temp_r3));
    arg0->unk0 = (s32) (((s32) arg0->unk0 & 0xE0001FFF) | ((s32) arg1->unk0 & 0x1FFFE000));
    temp_r2 = arg1->unk3;
    arg0->unk3 = (u8) ((((-0x61 & arg0->unk3) | (0x60 & temp_r2)) & 0x7F) | ((temp_r2 >> 7) << 7));
    arg0->unk4 = (u8) ((-0x10 & arg0->unk4) | ((u32) (arg1->unk4 << 0x1C) >> 0x1C));
    arg0->unk4 = (s16) ((0xFFFFC00F & (u16) arg0->unk4) | (0x3FF0 & (u16) arg1->unk4));
    arg0->unk4 = (s32) (((s32) arg0->unk4 & 0xFF003FFF) | ((s32) arg1->unk4 & 0xFFC000));
    var_r2 = arg0 + 7;
    var_r3 = 1;
    var_r1 = arg1 + 7;
    do {
        *var_r2 = *var_r1;
        var_r2 += 1;
        var_r1 += 1;
        var_r3 -= 1;
    } while (var_r3 != -1);
    strcpy(arg0 + 0xC, arg1 + 0xC);
    strcpy(arg0 + 0x1C, arg1 + 0x1C);
    var_r5 = arg0 + 0x2C;
    var_r7 = 0xF;
    var_r4 = arg1 + 0x2C;
    do {
        memcpy(var_r5, var_r4, 0x3C);
        var_r5 += 0x3C;
        var_r4 += 0x3C;
        var_r7 -= 1;
    } while (var_r7 != -1);
    return arg0;
}
