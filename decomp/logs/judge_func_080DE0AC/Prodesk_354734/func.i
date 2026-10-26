# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DE0AC/Prodesk_354734/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DE0AC/Prodesk_354734/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DE0AC/Prodesk_354734/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DE0AC/Prodesk_354734/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DE0AC/Prodesk_354734/func.c" 2
s32 func_0803A180(void *, s32, s32);
s32 func_0805E860(void *, u16);

void func_080DE0AC(void *arg0) {
    s8 temp_r6;
    u16 var_r5;
    void *temp_r0;
    void *temp_r0_2;
    void *var_r0;

    if (func_0803A180(arg0, arg0 + 0x50, 0x8000) != 0) {
        temp_r6 = arg0->unk62;
        if (temp_r6 == 0) {
            var_r5 = arg0->unk50 + 0x9B6;
            if (arg0->unk4 != var_r5) {
                func_0805E860(arg0 + 0x30, var_r5);
                temp_r0 = arg0 + 0x44;
                arg0->unk44 = 1;
                var_r0 = temp_r0 + 2;
                temp_r0->unk2 = temp_r6;
                goto block_6;
            }
        } else {
            var_r5 = arg0->unk50 + 0x9BA;
            if (arg0->unk4 != var_r5) {
                func_0805E860(arg0 + 0x30, var_r5);
                temp_r0_2 = arg0 + 0x44;
                arg0->unk44 = 1;
                var_r0 = temp_r0_2 + 2;
                temp_r0_2->unk2 = 0;
block_6:
                var_r0->unk1 = 1;
                arg0->unk4 = var_r5;
            }
        }
    }
}
