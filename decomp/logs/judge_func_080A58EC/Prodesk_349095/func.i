# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A58EC/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A58EC/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A58EC/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A58EC/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A58EC/Prodesk_349095/func.c" 2
void *GetMapData(s32);

void *func_080A58EC(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s16 temp_r5;
    s16 temp_sl;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r1;
    s32 var_r5;
    void *temp_r0;

    temp_r5 = arg1->unkA;
    temp_sl = arg1->unkE;
    temp_r6 = temp_r5 + 0x78;
    temp_r8 = temp_sl + 0x50;
    temp_r0 = GetMapData(arg1->unk4);
    temp_r1 = temp_r0->unk20 * 8;
    var_r5 = temp_r5 + (arg2 - temp_r6);
    if (var_r5 < 0) {
        var_r5 = 0;
    } else {
        temp_r1_2 = temp_r1 - 0xF0;
        if (var_r5 > temp_r1_2) {
            var_r5 = temp_r1_2;
        }
    }
    var_r1 = temp_sl + (arg3 - temp_r8);
    if (var_r1 < 0) {
        var_r1 = 0;
    } else {
        temp_r0_2 = (temp_r0->unk22 * 8) - 0xA0;
        if (var_r1 > temp_r0_2) {
            var_r1 = temp_r0_2;
        }
    }
    arg0->unk0 = (s16) var_r5;
    arg0->unk2 = (s16) var_r1;
    return arg0;
}
