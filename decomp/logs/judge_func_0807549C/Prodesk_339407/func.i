# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807549C/Prodesk_339407/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807549C/Prodesk_339407/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807549C/Prodesk_339407/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807549C/Prodesk_339407/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807549C/Prodesk_339407/func.c" 2
s32 __builtin_new(s32);
void *func_08070DE4(s32, void *, s32);
void *func_080713B8(s32, void *, s32);
void *func_080722DC(s32, void *, s32);
s32 func_08076B94(void *, void **);

void func_0807549C(void *arg0, s32 arg1) {
    void *sp0;
    void *sp4;
    void *temp_r0;
    void *var_r0;

    sp0 = 0;
    switch (arg1) {
    case 0:
        var_r0 = func_08070DE4(__builtin_new(0x42FC), arg0, arg0->unk120);
block_9:
        if ((var_r0 != sp0) && (sp0 != 0)) {
            sp0->unk5B4->unk8(sp0, 3);
        }
        sp0 = var_r0;
        break;
    case 1:
        var_r0 = func_080713B8(__builtin_new(0x4B94), arg0, arg0->unk120);
        goto block_9;
    case 2:
        var_r0 = func_080722DC(__builtin_new(0x8E6C), arg0, arg0->unk120);
        goto block_9;
    }
    temp_r0 = sp0;
    sp0 = 0;
    sp4 = temp_r0;
    func_08076B94(arg0, &sp4);
    if (sp0 != 0) {
        sp0->unk5B4->unk8(sp0, 3);
    }
}
