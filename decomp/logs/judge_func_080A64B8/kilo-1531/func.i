# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A64B8/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A64B8/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A64B8/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A64B8/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A64B8/kilo-1531/func.c" 2
s32 func_080A4BEC();
extern ? gUnk_08107338;
extern ? gUnk_08107344;

void func_080A64B8(void *arg0) {
    u32 temp_r3;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r2;
    void *temp_r2_2;

    func_080A4BEC();
    if (arg0->unk0 == 6) {
        temp_r3 = (u32) (arg0->unk94->unk21A0 << 0x1E) >> 0x1E;
        if (temp_r3 == 1) {
            temp_r2 = arg0 + 0xB4;
            temp_r0 = temp_r2->unk2 + 1;
            temp_r2->unk2 = temp_r0;
            if ((u32) temp_r0 >= (u32) gUnk_08107338.unk8) {
                temp_r2->unk2 = 0U;
                temp_r2->unk1 = (s8) temp_r3;
            }
            temp_r2_2 = arg0 + 0xB8;
            temp_r0_2 = temp_r2_2->unk2 + 1;
            temp_r2_2->unk2 = temp_r0_2;
            if ((u32) temp_r0_2 >= (u32) gUnk_08107344.unk8) {
                temp_r2_2->unk2 = 0U;
                temp_r2_2->unk1 = (s8) temp_r3;
            }
        }
    }
}
