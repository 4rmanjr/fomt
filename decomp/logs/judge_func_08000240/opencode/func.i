# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/opencode/common.h" 1
# 1 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h"
# 1 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/limits.h" 1
# 32 "/home/armanjr/.local/share/decompnet/toolchains/agbcc/include/stdint.h" 2



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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000240/opencode/func.c" 2
s32 SoftReset(s32);
s32 func_08000528(s32);

void func_08000240(void) {
    s32 *temp_r1;
    s32 *temp_r1_2;

    func_08000528(0xFFFF);
    *(u16 *)0x04000000 = 0x80;
    *(u8 *)(0x04000000 + 0x84) = 0;
    if (0xF & ~*(u16 *)0x04000130) {
        do {

        } while (0xF & ~*(u16 *)0x04000130);
    }
    *(u16 *)(0x040000B0 + 0xA) = (u16) (0xC5FF & *(u16 *)(0x040000B0 + 0xA));
    *(u16 *)(0x040000B0 + 0xA) = (u16) (0x7FFF & *(u16 *)(0x040000B0 + 0xA));
    temp_r1 = (s32 *)(0x040000B0 + 0xC);
    *(u16 *)((s8 *)temp_r1 + 0xA) = (u16) (0xC5FF & *(u16 *)((s8 *)temp_r1 + 0xA));
    *(u16 *)((s8 *)temp_r1 + 0xA) = (u16) (0x7FFF & *(u16 *)((s8 *)temp_r1 + 0xA));
    temp_r1_2 = (s32 *)((s8 *)temp_r1 + 0xC);
    *(u16 *)((s8 *)temp_r1_2 + 0xA) = (u16) (0xC5FF & *(u16 *)((s8 *)temp_r1_2 + 0xA));
    *(u16 *)((s8 *)temp_r1_2 + 0xA) = (u16) (0x7FFF & *(u16 *)((s8 *)temp_r1_2 + 0xA));
    *(u16 *)(0x040000D4 + 0xA) = (u16) (0xC5FF & *(u16 *)(0x040000D4 + 0xA));
    *(u16 *)(0x040000D4 + 0xA) = (u16) (0x7FFF & *(u16 *)(0x040000D4 + 0xA));
    SoftReset(0xFF);
loop_4:
    goto loop_4;
}
