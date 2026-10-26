# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5F78/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5F78/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5F78/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5F78/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A5F78/Prodesk_349095/func.c" 2
void *GetMapData(s32);

void func_080A5F78(void *arg0, s32 arg1, void *arg2, u32 arg3, u32 arg4) {
    s32 sp0;
    s32 temp_r1;
    s32 temp_r1_2;
    u16 temp_sl;
    u32 var_r4;
    u32 var_r6;
    u8 *temp_r2;
    void *temp_r1_3;

    temp_sl = GetMapData(arg0->unk4)->unk20;
    var_r6 = 0;
    if (arg4 > 0U) {
        sp0 = arg1 * 4;
        do {
            var_r4 = 0;
            if (arg3 > 0U) {
                do {
                    temp_r1 = arg2->unk0 + var_r4 + ((arg2->unk2 + var_r6) * temp_sl);
                    *(*(arg0 + 0x10 + sp0) + (temp_r1 * 2)) = 0x3FF;
                    temp_r1_2 = temp_r1 * 4;
                    temp_r2 = temp_r1_2 + arg0->unk2C;
                    *temp_r2 &= -2;
                    temp_r1_3 = temp_r1_2 + arg0->unk2C;
                    temp_r1_3->unk2 = (u16) (1 & temp_r1_3->unk2);
                    var_r4 += 1;
                } while (var_r4 < arg3);
            }
            var_r6 += 1;
        } while (var_r6 < arg4);
    }
    arg0->unk29 = 1;
}
