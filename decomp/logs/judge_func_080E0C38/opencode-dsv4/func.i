# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0C38/opencode-dsv4/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0C38/opencode-dsv4/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0C38/opencode-dsv4/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0C38/opencode-dsv4/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E0C38/opencode-dsv4/func.c" 2
s32 __builtin_delete(void *);
s32 func_08007184(void *, s32);
s32 func_080073E0(void *, s32);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);
s32 func_080098AC(s32, s32);
extern ? vtable_unk_080E5A28;

void func_080E0C38(void *arg0, s32 arg1) {
    s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r5;
    s32 temp_r7;
    void **var_r5;
    void *temp_r0_3;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r4;
    void *var_r4_2;

    sp0 = arg1;
    temp_r0 = arg0 + 0x70;
    temp_r0_2 = arg0 + 0x38C;
    if (temp_r0_2 != 0) {
        var_r4 = arg0 + 0x41C;
        if (temp_r0_2 != var_r4) {
            do {
                var_r4 -= 0x18;
                var_r4->unk8->unkC(var_r4, 0);
            } while ((arg0 + 0x38C) != var_r4);
        }
    }
    temp_r5 = temp_r0 + 0x304;
    temp_r7 = arg0 + 0x54;
    temp_r0_3 = arg0 + 0x30;
    if (temp_r5 != 0) {
        var_r4_2 = temp_r0 + 0x31C;
        if (temp_r5 != var_r4_2) {
            do {
                var_r4_2 -= 8;
                func_08007C28(var_r4_2, var_r4_2->unk4);
                func_080079E8(var_r4_2, 2);
            } while (temp_r5 != var_r4_2);
        }
    }
    if (temp_r7 != 0) {
        var_r5 = arg0 + 0x70;
loop_9:
        if (temp_r7 != var_r5) {
            var_r5 -= 4;
            temp_r4 = *var_r5;
            if (temp_r4 != 0) {
                func_080098AC(temp_r4 + 8, 2);
                func_08007C28(temp_r4, temp_r4->unk4);
                func_080079E8(temp_r4, 2);
                __builtin_delete(temp_r4);
            }
            goto loop_9;
        }
    }
    temp_r4_2 = arg0->unk50;
    if (temp_r4_2 != 0) {
        func_080098AC(temp_r4_2 + 8, 2);
        func_08007C28(temp_r4_2, temp_r4_2->unk4);
        func_080079E8(temp_r4_2, 2);
        __builtin_delete(temp_r4_2);
    }
    func_080098AC(arg0 + 0x38, 2);
    func_080073E0(temp_r0_3, temp_r0_3->unk4);
    func_08007184(temp_r0_3, 2);
    arg0->unk0 = &vtable_unk_080E5A28;
    if (1 & sp0) {
        __builtin_delete(arg0);
    }
}
