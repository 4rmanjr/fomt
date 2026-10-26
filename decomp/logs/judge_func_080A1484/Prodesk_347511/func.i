# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1484/Prodesk_347511/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1484/Prodesk_347511/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1484/Prodesk_347511/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1484/Prodesk_347511/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A1484/Prodesk_347511/func.c" 2
s32 SubtractFriendship__3Npci(s32, s32);
s32 SubtractLove__12Bachelorettei(s32, s32);
s32 func_080A06B0(s32, u32);
s32 func_080A0878(s32, u32);

void func_080A1484(s32 arg0, u16 *arg1, void *arg2) {
    s32 temp_r0_2;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r4;
    u32 temp_r0;
    u32 temp_r0_3;
    u32 var_r0;
    u32 var_r5;

    temp_r0 = (u32) (*arg1 << 0x16) >> 0x16;
    switch (temp_r0) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        var_r5 = 1;
        do {
            var_r1 = 1;
            switch (var_r5) {
            case 34:
                var_r0 = arg2->unk3B << 0x1B;
block_11:
                if ((var_r0 >> 0x1E) != 2) {

                } else {
                default:
block_14:
                    if (var_r1 != 0) {
                        temp_r0_2 = func_080A06B0(arg0, var_r5);
                        if (temp_r0_2 != 0) {
                            SubtractFriendship__3Npci(temp_r0_2, 1);
                        }
                    }
                }
                break;
            case 33:
                var_r0 = arg2->unk3A << 0x19;
                goto block_11;
            case 32:
                var_r1 = 0;
                goto block_14;
            }
            temp_r0_3 = var_r5 - 3;
            switch (temp_r0_3) {
            case 0:
            case 9:
            case 16:
            case 18:
            case 22:
            case 28:
                SubtractLove__12Bachelorettei(func_080A0878(arg0, var_r5), 0xC8);
                break;
            }
            var_r5 += 1;
        } while (var_r5 <= 0x2AU);
        return;
    case 10:
    case 11:
        SubtractFriendship__3Npci(arg0 + 0x70, 5);
        SubtractFriendship__3Npci(arg0 + 0x84, 5);
        var_r4 = arg0 + 0x98;
block_31:
        SubtractFriendship__3Npci(var_r4, 5);
        SubtractLove__12Bachelorettei(var_r4, 0x1F4);
        return;
    case 12:
        var_r1_2 = 0x228;
block_38:
        var_r0_2 = arg0 + var_r1_2;
block_39:
        SubtractFriendship__3Npci(var_r0_2, 5);
        return;
    case 13:
        var_r1_2 = 0x2A8;
        goto block_38;
    case 14:
        SubtractFriendship__3Npci(arg0 + 0x194, 5);
        SubtractFriendship__3Npci(arg0 + 0x1A8, 5);
        var_r0_3 = 0x210;
block_30:
        var_r4 = arg0 + var_r0_3;
        goto block_31;
    case 15:
    case 16:
        SubtractFriendship__3Npci(arg0 + 0x1BC, 5);
        SubtractFriendship__3Npci(arg0 + 0x1D0, 5);
        var_r0_3 = 0x1E4;
        goto block_30;
    case 19:
    case 20:
        SubtractFriendship__3Npci(arg0 + 0x1FC, 5);
        var_r0_3 = 0x210;
        goto block_30;
    case 21:
    case 22:
    case 23:
        SubtractFriendship__3Npci(arg0 + 0x250, 5);
        var_r0_3 = 0x264;
        goto block_30;
    case 24:
    case 25:
    case 26:
    case 27:
        SubtractFriendship__3Npci(arg0 + 0x12C, 5);
        SubtractFriendship__3Npci(arg0 + 0x140, 5);
        var_r0_3 = 0x154;
        goto block_30;
    case 28:
        SubtractFriendship__3Npci(arg0 + 0x33C, 5);
        SubtractFriendship__3Npci(arg0 + 0x360, 5);
        SubtractFriendship__3Npci(arg0 + 0x384, 5);
        SubtractFriendship__3Npci(arg0 + 0x3A8, 5);
        SubtractFriendship__3Npci(arg0 + 0x3CC, 5);
        SubtractFriendship__3Npci(arg0 + 0x3F0, 5);
        var_r1_2 = 0x414;
        goto block_38;
    case 30:
        SubtractFriendship__3Npci(arg0 + 0x16C, 5);
        var_r1_2 = 0x180;
        goto block_38;
    case 31:
    case 32:
    case 33:
    case 34:
        SubtractFriendship__3Npci(arg0 + 0x104, 5);
        var_r1_2 = 0x118;
        goto block_38;
    case 36:
        var_r1_2 = 0x27C;
        goto block_38;
    case 38:
        SubtractFriendship__3Npci(arg0 + 0xD8, 5);
        var_r0_2 = arg0 + 0xF0;
        goto block_39;
    case 40:
        var_r1_2 = 0x290;
        goto block_38;
    case 41:
    case 42:
        SubtractFriendship__3Npci(arg0 + 0xB0, 5);
        SubtractFriendship__3Npci(arg0 + 0xC4, 5);

        return;
    }
}
