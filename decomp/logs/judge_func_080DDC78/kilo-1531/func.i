# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DDC78/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DDC78/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DDC78/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DDC78/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DDC78/kilo-1531/func.c" 2
s16 func_0803A320(void *, u8);
s32 func_0803A334(void *, u8);
s32 func_0805E860(void *, s32);
s32 func_0805E8F0(void *);
s32 func_080AB788(s32);
s32 rand();

void func_080DDC78(void *arg0) {
    s16 temp_r4_2;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    s8 temp_r0;
    s8 temp_r4;
    s8 temp_r7;
    u16 *var_r4;
    u16 temp_r0_4;
    u16 var_r5;
    u8 *var_r8;

    temp_r4 = arg0->unk62;
    if (temp_r4 != 1) {
        if ((s32) temp_r4 <= 1) {
            if (temp_r4 != 0) {
                var_r4 = arg0 + 0x60;
                var_r8 = arg0 + 0x47;
            } else {
                temp_r0 = ((rand() >> 8) & 1) + 1;
                arg0->unk62 = temp_r0;
                if (temp_r0 == 1) {
                    var_r4 = arg0 + 0x60;
                    arg0->unk60 = (s16) ((func_080AB788(4) << 8) + 0x100);
                    arg0->unk64 = (u16) (((rand() >> 8) & temp_r0) << 0xB);
                } else {
                    arg0->unk60 = (s16) ((func_080AB788(2) * 0x3C) + 0xB4);
                    var_r4 = arg0 + 0x60;
                }
                arg0->unk66 = (u16) ((func_080AB788(2) * 4) + 0xC);
                var_r8 = arg0 + 0x47;
            }
        } else if (temp_r4 == 2) {
            temp_r0_2 = arg0->unk68;
            var_r4 = arg0 + 0x60;
            var_r8 = arg0 + 0x47;
            if (temp_r0_2 > 0) {
                var_r0 = temp_r0_2 + 0xFFFFE000;
                goto block_22;
            }
        } else {
            var_r4 = arg0 + 0x60;
            var_r8 = arg0 + 0x47;
        }
    } else {
        temp_r7 = 0xFF0 & arg0->unk64;
        if (temp_r7 == 0) {
            var_r5 = 0x205;
            var_r8 = arg0 + 0x47;
            if (arg0->unk4 != 0x205) {
                func_0805E860(arg0 + 0x30, 0x205);
                arg0->unk44 = temp_r4;
                (arg0 + 0x44)->unk2 = temp_r7;
                arg0->unk47 = temp_r4;
                goto block_17;
            }
        } else {
            var_r8 = arg0 + 0x47;
            if (temp_r7 == 0x800) {
                var_r5 = 0x204;
                if (arg0->unk4 != 0x204) {
                    func_0805E860(arg0 + 0x30, 0x204);
                    arg0->unk44 = temp_r4;
                    (arg0 + 0x44)->unk2 = 0;
                    arg0->unk47 = temp_r4;
block_17:
                    arg0->unk4 = var_r5;
                }
            }
        }
        temp_r4_2 = func_0803A320(arg0, (u8) ((s32) (arg0->unk64 << 0x10) >> 0x14));
        temp_r0_3 = func_0803A334(arg0, (u8) (((s32) (arg0->unk64 << 0x10) >> 0x14) * 2)) << 0x10;
        arg0->unk64 = (u16) (arg0->unk66 + arg0->unk64);
        temp_r2 = arg0->unk58 + (temp_r4_2 << 6);
        arg0->unk58 = temp_r2;
        arg0->unk5C = (s32) (arg0->unk5C + (temp_r0_3 >> 0xA));
        arg0->unk54 = (s16) (temp_r2 >> 0x10);
        arg0->unk56 = (s16) ((s32) arg0->unk5C >> 0x10);
        temp_r1 = arg0->unk68;
        var_r4 = arg0 + 0x60;
        if (temp_r1 <= 0x7FFFF) {
            var_r0 = temp_r1 + 0x2000;
block_22:
            arg0->unk68 = var_r0;
        }
    }
    temp_r0_4 = *var_r4 - 1;
    *var_r4 = temp_r0_4;
    if ((s32) (temp_r0_4 << 0x10) < 0) {
        arg0->unk62 = 0;
    }
    if (*var_r8 == 0) {
        if ((s32) (func_0805E8F0(arg0 + 0x30) << 0x1E) < 0) {
            arg0->unk44 = 1;
        }
    } else {
        *var_r8 = 0;
    }
}
