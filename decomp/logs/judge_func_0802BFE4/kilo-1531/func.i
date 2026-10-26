# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BFE4/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BFE4/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BFE4/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BFE4/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802BFE4/kilo-1531/func.c" 2
s32 func_030004DC(s32, s32, s32, s32);
s32 func_08032690(void *, void *);
s32 func_08032900(u16, s32, s32);
s32 func_0803AE58(s32, s32, s32, s32);
s32 func_080A480C(void *, s32, void *);
s32 func_080A4944(void *, void *, s32);

void func_0802BFE4(void *arg0, void *arg1) {
    s32 sp0;
    ? *sp4;
    s32 sp8;
    s32 spC;
    void *sp10;
s32 sp14;
    s32 sp34;
    u16 *sp3C;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 *sp60;
    s8 *sp64;
    s32 sp68;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r2;
    s32 temp_r4_3;
    s32 temp_r7;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    u16 temp_r0;
    void **temp_r0_5;
    void **temp_r1_2;
    void **temp_sb;
    void *temp_r0_4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r5;
    void *temp_r5_2;

    temp_r4 = arg0->unk0;
    temp_r0 = temp_r4->unk4;
    sp44 = (s32) temp_r0;
    temp_sb = temp_r4->unk0;
    sp48 = (s32) arg0->unk44;
    temp_r2 = temp_r4->unk8;
    sp68 = temp_r2;
    temp_r0_2 = temp_r4->unkC;
    sp4C = temp_r0_2;
    sp34 = arg1->unk0;
    sp34.unk4 = (s32) arg1->unk8;
    sp50 = func_08032900(temp_r0, temp_r2 >> 0x10, temp_r0_2 >> 0x10);
    arg0->unk8B = (u8) sp50;
    temp_r4_2 = temp_r4 + 0x38;
    var_r1 = 0;
    if (temp_r4->unk38 == 1) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {

    } else {
        sp54 = ((s32) (sp68 + temp_r4_2->unk4) >> 0x10) - arg1->unkC;
        temp_r4_3 = sp4C + temp_r4_2->unk8;
        temp_r1 = temp_r4_3 >> 0x10;
        temp_r7 = temp_r1 - arg1->unkE;
        sp58 = 0x8000 - temp_r1;
        var_r1_2 = 0;
        if (temp_r4_2->unk1 == 1) {
            var_r1_2 = 1;
        }
        if (var_r1_2 != 0) {
            temp_r0_3 = (*temp_sb)->unk58(temp_sb);
            sp0 = 0;
            func_0803AE58(temp_r0_3, arg1->unk8, sp54, temp_r7);
        }
        sp5C = ((s32) (temp_r4_3 - temp_r4_2->unk14) >> 0x10) - arg1->unkE;
        if (sp44 <= 8) {
            var_r0 = 1;
            if (sp50 != 1) {
                var_r0 = 2;
            }
        } else {
            var_r0 = 1;
        }
        temp_r5 = arg0 + 0x8C;
        sp60 = &sp0 + 0x34;
        temp_r0_4 = arg0 + 0xB4;
        temp_r1_2 = arg0->unkB4;
        (*temp_r1_2)->unk10(&sp14, temp_r1_2, *(temp_r0_4->unk4 + (temp_r0_4->unkC * 4)));
        temp_r1_3 = (arg0 + 0x90)->unk4;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
            sp0 = sp58;
            sp4 = &sp14;
            sp8 = arg0->unk8C;
            spC = (s32) temp_r5->unkC;
            sp10 = arg0 + 0x9C;
            var_r0_2 = func_030004DC(sp60->unk4, sp54, sp5C, (var_r0 * 4) | var_r0 | (var_r0 * 0x10) | (var_r0 << 6));
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            sp64 = temp_r5 + 0x3C;
            if (temp_r5->unk3C != 0) {
                func_080A480C(temp_r5, sp60->unk0, &sp14 + 8);
                if (temp_r5->unk3D != 0) {
                    func_080A4944(temp_r5, &sp14 + 0x10, 1);
                } else if (temp_r5->unk3E == 0) {
                    func_080A4944(temp_r5, &sp14 + 0x10, 1);
                    temp_r5->unk3E = 1U;
                }
                *sp64 = 0;
            }
        }
    }
    func_08032690(arg0, arg1);
    if (sp48 != 0) {
        var_r1_3 = 0;
        if (temp_r4->unk38 == 1) {
            var_r1_3 = 1;
        }
        if ((var_r1_3 == 0) && (arg0->unkCC != 0xFFFF)) {
            temp_r0_5 = (*temp_sb)->unk64(temp_sb);
            temp_r5_2 = *temp_r0_5;
            temp_r5_2->unkC(&sp3C, temp_r0_5, arg0->unkCC);
            temp_r5_2->unk10(&sp14, temp_r0_5, *sp3C);
            (*temp_sb)->unk54(temp_sb, sp24, (*temp_sb)->unk48(temp_sb, 2), 1);
        }
    }
}
