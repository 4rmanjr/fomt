# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DD9CC/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DD9CC/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DD9CC/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DD9CC/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DD9CC/kilo-1531/func.c" 2
s32 func_0803A144(void *, void *, s8);
s32 func_0803A350(void *, s32);
s32 func_0805E860(void *, s32);
s32 func_0805E8F0(void *);
s32 func_080AB788(s32);
s32 rand();

void func_080DD9CC(void *arg0) {
    s16 temp_r0_4;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    s8 temp_r4;
    s8 var_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_5;
    u8 *var_r6;

    temp_r4 = arg0->unk62;
    if (temp_r4 != 1) {
        if ((s32) temp_r4 <= 1) {
            if (temp_r4 != 0) {
                var_r6 = (arg0 + 0x62) - 0x1B;
            } else {
                arg0->unk60 = (u16) ((func_080AB788(2) + 0x1E) * 0x3C);
                (arg0 + 0x60)->unk26 = (s16) temp_r4;
                var_r0 = 1;
                goto block_11;
            }
        } else if (temp_r4 != 2) {
            var_r6 = arg0 + 0x47;
            if (temp_r4 == 3) {
                goto block_37;
            }
        } else {
            if (arg0->unk79 == -1) {
                arg0->unk79 = (s8) ((arg0->unk78 + 1) & 3);
            }
            func_0803A144(arg0, arg0 + 0x64, (s8) (u8) arg0->unk79);
            temp_r1 = arg0->unk68 << 0x10;
            arg0->unk6C = temp_r1;
            temp_r2 = (arg0 + 0x68)->unk2 << 0x10;
            arg0->unk70 = temp_r2;
            arg0->unk7C = (s32) (temp_r1 - arg0->unk58);
            temp_r2_2 = temp_r2 - arg0->unk5C;
            arg0->unk80 = temp_r2_2;
            temp_r0 = arg0->unk7C;
            var_r1 = temp_r0;
            if (temp_r0 < 0) {
                var_r1 = 0 - temp_r0;
            }
            temp_r7 = var_r1 >> 0x11;
            var_r1_2 = temp_r2_2;
            if (temp_r2_2 < 0) {
                var_r1_2 = 0 - temp_r2_2;
            }
            temp_r6 = var_r1_2 >> 0x11;
            if (temp_r7 > temp_r6) {
                if (temp_r0 < 0) {
                    arg0->unk50 = (s32) temp_r4;
                } else {
                    arg0->unk50 = 3;
                }
                arg0->unk7C = (s32) ((s32) arg0->unk7C / temp_r7);
                arg0->unk80 = (s32) ((s32) arg0->unk80 / temp_r7);
                arg0->unk60 = (u16) temp_r7;
            } else {
                if (temp_r2_2 < 0) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
                arg0->unk50 = var_r0_2;
                arg0->unk7C = (s32) ((s32) arg0->unk7C / temp_r6);
                arg0->unk80 = (s32) ((s32) arg0->unk80 / temp_r6);
                arg0->unk60 = (u16) temp_r6;
            }
            var_r6 = arg0 + 0x47;
            if (arg0->unk4 != 0x2A9) {
                func_0805E860(arg0 + 0x30, 0x2A9);
                arg0->unk44 = 1;
                (arg0 + 0x44)->unk2 = 0;
                arg0->unk47 = 1;
                arg0->unk4 = 0x2A9U;
            }
            arg0->unk62 = 3;
            (arg0 + 0x62)->unk22 = 8;
block_37:
            arg0->unk58 = (s32) (arg0->unk58 + arg0->unk7C);
            arg0->unk5C = (s32) (arg0->unk5C + arg0->unk80);
            temp_r0_2 = arg0->unk60 - 1;
            arg0->unk60 = temp_r0_2;
            if ((s32) (temp_r0_2 << 0x10) <= 0) {
                arg0->unk78 = (u8) arg0->unk79;
                arg0->unk79 = -1;
                arg0->unk58 = (s32) arg0->unk6C;
                arg0->unk5C = (s32) arg0->unk70;
                arg0->unk62 = 0;
                arg0->unk84 = 0xF8;
                if (arg0->unk4 != 0x2A4) {
                    func_0805E860(arg0 + 0x30, 0x2A4);
                    arg0->unk44 = 1;
                    (arg0 + 0x44)->unk2 = 0;
                    *var_r6 = 1;
                    arg0->unk4 = 0x2A4U;
                }
            }
        }
    } else {
        temp_r0_3 = arg0->unk60 - 1;
        arg0->unk60 = temp_r0_3;
        temp_r0_4 = (s16) temp_r0_3;
        if ((s32) temp_r0_4 < 0) {
            var_r0 = 2;
block_11:
            arg0->unk62 = var_r0;
            var_r6 = arg0 + 0x47;
        } else {
            var_r6 = arg0 + 0x47;
            if ((s32) temp_r0_4 <= 0x168) {

            } else {
                temp_r0_5 = arg0->unk86 - 1;
                arg0->unk86 = temp_r0_5;
                if ((s32) (temp_r0_5 << 0x10) > 0) {

                } else {
                    arg0->unk86 = 0x168U;
                    if (!((rand() >> 4) & 3)) {

                    } else {
                        func_0803A350(arg0, 0xCE);
                    }
                }
            }
        }
    }
    arg0->unk54 = (s16) ((s32) arg0->unk58 >> 0x10);
    (arg0 + 0x54)->unk2 = (s16) ((s32) arg0->unk5C >> 0x10);
    if (*var_r6 == 0) {
        if ((s32) (func_0805E8F0(arg0 + 0x30) << 0x1E) < 0) {
            arg0->unk44 = 1;
        }
    } else {
        *var_r6 = 0;
    }
}
