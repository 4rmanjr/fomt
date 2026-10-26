# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C198/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C198/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C198/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C198/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801C198/opencode/func.c" 2
u32 func_0809D8A0(s32);
s32 func_0809D8A4(s32);
s32 func_0809D8B8(s32);

s32 func_0801C198(void *arg0, void *arg1, void *arg2) {
    s32 sp0;
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_sb;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r2;

    var_sb = 0;
    if ((u32) (((u32) (arg1->unk0 << 0x16) >> 0x16) - 0x34) <= 0x1FFU) {
        temp_r6 = arg0->unk1038 + 0x2E58;
        var_r0 = ((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2);
        if ((s32) var_r0 < 0) {
            var_r0 += 7;
        }
        temp_r5 = var_r0 >> 3;
        var_r0_2 = ((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2);
        if ((s32) var_r0_2 < 0) {
            var_r0_2 += 7;
        }
        temp_r4 = var_r0_2 >> 3;
        temp_r0 = func_0809D8A0(temp_r6);
        switch (temp_r0) {
        case 1:
            break;
        case 3:
            break;
        default:
        case 0:
        case 2:
        case 4:
            break;
        }
        if (((u32) temp_r5 >= 2U) && ((u32) temp_r4 >= 7U)) {
            sp0 = 7;
            if (((u32) ((func_0809D8A4(temp_r6) * 2) + 2) > (u32) temp_r5) && ((u32) (sp0 + (func_0809D8B8(temp_r6) * 2)) > (u32) temp_r4)) {
                temp_r2 = (u32) (temp_r5 - 2) >> 1;
                temp_r1 = (u32) (temp_r4 - sp0) >> 1;
                arg2->unk0 = (s16) ((temp_r2 * 2) + 2);
                arg2->unk2 = (s16) (sp0 + (temp_r1 * 2));
                arg2->unk4 = (s16) temp_r2;
                arg2->unk6 = (s16) temp_r1;
                var_sb = 1;
            }
        }
    }
    return var_sb;
}
