# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000FF8/t_x3/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000FF8/t_x3/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000FF8/t_x3/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000FF8/t_x3/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000FF8/t_x3/func.c" 2


void *__builtin_new(s32);
s32 func_080019D8(s32);
s32 func_08008724();
void *func_08008918(s32);
void *func_08008940(s32);
s32 func_08008B6C(s32, s32);
s32 func_08009300(void *, void *);
s32 func_0800934C(void *, s32, s32, s32);
extern s32 .L0800112C;
extern s32 .L08001130;
extern s32 .L08001134;
extern s32 .L08001138;
extern s32 .L0800113C;
extern s32 .L08001140;
extern s32 .L08001144;

void func_08000FF8(s32 arg0) {
    s16 sp0;
    void *sp4;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 temp_r3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r4;
    void *temp_r5;

    func_08008724();
    func_080019D8(arg0);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = (s32) .L0800112C;
    temp_r5 = temp_r4 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4;
    func_0800934C(temp_r5, .L08001130, 1, 0);
    temp_r0_2 = func_08008940(arg0);
    temp_r0_2->unk8->unk10(temp_r0_2, sp4);
    func_08008B6C(arg0 + 8, 0x23);
    *(arg0 + .L08001134) = 0x400;
    *(arg0 + .L08001138) = 0;
    *(arg0 + .L0800113C) = 0;
    temp_r3 = .L08001138 + 4;
    *(arg0 + temp_r3) = 0x400;
    *(arg0 + (.L0800113C + 0xCA)) = 3;
    *(arg0 + .L08001140) = 0xE0;
    *(arg0 + .L08001144) = 0;
    *(arg0 + (temp_r3 + 2)) = 0;
    sp10 = 0;
    sp14 = 0;
    sp18 = 0;
    sp1C = 0;
}
