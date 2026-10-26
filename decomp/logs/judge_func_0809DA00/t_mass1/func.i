# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DA00/t_mass1/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DA00/t_mass1/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DA00/t_mass1/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DA00/t_mass1/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809DA00/t_mass1/func.c" 2
s32 GetFirstFreeToolSlot__C8Rucksack(void *);
s32 GetShelf__9FarmHouse(void *);
s32 func_0800E924(u16 *, void *);
s32 func_0809C38C(void *);
s32 func_0809C3BC(void *);
s32 func_0809DF2C(void *, s32, void *);
u8 func_0809DFAC(void *);
u8 func_0809E02C(void *);
s32 func_0809ED04(s32);

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[1552];
    s32 unk624;
    s32 unk625;
    s32 unk626;
} GenObj;
s32 func_0809DA00(GenObj *arg0, s32 arg1, GenObj *arg2) {
    u16 sp0;
    u32 sp8;
    u32 spC;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 var_r0;
    s32 var_r0_3;
    s32 var_r1_2;
    s32 var_r2_3;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r7;
    s32 var_r7_2;
    s32 var_r8;
    s8 *var_r2;
    u32 *var_r0_2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r1;
    u8 *var_r1_3;
    u8 temp_r0_3;
    u8 temp_r2;
    u8 var_r1;
    u8 var_r2_2;

    var_r8 = arg1;
    temp_r0 = var_r8 - 3;
    switch (temp_r0) {
    case 0:
        func_0800E924(&sp0, arg2 + 0x1BD8);
        if ((s32) (sp0 << 0x16) <= 0x4CC00000) {
            var_r2 = arg0 + 0x625;
            var_r1 = arg0->unk625;
            if (4 & var_r1) {
block_47:
                var_r8 = 0;
            } else {
                var_r0 = 4;
                goto block_9;
            }
        } else {
            var_r2 = arg0 + 0x624;
            var_r1 = arg0->unk624;
            if (!(1 & var_r1)) {
                var_r0 = 1;
block_9:
                *var_r2 = var_r0 | var_r1;
            } else {
                var_r8 = 0;
            }
        }
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        var_r4 = 0;
        if (GetFirstFreeToolSlot__C8Rucksack(arg2 + 0x1C38) == -1) {
            var_r4 = 1;
        }
        if ((func_0809ED04(arg2 + 0x1DAC) << 0x18) == 0) {
            var_r4 = 1;
        }
        if ((func_0809DF2C(arg0, var_r8, arg2) << 0x18) != 0) {
            var_r4 = 1;
        }
        if (var_r4 != 1) {
            var_r1_2 = 0x51;
            temp_r0_2 = var_r8 - 4;
            switch (temp_r0_2) {
            case 0:
                var_r1_2 = 5;
                break;
            case 1:
                var_r1_2 = 0xD;
                break;
            case 2:
                var_r1_2 = 0x15;
                break;
            case 3:
                var_r1_2 = 0x1D;
                break;
            case 4:
                var_r1_2 = 0x25;
                break;
            case 5:
                var_r1_2 = 0x2D;
                break;
            }
            if (var_r1_2 == 0x51) {

            } else {
                func_0809C3BC(arg2 + 0x3480);
            }
        } else {
            goto block_47;
        }
        break;
    case 7:
        var_r7 = 0;
        sp8 = 0xC8;
        temp_r0_3 = arg2->unk10;
        temp_r1 = ((temp_r0_3 >> 3) * 7) + ((u32) (temp_r0_3 << 0x1D) >> 0x1D);
        spC = temp_r1;
        var_r0_2 = &sp8;
        if (temp_r1 < 0xC8U) {
            var_r0_2 = &spC;
        }
        if ((u32) *var_r0_2 <= 2U) {
            var_r7 = 1;
        }
        if (0x10 & arg0->unk625) {
            var_r7 = 1;
        }
        if (GetFirstFreeToolSlot__C8Rucksack(arg2 + 0x1C38) == -1) {
            var_r7 = 1;
        }
        if (var_r7 == 0) {
            arg0->unk625 = (u8) (arg0->unk625 | 0x10);
        } else {
            goto block_47;
        }
        break;
    case 20:
        var_r7_2 = 0;
        if ((func_0809C38C(arg2 + 0x3480) << 0x18) == 0) {
            var_r7_2 = 1;
        }
        var_r4_2 = 4;
        do {
            if ((func_0809DF2C(arg0, var_r4_2, arg2) << 0x18) != 0) {
                var_r7_2 = 1;
            }
            var_r4_2 += 1;
        } while (var_r4_2 <= 9);
        if (var_r7_2 != 1) {

        } else {
            goto block_47;
        }
        break;
    case 29:
        var_r4_3 = 0;
        if (GetShelf__9FarmHouse(arg2 + 0x1F4) == 0) {
            var_r4_3 = 1;
        }
        if ((func_0809DFAC(arg0) == 8) && (GetFirstFreeToolSlot__C8Rucksack(arg2 + 0x1C38) == -1)) {
            var_r4_3 = 1;
        }
        if (var_r4_3 != 0) {

        } else {
            func_0800E924(&sp0, arg2 + 0x1BD8);
            temp_r0_4 = ((u32) (sp0 << 0x16) >> 0x16) - 0x34;
            switch (temp_r0_4) {
            case 0x3C:
                var_r1_3 = arg0 + 0x625;
                var_r2_2 = arg0->unk625;
                if (0x20 & var_r2_2) {
block_91:
                    var_r4_3 = 1;
                } else {
block_89:
                    var_r0_3 = 0x20;
block_90:
                    *var_r1_3 = var_r0_3 | var_r2_2;
                }
                break;
            case 0x66:
                var_r1_3 = arg0 + 0x625;
                var_r2_2 = arg0->unk625;
                if (!(0x40 & var_r2_2)) {
                    var_r0_3 = 0x40;
                    goto block_90;
                }
                goto block_91;
            case 0x7B:
                var_r1_3 = arg0 + 0x625;
                var_r2_2 = arg0->unk625;
                if (!(0x80 & var_r2_2)) {
                    var_r0_3 = 0x80;
                    goto block_90;
                }
                goto block_91;
            case 0x98:
                var_r1_3 = arg0 + 0x626;
                var_r2_2 = arg0->unk626;
                if (!(1 & var_r2_2)) {
                    var_r0_3 = 1;
                    goto block_90;
                }
                goto block_91;
            case 0x9B:
                var_r1_3 = arg0 + 0x626;
                var_r2_2 = arg0->unk626;
                if (!(2 & var_r2_2)) {
                    var_r0_3 = 2;
                    goto block_90;
                }
                goto block_91;
            case 0xAB:
                var_r1_3 = arg0 + 0x626;
                var_r2_2 = arg0->unk626;
                if (!(4 & var_r2_2)) {
                    var_r0_3 = 4;
                    goto block_90;
                }
                goto block_91;
            case 0xBE:
                var_r1_3 = arg0 + 0x626;
                var_r2_2 = arg0->unk626;
                if (!(8 & var_r2_2)) {
                    var_r0_3 = 8;
                    goto block_90;
                }
                goto block_91;
            case 0xCA:
                var_r1_3 = arg0 + 0x626;
                var_r2_2 = arg0->unk626;
                if (!(0x10 & var_r2_2)) {
                    var_r0_3 = 0x10;
                    goto block_90;
                }
                goto block_91;
            case 0xDE:
                var_r2_3 = 0x626;
block_88:
                var_r1_3 = arg0 + var_r2_3;
                var_r2_2 = *var_r1_3;
                if (!(0x20 & var_r2_2)) {
                    goto block_89;
                }
                goto block_91;
            }
        }
block_92:
        if (var_r4_3 != 1) {

        } else {
block_140:
            var_r8 = 0;
        }
        break;
    case 30:
        var_r4_3 = 0;
        if (GetShelf__9FarmHouse(arg2 + 0x1F4) == 0) {
            var_r4_3 = 1;
        }
        if ((func_0809E02C(arg0) == 8) && (GetFirstFreeToolSlot__C8Rucksack(arg2 + 0x1C38) == -1)) {
            var_r4_3 = 1;
        }
        if (var_r4_3 == 0) {
            func_0800E924(&sp0, arg2 + 0x1BD8);
            temp_r0_5 = ((u32) (sp0 << 0x16) >> 0x16) + 0xFFFFFECC;
            switch (temp_r0_5) {
            case 0x0:
                var_r1_3 = arg0 + 0x624;
                var_r2_2 = arg0->unk624;
                if (2 & var_r2_2) {
                    goto block_91;
                }
block_137:
                var_r0_3 = 2;
                goto block_90;
            case 0x28:
                var_r1_3 = arg0 + 0x624;
                var_r2_2 = arg0->unk624;
                if (!(4 & var_r2_2)) {
                    var_r0_3 = 4;
                    goto block_90;
                }
                goto block_91;
            case 0x3C:
                var_r1_3 = arg0 + 0x624;
                var_r2_2 = arg0->unk624;
                if (!(8 & var_r2_2)) {
                    var_r0_3 = 8;
                    goto block_90;
                }
                goto block_91;
            case 0x50:
                var_r1_3 = arg0 + 0x624;
                var_r2_2 = arg0->unk624;
                if (!(0x10 & var_r2_2)) {
                    var_r0_3 = 0x10;
                    goto block_90;
                }
                goto block_91;
            case 0x78:
                var_r2_3 = 0x624;
                goto block_88;
            case 0x8C:
                var_r1_3 = arg0 + 0x624;
                var_r2_2 = arg0->unk624;
                if (0x40 & var_r2_2) {
                    goto block_91;
                }
                var_r0_3 = 0x40;
                goto block_90;
            case 0xA0:
                var_r1_3 = arg0 + 0x624;
                var_r2_2 = arg0->unk624;
                if (0x80 & var_r2_2) {
                    goto block_91;
                }
                var_r0_3 = 0x80;
                goto block_90;
            case 0xB4:
                var_r1_3 = arg0 + 0x625;
                var_r2_2 = arg0->unk625;
                if (1 & var_r2_2) {
                    goto block_91;
                }
                var_r0_3 = 1;
                goto block_90;
            case 0xFF:
                var_r1_3 = arg0 + 0x625;
                var_r2_2 = arg0->unk625;
                if (2 & var_r2_2) {
                    goto block_91;
                }
                goto block_137;
            }
        }
        goto block_92;
    case 31:
        temp_r2 = arg0->unk625;
        if (!(8 & temp_r2)) {
            arg0->unk625 = (u8) (8 | temp_r2);
        } else {
            goto block_140;
        }
        break;
    }
    return var_r8;
}
