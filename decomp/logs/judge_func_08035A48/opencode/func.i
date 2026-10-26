# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035A48/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035A48/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035A48/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035A48/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08035A48/opencode/func.c" 2
s32 func_08032384(void *, s32, s32);
s32 func_08035978(void *);

void func_08035A48(void *arg0, void *arg1) {
    s32 var_r0;
    s32 var_r0_2;

    if (arg0->unk4 == ((u32) (arg1->unk0 << 0x16) >> 0x16)) {
        var_r0 = (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)) - arg0->unkA;
        if (var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        if (var_r0 <= 0x97) {
            var_r0_2 = (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)) - arg0->unkE;
            if (var_r0_2 < 0) {
                var_r0_2 = 0 - var_r0_2;
            }
            if ((var_r0_2 <= 0x6F) && ((func_08035978(arg0) << 0x18) == 0) && ((arg0->unk14->unk28(arg0) << 0x18) == 0)) {
                func_08032384(arg0, 2, 0);
                arg0->unk3F = 0x78;
                arg0->unk14->unk3C(arg0, 1);
            }
        }
    }
}
