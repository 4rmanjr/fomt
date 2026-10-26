# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D3EF4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D3EF4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D3EF4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D3EF4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D3EF4/opencode/func.c" 2
s32 __12ScriptEnginePv(s32 **);
? **__builtin_new(s32);
s32 func_080D40CC(s32 **);
s32 func_080D4130(s32 **);
s32 func_080D4480(s32, s32);
extern ? **gUnk_0300040C;
extern ? vtable_unk_080E5BF8;

? ***func_080D3EF4(s32 ***arg0, void *arg1) {
    ? **sp0;
    s32 sp4;
    ? ***sp8;
    ? ***sp10;
    ? **temp_r0;
    ? **var_r4;
    ? **var_r4_2;
    s32 temp_r1;
    s32 var_r5;
    s32 var_r5_2;

    sp10 = arg0;
    temp_r0 = __builtin_new(0x554);
    temp_r1 = arg1->unk4;
    arg1->unk4 = 0;
    temp_r0->unk0 = &vtable_unk_080E5BF8;
    sp4 = 0;
    temp_r0->unk4 = temp_r1;
    __12ScriptEnginePv(temp_r0 + 8);
    temp_r0->unk364 = 0;
    temp_r0->unk36C = 0;
    (temp_r0 + 0x36C)->unk4 = 0x1D;
    temp_r0->unk374 = (u8) ((-0x20 & temp_r0->unk374) | 6);
    temp_r0->unk374 = (s16) (0xFFFFF81F & (u16) temp_r0->unk374);
    temp_r0->unk378 = 0;
    temp_r0->unk38C = 0;
    temp_r0->unk4D0 = 0;
    var_r4 = temp_r0 + 0x4DC;
    var_r5 = 5;
    do {
        func_080D4130(var_r4);
        var_r4 += 0xC;
        var_r5 -= 1;
    } while (var_r5 != -1);
    var_r4_2 = temp_r0 + 0x524;
    var_r5_2 = 3;
    do {
        func_080D40CC(var_r4_2);
        var_r4_2 += 0xC;
        var_r5_2 -= 1;
    } while (var_r5_2 != -1);
    gUnk_0300040C = temp_r0;
    if (sp4 != 0) {
        func_080D4480(sp4, 3);
    }
    sp0 = temp_r0;
    sp8 = &sp0;
    sp8.unk4 = sp0;
    *sp8 = 0;
    *sp10 = sp0;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    return arg0;
}
