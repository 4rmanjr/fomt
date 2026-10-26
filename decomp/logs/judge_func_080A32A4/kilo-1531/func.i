# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A32A4/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A32A4/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A32A4/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A32A4/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A32A4/kilo-1531/func.c" 2
s16 func_080074C0(void *, s32);
s16 func_08007D4C(void *, s32);
s32 func_08008920(void *);
s32 func_0805E860(void *, u32);
s32 func_0805E8F0(void *);
s32 func_0805E99C(s32, s32, u16, ? *);
s32 func_080A3588(void *, s32, s32, s16, s32, s32);
s32 func_080A3618(void *, s32, s32, s32, s32);
s32 memcpy(s32 *, ? *, s32);

void func_080A32A4(void *arg0) {
s32 sp8;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
    s32 sp2C;
    s32 sp34;
    s32 sp3C;
s32 sp44;
    void *sp64;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2_3;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r7;
    s32 var_r8;
    u16 temp_r0_11;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r3;
    u8 *var_r4_3;
    void **temp_r1;
    void **temp_r1_4;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r4;
    void *var_r4;

    sp8.unk0 = 0;
    sp8.unk2 = 0;
    sp8.unk4 = 0;
    sp8.unk6 = 0;
    sp8.unk8 = 0;
    sp14 = 0;
    sp8.unk10 = 0;
    sp8.unk11 = 0;
    sp1C = 0;
    sp8.unk18 = 0;
    sp24 = 0;
    sp24.unk4 = 0U;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    sp3C = 0;
    sp3C.unk4 = 0;
    temp_r4 = arg0 + 0x110;
    func_0805E8F0(temp_r4);
    temp_r1 = arg0->unk110;
    (*temp_r1)->unk10(&sp44, temp_r1, *(arg0->unk114 + (temp_r4->unkC * 4)));
    memcpy(&sp44, &sp44, 0x20);
    temp_r0 = &sp44 + 0xC;
    sp24.unk0 = sp44.unk0;
    sp24.unk4 = (s32) sp44.unk4;
    sp24.unk8 = (s32) sp44.unk8;
    temp_r1_2 = &sp24 + 0xC;
    sp24.unkC = (s32) sp44.unkC;
    temp_r1_2->unk4 = (s32) temp_r0->unk4;
    temp_r1_2->unk8 = (s32) temp_r0->unk8;
    temp_r1_2->unkC = (s32) temp_r0->unkC;
    (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
    temp_r0_2 = arg0 + 0x124;
    temp_r0_3 = temp_r0_2 + 0xC;
    sp8.unk0 = (s32) arg0->unk124;
    sp8.unk4 = (s32) temp_r0_2->unk4;
    sp8.unk8 = (s32) temp_r0_2->unk8;
    temp_r1_3 = &sp8 + 0xC;
    sp8.unkC = (s32) temp_r0_2->unkC;
    temp_r1_3->unk4 = (s32) temp_r0_3->unk4;
    temp_r1_3->unk8 = (s32) temp_r0_3->unk8;
    temp_r1_3->unkC = (s32) temp_r0_3->unkC;
    sp8.unk0 = (s16) ((arg0->unk1E4 * 0x22) + 0x10);
    sp8.unk2 = (s16) ((arg0->unk1E5 * 0x14) + 0x30);
    temp_r0_4 = arg0 + 0x1A4;
    sp8.unk6 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
    temp_r0_5 = arg0 + 0x1AC;
    sp8.unk4 = func_080074C0(temp_r0_5, temp_r0_5->unk4);
    sp8.unk8 = 1;
    sp8.unk18 = 1;
    temp_r3 = func_08008920(arg0);
    var_r2 = 0;
    if (sp24 != 0) {
        var_r2 = sp24.unk4;
    }
    func_0805E99C(temp_r3, sp24, var_r2, &sp8);
    sp64 = arg0 + 0xE0;
    var_r4 = arg0 + 0x1EC;
    var_r8 = 9;
    do {
        if (var_r4->unk0 != -1) {
            func_0805E860(sp64, (u32) (var_r4->unk2 << 0x1C) >> 0x1C);
            temp_r1_4 = sp64->unk0;
            (*temp_r1_4)->unk10(&sp44, temp_r1_4, *(arg0->unkE4 + (sp64->unkC * 4)));
            memcpy(&sp44, &sp44, 0x20);
            temp_r0_6 = &sp44 + 0xC;
            sp24.unk0 = sp44.unk0;
            sp24.unk4 = (s32) sp44.unk4;
            sp24.unk8 = (s32) sp44.unk8;
            temp_r1_5 = &sp24 + 0xC;
            sp24.unkC = (s32) sp44.unkC;
            temp_r1_5->unk4 = (s32) temp_r0_6->unk4;
            temp_r1_5->unk8 = (s32) temp_r0_6->unk8;
            temp_r1_5->unkC = (s32) temp_r0_6->unkC;
            (temp_r1_5 + 0xC)->unk4 = (s32) (temp_r0_6 + 0xC)->unk4;
            temp_r0_7 = arg0 + 0xF4;
            temp_r0_8 = temp_r0_7 + 0xC;
            sp8.unk0 = (s32) arg0->unkF4;
            sp8.unk4 = (s32) temp_r0_7->unk4;
            sp8.unk8 = (s32) temp_r0_7->unk8;
            temp_r1_6 = &sp8 + 0xC;
            sp8.unkC = (s32) temp_r0_7->unkC;
            temp_r1_6->unk4 = (s32) temp_r0_8->unk4;
            temp_r1_6->unk8 = (s32) temp_r0_8->unk8;
            temp_r1_6->unkC = (s32) temp_r0_8->unkC;
            sp8.unk0 = (s16) ((((u8) var_r4->unk2 >> 4) * 0x22) + 0xA);
            sp8.unk2 = (s16) ((((u32) (var_r4->unk3 << 0x1C) >> 0x1C) * 0x14) + 0x2A);
            temp_r0_9 = arg0 + 0x194;
            sp8.unk6 = (s16) (*(arg0 + 0x16C + ((u32) (var_r4->unk2 << 0x1C) >> 0x1B)) + func_08007D4C(temp_r0_9, temp_r0_9->unk4));
            temp_r0_10 = arg0 + 0x19C;
            sp8.unk4 = func_080074C0(temp_r0_10, temp_r0_10->unk4);
            sp8.unk8 = 1;
            sp8.unk18 = 1;
            temp_r3_2 = func_08008920(arg0);
            var_r2_2 = 0;
            if (sp24 != 0) {
                var_r2_2 = sp24.unk4;
            }
            func_0805E99C(temp_r3_2, sp24, var_r2_2, &sp8);
        }
        var_r4 += 4;
        var_r8 -= 1;
    } while (var_r8 >= 0);
    temp_r0_11 = arg0->unk1E0 + 1;
    var_r3 = temp_r0_11;
    if ((s32) (s16) temp_r0_11 > 0xC8) {
        var_r3 = 0xC8;
    }
    var_r4_2 = 0;
    func_080A3588(arg0, 0x11, 1, (s16) var_r3, 3, 0);
    func_080A3618(arg0, 0x41, 2, 0xA, 0);
    func_080A3618(arg0, 0x80, 2, arg0->unk1E2 + 0xB, 0);
    var_r5 = 6;
    do {
        var_r0 = 0;
        if (var_r4_2 == 0) {
            var_r0 = 1;
        } else if (var_r4_2 == 6) {
            var_r0 = 2;
        }
        func_080A3618(arg0, var_r5, 0x15, var_r4_2 + 0xF, var_r0);
        var_r5 += 0x22;
        var_r4_2 += 1;
    } while (var_r4_2 <= 6);
    var_r2_3 = 0;
    do {
        var_r5_2 = 0;
        var_r7 = 2;
        var_r4_3 = (var_r2_3 * 7) + 0x1B4 + arg0;
loop_18:
        if (*var_r4_3 != 0) {
            var_r1 = 0;
            if (var_r5_2 == 0) {
                var_r1 = 1;
            } else if (var_r5_2 == 6) {
                var_r1 = 2;
            }
            func_080A3588(arg0, var_r7, (var_r2_3 * 0x14) + 0x2A, (s16) *var_r4_3, 2, var_r1);
        }
        var_r4_3 += 1;
        var_r7 += 0x22;
        var_r5_2 += 1;
        if (var_r5_2 <= 6) {
            goto loop_18;
        }
        var_r2_3 += 1;
    } while (var_r2_3 <= 5);
}
