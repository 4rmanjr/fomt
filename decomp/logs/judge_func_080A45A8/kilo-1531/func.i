# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A45A8/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A45A8/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A45A8/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A45A8/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A45A8/kilo-1531/func.c" 2
extern ? gUnk_0810563C;

s32 func_080A45A8(void *arg0) {
    ? *var_r2;
    s16 var_r0;
    s16 var_r0_2;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r4;
    s32 var_r8;

    var_r8 = 7;
    var_r0 = ((arg0->unk2 & 0x3FF) << 6) | ((u8) arg0->unk1 >> 2);
    if ((s32) var_r0 < 0) {
        var_r0 += 7;
    }
    temp_r5 = var_r0 >> 3;
    var_r0_2 = ((arg0->unk4 & 0x3FF) << 6) | ((u8) arg0->unk3 >> 2);
    if ((s32) var_r0_2 < 0) {
        var_r0_2 += 7;
    }
    temp_r3 = var_r0_2 >> 3;
    var_r4 = 0;
    var_r2 = &gUnk_0810563C;
    var_r1 = 0;
loop_5:
    if ((((u32) (arg0->unk0 << 0x16) >> 0x16) == var_r2->unk0) && (temp_r5 >= (s32) *(var_r1 + (&gUnk_0810563C + 4))) && (temp_r5 <= (s32) *(var_r1 + (&gUnk_0810563C + 0xC))) && (temp_r3 >= (s32) *(var_r1 + (&gUnk_0810563C + 8))) && (temp_r3 <= (s32) *(var_r1 + (&gUnk_0810563C + 0x10)))) {
        var_r8 = var_r2->unk14;
    } else {
        var_r2 += 0x18;
        var_r1 += 0x18;
        var_r4 += 1;
        if (var_r4 <= 7) {
            goto loop_5;
        }
    }
    return var_r8;
}
