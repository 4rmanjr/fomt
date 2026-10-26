# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5BD8/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5BD8/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5BD8/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5BD8/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5BD8/Prodesk_349095/func.c" 2
void *GetMapData(s32);
s32 memcpy(s32, s32, s32);

void func_080A5BD8(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    void *sp10;
    s32 *sp14;
    s32 *sp18;
    s32 *temp_r1;
    s32 *var_r3_2;
    s32 *var_r5_2;
    s32 temp_r2;
    s32 var_r5;
    u32 var_r2;
    u32 var_r3;
    u32 var_r4;
    u32 var_r4_2;
    u8 *var_r3_3;
    u8 temp_r6;
    u8 temp_sb;

    sp0 = arg0;
    sp4 = arg2;
    sp8 = arg3;
    spC = (s32) GetMapData(arg0->unk4)->unk20;
    temp_r6 = arg1->unk0;
    temp_sb = arg1->unk1;
    sp10 = arg1 + 4;
    var_r3 = 0;
    do {
        temp_r2 = var_r3 * 4;
        temp_r1 = temp_r2 + sp10;
        if (*temp_r1 != 0) {
            var_r4 = 0;
            if ((u32) temp_sb > 0U) {
                var_r3_2 = sp0 + 0x10 + temp_r2;
                sp18 = temp_r1;
                var_r5 = 0;
                do {
                    sp14 = var_r3_2;
                    memcpy((spC * (sp8 + var_r4) * 2) + ((sp4 * 2) + *var_r3_2), var_r5 + *sp18, temp_r6 * 2);
                    var_r5 += temp_r6 * 2;
                    var_r4 += 1;
                } while (var_r4 < (u32) temp_sb);
            }
        }
        var_r3 += 1;
    } while (var_r3 <= 2U);
    if ((arg1->unk14 != 0) && (arg1->unk10 != 0)) {
        var_r2 = 0;
        if ((u32) temp_sb > 0U) {
            do {
                var_r3_3 = arg1->unk14 + (temp_r6 * var_r2);
                var_r5_2 = sp0->unk2C + (sp4 * 4) + (spC * (sp8 + var_r2) * 4);
                var_r4_2 = 0;
                var_r2 += 1;
                if ((u32) temp_r6 > 0U) {
                    do {
                        *var_r5_2 = *((*var_r3_3 * 4) + arg1->unk10);
                        var_r5_2 += 4;
                        var_r3_3 += 1;
                        var_r4_2 += 1;
                    } while (var_r4_2 < (u32) temp_r6);
                }
            } while (var_r2 < (u32) temp_sb);
        }
    }
}
