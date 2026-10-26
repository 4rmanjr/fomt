# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C76D4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C76D4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C76D4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C76D4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080C76D4/opencode/func.c" 2
s32 func_080088C4();
s32 func_08008B6C(void *, s32);
s32 func_08008C28(void *, s32);
s32 func_0805E860(void *, s32);
extern ? gUnk_08107FE0;

void func_080C76D4(void *arg0) {
    s32 *var_r0_2;
    s32 temp_r1_3;
    s32 temp_r6;
    s8 *var_r1;
    s8 temp_r0_10;
    s8 temp_r2;
    s8 temp_r2_2;
    s8 temp_r2_3;
    s8 var_r0;
    u32 temp_r0;
    u8 temp_r0_11;
    u8 temp_r0_12;
    u8 temp_r0_13;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;
    u8 temp_r0_9;
    u8 temp_r1;
    u8 temp_r1_2;

    temp_r6 = func_080088C4();
    temp_r0 = arg0->unk8BC - 4;
    switch (temp_r0) {
    case 0:
        temp_r0_2 = arg0->unk8B4;
        if ((u32) temp_r0_2 > 0x58U) {
            arg0->unk8B4 = (u8) (temp_r0_2 - 2);
            temp_r0_3 = arg0->unk8B8 - 2;
            arg0->unk8B8 = temp_r0_3;
            temp_r2 = (s8) temp_r0_3;
            switch (temp_r2) {
            case -16:
                arg0->unk8B8 = 0U;
                arg0->unk8B6 = (u8) (arg0->unk8B6 - 1);
                temp_r1 = 0x20 & temp_r6;
                if (temp_r1 != 0) {

                } else {
                    arg0->unk8BC = (s32) temp_r1;
                    var_r1 = arg0 + 0x8C4;
                    var_r0 = 1;
                    goto block_71;
                }
                break;
            case 0:
                temp_r1_2 = 0x20 & temp_r6;
                if (temp_r1_2 != 0) {

                } else {
                    arg0->unk8BC = (s32) temp_r1_2;
                    var_r1 = arg0 + 0x8C4;
                    var_r0 = 1;
                    goto block_71;
                }
                break;
            }
        } else if (temp_r0_2 != 0x58) {

        } else {
            arg0->unk8BC = 0;
            var_r1 = arg0 + 0x8C4;
            var_r0 = 1;
block_71:
            *var_r1 = var_r0;
        }
        break;
    case 1:
        temp_r0_4 = arg0->unk8B4;
        if ((u32) temp_r0_4 <= 0x97U) {
            arg0->unk8B4 = (u8) (temp_r0_4 + 2);
            temp_r0_5 = arg0->unk8B8 + 2;
            arg0->unk8B8 = temp_r0_5;
            temp_r2_2 = (s8) temp_r0_5;
            switch (temp_r2_2) {
            case 16:
                arg0->unk8B8 = 0U;
                arg0->unk8B6 = (u8) (arg0->unk8B6 + 1);
                if (((temp_r6 & temp_r2_2) << 0x18) != 0) {

                } else {
                    var_r0_2 = arg0 + 0x8BC;
                    goto block_29;
                }
                break;
            case 0:
                if (0x10 & temp_r6) {

                } else {
                    goto block_28;
                }
                break;
            }
        } else if (temp_r0_4 != 0x98) {

        } else {
block_28:
            var_r0_2 = arg0 + 0x8BC;
block_29:
            *var_r0_2 = 1;
            arg0->unk8C4 = 1;
        }
        break;
    case 2:
        temp_r0_6 = arg0->unk8B5;
        if ((u32) temp_r0_6 > 0x31U) {
            arg0->unk8B5 = (u8) (temp_r0_6 - 2);
            temp_r0_7 = arg0->unk8B9 - 2;
            arg0->unk8B9 = temp_r0_7;
            temp_r2_3 = (s8) temp_r0_7;
            switch (temp_r2_3) {
            case -16:
                arg0->unk8B9 = 0U;
                arg0->unk8B7 = (u8) (arg0->unk8B7 - 1);
                if (0x40 & temp_r6) {

                } else {
                    arg0->unk8BC = 2;
                    var_r1 = arg0 + 0x8C4;
                    var_r0 = 1;
                    goto block_71;
                }
                break;
            case 0:
                if (0x40 & temp_r6) {

                } else {
                    arg0->unk8BC = 2;
                    var_r1 = arg0 + 0x8C4;
                    var_r0 = 1;
                    goto block_71;
                }
                break;
            }
        } else if (temp_r0_6 != 0x31) {

        } else {
            arg0->unk8BC = 2;
            var_r1 = arg0 + 0x8C4;
            var_r0 = 1;
            goto block_71;
        }
        break;
    case 3:
        temp_r0_8 = arg0->unk8B5;
        if ((u32) temp_r0_8 <= 0x70U) {
            arg0->unk8B5 = (u8) (temp_r0_8 + 2);
            temp_r0_9 = arg0->unk8B9 + 2;
            arg0->unk8B9 = temp_r0_9;
            temp_r0_10 = (s8) temp_r0_9;
            switch (temp_r0_10) {
            case 16:
                arg0->unk8B9 = 0U;
                arg0->unk8B7 = (u8) (arg0->unk8B7 + 1);
                if (0x80 & temp_r6) {

                } else {
                    arg0->unk8BC = 3;
                    var_r1 = arg0 + 0x8C4;
                    var_r0 = 1;
                    goto block_71;
                }
                break;
            case 0:
                if (0x80 & temp_r6) {

                } else {
                    arg0->unk8BC = 3;
                    var_r1 = arg0 + 0x8C4;
                    var_r0 = 1;
                    goto block_71;
                }
                break;
            }
        } else if (temp_r0_8 != 0x71) {

        } else {
            arg0->unk8BC = 3;
            var_r1 = arg0 + 0x8C4;
            var_r0 = 1;
            goto block_71;
        }
        break;
    case 4:
        temp_r1_3 = (arg0->unk8B7 * 5) + arg0->unk8B6;
        temp_r0_11 = arg0->unk979;
        switch (temp_r0_11) {
        case 0:
            arg0->unk8C5 = 1;
            arg0->unk8B5 = (u8) (arg0->unk8B5 - 0xA);
            break;
        case 20:
            (arg0 + (temp_r1_3 * 4))->unk904 = 1;
            break;
        case 50:
            if (arg0->unk969 == 0) {
                (arg0 + (temp_r1_3 * 4))->unk905 = 1;
                func_08008B6C(arg0 + 0x820, 0x6C);
            }
            break;
        }
        temp_r0_12 = arg0->unk979 + 1;
        arg0->unk979 = temp_r0_12;
        if (temp_r0_12 == 0x3C) {
            arg0->unk8B5 = (u8) (arg0->unk8B5 + 0xA);
            arg0->unk8C5 = 0;
            arg0->unk979 = 0U;
            arg0->unk8BC = (s32) arg0->unk8C0;
            arg0->unk8C4 = 1;
            if (temp_r6 & 1) {
                arg0->unk968 = 0U;
            }
            if (arg0->unk97F == ((arg0->unk8B0 * 4) + &gUnk_08107FE0)->unk1) {
                arg0->unk97F = 0U;
                arg0->unk89C = 5;
                func_08008C28(arg0 + 0x810, 0x100);
                func_08008B6C(arg0 + 0x818, 0xBB);
            }
        }
        break;
    case 5:
        temp_r0_13 = arg0->unk97A + 1;
        arg0->unk97A = temp_r0_13;
        if (temp_r0_13 == 0x3C) {
            arg0->unk97A = 0U;
            arg0->unk8BC = (s32) arg0->unk8C0;
            arg0->unk8C4 = 1;
            arg0->unk728->unk10 = 0x100;
            func_0805E860(arg0->unk728, 6);
            if (temp_r6 & 1) {
                var_r1 = arg0 + 0x968;
                var_r0 = 0;
                goto block_71;
            }
        }
        break;
    }
    if ((arg0->unk968 == 0) && !(temp_r6 & 1)) {
        arg0->unk968 = 1U;
    }
}
