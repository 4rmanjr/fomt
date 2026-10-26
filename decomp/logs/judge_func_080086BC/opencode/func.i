# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080086BC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080086BC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080086BC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080086BC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080086BC/opencode/func.c" 2
s32 __builtin_delete(void *);
s32 free();
s32 func_08008A68(s32, s32);
s32 func_080098DC(s32, s32);
extern ? vtable_unk_080E5B00;

void func_080086BC(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r1;
    void *temp_r0;

    arg0->unk4 = &vtable_unk_080E5B00;
    temp_r0 = arg0->unk0;
    if (temp_r0 != 0) {
        func_080098DC(temp_r0 + 0x494, 2);
        func_08008A68(temp_r0 + 0x490, 2);
        temp_r2 = (temp_r0 + 0x24)->unk4;
        var_r1 = temp_r0->unk24;
        if (var_r1 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0->unk24 != 0) {
            free();
        }
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
