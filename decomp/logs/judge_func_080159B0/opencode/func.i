# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080159B0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080159B0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080159B0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080159B0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080159B0/opencode/func.c" 2
s32 func_0809CF34(s32 *, s32, s32, s32);

void func_080159B0(void *arg0, s32 arg1, s32 arg2) {
    ? *sp0;
    u32 sp4;
    u32 sp8;
s32 spC;
s32 sp3C;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
s32 sp54;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
s32 sp6C;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
s32 sp84;
    ? *var_r0_13;
    ? *var_r3;
    s16 var_r0;
    s16 var_r0_10;
    s16 var_r0_11;
    s16 var_r0_12;
    s16 var_r0_2;
    s16 var_r0_3;
    s16 var_r0_4;
    s16 var_r0_5;
    s16 var_r0_6;
    s16 var_r0_7;
    s16 var_r0_8;
    s16 var_r0_9;
    s16 var_r1_10;
    s16 var_r1_12;
    s16 var_r1_13;
    s16 var_r1_14;
    s16 var_r1_15;
    s16 var_r1_2;
    s16 var_r1_3;
    s16 var_r1_4;
    s16 var_r1_5;
    s16 var_r1_7;
    s16 var_r1_8;
    s16 var_r1_9;
    s32 var_r1;
    s32 var_r1_11;
    s32 var_r1_6;
    u16 temp_r1;
    u16 temp_r1_2;
    u16 temp_r1_3;
    void **temp_r0;
    void **temp_r0_3;
    void **temp_r0_5;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r1_4;
    void *temp_r7;

    temp_r7 = arg0->unk4;
    sp8 = 0;
    temp_r0 = temp_r7->unkA8;
    temp_r0_2 = (*temp_r0)->unk40(temp_r0, 0x4A);
    if (temp_r0_2 == 0) {

    } else {
        temp_r1 = temp_r0_2->unk4;
        if ((arg1 == 0) && ((s32) temp_r1 > 0x33) && ((s32) temp_r1 <= 0x133)) {
            if (arg2 == (temp_r1 - 0x34)) {
                var_r1 = 1;
            } else {
                goto block_11;
            }
        } else if ((arg1 != 1) || ((s32) temp_r1 <= 0x133) || ((s32) temp_r1 > 0x233) || (var_r1 = 1, (arg2 != (temp_r1 + 0xFFFFFECC)))) {
block_11:
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            temp_r0_2->unk14->unkC(&sp3C, temp_r0_2);
            var_r0 = sp3C.unk0;
            if ((s32) var_r0 < 0) {
                var_r0 += 7;
            }
            var_r1_2 = sp3C.unk2;
            if ((s32) var_r1_2 < 0) {
                var_r1_2 += 7;
            }
            sp44.unk0 = (s8) (var_r0 >> 3);
            sp44.unk1 = (s8) (var_r1_2 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp44;
                }
                sp8 += 1;
            }
            var_r0_2 = sp3C.unk4;
            if ((s32) var_r0_2 < 0) {
                var_r0_2 += 7;
            }
            var_r1_3 = sp3C.unk2;
            if ((s32) var_r1_3 < 0) {
                var_r1_3 += 7;
            }
            sp48.unk0 = (s8) (var_r0_2 >> 3);
            sp48.unk1 = (s8) (var_r1_3 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp48;
                }
                sp8 += 1;
            }
            var_r0_3 = sp3C.unk0;
            if ((s32) var_r0_3 < 0) {
                var_r0_3 += 7;
            }
            var_r1_4 = sp3C.unk6;
            if ((s32) var_r1_4 < 0) {
                var_r1_4 += 7;
            }
            sp4C.unk0 = (s8) (var_r0_3 >> 3);
            sp4C.unk1 = (s8) (var_r1_4 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp4C;
                }
                sp8 += 1;
            }
            var_r0_4 = sp3C.unk4;
            if ((s32) var_r0_4 < 0) {
                var_r0_4 += 7;
            }
            var_r1_5 = sp3C.unk6;
            if ((s32) var_r1_5 < 0) {
                var_r1_5 += 7;
            }
            sp50.unk0 = (s8) (var_r0_4 >> 3);
            sp50.unk1 = (s8) (var_r1_5 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp50;
                }
                sp8 += 1;
            }
        }
    }
    temp_r0_3 = temp_r7->unkA8;
    temp_r0_4 = (*temp_r0_3)->unk40(temp_r0_3, 0x2B);
    if (temp_r0_4 == 0) {

    } else {
        temp_r1_2 = temp_r0_4->unk4;
        if ((arg1 == 0) && ((s32) temp_r1_2 > 0x33) && ((s32) temp_r1_2 <= 0x133)) {
            if (arg2 == (temp_r1_2 - 0x34)) {
                var_r1_6 = 1;
            } else {
                goto block_56;
            }
        } else if ((arg1 != 1) || ((s32) temp_r1_2 <= 0x133) || ((s32) temp_r1_2 > 0x233) || (var_r1_6 = 1, (arg2 != (temp_r1_2 + 0xFFFFFECC)))) {
block_56:
            var_r1_6 = 0;
        }
        if (var_r1_6 != 0) {
            temp_r0_4->unk14->unkC(&sp54, temp_r0_4);
            var_r0_5 = sp54.unk0;
            if ((s32) var_r0_5 < 0) {
                var_r0_5 += 7;
            }
            var_r1_7 = sp54.unk2;
            if ((s32) var_r1_7 < 0) {
                var_r1_7 += 7;
            }
            sp5C.unk0 = (s8) (var_r0_5 >> 3);
            sp5C.unk1 = (s8) (var_r1_7 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp5C;
                }
                sp8 += 1;
            }
            var_r0_6 = sp54.unk4;
            if ((s32) var_r0_6 < 0) {
                var_r0_6 += 7;
            }
            var_r1_8 = sp54.unk2;
            if ((s32) var_r1_8 < 0) {
                var_r1_8 += 7;
            }
            sp60.unk0 = (s8) (var_r0_6 >> 3);
            sp60.unk1 = (s8) (var_r1_8 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp60;
                }
                sp8 += 1;
            }
            var_r0_7 = sp54.unk0;
            if ((s32) var_r0_7 < 0) {
                var_r0_7 += 7;
            }
            var_r1_9 = sp54.unk6;
            if ((s32) var_r1_9 < 0) {
                var_r1_9 += 7;
            }
            sp64.unk0 = (s8) (var_r0_7 >> 3);
            sp64.unk1 = (s8) (var_r1_9 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp64;
                }
                sp8 += 1;
            }
            var_r0_8 = sp54.unk4;
            if ((s32) var_r0_8 < 0) {
                var_r0_8 += 7;
            }
            var_r1_10 = sp54.unk6;
            if ((s32) var_r1_10 < 0) {
                var_r1_10 += 7;
            }
            sp68.unk0 = (s8) (var_r0_8 >> 3);
            sp68.unk1 = (s8) (var_r1_10 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp68;
                }
                sp8 += 1;
            }
        }
    }
    temp_r0_5 = temp_r7->unkA8;
    temp_r0_6 = (*temp_r0_5)->unk40(temp_r0_5, 0x4B);
    if (temp_r0_6 == 0) {

    } else {
        temp_r1_3 = temp_r0_6->unk4;
        if ((arg1 == 0) && ((s32) temp_r1_3 > 0x33) && ((s32) temp_r1_3 <= 0x133)) {
            if (arg2 == (temp_r1_3 - 0x34)) {
                var_r1_11 = 1;
            } else {
                goto block_101;
            }
        } else if ((arg1 != 1) || ((s32) temp_r1_3 <= 0x133) || ((s32) temp_r1_3 > 0x233) || (var_r1_11 = 1, (arg2 != (temp_r1_3 + 0xFFFFFECC)))) {
block_101:
            var_r1_11 = 0;
        }
        if (var_r1_11 != 0) {
            temp_r0_6->unk14->unkC(&sp6C, temp_r0_6);
            var_r0_9 = sp6C.unk0;
            if ((s32) var_r0_9 < 0) {
                var_r0_9 += 7;
            }
            var_r1_12 = sp6C.unk2;
            if ((s32) var_r1_12 < 0) {
                var_r1_12 += 7;
            }
            sp74.unk0 = (s8) (var_r0_9 >> 3);
            sp74.unk1 = (s8) (var_r1_12 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp74;
                }
                sp8 += 1;
            }
            var_r0_10 = sp6C.unk4;
            if ((s32) var_r0_10 < 0) {
                var_r0_10 += 7;
            }
            var_r1_13 = sp6C.unk2;
            if ((s32) var_r1_13 < 0) {
                var_r1_13 += 7;
            }
            sp78.unk0 = (s8) (var_r0_10 >> 3);
            sp78.unk1 = (s8) (var_r1_13 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp78;
                }
                sp8 += 1;
            }
            var_r0_11 = sp6C.unk0;
            if ((s32) var_r0_11 < 0) {
                var_r0_11 += 7;
            }
            var_r1_14 = sp6C.unk6;
            if ((s32) var_r1_14 < 0) {
                var_r1_14 += 7;
            }
            sp7C.unk0 = (s8) (var_r0_11 >> 3);
            sp7C.unk1 = (s8) (var_r1_14 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp7C;
                }
                sp8 += 1;
            }
            var_r0_12 = sp6C.unk4;
            if ((s32) var_r0_12 < 0) {
                var_r0_12 += 7;
            }
            var_r1_15 = sp6C.unk6;
            if ((s32) var_r1_15 < 0) {
                var_r1_15 += 7;
            }
            sp80.unk0 = (s8) (var_r0_12 >> 3);
            sp80.unk1 = (s8) (var_r1_15 >> 3);
            if (sp8 <= 0xBU) {
                if ((&(&sp0)[sp8].unk4 + 8) != 0) {
                    (&sp0)[sp8].unkC = sp80;
                }
                sp8 += 1;
            }
        }
    }
    var_r3 = 0;
    if (sp8 != 0) {
        var_r3 = &spC;
    }
    sp0 = var_r3;
    sp4 = sp8;
    func_0809CF34(&sp84, temp_r7->unk8C + 0x2E58, arg1, arg2);
    temp_r1_4 = &(&sp0)[sp8].unk4 + 8;
    var_r0_13 = &spC;
    if (var_r0_13 != temp_r1_4) {
        do {
            var_r0_13 += 4;
        } while (var_r0_13 != temp_r1_4);
    }
}
