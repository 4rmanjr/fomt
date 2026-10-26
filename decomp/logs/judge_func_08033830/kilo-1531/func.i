# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033830/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033830/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033830/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033830/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033830/kilo-1531/func.c" 2
s32 func_08033800(void *, s32, s32);
s32 method_0800C6F0__C4CoopUi(void *, s32, u8);
s32 method_0800D074__C4BarnUi(void *, s32, u8);
s32 method_0800D0C0__C4BarnUi(void *, s32, u8);

void *func_08033830(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 var_r2;
    u32 temp_r0;

    temp_r0 = (u32) (arg1->unk0 << 0x1C) >> 0x1C;
    switch (temp_r0) {
    default:
        arg0->unk0 = 0;
        arg0->unk2 = 0;
        break;
    case 1:
    case 2:
        arg0->unk0 = (s16) ((arg1->unk1 * 0x10) + 0x118);
        arg0->unk2 = (s16) ((arg1->unk2 * 0x10) + 0xB8);
        break;
    case 3:
        method_0800C6F0__C4CoopUi(arg0, arg2 + 0x3FC, arg1->unk1);
        break;
    case 4:
        method_0800D074__C4BarnUi(arg0, arg2 + 0x5DC, arg1->unk1);
        break;
    case 5:
        method_0800D0C0__C4BarnUi(arg0, arg2 + 0x5DC, arg1->unk1);
        break;
    case 6:
        var_r2 = arg1->unk1 + 0x36;
block_9:
        func_08033800(arg0, arg3, var_r2);
        break;
    case 7:
        var_r2 = arg1->unk1 + 0x2E;
        goto block_9;
    case 8:
        func_08033800(arg0, arg3, arg1->unk1 + 0x4C);
        break;
    }
    return arg0;
}
