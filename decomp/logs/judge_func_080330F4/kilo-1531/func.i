# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080330F4/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080330F4/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080330F4/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080330F4/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080330F4/kilo-1531/func.c" 2
s32 GetArticle__C12RucksackItem(s32 *);
s32 GetFood__C12RucksackItem(s32 *, ? *);
s32 GetKind__C12RucksackItem(s32 *);
s32 GetPrice__C7Product(s32 *);
s32 IsEmpty__C12RucksackItem(s32 *);
s32 __7ProductG4Food(s32 *, s32);
s32 __7ProductG7Article(s32 *, s32);
s32 func_08032BB4(s32 *, s32, s32, s32);
s32 func_0809E968(s32, ? *);
s32 method_0800A4A4__9FieldPlot(s32 *, s32 *);
s32 method_0800C554__4Coop(s32 *);
s32 method_0800CE58__4Barn(s32 *);
s32 smethod_08009ADC__4Farm(s32 *);
s32 smethod_08009AE8__4Farm(s32 *);

void *func_080330F4(void *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
s32 sp14;
s32 sp18;
    s32 sp1C;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    void *sp44;
    s32 sp48;
    u32 sp4C;
    s32 sp50;
    s32 *sp54;
    u32 sp58;
    s32 *sp5C;
    u32 sp60;
    s32 sp64;
    u32 sp68;
    ? *var_r0;
    s16 temp_sl;
    s32 *temp_r4;
    s32 *var_r0_2;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r1;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_6;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r5;
    s32 var_r6_2;
    s8 var_r6;
    s8 var_r7;
    s8 var_r7_2;
    s8 var_sb;
    u32 temp_r0_2;
    u32 temp_r1_2;
    u32 temp_r1_5;
    u32 var_r1;
    u32 var_r3;

    sp44 = arg0;
    spC.unk0 = (u8) (-0x10 & spC.unk0);
    sp48 = (s32) (s16) (((arg3->unk2 & 0x3FF) << 6) | ((u8) arg3->unk1 >> 2));
    temp_sl = ((arg3->unk4 & 0x3FF) << 6) | ((u8) arg3->unk3 >> 2);
    switch (arg4) {
    case 1:
        sp58 = 0;
        var_r7 = 0;
        do {
            var_r6 = 0;
            var_r5 = (0 - sp48) + 0x118;
loop_29:
            temp_r1 = *(((var_r6 + (var_r7 * 0x2B)) * 4) + (arg1 + 0x9C8));
            var_r3 = 0;
            if ((((u32) (temp_r1 << 0x1E) >> 0x1E) == 1) && ((u32) (((u32) (temp_r1 << 0x14) >> 0x1C) - 1) <= 3U)) {
                var_r3 = (u32) (0 - (((u32) (temp_r1 << 0x18) >> 0x1A) ^ 0x14)) >> 0x1F;
            }
            if ((var_r3 != 0) && ((temp_r0 = ((var_r7 * 0x10) + 0xB8) - temp_sl, temp_r1_2 = (var_r5 * var_r5) + (temp_r0 * temp_r0), ((spC.unk0 << 0x1C) == 0)) || (temp_r1_2 < sp58))) {
                sp14.unk0 = (u8) ((-0x10 & sp14.unk0) | 1);
                sp14.unk1 = var_r6;
                sp14.unk2 = var_r7;
                sp68 = temp_r1_2;
                if ((func_0809E968(arg5, &sp14) << 0x18) == 0) {
                    spC.unk0 = (s32) sp14.unk0;
                    spC.unk4 = (s32) sp14.unk4;
                    sp58 = sp68;
                }
            }
            var_r5 += 0x10;
            var_r6 += 1;
            if ((u32) var_r6 <= 0x2AU) {
                goto loop_29;
            }
            var_r7 += 1;
        } while ((u32) var_r7 <= 0x18U);
        break;
    case 2:
        smethod_08009ADC__4Farm(&sp24);
        sp28 = sp24;
        smethod_08009AE8__4Farm(&sp2C);
        sp30 = sp2C;
        method_0800CE58__4Barn(&sp34);
        sp38 = sp34;
        sp5C = &sp0 + 0x38;
        method_0800C554__4Coop(&sp3C);
        sp40 = sp3C;
        temp_r0_2 = (u32) (arg3->unk0 << 0x16) >> 0x16;
        switch (temp_r0_2) {
        case 17:
            sp0 = sp48;
            sp4 = (s32) temp_sl;
            sp8 = arg5;
            func_08032BB4(&sp14, arg1, arg2, 0x11);
            spC.unk0 = (s32) sp14.unk0;
            spC.unk4 = (s32) sp14.unk4;
            if ((spC.unk0 << 0x1C) == 0) {
                sp0 = (s32) sp30.unk0;
                sp4 = (s32) sp30.unk2;
                sp8 = arg5;
                func_08032BB4(&sp14, arg1, arg2, 2);
                spC.unk0 = (s32) sp14.unk0;
                spC.unk4 = (s32) sp14.unk4;
                if ((spC.unk0 << 0x1C) == 0) {
                    sp0 = (s32) sp5C->unk0;
                    sp4 = (s32) sp5C->unk2;
                    sp8 = arg5;
                    func_08032BB4(&sp14, arg1, arg2, 0x25);
                    spC.unk0 = (s32) sp14.unk0;
                    spC.unk4 = (s32) sp14.unk4;
                }
            }
            break;
        case 2:
            sp0 = sp48;
            sp4 = (s32) temp_sl;
            sp8 = arg5;
            func_08032BB4(&sp14, arg1, arg2, 2);
            spC.unk0 = (s32) sp14.unk0;
            spC.unk4 = (s32) sp14.unk4;
            if ((spC.unk0 << 0x1C) != 0) {

            } else {
                temp_r3 = sp28.unk0 - sp48;
                temp_r1_3 = sp28.unk2 - temp_sl;
                temp_r3_2 = sp30.unk0 - sp48;
                temp_r1_4 = sp30.unk2 - temp_sl;
                if ((u32) ((temp_r3 * temp_r3) + (temp_r1_3 * temp_r1_3)) <= (u32) ((temp_r3_2 * temp_r3_2) + (temp_r1_4 * temp_r1_4))) {
                    sp0 = (s32) sp5C->unk0;
                    sp4 = (s32) sp5C->unk2;
                    sp8 = arg5;
                    var_r3_2 = 0x25;
block_56:
                    func_08032BB4(&sp14, arg1, arg2, var_r3_2);
                    spC.unk0 = (s32) sp14.unk0;
                    spC.unk4 = (s32) sp14.unk4;
                    if ((spC.unk0 << 0x1C) == 0) {
                        sp0 = (s32) sp40.unk0;
                        sp4 = (s32) sp40.unk2;
                        sp8 = arg5;
                        var_r0 = &sp14;
                        var_r3_3 = 0x11;
                        goto block_58;
                    }
                } else {
                    sp0 = (s32) sp40.unk0;
                    sp4 = (s32) sp40.unk2;
                    sp8 = arg5;
                    func_08032BB4(&sp14, arg1, arg2, 0x11);
                    spC.unk0 = (s32) sp14.unk0;
                    spC.unk4 = (s32) sp14.unk4;
                    if ((spC.unk0 << 0x1C) != 0) {

                    } else {
                        sp0 = (s32) sp5C->unk0;
                        sp4 = (s32) sp5C->unk2;
                        sp8 = arg5;
                        var_r0 = &sp14;
                        var_r3_3 = 0x25;
block_58:
                        func_08032BB4(var_r0, arg1, arg2, var_r3_3);
                        spC.unk0 = (s32) sp14.unk0;
                        spC.unk4 = (s32) sp14.unk4;
                    }
                }
            }
            break;
        case 37:
            sp0 = sp48;
            sp4 = (s32) temp_sl;
            sp8 = arg5;
            func_08032BB4(&sp14, arg1, arg2, 0x25);
            spC.unk0 = (s32) sp14.unk0;
            spC.unk4 = (s32) sp14.unk4;
            if ((spC.unk0 << 0x1C) == 0) {
                sp0 = (s32) sp28.unk0;
                sp4 = (s32) sp28.unk2;
                sp8 = arg5;
                var_r3_2 = 2;
                goto block_56;
            }
            break;
        }
        break;
    case 0:
        sp4C = 0;
        var_sb = 0;
        sp50 = arg1 + 0x9C8;
        sp54 = &sp0 + 0x20;
loop_9:
        var_r7_2 = 0;
        sp64 = var_sb * 2;
        sp60 = var_sb + 1;
        var_r6_2 = (0 - sp48) + 0x118;
        do {
            temp_r0_3 = ((sp64 + 0x17) * 8) - temp_sl;
            temp_r1_5 = (var_r6_2 * var_r6_2) + (temp_r0_3 * temp_r0_3);
            if (((spC.unk0 << 0x1C) == 0) || (temp_r1_5 < sp4C)) {
                temp_r1_6 = *(sp50 + ((var_r7_2 + (0x2B * var_sb)) * 4));
                if ((((u32) (temp_r1_6 << 0x14) >> 0x1C) == 5) && (sp1C = temp_r1_6, method_0800A4A4__9FieldPlot(&sp14, &sp1C), ((IsEmpty__C12RucksackItem(&sp14) << 0x18) == 0))) {
                    temp_r0_4 = GetKind__C12RucksackItem(&sp14);
                    if (temp_r0_4 != 0) {
                        if (temp_r0_4 != 1) {
                            goto block_16;
                        }
                        temp_r4 = &sp0 + 0x21;
                        __7ProductG7Article(temp_r4, GetArticle__C12RucksackItem(&sp14));
                        var_r0_2 = temp_r4;
                        goto block_19;
                    }
                    GetFood__C12RucksackItem(&sp18, &sp14);
                    __7ProductG4Food(sp54, (sp0.unk1A << 0x10) | ((sp18.unk1 << 8) | sp18.unk0));
                    var_r0_2 = sp54;
block_19:
                    temp_r0_5 = GetPrice__C7Product(var_r0_2);
                    var_r1 = (u32) ((0 - temp_r0_5) | temp_r0_5) >> 0x1F;
                } else {
block_16:
                    var_r1 = 0;
                }
                if (var_r1 != 0) {
                    sp14.unk0 = (u8) ((-0x10 & sp14.unk0) | 2);
                    sp14.unk1 = var_r7_2;
                    sp14.unk2 = var_sb;
                    if ((func_0809E968(arg5, &sp14) << 0x18) == 0) {
                        spC.unk0 = (s32) sp14.unk0;
                        spC.unk4 = (s32) sp14.unk4;
                        sp4C = temp_r1_5;
                    }
                }
            }
            var_r6_2 += 0x10;
            var_r7_2 += 1;
        } while ((u32) var_r7_2 <= 0x2AU);
        var_sb = (s8) sp60;
        if (sp60 <= 0x18U) {
            goto loop_9;
        }
        break;
    }
    sp44->unk0 = (s32) spC.unk0;
    sp44->unk4 = (s32) spC.unk4;
    return sp44;
}
