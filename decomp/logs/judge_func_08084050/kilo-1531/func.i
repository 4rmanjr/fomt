# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08084050/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08084050/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08084050/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08084050/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08084050/kilo-1531/func.c" 2
s32 func_0804E9F4(s32, u16, s32, s32, s32, s32);

s32 func_08084050(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r6;
    s32 var_ip;
    s32 var_r2;
    s32 var_r5;
    s32 var_r7;
    u16 var_r4;

    var_ip = 0xB;
    var_r7 = 4;
    temp_r6 = arg0 + 0x24;
    temp_r0 = arg0 + 0x20 + ((arg0->unk20 * 0x10) + 4);
    var_r2 = temp_r6;
    if (var_r2 != temp_r0) {
        do {
            var_r2 += 0x10;
        } while (var_r2 != temp_r0);
    }
    arg0->unk20 = (s32) (arg0->unk20 - ((s32) (temp_r0 - temp_r6) >> 4));
    switch (arg1) {
    case 8:
        var_ip = 0xB;
        break;
    case 9:
        var_ip = 0xE;
        break;
    case 10:
        var_ip = 0x11;
        break;
    }
    var_r4 = (var_ip * 0x24) + 0xD0;
    var_r5 = 2;
    do {
        func_0804E9F4(arg0->unk1C->unk18 + (var_r7 << 6) + 4, var_r4, 0x12, 2, 0, 0x20);
        var_r7 += 2;
        var_r4 += 0x24;
        var_r5 -= 1;
    } while (var_r5 >= 0);
    return var_r7;
}
