# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08086A08/Prodesk_341345/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08086A08/Prodesk_341345/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08086A08/Prodesk_341345/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08086A08/Prodesk_341345/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08086A08/Prodesk_341345/func.c" 2


s32 GetFirstSlotWithTool__C8RucksackUi(s32, s32);
s32 GetFirstSlotWith__C9ToolChestUi(s32, s32);
s32 GetId__C4Tool();
s8 GetTool__C9ToolStack(s32);
s32 IsEmpty__C9ToolStack(s32);
void *__builtin_new(s32);
s32 free();
s32 func_08008724();
void *func_08008910(void *);
void *func_08008918(void *);
void *func_08008940(void *);
s32 func_08008F0C(s32 *, void *, s32, s32);
s32 func_08009300(void *, void *);
s32 func_0800934C(void *, s32, s32, s32);
s32 func_0804E7A0(s32, void *, s32);
s32 func_0804E958(s32, void *, s32, s32);
s32 func_08075C88(s32, s16);
s32 func_08075E24(s32, s16);
s32 func_08085640(void *);
s32 func_08085F08(void *, s32);
s32 func_080C85A0(void *);
void *func_080D3BC0(s32);
void *malloc(s32);
extern s32 .L08086E30;
extern s32 .L08086E34;
extern s32 .L08086E38;
extern ? gUnk_080FFB90;

