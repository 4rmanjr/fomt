# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DEC0/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DEC0/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DEC0/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DEC0/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0806DEC0/kilo-1531/func.c" 2
s32 func_080088D4();
s32 func_08008B6C(void *, s32);

void func_0806DEC0(void *arg0) {
    s32 temp_r0;
    s8 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_6;
    s8 temp_r1;
    s8 temp_r3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_7;
    u8 temp_r1_2;

    temp_r0 = func_080088D4();
    if (0x40 & temp_r0) {
        if (arg0->unk39 == 0) {
            return;
        }
        func_08008B6C(arg0 + 0x14, 0xCB);
        temp_r1 = arg0->unk39;
        if ((s32) temp_r1 > 1) {
            arg0->unk39 = (s8) ((u8) arg0->unk39 - 1);
            return;
        }
        if (temp_r1 != 1) {
            return;
        }
        if ((s32) (s8) arg0->unk38 > 3) {
            arg0->unk39 = 4;
            return;
        }
        arg0->unk39 = 5;
        return;
    }
    if (0x80 & temp_r0) {
        if ((arg0->unk39 != 0) && ((func_08008B6C(arg0 + 0x14, 0xCB), temp_r0_2 = (u8) arg0->unk39 + 1, arg0->unk39 = temp_r0_2, temp_r0_3 = temp_r0_2, (temp_r0_3 == 6)) || ((temp_r0_3 == 5) && ((s32) (s8) arg0->unk38 > 3)))) {
            arg0->unk39 = 1;
        }
    } else if (0x20 & temp_r0) {
        func_08008B6C(arg0 + 0x14, 0xCB);
        if (arg0->unk39 == 0) {
            temp_r0_4 = arg0->unk38 - 4;
            arg0->unk38 = temp_r0_4;
            if ((s32) (temp_r0_4 << 0x18) < 0) {
                arg0->unk38 = 0xCU;
            }
        } else {
            temp_r0_5 = arg0->unk38 - 2;
            arg0->unk38 = temp_r0_5;
            if ((s32) (temp_r0_5 << 0x18) < 0) {
                temp_r0_6 = (u8) arg0->unk39 - 1;
                arg0->unk39 = temp_r0_6;
                if ((s32) (temp_r0_6 << 0x18) <= 0) {
                    arg0->unk39 = 5;
                    arg0->unk38 = 3U;
                    return;
                }
                arg0->unk38 = 0xDU;
            }
        }
    } else if (0x10 & temp_r0) {
        func_08008B6C(arg0 + 0x14, 0xCB);
        temp_r3 = arg0->unk39;
        if (temp_r3 == 0) {
            temp_r0_7 = arg0->unk38 + 4;
            arg0->unk38 = temp_r0_7;
            if ((s32) (s8) temp_r0_7 > 0xC) {
                arg0->unk38 = (u8) temp_r3;
            }
        } else {
            temp_r1_2 = arg0->unk38 + 2;
            arg0->unk38 = temp_r1_2;
            if (arg0->unk39 == 5) {
                if ((s32) (s8) temp_r1_2 > 3) {
                    arg0->unk39 = 1;
                    goto block_33;
                }
            } else if ((s32) (s8) temp_r1_2 > 0xD) {
                arg0->unk39 = (s8) ((u8) arg0->unk39 + 1);
block_33:
                arg0->unk38 = 1U;
            }
        }
    }
}
