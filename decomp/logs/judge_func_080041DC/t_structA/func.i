# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080041DC/t_structA/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080041DC/t_structA/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080041DC/t_structA/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080041DC/t_structA/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080041DC/t_structA/func.c" 2
s32 __builtin_delete(void *);
s32 __builtin_new(s32);
s32 func_080003A0(void *);
s32 func_080003DC(void *, u32);
s32 func_08000488(void *);
s32 func_08000640(void *);
s32 func_08003788(void *, void *);
s32 func_08003DF0(void *, s32, s32, s32);
s32 func_08007128(void *);
s32 func_0800736C(void *);
s32 func_080074C0(void *, s32);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s32 func_08007D4C(void *, s32);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_08008574(void *);
s32 func_08008B54(void *, s32);
s32 func_080114F8(void *);
void *func_08011650(s32, void *, s32, s32 *);
s32 func_08050CC0(void *, s32, s32, s32);
s32 func_0805E6CC(void *, s32 *);
s32 func_0805E790(s32 *, void *, s32);
s32 func_0805E824(void *, void *, s32, s32);
s32 func_080D4480(void *, s32);
extern s32 gUnk_08728208;
extern s32 vtable_unk_080E5A5C;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkC;
    u8 _pad10[76];
    s32 unk5C;
    s32 unk60;
    u8 _pad64[20];
    s32 unk78;
    s32 unk7C;
    s32 unk80;
    u8 _pad84[276];
    s32 unk198;
    u8 _pad19C[8308];
    struct GenObj *unk2210;
} GenObj;
void *func_080041DC(GenObj *arg0, void *arg1, void ***arg2) {
    s32 sp0;
    s32 *sp4;
    s32 *sp8;
s32 spC;
s32 sp10;
    void *sp34;
s32 sp38;
    s32 sp3C;
    void ***sp40;
    void *sp44;
    u8 *sp48;
    u16 *sp4C;
    u8 *sp50;
    s8 *sp54;
    u8 *sp58;
    u8 *sp5C;
    u8 *sp60;
    s8 *sp64;
    u8 *sp68;
    s32 *sp6C;
    s32 temp_r1_3;
    s32 temp_r2_3;
    s32 temp_r8;
    s32 var_r1;
    s32 var_r5;
    s32 var_r5_2;
    s8 *temp_r0_4;
    s8 *var_r0;
    u16 *temp_r1;
    u32 var_r4_2;
    u8 *temp_r1_2;
    u8 *temp_r2_2;
    u8 *temp_r3_2;
    u8 var_r1_2;
    u8 var_r1_3;
    void **temp_r0;
    void **temp_r1_4;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_5;
    GenObj *temp_r0_6;
    GenObj *temp_r2;
    void *temp_r3;
    GenObj *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r6;
    void *var_r4;

    sp40 = arg2;
    sp38 = 7;
    sp38.unk1 = 0;
    func_08008574(arg0);
    arg0->unk4 = &vtable_unk_080E5A5C;
    arg0->unk8 = arg1;
    temp_r0 = *sp40;
    *sp40 = 0;
    arg0->unkC = temp_r0;
    func_0800835C(&spC);
    func_0800770C(&sp10);
    sp0 = 0;
    sp4 = &spC;
    sp8 = &sp10;
    func_08050CC0((GenObj *)((u8 *)arg0 + 0x10), 0, 0x1F, 0xF);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x14), 1);
    func_08008B54((GenObj *)((u8 *)arg0 + 0x18), 2);
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x1C);
    func_0805E6CC(temp_r6, &gUnk_08728208);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x4C);
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, 2);
    temp_r4_2 = (GenObj *)((u8 *)temp_r4 + 8);
    func_08007128(temp_r4_2);
    temp_r4_2->unk4 = func_0800736C(temp_r4_2);
    arg0->unk5C = 0;
    arg0->unk60 = 0;
    func_0805E824((GenObj *)((u8 *)arg0 + 0x64), temp_r6, 0, 0x100);
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x80);
    arg0->unk80 = 0;
    temp_r0_2->unkC = 0;
    func_08000640((GenObj *)((u8 *)temp_r0_2 + 0xC) + 4);
    var_r0 = (GenObj *)((u8 *)arg0 + 0x98);
    var_r1 = 1;
    sp6C = &sp0 + 0x14;
    do {
        *var_r0 = 0;
        var_r0 += 0x80;
        var_r1 -= 1;
    } while (var_r1 != -1);
    var_r4 = (GenObj *)((u8 *)arg0 + 0x198);
    var_r5 = 1;
    temp_r2 = (GenObj *)((u8 *)arg0 + 0x4C);
    temp_r3 = (GenObj *)((u8 *)arg0 + 0x54);
    sp44 = temp_r3;
    temp_r0_3 = (GenObj *)((u8 *)arg0 + 0x90);
    temp_r1 = (GenObj *)((u8 *)arg0 + 0x60);
    sp4C = temp_r1;
    temp_r2_2 = (GenObj *)((u8 *)arg0 + 0x61);
    sp50 = temp_r2_2;
    temp_r3_2 = temp_r3 + 9;
    sp48 = temp_r3_2;
    temp_r0_4 = (GenObj *)((u8 *)arg0 + 0x84);
    sp54 = temp_r0_4;
    temp_r1_2 = temp_r1 + 0x25;
    sp58 = temp_r1_2;
    sp5C = temp_r2_2 + 0x25;
    sp60 = temp_r3_2 + 0x2A;
    sp64 = temp_r0_4 + 4;
    sp68 = temp_r1_2 + 4;
    do {
        func_080114F8(var_r4);
        var_r4 += 4;
        var_r5 -= 1;
    } while (var_r5 != -1);
    func_0805E790(sp6C, (GenObj *)((u8 *)arg0 + 0x1C), 0);
    arg0->unk5C = (s32) sp14->unk0;
    arg0->unk60 = (s32) sp14->unk4;
    *sp4C = (0xFFFFFC00 & *sp4C) | (func_08007D4C(temp_r2, temp_r2->unk4) & 0x3FF);
    *sp50 = (0xF & *sp50) | (func_080074C0(sp44, sp44->unk4) * 0x10);
    *sp48 |= 0x10;
    arg0->unk78 = (s32) arg0->unk5C;
    arg0->unk7C = (s32) arg0->unk60;
    var_r4_2 = 0;
    do {
        temp_r1_3 = (1 << var_r4_2) & func_080003A0(temp_r0_3);
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
            temp_r8 = func_080003DC(temp_r0_3, var_r4_2);
            sp3C = 0;
            var_r5_2 = 3;
loop_10:
            temp_r0_5 = func_08011650(__builtin_new(0x34F4), temp_r0_3, temp_r8, &sp3C);
            sp34 = temp_r0_5;
            if (sp3C == 0) {
                func_08003788(arg0, arg0 + ((var_r4_2 << 7) + 0x98));
                ((var_r4_2 * 4) + arg0)->unk198 = (s32) sp34->unk2210;
                if (sp34 != 0) {
                    func_080D4480(sp34, 3);
                }
            } else {
                sp34 = 0;
                __builtin_delete(temp_r0_5);
                if (0 != 0) {
                    func_080D4480(0, 3);
                }
                var_r5_2 -= 1;
                if (var_r5_2 != -1) {
                    goto loop_10;
                }
            }
        }
        var_r4_2 += 1;
    } while (var_r4_2 <= 1U);
    temp_r2_3 = func_08000488(temp_r0_3);
    if (arg0->unk8 != 0) {
        *sp54 = 0;
        *sp58 = (u8) ((u32) ((0 - temp_r2_3) | temp_r2_3) >> 0x1F);
        temp_r0_6 = arg0->unk8;
        var_r1_2 = 0;
        if ((temp_r0_6->unk2210 << 0x1F) != 0) {
            var_r1_2 = 1;
        }
        *sp5C = var_r1_2;
        func_08003DF0(arg0, 2, arg0->unk5C, arg0->unk60);
        *sp60 = (((u8) temp_r0_6->unk2210 >> 1) ^ 1) & 1;
        func_08003DF0(arg0, 3, arg0->unk5C, arg0->unk60);
        *sp64 = (((u8) temp_r0_6->unk2210 >> 2) ^ 1) & 1;
        func_08003DF0(arg0, 4, arg0->unk5C, arg0->unk60);
        *sp68 = (((u8) temp_r0_6->unk2210 >> 3) ^ 1) & 1;
        func_08003DF0(arg0, 5, arg0->unk5C, arg0->unk60);
    } else {
        arg0->unk80 = 1;
        *sp54 = 1;
        *sp58 = (u8) ((u32) ((0 - temp_r2_3) | temp_r2_3) >> 0x1F);
        temp_r4_3 = (*sp58 * 4) + arg0;
        var_r1_3 = 0;
        if ((temp_r4_3->unk198 << 0x1F) != 0) {
            var_r1_3 = 1;
        }
        *sp5C = var_r1_3;
        func_08003DF0(arg0, 2, arg0->unk5C, arg0->unk60);
        *sp60 = (((u8) temp_r4_3->unk198 >> 1) ^ 1) & 1;
        func_08003DF0(arg0, 3, arg0->unk5C, arg0->unk60);
        *sp64 = (((u8) temp_r4_3->unk198 >> 2) ^ 1) & 1;
        func_08003DF0(arg0, 4, arg0->unk5C, arg0->unk60);
        *sp68 = (((u8) temp_r4_3->unk198 >> 3) ^ 1) & 1;
        func_08003DF0(arg0, 5, arg0->unk5C, arg0->unk60);
    }
    temp_r1_4 = *sp40;
    if (temp_r1_4 != 0) {
        (*temp_r1_4)->unk8(temp_r1_4, 3);
    }
    return arg0;
}
