# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDC00/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDC00/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDC00/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDC00/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDC00/opencode/func.c" 2
extern ? gUnk_0811788C;

s32 func_080CDC00(void *arg0) {
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r6;
    s32 var_r2;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r5;

    temp_r1 = arg0->unk0;
    temp_r0 = temp_r1->unk78;
    temp_r6 = temp_r0->unk298;
    arg0->unkC = temp_r6;
    temp_r5 = temp_r1->unk7C;
    temp_r4 = temp_r5->unk298 + 9;
    arg0->unk10 = temp_r4;
    temp_r3 = arg0->unk4;
    temp_r1_2 = &gUnk_0811788C + 8;
    var_r2 = *((temp_r3 * 0x10) + temp_r1_2);
    if (var_r2 <= 8) {
        if (var_r2 == 0) {
            if (temp_r0->unk27C == 0) {
                var_r2 = temp_r3;
            }
        } else if (var_r2 > temp_r6) {
            do {
                if (temp_r6 <= 4) {
                    var_r2 = temp_r6;
                } else {
                    var_r2 = *((var_r2 * 0x10) + temp_r1_2);
                }
            } while (var_r2 > temp_r6);
        }
        if (var_r2 == 4) {
            temp_r1_3 = arg0->unk8;
            if ((temp_r1_3 == arg0->unkC) && (temp_r1_3 > 4)) {
                goto block_26;
            }
        }
    } else {
        if (var_r2 == 9) {
            if (temp_r5->unk27C == 0) {
                var_r2 = 0;
            }
        } else if (var_r2 > temp_r4) {
            do {
                if (temp_r4 <= 0xD) {
                    var_r2 = temp_r4;
                } else {
                    var_r2 = *((var_r2 * 0x10) + temp_r1_2);
                }
            } while (var_r2 > temp_r4);
        }
        if (var_r2 == 0xD) {
            temp_r1_4 = arg0->unk8;
            if ((temp_r1_4 == arg0->unk10) && (temp_r1_4 > 0xD)) {
block_26:
                var_r2 = arg0->unk8;
            }
        }
    }
    if (var_r2 != temp_r3) {
        arg0->unk8 = temp_r3;
        arg0->unk4 = var_r2;
    }
    return var_r2;
}
