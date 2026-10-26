# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057B84/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057B84/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057B84/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057B84/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08057B84/kilo-1531/func.c" 2
s32 func_08057CB0(void *, s32, s32, s16, s32);
s32 func_08057D34(void *, s32, s32, s32);

void func_08057B84(void *arg0) {
    u8 temp_r1;

    func_08057CB0(arg0, 8, 0xC, arg0->unk22C4, 0);
    func_08057D34(arg0, 0x40, 0x14, 0xB);
    if (arg0->unk2324 == 0) {
        if (1 & arg0->unk22CC) {
            func_08057D34(arg0, 0xA0, 0x10, 0x1A);
            func_08057CB0(arg0, 0xC0, 0x10, arg0->unk22C6, 1);
            func_08057D34(arg0, 0xE0, 0x10, 0x17);
        }
    } else {
        if (2 & arg0->unk22CC) {
            func_08057D34(arg0, 0xA0, 8, 0x18);
            func_08057CB0(arg0, 0xC0, 8, arg0->unk22C8, 1);
            func_08057D34(arg0, 0xE0, 8, 0x17);
        }
        if (4 & arg0->unk22CC) {
            func_08057D34(arg0, 0xA0, 0x18, 0x19);
            func_08057CB0(arg0, 0xC0, 0x16, arg0->unk22CA, 1);
            func_08057D34(arg0, 0xE0, 0x16, 0x17);
        }
    }
    temp_r1 = arg0->unk22CE + 1;
    arg0->unk22CE = temp_r1;
    if (!(temp_r1 & 0xF)) {
        arg0->unk22CC = (u8) (arg0->unk22CC ^ arg0->unk22CD);
    }
}
