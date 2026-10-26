# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D1224/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D1224/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D1224/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D1224/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_080D1224/opencode/func.c" 2


? .L080D145C();
s32 func_080D11A4();
s32 func_080D14EC();

void sub_080D1224(void) {
    u8 temp_r4;
    void *temp_r1;

    func_080D14EC();
    func_080D11A4();
    if (2U >= 2U) {
        if (2 != 2) {
            func_080D11A4();
            temp_r1 = SECOND_REG(func_080D11A4());
            if ((s32) ((temp_r1 + 1) << 0x1F) >= 0) {
                temp_r1->unk1 = (s16) (saved_reg_r10 + 0x800);
            }
            .L080D145C();
            return;
        }
        func_080D11A4();
        saved_reg_r9();
        return;
    }
    temp_r4 = (saved_reg_r7 + 8)->unk6;
    func_080D11A4();
    func_080D11A4();
    .L080D145C();
}
