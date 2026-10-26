# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB0EC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB0EC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB0EC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB0EC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DB0EC/opencode/func.c" 2
s32 __builtin_delete(void *);
s32 free();
s32 func_08008A68(void *, s32);
s32 func_08009324(s32, s32);
s32 func_080098DC(void *, s32);
s32 func_08050D0C(s32, s32);
extern ? vtable_unk_080E5C08;

void func_080DB0EC(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1_6;
    s32 var_r0;
    void **temp_r1_3;
    void **temp_r1_4;
    void **temp_r1_5;
    void *temp_r1;
    void *temp_r1_2;

    arg0->unkF4 = &vtable_unk_080E5C08;
    __builtin_delete(arg0->unkF0);
    if (arg0->unkD0 != 0) {
        free();
    }
    temp_r1 = arg0->unkB8;
    if (temp_r1 != 0) {
        temp_r1->unk4->unk8(temp_r1, 3);
    }
    temp_r1_2 = arg0->unkB4;
    if (temp_r1_2 != 0) {
        temp_r1_2->unk4->unk8(temp_r1_2, 3);
    }
    temp_r1_3 = arg0->unkB0;
    if (temp_r1_3 != 0) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
    temp_r0 = arg0->unkAC;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    temp_r1_4 = arg0->unkA8;
    if (temp_r1_4 != 0) {
        (*temp_r1_4)->unk8(temp_r1_4, 3);
    }
    temp_r1_5 = arg0->unkA4;
    if (temp_r1_5 != 0) {
        (*temp_r1_5)->unk8(temp_r1_5, 3);
    }
    temp_r0_2 = arg0->unkA0;
    if (temp_r0_2 != 0) {
        func_08009324(temp_r0_2, 3);
    }
    func_080098DC(arg0 + 0x6C, 2);
    func_08008A68(arg0 + 0x68, 2);
    temp_r1_6 = arg0->unk4;
    var_r0 = arg0->unk0;
    if (var_r0 != temp_r1_6) {
        do {
            var_r0 += 0x10;
        } while (var_r0 != temp_r1_6);
    }
    if (arg0->unk0 != 0) {
        free();
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
