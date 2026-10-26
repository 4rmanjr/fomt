# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039204/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039204/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039204/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039204/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039204/opencode/func.c" 2
s32 SetAnimFacing__12AActorEntityUi(void *);
s32 SetMap__7AEntityUi(void *, s32);
s32 func_080391C0(s16, s16);
s32 func_0809C098(void *, ? *);
s32 func_080AB788(s32);
s32 func_080ABC40(s16, s16, s16, s16, s32, s32);

void func_08039204(void *arg1, s32 arg2) {
s32 sp8;
s32 spC;
    s32 sp10;
    u16 *sp14;
    s16 temp_r0_2;
    s16 temp_r3;
    s16 temp_r6;
    s16 temp_r7;
    s16 var_r1;
    s16 var_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1_2;
    u16 var_r4;
    void *temp_r0;

    sp10 = arg2;
    temp_r0 = arg1->unk34;
    sp14 = temp_r0 + 0x10;
    var_r4 = temp_r0->unk10;
    if (var_r4 != 0) {
        var_r4 -= 1;
    }
    temp_r0_2 = arg1->unkA;
    temp_r7 = arg1->unkE;
    if ((s32) temp_r7 > 0x160) {
        var_r1 = 0x108;
        var_r2 = 0x2D0;
    } else {
        var_r1 = 0x154;
        var_r2 = -0x10;
    }
    sp8.unk0 = var_r1;
    sp8.unk2 = var_r2;
    temp_r3 = sp8.unk0;
    temp_r6 = sp8.unk2;
    if (arg1->unk4 == 2) {
        var_r0 = temp_r3 - temp_r0_2;
        if (var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        if (var_r0 <= 0xF) {
            var_r0_2 = temp_r6 - temp_r7;
            if (var_r0_2 < 0) {
                var_r0_2 = 0 - var_r0_2;
            }
            if (var_r0_2 > 0xF) {
                goto block_12;
            }
            goto block_22;
        }
block_12:
        if (var_r4 == 0) {
            if ((func_080391C0(temp_r0_2, temp_r7) << 0x18) != 0) {
                var_r1_2 = 0;
                if ((s32) temp_r7 >= (s32) temp_r6) {
                    var_r1_2 = 1;
                }
                if (arg1->unk20 != var_r1_2) {
                    SetAnimFacing__12AActorEntityUi(arg1);
                }
            } else if (arg1->unk20 != func_080ABC40(temp_r0_2, temp_r7, temp_r3, temp_r6, sp10, (s32) arg1->unk20)) {
                SetAnimFacing__12AActorEntityUi(arg1);
            }
            var_r4 = func_080AB788(0x1E) + 1;
        }
        *sp14 = var_r4;
        return;
    }
block_22:
    SetMap__7AEntityUi(arg1, 0x234);
    func_0809C098(temp_r0, &spC);
}
