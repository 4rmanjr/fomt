# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5EB8/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5EB8/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5EB8/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5EB8/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5EB8/Prodesk_349095/func.c" 2
void *GetMapData(s32);

s32 func_080A5EB8(void *arg0, void *arg1) {
s32 sp0;
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r5;
    s32 var_r2;
    u32 temp_r1;
    u32 var_r4;

    if ((((u32) (arg1->unk0 << 0x16) >> 0x16) == 1) && (arg0->unk0 == 1) && (arg0->unk4 == 8)) {
        var_r0 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
        if ((s32) var_r0 < 0) {
            var_r0 += 7;
        }
        var_r0_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
        if ((s32) var_r0_2 < 0) {
            var_r0_2 += 7;
        }
        sp0.unk0 = (s16) (var_r0 >> 3);
        sp0.unk2 = (s16) (var_r0_2 >> 3);
        var_r4 = 0;
        temp_r5 = GetMapData(8)->unk20 * sp0.unk2 * 2;
        var_r2 = 8;
loop_8:
        temp_r1 = 0x3FF & *(*(arg0 + 0x10 + var_r2) + (sp0.unk0 * 2) + temp_r5);
        if (temp_r1 != 0x3FF) {
            if (((u32) (temp_r1 - 0x58) <= 0x3CU) || (temp_r1 <= 0x33U)) {
                return 1;
            }
            goto block_13;
        }
        var_r2 -= 4;
        var_r4 += 1;
        if (var_r4 > 2U) {
            goto block_13;
        }
        goto loop_8;
    }
block_13:
    return 0;
}