void func_08086A08(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    void *spC;
s32 sp20;
    s8 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 *sp9C;
    s32 spA0;
    s32 *spA8;
    s32 *spAC;
    void *spB0;
    s32 *temp_r2;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *temp_r2_6;
    s32 *temp_r2_7;
    s32 *temp_r2_8;
    s32 *temp_r2_9;
    s32 *var_r0;
    s32 temp_r0_11;
    s32 temp_r0_7;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r1_2;
    s32 var_r8;
    s32 var_sl;
    s8 *var_r0_3;
    u32 temp_r0;
    u32 temp_r0_10;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_8;
    u32 temp_r0_9;
    u32 var_r4;
    u32 var_sb;
    void *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2_10;
    void *temp_r4_3;
    void *temp_r5_3;
    void *temp_r6;
    void *var_ip;
    void *var_r0_2;
    void *var_r1;
    void *var_r2;
    void *var_r2_2;
    void *var_r5;

    func_08008724();
    func_080C85A0(arg0);
    temp_r0 = arg0->unk2A4;
    if (temp_r0 <= 0x27U) {
        temp_r2 = arg0 + 0x2A4 + ((temp_r0 * 4) + 4);
        if (temp_r2 != 0) {
            *temp_r2 = 0;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_2 = arg0->unk2A4;
    if (temp_r0_2 <= 0x27U) {
        temp_r2_2 = arg0 + 0x2A4 + ((temp_r0_2 * 4) + 4);
        if (temp_r2_2 != 0) {
            *temp_r2_2 = 1;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_3 = arg0->unk2A4;
    if (temp_r0_3 <= 0x27U) {
        temp_r2_3 = arg0 + 0x2A4 + ((temp_r0_3 * 4) + 4);
        if (temp_r2_3 != 0) {
            *temp_r2_3 = 2;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_4 = arg0->unk2A4;
    if (temp_r0_4 <= 0x27U) {
        temp_r2_4 = arg0 + 0x2A4 + ((temp_r0_4 * 4) + 4);
        if (temp_r2_4 != 0) {
            *temp_r2_4 = 3;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_5 = arg0->unk2A4;
    if (temp_r0_5 <= 0x27U) {
        temp_r2_5 = arg0 + 0x2A4 + ((temp_r0_5 * 4) + 4);
        if (temp_r2_5 != 0) {
            *temp_r2_5 = 4;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_6 = arg0->unk2A4;
    if (temp_r0_6 <= 0x27U) {
        temp_r2_6 = arg0 + 0x2A4 + ((temp_r0_6 * 4) + 4);
        if (temp_r2_6 != 0) {
            *temp_r2_6 = 5;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_7 = ~GetFirstSlotWithTool__C8RucksackUi(arg0->unk8 + 0x1C38, 0x49);
    var_r4 = (u32) ((0 - temp_r0_7) | temp_r0_7) >> 0x1F;
    if ((IsEmpty__C9ToolStack(arg0->unk8 + 0x1C34) << 0x18) == 0) {
        sp78 = GetTool__C9ToolStack(arg0->unk8 + 0x1C34);
        if (GetId__C4Tool() == 0x49) {
            var_r4 = 1;
        }
    }
    if (GetFirstSlotWith__C9ToolChestUi(arg0->unk8 + 0x380, 0x49) != -1) {
        var_r4 = 1;
    }
    if (var_r4 == 0) {
        temp_r0_8 = arg0->unk2A4;
        if (temp_r0_8 <= 0x27U) {
            temp_r2_7 = arg0 + 0x2A4 + ((temp_r0_8 * 4) + 4);
            if (temp_r2_7 != 0) {
                *temp_r2_7 = 6;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
    }
    temp_r0_9 = arg0->unk2A4;
    if (temp_r0_9 <= 0x27U) {
        temp_r2_8 = arg0 + 0x2A4 + ((temp_r0_9 * 4) + 4);
        if (temp_r2_8 != 0) {
            *temp_r2_8 = 7;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    temp_r0_10 = arg0->unk2A4;
    if (temp_r0_10 <= 0x27U) {
        temp_r2_9 = arg0 + 0x2A4 + ((temp_r0_10 * 4) + 4);
        if (temp_r2_9 != 0) {
            *temp_r2_9 = 8;
        }
        arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
    }
    var_sb = 0;
    spAC = &sp0 + 0x7C;
    spA8 = &sp0 + 0x20;
loop_43:
    temp_r1 = (var_sb * 0x14) + &gUnk_080FFB90;
    spC.unk0 = temp_r1->unk0;
    spC.unk4 = (s32) temp_r1->unk4;
    spC.unk8 = (s32) temp_r1->unk8;
    spC.unkC = (s32) temp_r1->unkC;
    (&spC + 0xC)->unk4 = (s32) (temp_r1 + 0xC)->unk4;
    temp_r5 = var_sb * 0x304;
    sp7C = 0xC;
    spAC->unk2 = 2;
    func_0804E7A0(sp7C, temp_r5 + arg0 + 0x770 + 4, 0);
    if ((sp1C != 0) && (sp1C != 2)) {
        sp80.unk0 = 0xC;
        sp80.unk2 = 2;
        sp0 = sp10;
        sp4 = 0;
        sp8 = 1;
        func_0804E958(sp80, temp_r5 + arg0 + 0x770 + 4, 0, 0);
    }
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&sp20, (var_sb * 0x304) + arg0 + 0x774, (((var_sb * 0x18) + 0xD0) << 5) + 0x06000000, 0x300);
    sp9C = spA8;
    temp_r1_2 = temp_r6->unk4;
    if (temp_r1_2 != temp_r6->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp9C->unk0;
            temp_r1_2->unk4 = (s32) sp9C->unk4;
            temp_r1_2->unk8 = (s32) sp9C->unk8;
            temp_r1_2->unkC = (s32) sp9C->unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        var_sb += 1;
    } else {
        sp88 = 1;
        temp_r4 = (s32) (temp_r1_2 - temp_r6->unk0) >> 4;
        sp84 = temp_r4;
        var_r0 = &sp84;
        if ((u32) temp_r4 < 1U) {
            var_r0 = &sp88;
        }
        temp_r0_11 = temp_r4 + *var_r0;
        if (temp_r0_11 != 0) {
            temp_r4_2 = temp_r0_11 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_sl = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        spB0 = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_ip = var_r0_2;
        var_sb += 1;
        if (var_r2 != temp_r1_2) {
            do {
                if (var_ip != 0) {
                    var_ip->unk0 = (s32) var_r2->unk0;
                    var_ip->unk4 = (s32) var_r2->unk4;
                    var_ip->unk8 = (s32) var_r2->unk8;
                    var_ip->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_ip += 0x10;
            } while (var_r2 != temp_r1_2);
        }
        if (sp88 == 1) {
            if (var_ip != 0) {
                var_ip->unk0 = (s32) sp9C->unk0;
                var_ip->unk4 = (s32) sp9C->unk4;
                var_ip->unk8 = (s32) sp9C->unk8;
                var_ip->unkC = (s32) sp9C->unkC;
            }
            var_r5 = var_ip + 0x10;
        } else {
            var_r8 = sp88;
            var_r2_2 = var_ip;
            if (sp88 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp9C->unk0;
                        var_r2_2->unk4 = (s32) sp9C->unk4;
                        var_r2_2->unk8 = (s32) sp9C->unk8;
                        var_r2_2->unkC = (s32) sp9C->unkC;
                    }
                    var_r8 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r8 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2_10 = temp_r6->unk4;
        temp_r0_12 = temp_r6->unk0;
        var_r1 = temp_r0_12;
        if (temp_r0_12 != temp_r2_10) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_10);
        }
        if (temp_r0_12 != 0) {
            free();
        }
        temp_r6->unk0 = spB0;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (spB0 + var_sl);
    }
    if (var_sb <= 8U) {
        goto loop_43;
    }
    var_r1_2 = 0xF;
    var_r0_3 = arg0 + .L08086E30;
    do {
        *var_r0_3 = 0;
        var_r0_3 -= 0x84;
        var_r1_2 -= 1;
    } while (var_r1_2 >= 0);
    temp_r5_2 = func_08085640(arg0);
    func_08075C88(arg0->unk1C, arg0->unkC);
    func_08075E24(arg0->unk1C, (s16) ((temp_r5_2 + 8) * 8));
    func_08085F08(arg0, ((arg0->unk10 * 4) + arg0)->unk2A8);
    temp_r0_13 = func_08008918(arg0);
    spC.unk0 = 0x3F;
    temp_r0_13->unk50 = 0x3F;
    temp_r4_3 = __builtin_new(0x10);
    temp_r1_3 = func_08008918(arg0);
    temp_r4_3->unk0 = 0;
    temp_r4_3->unk4 = 0;
    temp_r4_3->unk8 = (s32) .L08086E34;
    temp_r5_3 = temp_r4_3 + 0xC;
    func_08009300(temp_r5_3, temp_r1_3);
    spC = temp_r4_3;
    func_0800934C(temp_r5_3, .L08086E38, 1, 1);
    temp_r0_14 = func_08008940(arg0);
    temp_r0_14->unk8->unk10(temp_r0_14, spC);
    spA0 = 0;
}
