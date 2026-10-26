# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08038398/kilo-1531/func.c" 2
s32 func_0805E860(s32);

void func_08038398(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r3;
    u16 temp_r1;
    void *temp_r0;
    void *temp_r4;

    var_r3 = 0x15;
    if ((u32) (arg1 + 0xFFFFFCC8) > 0x3DU) {

    } else {
        switch (arg1) {
        case -4294966468:
            var_r3 = 0x19;
            break;
        case -4294966464:
            var_r3 = 0x1D;
            break;
        case -4294966460:
            var_r3 = 0x21;
            break;
        case -4294966456:
            var_r3 = 0x25;
            break;
        case -4294966452:
            var_r3 = 0x29;
            break;
        case -4294966411:
            var_r3 = 0x2D;
            break;
        }
    }
    temp_r1 = var_r3 + arg2;
    if (temp_r1 != arg0->unk28) {
        temp_r4 = arg0->unk10;
        if (temp_r4 != 0) {
            func_0805E860(temp_r4 + 0x30);
            temp_r0 = temp_r4 + 0x44;
            temp_r4->unk44 = 1;
            temp_r0->unk2 = 0;
            (temp_r0 + 2)->unk1 = 1;
        }
        arg0->unk28 = temp_r1;
    }
}
