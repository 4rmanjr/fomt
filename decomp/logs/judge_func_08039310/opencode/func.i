# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039310/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039310/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039310/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039310/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039310/opencode/func.c" 2
s32 SetAnimFacing__12AActorEntityUi(void *);
s32 func_080200C4(void *, s32);
s32 func_08039134(void **, u16, s16, s16);
s32 func_080391C0(s16, s16);
s32 func_0809C060(void *);
s32 func_0809C0A0(void *, s32 *);
s32 func_0809C0AC(void *);
s32 func_0809C0BC(void *, s32 *);
u32 func_080AB788(s32);
s32 func_080ABC40(s16, s16, s16, s16, s32, s32);

void func_08039310(void *arg1, s32 arg2) {
    s32 sp8;
    s32 spC;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    void *sp20;
    s32 sp24;
    s32 sp28;
    s16 temp_r1_2;
    s16 temp_r2;
    s16 temp_r3_2;
    s16 temp_r7;
    s32 temp_r0_4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r1;
    s32 var_r6_2;
    u16 var_r6;
    u8 temp_r1;
    void **temp_r3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r4;

    sp1C = arg2;
    temp_r0 = arg1->unk34;
    sp20 = temp_r0;
    temp_r0_2 = temp_r0 + 0x10;
    temp_r3 = arg1->unk0;
    temp_r1 = temp_r0_2->unk6;
    sp24 = (s32) temp_r1;
    var_r6 = sp20->unk10;
    if (var_r6 != 0) {
        var_r6 -= 1;
        if ((var_r6 == 0) && (temp_r1 != 0)) {
            sp24 = temp_r1 - 1;
        }
    }
    temp_r0_3 = (*temp_r3)->unk40(temp_r3, temp_r0_2->unk7);
    if (temp_r0_3 == 0) {
        goto block_34;
    }
    if (temp_r0_3->unk4 != arg1->unk4) {
        goto block_34;
    }
    if ((temp_r0_3->unk14->unk60(temp_r0_3) << 0x18) == 0) {
block_34:
        temp_r4 = arg1->unk34;
        var_r6_2 = 0x64;
        if (func_0809C060(temp_r4) != 0) {
            var_r6_2 = func_08039134(arg1->unk0, arg1->unk4, arg1->unkA, arg1->unkE);
        } else {
            func_080200C4(arg1, 0xAA);
        }
        if (var_r6_2 != 0x64) {
            if (func_080AB788(0x64) <= 0x45U) {
                spC &= 0xFFFF0000;
                spC.unk4 = (s32) ((((spC.unk4 & 0xFF00FFFF) | ((u32) ((func_080AB788(8) + 3) << 0x18) >> 8)) & 0xFFFFFF) | (var_r6_2 << 0x18));
                func_0809C0AC(temp_r4);
                return;
            }
            sp14 = (((sp14 & 0xFFFF0000) | (u16) (func_080AB788(0x3C) + 0x78)) & 0xFF00FFFF & 0xFFFFFF) | (var_r6_2 << 0x18);
            func_0809C0BC(temp_r4, &sp14);
            return;
        }
        sp18 = (sp18 & 0xFFFF0000) | 0xB4;
        func_0809C0A0(temp_r4, &sp18);
        return;
    }
    temp_r2 = arg1->unkA;
    temp_r7 = arg1->unkE;
    temp_r3_2 = temp_r0_3->unkA;
    temp_r1_2 = temp_r0_3->unkE;
    if (sp24 != 0) {
        var_r0 = temp_r3_2 - temp_r2;
        if (var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        if (var_r0 <= 0xF) {
            var_r0_2 = temp_r1_2 - temp_r7;
            if (var_r0_2 < 0) {
                var_r0_2 = 0 - var_r0_2;
            }
            if (var_r0_2 > 0xF) {
                goto block_17;
            }
            goto block_33;
        }
block_17:
        if (var_r6 != 0) {
            var_r0_3 = temp_r0_2->unk2 - temp_r2;
            if (var_r0_3 < 0) {
                var_r0_3 = 0 - var_r0_3;
            }
            if (var_r0_3 <= 0xF) {
                var_r0_4 = temp_r0_2->unk4 - temp_r7;
                if (var_r0_4 < 0) {
                    var_r0_4 = 0 - var_r0_4;
                }
                if (var_r0_4 <= 0xF) {
                    goto block_24;
                }
            }
        } else {
block_24:
            sp28 = (s32) temp_r2;
            if ((func_080391C0(temp_r2, temp_r7) << 0x18) != 0) {
                var_r1 = 0;
                if ((s32) temp_r7 >= (s32) temp_r1_2) {
                    var_r1 = 1;
                }
                if (arg1->unk20 != var_r1) {
                    SetAnimFacing__12AActorEntityUi(arg1);
                }
            } else if (arg1->unk20 != func_080ABC40(temp_r2, temp_r7, temp_r3_2, temp_r1_2, sp1C, (s32) arg1->unk20)) {
                SetAnimFacing__12AActorEntityUi(arg1);
            }
            var_r6 = func_080AB788(0x1E) + 1;
            temp_r0_2->unk2 = temp_r3_2;
            temp_r0_2->unk4 = temp_r1_2;
        }
        temp_r0_2->unk6 = (u8) sp24;
        temp_r0->unk10 = var_r6;
        return;
    }
block_33:
    temp_r0_4 = (((sp8 & 0xFFFF0000) | 0x24) & 0xFF00FFFF) | 0x10000;
    sp8 = temp_r0_4;
    sp8 = (temp_r0_4 & 0xFFFFFF) | (temp_r0_2->unk7 << 0x18);
    func_0809C0BC(sp20, &sp8);
    func_080200C4(arg1, 0xAB);
}
