# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_Unpack/kilo/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_Unpack/kilo/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_Unpack/kilo/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_Unpack/kilo/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_Unpack/kilo/func.c" 2
s32 func_080D10F0();
s32 func_080D11A4(s32, s32, s32, s32);
s32 func_080D1518();
s32 func_080D1548();
s32 func_080D1564();
s32 func_080D1574();
s32 sub_080D1204();
s32 sub_080D1224();
s32 sub_080D129A();
s32 sub_080D12EC();
s32 sub_080D139C();

void Unpack(u32 *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r6_3;
    void *temp_r7;
    void *temp_sp;

    temp_sp = sp + 0xFFFFFBE0;
    temp_r7 = temp_sp;
    func_080D11A4(arg0 + 4, arg1 - 2, 0, 0);
    unksp0 = 8;
    temp_r4 = (0x40000000U >> 0x1E) - 1;
    if (temp_r4 != 0) {
        if ((temp_r4 - 1) != 0) {

        } else {
            goto block_5;
        }
    } else {
block_5:
        func_080D10F0();
    }
    temp_r6 = (0x100000000U >> 0x1D) - 1;
    if (temp_r6 != 0) {
        temp_r6_2 = temp_r6 - 1;
        if (temp_r6_2 != 0) {
            temp_r6_3 = temp_r6_2 - 1;
            if (temp_r6_3 != 0) {
                if ((temp_r6_3 - 1) != 0) {
                    sub_080D1224();
                } else {
                    sub_080D1204();
                }
            } else {
                sub_080D139C();
            }
        } else {
            sub_080D12EC();
        }
    } else {
        sub_080D129A();
    }
    temp_r4_2 = ((u32) (unksp0 << 0x18) >> 0x1D) - 1;
    if (temp_r4_2 != 0) {
        temp_r4_3 = temp_r4_2 - 1;
        if (temp_r4_3 != 0) {
            temp_r4_4 = temp_r4_3 - 1;
            if (temp_r4_4 != 0) {
                if ((temp_r4_4 - 1) != 0) {

                } else {
                    func_080D1574();
                }
            } else {
                func_080D1564();
            }
        } else {
            func_080D1548();
        }
    } else {
        func_080D1518();
    }
}
