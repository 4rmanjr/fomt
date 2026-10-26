# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D078C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D078C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D078C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D078C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D078C/opencode/func.c" 2
s32 func_080D0A74();
extern void *gUnk_0300041C;
extern void *gUnk_03000420;

s32 func_080D078C(void *arg0) {
    s32 sp0;
    s8 var_r2;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u8 temp_r0_3;
    u8 temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;

    switch ((u32) gUnk_0300041C->unk0) {
    case 1:
        temp_r0 = gUnk_0300041C->unk4;
        if (temp_r0 <= 1U) {
            goto block_43;
        }
        if (temp_r0 != 2) {
            goto block_43;
        }
        if (arg0->unk0 != gUnk_03000420->unk8) {
            return 1;
        }
        *(s16 *)0x04000158 = 0x30;
block_10:
        func_080D0A74();
    case 0:
block_43:
        return 0;
    case 2:
    case 4:
        temp_r0_2 = gUnk_0300041C->unk4;
        if (temp_r0_2 != 1) {
            if (temp_r0_2 >= 1U) {
                if (temp_r0_2 != 2) {
                    goto block_43;
                }
                if ((u8) arg0->unk0 != 0x46) {
                    goto block_21;
                }
                goto block_10;
            }
            temp_r0_3 = (u8) arg0->unk0;
            if (temp_r0_3 == 0x42) {
                if ((arg0->unk2 | (arg0->unk3 << 8)) == gUnk_0300041C->unk18) {
                    var_r2 = 0x43;
block_40:
                    sp0 = var_r2;
                    sp0.unk1 = 0;
                    sp0.unk2 = 0;
                    sp0.unk3 = 0;
                    *(s32 *)0x04000154 = sp0;
                    gUnk_0300041C->unk4 = (s32) (gUnk_0300041C->unk4 + 1);
                    goto block_43;
                }
block_28:
                return 4;
            }
            if (temp_r0_3 == 0x41) {
                return 5;
            }
            goto block_43;
        }
block_21:
        return 7;
    case 3:
        temp_r0_4 = gUnk_0300041C->unk4;
        if (temp_r0_4 != 1) {
            if (temp_r0_4 >= 1U) {
                if (temp_r0_4 != 2) {
                    goto block_43;
                }
                goto block_41;
            }
            temp_r0_5 = (u8) arg0->unk0;
            if (temp_r0_5 == 0x41) {
                if ((arg0->unk2 | (arg0->unk3 << 8)) != gUnk_0300041C->unk18) {
                    goto block_28;
                }
                var_r2 = 0x43;
                goto block_40;
            }
            if (temp_r0_5 == 0x42) {
                return 6;
            }
            goto block_43;
        }
        if ((u32) gUnk_0300041C->unk8 < (u32) gUnk_0300041C->unk18) {
            if (((u8) arg0->unk0 == 0x44) && (arg0->unk1 == (u8) gUnk_0300041C->unk8)) {
                temp_r0_6 = (gUnk_0300041C->unk8 * 2) + gUnk_0300041C->unk10;
                temp_r0_6->unk0 = (u8) arg0->unk2;
                temp_r0_6->unk1 = (u8) arg0->unk3;
                temp_r0_7 = (gUnk_0300041C->unk8 * 2) + gUnk_0300041C->unk10;
                gUnk_0300041C->unk1C = (u16) ((temp_r0_7->unk0 | (temp_r0_7->unk1 << 8)) + gUnk_0300041C->unk1C);
                gUnk_0300041C->unk8 = (u32) (gUnk_0300041C->unk8 + 1);
                gUnk_03000420->unk184 = (s32) (gUnk_03000420->unk184 + 1);
                goto block_43;
            }
            goto block_41;
        }
        if ((u8) arg0->unk0 == 0x45) {
            if (gUnk_0300041C->unk1C != (arg0->unk2 | (arg0->unk3 << 8))) {
                return 3;
            }
            var_r2 = 0x46;
            goto block_40;
        }
block_41:
        return 8;
    default:
        return 9;
    }
}
