# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025294/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025294/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025294/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025294/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025294/opencode/func.c" 2
s32 func_080AC070(?);

s32 func_08025294(s32 arg1, s32 arg2, void *arg3) {
s32 sp0;
s32 sp8;
s32 sp10;
s32 sp18;
s32 sp20;
    ? *var_r1;
    s16 temp_r3;
    s16 temp_r4;
    s16 temp_r5;
    s16 temp_r6;
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r0;

    sp0.unk0 = 0x10F;
    sp0.unk2 = 0xAF;
    sp0.unk4 = 0x3C1;
    sp0.unk6 = 0x241;
    temp_r5 = arg3->unk4;
    temp_r4 = arg3->unk0;
    temp_r6 = arg3->unk6;
    temp_r3 = arg3->unk2;
    if ((s32) ((sp0.unk0 - temp_r5) & (temp_r4 + 0xFFFFFC3F) & (0xAF - temp_r6) & (temp_r3 + 0xFFFFFDBF)) < 0) {
        switch (arg2) {
        case 0:
            temp_r2 = (temp_r6 - temp_r3) + 0x10;
            sp8.unk0 = temp_r4;
            sp8.unk2 = (s16) (temp_r2 + temp_r3);
            sp8.unk4 = temp_r5;
            sp8.unk6 = (s16) (temp_r2 + temp_r6);
block_13:
            if (((func_080AC070(arg1) ^ 1) << 0x18) != 0) {
                return 1;
            }
            goto block_15;
        case 1:
            temp_r0 = 0 - ((temp_r6 - temp_r3) + 0x10);
            sp10.unk0 = temp_r4;
            sp10.unk2 = (s16) (temp_r0 + temp_r3);
            sp10.unk4 = temp_r5;
            sp10.unk6 = (s16) (temp_r0 + temp_r6);
            goto block_13;
        case 2:
            var_r0 = 0 - ((temp_r5 - temp_r4) + 0x10);
            var_r1 = &sp18;
block_12:
            var_r1->unk0 = (s16) (var_r0 + temp_r4);
            var_r1->unk2 = temp_r3;
            var_r1->unk4 = (s16) (var_r0 + temp_r5);
            var_r1->unk6 = temp_r6;
            goto block_13;
        case 3:
            var_r0 = (temp_r5 - temp_r4) + 0x10;
            var_r1 = &sp20;
            goto block_12;
        }
    } else {
block_15:
        return 0;
    }
}
