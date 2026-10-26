# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069C34/Prodesk_338316/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069C34/Prodesk_338316/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069C34/Prodesk_338316/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069C34/Prodesk_338316/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069C34/Prodesk_338316/func.c" 2
s32 __builtin_new(s32);
void *func_0805FF14(s32, void *, s32);
void *func_08064320(s32, void *, s32);
void *func_080643DC(s32, void *, s32);
void *func_080644F0(s32, void *, s32);
void *func_080645F0(s32, void *, s32);
void *func_0806644C(s32, void *, s32);
void *func_08068344(s32, void *, s32);
s32 func_08076B94(void *, void **);

void func_08069C34(void *arg0, u32 arg1) {
    void *sp0;
    void *sp4;
    void *temp_r0;
    void *var_r0;

    sp0 = 0;
    switch (arg1) {
    case 0:
        var_r0 = func_0805FF14(__builtin_new(0x1B6C), arg0, arg0->unk120);
block_10:
        if ((var_r0 != sp0) && (sp0 != 0)) {
            sp0->unk5B4->unk8(sp0, 3);
        }
        sp0 = var_r0;
        break;
    case 1:
        var_r0 = func_08064320(__builtin_new(0x431C), arg0, arg0->unk120);
        goto block_10;
    case 2:
        var_r0 = func_080643DC(__builtin_new(0x431C), arg0, arg0->unk120);
        goto block_10;
    case 3:
        var_r0 = func_080644F0(__builtin_new(0x431C), arg0, arg0->unk120);
        goto block_10;
    case 4:
        var_r0 = func_080645F0(__builtin_new(0x22B8), arg0, arg0->unk120);
        goto block_10;
    case 5:
        var_r0 = func_0806644C(__builtin_new(0x19FC), arg0, arg0->unk120);
        goto block_10;
    case 6:
        var_r0 = func_08068344(__builtin_new(0x9F4), arg0, arg0->unk120);
        goto block_10;
    }
    temp_r0 = sp0;
    sp0 = 0;
    sp4 = temp_r0;
    func_08076B94(arg0, &sp4);
    if (sp0 != 0) {
        sp0->unk5B4->unk8(sp0, 3);
    }
}
