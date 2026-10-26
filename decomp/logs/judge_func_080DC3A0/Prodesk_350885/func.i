# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DC3A0/Prodesk_350885/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DC3A0/Prodesk_350885/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DC3A0/Prodesk_350885/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DC3A0/Prodesk_350885/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DC3A0/Prodesk_350885/func.c" 2
s32 func_08093A58(s32 *, void ***, s32);
s32 func_08093A88(s32 *, s32);
s32 func_08093AC8(s32 *);
s32 func_08093AD4(void ***, ? *);

void **func_080DC3A0(void **arg0, void *arg1) {
s32 sp0;
    void **spC;
    void ***sp10;
    void *sp14;
    void *temp_r0;
    void *temp_r4;

    spC = 0;
    func_08093A58(&sp0, &spC, arg1->unk8);
    func_08093AD4(&spC, &sp0);
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
    temp_r4 = arg1->unk4;
    temp_r4->unkC = func_08093AC8(&sp0);
    temp_r0 = arg1->unk4;
    arg1->unk4 = 0;
    sp10 = &spC;
    sp14 = temp_r0;
    spC = 0;
    *arg0 = temp_r0;
    func_08093A88(&sp0, 2);
    return arg0;
}
