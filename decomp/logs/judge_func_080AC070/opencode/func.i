# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC070/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC070/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC070/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC070/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AC070/opencode/func.c" 2
s32 func_080AC070(void *arg0, void *arg1) {
    s32 sp0;
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r7;
    s32 var_r2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    u16 temp_r0_3;
    u8 *var_r3;

    sp0 = (s32) (arg1->unk0 << 0x10) >> 0x13;
    temp_r0 = (s32) (arg1->unk4 + 7) >> 3;
    temp_r3 = (s32) (arg1->unk2 << 0x10) >> 0x13;
    temp_r0_2 = (s32) (arg1->unk6 + 7) >> 3;
    temp_r7 = arg0->unk0;
    temp_r0_3 = arg0->unk8;
    if ((temp_r7 != 0) && (sp0 >= 0) && ((u32) temp_r0 <= (u32) temp_r0_3) && (temp_r3 >= 0) && (temp_r0_2 <= (s32) arg0->unkA)) {
        temp_r2 = arg0->unk4;
        var_r6 = temp_r3;
        if (var_r6 < temp_r0_2) {
            var_r5 = var_r6 * temp_r0_3;
loop_7:
            var_r2 = sp0;
            if (var_r2 < temp_r0) {
                var_r4 = (var_r2 + var_r5) * 4;
                var_r3 = var_r2 + (var_r5 + temp_r2);
loop_9:
                if (temp_r2 != 0) {
                    var_r0 = temp_r7 + (*var_r3 * 4);
                } else {
                    var_r0 = temp_r7 + var_r4;
                }
                temp_r1 = *var_r0;
                if (((temp_r1 << 0x1F) == 0) && ((s32) (temp_r1 << 0x1E) >= 0)) {
                    var_r4 += 4;
                    var_r3 += 1;
                    var_r2 += 1;
                    if (var_r2 >= temp_r0) {
                        goto block_15;
                    }
                    goto loop_9;
                }
                goto block_17;
            }
block_15:
            var_r5 += temp_r0_3;
            var_r6 += 1;
            if (var_r6 >= temp_r0_2) {
                goto block_16;
            }
            goto loop_7;
        }
block_16:
        return 0;
    }
block_17:
    return 1;
}
