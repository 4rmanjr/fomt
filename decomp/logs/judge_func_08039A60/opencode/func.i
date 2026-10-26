# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039A60/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039A60/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039A60/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039A60/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08039A60/opencode/func.c" 2
s32 SetAnim__12AActorEntityUi(void *);
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, ? *);
s32 func_08020080(void *, s32);
s32 func_080200C4(void *, s32);
s32 func_08020170(void *, s32 *);
s32 func_08039134(void **, s32, s16, s16);
s32 func_080391C0(s16, s16);
s32 func_08039D4C(void *, s32);
s32 func_08039D5C(void *, s32);
s32 func_0809C0AC(void *);
u32 func_080AB788(s32);
s32 func_080ABA90(s32 *, ? *, s32);
s32 memcpy(s32 *, ? *, s32);

void func_08039A60(void *arg0, void *arg1) {
s32 sp0;
s32 sp8;
    s32 sp10;
s32 sp24;
    s32 sp30;
    s32 sp34;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp54;
s32 sp5C;
s32 sp64;
    s32 sp6C;
    s16 temp_r1;
    s16 temp_r6;
    s16 var_r1;
    s16 var_r2;
    s32 *var_r4;
    s32 temp_r0_10;
    s32 temp_r0_3;
    u16 temp_r0_11;
    u16 temp_r5;
    u16 var_r0;
    u8 temp_r5_2;
    void **temp_r0;
    void **temp_r0_4;
    void **temp_r0_6;
    void **temp_r0_8;
    void **temp_r0_9;
    void *temp_r0_2;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r2;

    temp_r0 = arg0->unk0;
    if (arg1->unk4 == 0) {

    } else if (arg0->unk4 == 2) {

    } else {
        temp_r0_2 = (*temp_r0)->unk144(temp_r0);
        if ((0x7FF & temp_r0_2->unkA) != 0x14) {

        } else if (temp_r0_2->unk0 != 0) {

        } else {
            if (func_080AB788(2) != 0) {
                var_r1 = 0x108;
                var_r2 = 0x2D0;
            } else {
                var_r1 = 0x154;
                var_r2 = -0x10;
            }
            sp44 = var_r1;
            sp44.unk2 = var_r2;
            sp48 = sp44;
            temp_r0_3 = func_08039134(temp_r0, 2, sp48.unk0, sp48.unk2);
            sp6C = temp_r0_3;
            if ((temp_r0_3 != 0x64) && (func_080AB788(0x64) <= 0xEU)) {
                temp_r6 = sp48.unk0;
                temp_r1 = sp48.unk2;
                sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | 2);
                sp0.unk1 = (u8) ((3 & sp0.unk1) | (((u16) temp_r6 & 0x3F) * 4));
                sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | ((u32) (temp_r6 << 0x10) >> 0x16));
                sp0.unk3 = (u8) ((3 & sp0.unk3) | (((u16) temp_r1 & 0x3F) * 4));
                sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | ((u32) (temp_r1 << 0x10) >> 0x16));
                memcpy(&sp8, &sp0, 6);
                sp8.unk6 = 1;
                SetLocation__12AActorEntityRC13ActorLocation(arg0, &sp8);
                sp4C &= 0xFFFF0000;
                sp4C.unk4 = (s32) ((((sp4C.unk4 & 0xFF00FFFF) | ((u32) ((func_080AB788(8) + 3) << 0x18) >> 8)) & 0xFFFFFF) | (sp6C << 0x18));
                func_0809C0AC(arg0->unk34);
                func_080200C4(arg0, 0xAB);
            }
        }
    }
    temp_r5 = arg0->unk4;
    if (temp_r5 == 0x234) {

    } else {
        (*temp_r0)->unk34(&sp0, temp_r0, temp_r5);
        arg0->unk14->unkC(&sp54, arg0);
        sp10 = 0x21;
        sp10.unk4 = -0x21;
        sp10.unk8 = -0x21;
        sp10.unkC = 0x21;
        sp24.unk0 = (s32) sp0.unk0;
        sp24.unk4 = (s32) sp0.unk4;
        sp24.unk8 = (s32) sp0.unk8;
        sp30 = sp54;
        sp34 = sp58;
        sp10.unk28 = 0x20;
        sp10.unk2C = 0;
        sp10.unk30 = 0;
        temp_r0_4 = arg0->unk0;
        temp_r0_5 = (*temp_r0_4)->unk40(temp_r0_4, 0);
        if ((temp_r0_5 != 0) && (temp_r0_5->unk4 == temp_r5)) {
            temp_r0_5->unk14->unkC(&sp5C, temp_r0_5);
            func_080ABA90(&sp10, &sp5C, 0);
        }
        temp_r0_6 = arg0->unk0;
        temp_r0_7 = (*temp_r0_6)->unk40(temp_r0_6, 0x4A);
        if ((temp_r0_7 != 0) && (temp_r0_7->unk4 == temp_r5)) {
            temp_r0_7->unk14->unkC(&sp64, temp_r0_7);
            func_080ABA90(&sp10, &sp64, 0);
        }
        temp_r0_8 = ((arg0->unk34->unkC * 4) + arg0)->unk38;
        (*temp_r0_8)->unk8(temp_r0_8, arg0, &sp10);
        temp_r0_9 = ((arg0->unk34->unkC * 4) + arg0)->unk38;
        temp_r0_10 = (*temp_r0_9)->unkC(temp_r0_9, arg0);
        temp_r5_2 = arg0->unk20;
        if ((temp_r0_10 != arg0->unk4C) || (temp_r5_2 != arg0->unk50)) {
            func_08020080(arg0, func_08039D5C(arg0, temp_r0_10));
        }
        if ((temp_r0_10 != arg0->unk4C) && (arg0->unk22 != func_08039D4C(arg0, temp_r0_10))) {
            SetAnim__12AActorEntityUi(arg0);
        }
        arg0->unk4C = temp_r0_10;
        arg0->unk50 = (s32) temp_r5_2;
        var_r4 = &sp10;
        if (((u32) (arg0->unk34->unkC - 1) <= 1U) && ((u32) arg0->unk20 <= 1U) && ((func_080391C0(arg0->unkA, arg0->unkE) << 0x18) != 0)) {
            var_r4 = 0;
        }
        func_08020170(arg0, var_r4);
    }
    arg0->unk30 = 0;
    temp_r0_11 = arg0->unk24;
    if (temp_r0_11 != 0) {
        var_r0 = temp_r0_11 - 1;
    } else {
        var_r0 = arg0->unk26;
    }
    arg0->unk24 = var_r0;
    temp_r2 = arg0->unk10;
    if (temp_r2 != 0) {
        temp_r2->unk4->unkC(temp_r2);
    }
}
