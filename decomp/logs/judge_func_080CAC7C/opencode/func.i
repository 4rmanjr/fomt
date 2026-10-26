# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAC7C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAC7C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAC7C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAC7C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CAC7C/opencode/func.c" 2
s32 func_0805E6CC(s32 **);
s32 func_0805E824(void ***, ? **, u16, s32);
extern ? vtable_unk_080E5A28;

void *func_080CAC7C(void *arg0, u16 arg2, s32 arg3) {
    ? *sp0;
s32 sp30;
    void **sp34;
s32 sp48;
    s8 sp64;
s32 sp68;

    func_0805E6CC(&sp0);
    sp30.unk0 = 0;
    sp30.unk2 = 0;
    func_0805E824(&sp34, &sp0, arg2, 0x100);
    sp48.unk0 = 0;
    sp48.unk2 = 0;
    sp48.unk4 = 0;
    sp48.unk6 = 0;
    sp48.unk8 = 0;
    sp48.unkC = 0;
    sp48.unk10 = 0;
    sp48.unk11 = 0;
    sp48.unk14 = 0;
    sp48.unk18 = 0;
    sp64 = 0;
    (*sp34)->unk10(&sp68, sp34, *(sp38 + (sp34.unkC * 4)));
    arg0->unk4 = sp70;
    arg0->unk8 = sp78;
    arg0->unk0 = arg3;
    sp0 = &vtable_unk_080E5A28;
    return arg0;
}
