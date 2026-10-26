# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B840/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B840/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B840/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B840/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803B840/opencode/func.c" 2
s32 CpuFastSet(s32 *, s32, s32);
s32 func_08051320(s32, s32, s32, s32, s32, u32, u32);
extern s32 *gUnk_080F9F78;

s32 func_0803B840(void *arg0) {
    s32 spC;
    s32 temp_r2;

    temp_r2 = ((((u32) (arg0->unk1C << 0x11) >> 0x16) + 3) & 0x3FF) | (((u32) ((s32) arg0->unk1C << 0xD) >> 0x1C) << 0xC);
    spC = temp_r2 | (temp_r2 << 0x10);
    CpuFastSet(&spC, (u16) ((u8) arg0->unk1C << 0xB) + 0x06000000, 0x010000A0);
    func_08051320((u16) ((u8) arg0->unk1C << 0xB) + 0x06000000, arg0->unkC, 0, arg0->unk14, arg0->unk18, (u32) (arg0->unk1C << 0x11) >> 0x16, (u32) ((s32) arg0->unk1C << 0xD) >> 0x1C);
    CpuFastSet(gUnk_080F9F78, (((u32) ((s32) arg0->unk1C << 0xD) >> 0x1C) << 5) + 0x05000000, 8);
    return 0;
}
