# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DFE8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DFE8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DFE8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DFE8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803DFE8/opencode/func.c" 2
u32 GetLove__C12Bachelorette();
u32 GetRivalEventCount__C12Bachelorette(void *);
s32 func_0803D52C(s32 *, void *);
s32 func_0803D644(u8, u8);
s32 func_080A01F8(void *, s32);
s32 func_080A0384(void *);
s32 func_080A0490(void *);

s32 func_0803DFE8(void *arg0, ? arg3) {
s32 sp0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    u32 temp_r4_2;
    u8 temp_r6;
    u8 temp_r7;
    u8 temp_r8;
    u8 temp_sb;
    void *temp_r4;

    if (0xC & arg0->unk21CA) {
        return 0;
    }
    func_0803D52C(&sp0, arg0 + 0x10);
    temp_r8 = sp0.unk1;
    temp_r7 = sp0.unk2;
    temp_sb = sp0.unk3;
    temp_r4 = arg0 + 0x1CD4;
    temp_r0 = func_080A0490(temp_r4);
    if (temp_r0 == 0x13) {
        if (temp_r8 == 2) {
            if (temp_r7 == 9) {
                return 0x15;
            }
            if (temp_r7 == 0xD) {
                return 0x16;
            }
            goto block_8;
        }
block_8:
        if (((u32) (arg0->unk216C << 0x1B) >> 0x1E) == 1) {
            return 0x17;
        }
        temp_r6 = arg0->unk2148;
        temp_r0_2 = func_080A0384(arg0 + 0x1CD4);
        temp_r4_2 = (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F;
        if (((func_0803D644(temp_r8, temp_r7) << 0x18) != 0) || (temp_r0_3 = arg0->unk8, (temp_r0_3 == 3)) || (temp_r0_3 == 4)) {
            if (temp_r4_2 != 0) {
                if (temp_r6 != 0) {
                    return 0x12;
                }
                return 0x11;
            }
            if (temp_r6 != 0) {
                return 0x14;
            }
            return 0x13;
        }
        if ((temp_r6 != 0) && ((temp_sb == 0) || (temp_sb == 2))) {
            if (temp_r4_2 != 0) {
                return 0xD;
            }
            return 0x10;
        }
        if (temp_r4_2 != 0) {
            if (temp_r6 != 0) {
                return 0xC;
            }
            return 0xB;
        }
        if (temp_r6 != 0) {
            return 0xF;
        }
        return 0xE;
    }
    if (GetRivalEventCount__C12Bachelorette(arg0 + 0x1EB8) > 4U) {
        if ((func_0803D644(temp_r8, temp_r7) << 0x18) != 0) {
            return 0xA;
        }
        if (temp_sb == 0) {
            return 7;
        }
        return 6;
    }
    temp_r0_4 = func_080A01F8(temp_r4, 0x13);
    if ((temp_r8 == 3) && (temp_r7 == 0xE) && (temp_r0 == 0) && (temp_r0_4 != 0) && (GetLove__C12Bachelorette() > 0x270FU) && (((u32) (arg0->unk21A4 << 0x19) >> 0x1E) != 2)) {
        return 9;
    }
    if ((func_0803D644(temp_r8, temp_r7) << 0x18) != 0) {
        return 8;
    }
    if (temp_sb == 0) {
        return 3;
    }
    if (temp_sb == 2) {
        if (arg0->unk8 == 0) {
            return 4;
        }
        return 5;
    }
    if (arg0->unk8 != 0) {
        return 2;
    }
    return 1;
}
