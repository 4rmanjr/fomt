# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB380/Prodesk_349697/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB380/Prodesk_349697/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB380/Prodesk_349697/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB380/Prodesk_349697/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AB380/Prodesk_349697/func.c" 2
s32 func_08007C28(void *, s32);

void func_080AB380(s32 *arg0) {
    s32 sp0;
    s32 *var_r4_2;
    s32 temp_r0;
    s32 var_r2_2;
    s32 var_r3;
    s32 var_r4;
    u32 var_r1_2;
    u32 var_r2;
    u32 var_r6;
    u8 temp_r0_2;
    void *temp_r5;
    void *var_r1;

    temp_r0 = *arg0;
    var_r3 = 0;
    var_r4 = 0;
    var_r2 = 0;
    var_r1 = temp_r0 + 0x368;
    do {
        if (var_r1->unk4 != 0) {
            var_r3 += 1;
            temp_r0_2 = var_r1->unk5;
            if ((u32) temp_r0_2 > 1U) {
                var_r1->unk5 = (u8) (temp_r0_2 - 1);
            } else {
                var_r1->unk4 = 0U;
                var_r4 += 1;
            }
        }
        var_r1 += 8;
        var_r2 += 1;
    } while (var_r2 <= 0xFU);
    if ((var_r3 != 0) && (var_r4 == var_r3)) {
        var_r1_2 = 0;
        do {
            temp_r5 = temp_r0 + ((var_r1_2 * 0x54) + 8);
            if (temp_r5->unk0 != 0) {
                var_r6 = 0;
                var_r2_2 = 0;
                var_r4_2 = temp_r5 + 0x48;
                do {
                    sp0 = var_r2_2;
                    func_08007C28((var_r6 * 8) + temp_r5 + 0x44, *var_r4_2);
                    *var_r4_2 = var_r2_2;
                    var_r4_2 += 8;
                    var_r6 += 1;
                } while (var_r6 <= 1U);
                temp_r5->unk0 = 0U;
                temp_r5->unk1 = 0;
            }
            var_r1_2 += 1;
        } while (var_r1_2 <= 9U);
    }
}
