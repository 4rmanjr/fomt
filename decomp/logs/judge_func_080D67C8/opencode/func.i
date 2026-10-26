# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D67C8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D67C8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D67C8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D67C8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D67C8/opencode/func.c" 2
s32 __as__6AnimalRC6Animal();

void *func_080D67C8(void *arg0, void *arg1) {
    u8 temp_r3;

    __as__6AnimalRC6Animal();
    arg0->unk1C = (u8) arg1->unk1C;
    temp_r3 = arg1->unk1D;
    arg0->unk1D = (u8) ((((-2 & arg0->unk1D) | ((u32) (temp_r3 << 0x1F) >> 0x1F)) & ~2) | (2 & temp_r3));
    arg0->unk20 = (s32) arg1->unk20;
    arg0->unk24 = (s32) arg1->unk24;
    arg0->unk28 = (s32) arg1->unk28;
    arg0->unk2C = (u16) ((0xFFFFFC00 & arg0->unk2C) | ((u32) (arg1->unk2C << 0x16) >> 0x16));
    arg0->unk2D = (u8) ((-0x1D & arg0->unk2D) | (0x1C & arg1->unk2D));
    arg0->unk2C = (s32) (((s32) arg0->unk2C & 0xFFE01FFF) | ((s32) arg1->unk2C & 0x1FE000));
    return arg0;
}
