# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070CA4/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070CA4/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070CA4/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070CA4/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070CA4/kilo-1531/func.c" 2
s32 func_0804E7A0(s32, void *, s32);
s32 func_0804E8F0(s32, void *, s32, s32, void *);
s32 func_08076EA8(void *);

s32 func_08070CA4(void *arg0) {
    s32 sp4;
    s32 sp8;
    s16 *var_r2;
    s16 temp_r0;
    s16 temp_r0_2;
    s32 temp_r2;
    s32 temp_r4;
    s32 var_r8;
    s8 *var_r3;
    void *temp_r5;

    var_r8 = 0;
    var_r2 = arg0 + 0x5B8;
    temp_r0 = arg0->unk5B8;
    if ((s32) temp_r0 < 0) {

    } else if ((s32) (temp_r0 + 0x30) < (s32) arg0->unk590) {
        var_r3 = arg0 + 0x5E0;
loop_4:
        *var_r3 = 0;
        var_r2 += 0x2C;
        var_r3 += 0x2C;
        var_r8 += 1;
        temp_r0_2 = *var_r2;
        if ((s32) temp_r0_2 >= 0) {
            if ((s32) (temp_r0_2 + 0x30) >= (s32) arg0->unk590) {
                goto block_6;
            }
            goto loop_4;
        }
    } else {
block_6:
        if ((s32) (arg0 + (0x2C * var_r8))->unk5B8 >= 0) {
            do {
                temp_r2 = 0x2C * var_r8;
                temp_r5 = arg0 + temp_r2;
                if ((s32) temp_r5->unk5B8 <= (s32) (arg0->unk590 + 0xA0)) {
                    if (temp_r5->unk5E0 == 0) {
                        temp_r4 = *(arg0 + 0x5DC + temp_r2) * 0x504;
                        sp4.unk0 = 0x14;
                        sp4.unk2 = 2;
                        func_0804E7A0(sp4, temp_r4 + arg0 + 0x1A58 + 4, 0);
                        sp8.unk0 = 0x14;
                        sp8.unk2 = 2;
                        func_0804E8F0(sp8, temp_r4 + arg0 + 0x1A58 + 4, 0, 0, temp_r5 + 0x5BC);
                        temp_r5->unk5E0 = 1U;
                    }
                } else {
                    temp_r5->unk5E0 = 0U;
                }
                var_r8 += 1;
            } while ((s32) (arg0 + (0x2C * var_r8))->unk5B8 >= 0);
        }
    }
    func_08076EA8(arg0);
    return 1;
}
