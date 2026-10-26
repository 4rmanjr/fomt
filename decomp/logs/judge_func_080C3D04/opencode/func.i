# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C3D04/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C3D04/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C3D04/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C3D04/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C3D04/opencode/func.c" 2


? .L080C5144(void *);
s32 func_080088DC(void *);
s16 *func_08008918(void *);
s32 func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08050D3C(s32, s32, s32, s16 *, s32, s32, void *);
s32 func_08050E50(s32, u16);
u16 func_080C7B64(void *);

void func_080C3D04(void *arg0) {
    s16 spC;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    s32 sp90;
    s32 sp94;
    s32 sp98;
    s32 sp9C;
    s32 spA0;
    s32 spA4;
    s16 *temp_r0;
    s16 *temp_r5;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_sb;
    s32 temp_sl;
    s32 var_r1;
    void *var_r0;

    sp80 = 0;
    sp84 = 0;
    sp88 = 0;
    sp8C = 0;
    sp90 = 0;
    sp94 = 0;
    sp98 = 0;
    sp9C = 0;
    spA0 = 0;
    var_r0 = arg0 + 0x904;
    var_r1 = 0x18;
    do {
        var_r0->unk0 = 0;
        var_r0->unk1 = 0;
        var_r0 += 4;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    temp_r0 = func_08008918(arg0);
    spC = 0x1740;
    *temp_r0 = 0x1740;
    temp_sl = arg0->unk51C;
    temp_sb = func_080088DC(arg0);
    spA4 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    func_08050D3C(temp_sl, temp_sb, spA4, temp_r5, temp_r4, func_0800894C(arg0), arg0 + 0x814);
    temp_r4_2 = arg0->unk51C;
    func_08050E50(temp_r4_2, func_080C7B64(arg0));
    .L080C5144(arg0 + 0x89C);
}
