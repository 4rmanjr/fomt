# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BEAD4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BEAD4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BEAD4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BEAD4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080BEAD4/opencode/func.c" 2
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088DC(void *);
s16 *func_08008918(void *);
s32 func_08008920(void *);
void *func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08008B6C(void *, s32);
s32 func_08008B88(void *, s32);
s32 func_0800934C(void *, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
s32 func_08050D34(s32);
u32 func_08050D3C(s32, s32, s32, s16 *);
s32 func_08050D5C(s32);
s32 func_08050D74(s32);
s32 func_08050D8C(s32, ? *);
s32 func_08050DD8(s32);
s32 func_08050DE4(s32);
s32 func_08050DF0(s32);
s32 func_08050E30(s32, ? *, ? *, ? *);
s32 func_08050E50(s32, u16);
s32 func_080BDF40(void *);
u16 func_080C0B58(void *);
extern ? gUnk_08107DD8;
extern ? gUnk_08107DF4;
extern ? gUnk_08107DF8;
extern ? gUnk_08107DFC;
extern ? gUnk_08107E24;
extern ? gUnk_08107E58;
extern ? gUnk_08107EC8;
extern ? gUnk_08107F18;
extern ? gUnk_08107F2C;
extern ? gUnk_08107F3C;
extern ? gUnk_08107F4C;

void func_080BEAD4(void *arg0) {
    void *sp0;
    s32 sp4;
    void *sp8;
    s16 spC;
    u32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s16 *temp_r0;
    s16 *temp_r5;
    s16 *temp_r5_2;
    s32 *temp_r2;
    s32 *var_r1_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r1;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r6;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sb_2;
    s32 temp_sl;
    s32 temp_sl_2;
    s32 var_r0;
    s8 *var_r1;
    u16 temp_r0_9;
    u32 temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r4;
    void *temp_r4_3;

    sp10 = 0;
    sp14 = 0;
    arg0->unk611 = 0U;
    arg0->unk612 = (u8) sp0.unk14;
    sp18 = 0;
    sp1C = 0x8500;
    temp_r0 = func_08008918(arg0);
    spC = 0x1740;
    *temp_r0 = 0x1740;
    temp_sl = arg0->unk418;
    temp_sb = func_080088DC(arg0);
    sp20 = func_08008920(arg0);
    temp_r5 = func_08008918(arg0);
    temp_r4 = func_08008940(arg0);
    temp_r0_2 = func_0800894C(arg0);
    sp0 = temp_r4;
    sp4 = temp_r0_2;
    sp8 = arg0 + 0x57C;
    func_08050D3C(temp_sl, temp_sb, sp20, temp_r5);
    temp_r4_2 = arg0->unk418;
    func_08050E50(temp_r4_2, func_080C0B58(arg0));
loop_93:
    if (arg0->unk5A0 == 0) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_r6 = func_08050D34(arg0->unk418);
        temp_sb_2 = arg0->unk418;
        temp_r8 = func_080088DC(arg0);
        temp_sl_2 = func_08008920(arg0);
        temp_r5_2 = func_08008918(arg0);
        temp_r4_3 = func_08008940(arg0);
        temp_r0_3 = func_0800894C(arg0);
        sp0 = temp_r4_3;
        sp4 = temp_r0_3;
        sp8 = arg0 + 0x57C;
        temp_r0_4 = func_08050D3C(temp_sb_2, temp_r8, temp_sl_2, temp_r5_2);
        switch (temp_r0_4) {
        case 1:
        case 2:
        case 5:
        case 6:
            break;
        case 0:
            if (sp10 == 8) {
                arg0->unk5A0 = 1;
            } else {
                func_08050D5C(arg0->unk418);
                if (sp10 != 5) {

                } else {
                    temp_r2 = arg0->unk43C;
                    temp_r1 = *temp_r2;
                    if ((s32) ((0 - temp_r1) | temp_r1) >= 0) {
                        func_08009378(temp_r2 + 0xC, 0x889, 1, 1);
                        temp_r0_5 = func_08008940(arg0);
                        temp_r0_5->unk8->unk10(temp_r0_5, arg0->unk43C);
                    }
loop_12:
                    temp_r0_6 = *arg0->unk43C;
                    if ((s32) ((0 - temp_r0_6) | temp_r0_6) < 0) {
                        func_080087C8(arg0);
                        func_080BDF40(arg0);
                        goto loop_12;
                    }
                    func_0800934C(arg0->unk43C + 0xC, 0x889, 1, 1);
                    temp_r0_7 = func_08008940(arg0);
                    temp_r0_7->unk8->unk10(temp_r0_7, arg0->unk43C);
                }
            }
            break;
        case 3:
            switch (temp_r6) {
            case 6:
                temp_r0_8 = func_08050DF0(arg0->unk418);
                switch (temp_r0_8) {
                case 1:
                    if (sp10 == 0) {
                        sp10 = 1;
                    } else if (sp10 == 6) {
                        sp10 = 7;
                    }
                    break;
                case 2:
                    if (sp10 == 0) {
                        sp10 = 7;
                    } else if (sp10 == 6) {
                        sp10 = 1;
                        sp18 = 0;
                    }
                    break;
                }
                break;
            default:
                func_08050D74(arg0->unk418);
                break;
            case 1:
                switch (sp10) {
                case 0:
                    sp0 = 0;
                    sp4 = 0;
                    sp8 = 0;
                    func_08050E30(arg0->unk418, &gUnk_08107DD8, &gUnk_08107DF4, &gUnk_08107DF8);
                    break;
                case 1:
                    func_08050D8C(arg0->unk418, &gUnk_08107DFC);
                    sp10 += 1;
                    break;
                case 2:
                    func_08050D8C(arg0->unk418, &gUnk_08107E24);
                    sp10 += 1;
                    break;
                case 3:
                    func_08050D8C(arg0->unk418, &gUnk_08107E58);
                    sp14 = 0;
                    sp10 += 1;
                    break;
                case 4:
                    func_08050D8C(arg0->unk418, &gUnk_08107EC8);
                    func_08050DD8(arg0->unk418);
                    sp14 = 0;
                    sp10 += 1;
                    arg0->unk611 = 0U;
                    break;
                case 5:
                    sp0 = 0;
                    sp4 = 0;
                    sp8 = 0;
                    func_08050E30(arg0->unk418, &gUnk_08107F18, &gUnk_08107F2C, &gUnk_08107F3C);
                    arg0->unk612 = 0U;
                    arg0->unk5AC = 0;
                    arg0->unk609 = 0;
                    arg0->unk60E = 1;
                    sp10 += 1;
                    sp14 = 0;
                    break;
                case 7:
                    func_08050D8C(arg0->unk418, &gUnk_08107F4C);
                    sp10 += 1;
                    sp14 = 0;
                    break;
                }
                break;
            }
            break;
        case 4:
            if ((temp_r6 == 5) && (sp18 == 0) && (sp10 == 4)) {
                func_08050DD8(arg0->unk418);
            }
            break;
        }
        temp_r4_4 = sp10 - 1;
        switch (temp_r4_4) {
        case 4:
            if (arg0->unk612 == 0) {
                func_08008B88(arg0 + 0x580, 0xBD);
            }
            switch (sp14) {
            case 0x0:
                arg0->unk612 = (u8) sp14;
                arg0->unk5AC = sp14;
                var_r1 = arg0 + 0x60E;
block_84:
                *var_r1 = 1;
                break;
            case 0x5A:
                var_r1_2 = arg0 + 0x5AC;
                var_r0 = 3;
block_83:
                *var_r1_2 = var_r0;
                var_r1 = arg0 + 0x60E;
                goto block_84;
            case 0x3C:
            case 0x78:
                var_r1_2 = arg0 + 0x5AC;
                var_r0 = 2;
                goto block_83;
            case 0x1E:
            case 0x96:
                arg0->unk5AC = 1;
                arg0->unk60E = 1;
                break;
            case 0xB4:
                arg0->unk612 = 1U;
                arg0->unk60E = 1;
                func_08008B6C(arg0 + 0x580, 0xBC);
                break;
            case 0xD2:
                func_08050DE4(arg0->unk418);
                sp14 = -1;
                break;
            }
            sp14 += 1;
            break;
        case 2:
            if (sp14 == 0) {
                arg0->unk609 = 1;
                arg0->unk60E = 1;
                sp14 = 1;
            }
            func_08008B88(arg0 + 0x580, 0xBD);
            break;
        case 3:
            if (arg0->unk611 == 0) {
                func_08008B88(arg0 + 0x580, 0xBD);
            }
            switch (sp14) {
            case 0x1E:
                arg0->unk5AC = 1;
                arg0->unk60E = 1;
                break;
            case 0x3C:
                arg0->unk5AC = 2;
block_65:
                arg0->unk60E = 1;
                break;
            case 0x5A:
                arg0->unk5AC = temp_r4_4;
                goto block_65;
            case 0x78:
                arg0->unk611 = 1U;
                arg0->unk60E = 1;
                func_08008B6C(arg0 + 0x580, 0xC7);
                break;
            default:
                if ((u32) (sp14 - 0x79) <= 0x1CU) {
                    temp_r0_9 = sp1C + 0x20;
                    sp1C = (s32) temp_r0_9;
                    arg0->unk608 = (s8) ((u32) (temp_r0_9 << 0x10) >> 0x18);
                } else if (sp14 == 0x96) {
                    sp1C = 0x8500;
                    arg0->unk608 = 0x85;
                    arg0->unk611 = 0U;
                    arg0->unk5AC = 0;
                    arg0->unk60E = 1;
                    sp14 = 0;
                    sp18 = 1;
                    func_08050DE4(arg0->unk418);
                }
                break;
            }
            sp14 += 1;
            break;
        }
        func_080BDF40(arg0);
        goto loop_93;
    }
}
