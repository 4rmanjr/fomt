# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080262C4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080262C4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080262C4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080262C4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080262C4/opencode/func.c" 2
s32 __7Product(u8 *);
s32 __7ProductG4Food(u8 *, s32);
s32 __7ProductG7Article(u8 *, s32);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
s32 func_0800F20C(s32 *, s32);
s32 func_0800F258(s32);
s32 func_0800F388(s32);

u8 func_080262C4(void *arg0) {
s32 sp0;
    u8 sp4;
    s32 temp_r0;
    s32 temp_r5;
    u8 *var_r4;

    temp_r5 = arg0->unk34 + 0x1C2C;
    if (((func_0800F190(temp_r5) << 0x18) == 0) && ((func_0800F388(temp_r5) << 0x18) == 0)) {
        temp_r0 = func_0800F204(temp_r5);
        switch (temp_r0) {
        case 0:
            var_r4 = &sp4;
            func_0800F20C(&sp0, temp_r5);
            __7ProductG4Food(var_r4, (sp0.unk2 << 0x10) | ((sp0.unk1 << 8) | sp0.unk0));
            break;
        case 1:
            var_r4 = &sp0 + 5;
            __7ProductG7Article(var_r4, func_0800F258(temp_r5));
            break;
        }
    } else {
        var_r4 = &sp0 + 6;
        __7Product(var_r4);
    }
    return *var_r4;
}
