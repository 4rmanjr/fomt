# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A4A94/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A4A94/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A4A94/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A4A94/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A4A94/kilo-1531/func.c" 2
s32 __builtin_vec_new(s32);
extern ? vtable_unk_080E82E4;
extern ? vtable_unk_080E830C;

void *func_080A4A94(void *arg0) {
    s32 *var_r6;
    s32 *var_r6_2;
    u32 var_r5;
    u32 var_r5_2;
    void *temp_r1;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_12;
    void *temp_r1_13;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_7;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2;

    arg0->unk90 = &vtable_unk_080E82E4;
    arg0->unk0 = 0x234;
    arg0->unk4 = 0x42;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    temp_r1 = (arg0 + 0x90) - 0x68;
    temp_r1->unk0 = 0;
    temp_r1_2 = temp_r1 + 1;
    temp_r1->unk1 = 0;
    temp_r1_3 = temp_r1_2 + 1;
    temp_r1_2->unk1 = 0;
    arg0->unk2C = 0;
    temp_r1_4 = temp_r1_3 + 6;
    temp_r1_3->unk6 = 0;
    temp_r1_4->unk1 = 0;
    temp_r1_4->unk2 = 0;
    temp_r1_5 = temp_r1_4 + 4;
    temp_r1_4->unk4 = 0;
    temp_r1_5->unk1 = 0;
    temp_r1_5->unk2 = 0;
    temp_r1_6 = temp_r1_5 + 4;
    temp_r1_5->unk4 = 0;
    temp_r1_6->unk1 = 0;
    temp_r1_6->unk2 = 0;
    temp_r1_7 = temp_r1_6 + 4;
    temp_r1_6->unk4 = 0;
    temp_r1_7->unk1 = 0;
    temp_r1_7->unk2 = 0;
    temp_r1_8 = temp_r1_7 + 4;
    temp_r1_7->unk4 = 0;
    temp_r1_8->unk1 = 0;
    temp_r1_8->unk2 = 0;
    temp_r1_9 = temp_r1_8 + 4;
    temp_r1_8->unk4 = 0;
    temp_r1_9->unk1 = 0;
    temp_r1_9->unk2 = 0;
    temp_r1_10 = temp_r1_9 + 4;
    temp_r1_9->unk4 = 0;
    temp_r1_10->unk1 = 0;
    temp_r1_10->unk2 = 0;
    temp_r1_11 = temp_r1_10 + 4;
    temp_r1_10->unk4 = 0;
    temp_r1_11->unk1 = 0;
    temp_r1_11->unk2 = 0;
    temp_r1_12 = temp_r1_11 + 4;
    temp_r1_11->unk4 = 0;
    temp_r1_12->unk1 = 0;
    temp_r1_12->unk2 = 0;
    temp_r1_13 = temp_r1_12 + 4;
    temp_r1_12->unk4 = 0;
    temp_r1_13->unk1 = 0;
    temp_r1_13->unk2 = 0;
    temp_r1_13->unk4 = 0;
    temp_r2 = arg0 + 0x5C;
    arg0->unk5C = 0;
    temp_r2->unk4 = 0;
    temp_r2->unk8 = &vtable_unk_080E830C;
    arg0->unk8C = 0;
    var_r5 = 0;
    var_r6 = arg0 + 0x1C;
    do {
        *var_r6 = __builtin_vec_new(0x1E0);
        var_r6 += 4;
        var_r5 += 1;
    } while (var_r5 <= 2U);
    var_r5_2 = 0;
    var_r6_2 = arg0 + 0x10;
    do {
        *var_r6_2 = __builtin_vec_new(0x7900);
        var_r6_2 += 4;
        var_r5_2 += 1;
    } while (var_r5_2 <= 2U);
    arg0->unk2C = __builtin_vec_new(0xF200);
    return arg0;
}
