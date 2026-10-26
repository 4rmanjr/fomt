# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E5324/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E5324/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E5324/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E5324/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E5324/opencode/func.c" 2
s32 __builtin_delete(void *);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);

void func_080E5324(void *arg0, s32 arg1) {
    void *temp_r4;
    void *temp_r4_10;
    void *temp_r4_11;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;

    temp_r4 = arg0 + 0x58;
    func_08007C28(temp_r4, temp_r4->unk4);
    func_080079E8(temp_r4, 2);
    temp_r4_2 = temp_r4 - 8;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    temp_r4_3 = temp_r4_2 - 8;
    func_08007C28(temp_r4_3, temp_r4_3->unk4);
    func_080079E8(temp_r4_3, 2);
    temp_r4_4 = temp_r4_3 - 8;
    func_08007C28(temp_r4_4, temp_r4_4->unk4);
    func_080079E8(temp_r4_4, 2);
    temp_r4_5 = temp_r4_4 - 8;
    func_08007C28(temp_r4_5, temp_r4_5->unk4);
    func_080079E8(temp_r4_5, 2);
    temp_r4_6 = temp_r4_5 - 8;
    func_08007C28(temp_r4_6, temp_r4_6->unk4);
    func_080079E8(temp_r4_6, 2);
    temp_r4_7 = temp_r4_6 - 8;
    func_08007C28(temp_r4_7, temp_r4_7->unk4);
    func_080079E8(temp_r4_7, 2);
    temp_r4_8 = temp_r4_7 - 8;
    func_08007C28(temp_r4_8, temp_r4_8->unk4);
    func_080079E8(temp_r4_8, 2);
    temp_r4_9 = temp_r4_8 - 8;
    func_08007C28(temp_r4_9, temp_r4_9->unk4);
    func_080079E8(temp_r4_9, 2);
    temp_r4_10 = temp_r4_9 - 8;
    func_08007C28(temp_r4_10, temp_r4_10->unk4);
    func_080079E8(temp_r4_10, 2);
    temp_r4_11 = temp_r4_10 - 8;
    func_08007C28(temp_r4_11, temp_r4_11->unk4);
    func_080079E8(temp_r4_11, 2);
    func_08007C28(arg0, arg0->unk4);
    func_080079E8(arg0, 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
