# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A46AC/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A46AC/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A46AC/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A46AC/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A46AC/kilo-1531/func.c" 2
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s16 func_08007D4C(void *);
s32 memset(void *, u8);
extern ? vtable_unk_080E82D8;

void *func_080A46AC(void *arg0, void **arg1, s32 arg2, s32 arg3, u32 arg4) {
    u8 sp0;
    s32 temp_r2;
    s32 var_r8;
    s8 *var_r4;
    u32 var_r5;
    void *temp_r4;

    var_r8 = arg3;
    arg0->unk24 = &vtable_unk_080E82D8;
    arg0->unk0 = arg1;
    temp_r4 = arg0 + 4;
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, arg2);
    arg0->unkC = func_08007D4C(temp_r4);
    sp0 = 0;
    arg0->unk10 = 0U;
    if (arg4 <= 0x10U) {
        memset(arg0 + 0x14, sp0);
        arg0->unk10 = arg4;
    }
    var_r5 = 0;
    if (arg4 > 0U) {
        var_r4 = arg0 + 0x14;
        do {
            temp_r2 = var_r8 + 4;
            var_r8 = temp_r2;
            *var_r4 = (*arg1)->unk48(arg1, *(temp_r2 - 4));
            var_r4 += 1;
            var_r5 += 1;
        } while (var_r5 < arg4);
    }
    return arg0;
}
