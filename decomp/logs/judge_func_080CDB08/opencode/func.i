# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDB08/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDB08/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDB08/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDB08/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CDB08/opencode/func.c" 2
extern ? gUnk_0811788C;
extern ? gUnk_08117890;

s32 func_080CDB08(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 var_r1;
    u32 var_r0;
    void *temp_r1;

    temp_r1 = arg0->unk0;
    arg0->unkC = (s32) temp_r1->unk78->unk298;
    arg0->unk10 = (s32) (temp_r1->unk7C->unk298 + 9);
    temp_r2 = arg0->unk4;
    var_r1 = *((temp_r2 * 0x10) + (&gUnk_0811788C + 4));
    if (temp_r2 == 0) {
        temp_r2_2 = arg0->unk8;
        if (temp_r2_2 != 9) {
            var_r0 = temp_r2_2 - 1;
            goto block_6;
        }
    } else if (temp_r2 == 9) {
        temp_r2_3 = arg0->unk8;
        if (temp_r2_3 != 0) {
            var_r0 = temp_r2_3 - 0xA;
block_6:
            var_r1 = arg0->unk8 - 4;
            if (var_r0 <= 3U) {
                var_r1 = arg0->unk8;
            }
        }
    }
    if (var_r1 <= 8) {
        temp_r2_4 = arg0->unk4;
        if ((var_r1 == 0) && (arg0->unk0->unk78->unk27C == 0)) {
            var_r1 = temp_r2_4 - 4;
        }
        temp_r0 = arg0->unkC;
        if (var_r1 > temp_r0) {
            do {
                var_r1 = *((var_r1 * 0x10) + &gUnk_08117890);
                if ((var_r1 == 0) && (arg0->unk0->unk78->unk27C == 0)) {
                    var_r1 = temp_r2_4;
                }
            } while (var_r1 > temp_r0);
        }
    } else {
        temp_r2_5 = arg0->unk4;
        if ((var_r1 == 9) && (arg0->unk0->unk7C->unk27C == 0)) {
            var_r1 = temp_r2_5 - 4;
        }
        temp_r0_2 = arg0->unk10;
        if (var_r1 > temp_r0_2) {
            do {
                var_r1 = *((var_r1 * 0x10) + &gUnk_08117890);
                if ((var_r1 == 9) && (arg0->unk0->unk7C->unk27C == 0)) {
                    var_r1 = temp_r2_5;
                }
            } while (var_r1 > temp_r0_2);
        }
    }
    if (var_r1 != arg0->unk4) {
        arg0->unk8 = arg0->unk4;
        arg0->unk4 = var_r1;
    }
    return var_r1;
}
