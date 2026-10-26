# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080122E0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080122E0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080122E0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080122E0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080122E0/opencode/func.c" 2
s32 func_080D7F08(void *);

void func_080122E0(void *arg0, s32 arg1, u16 arg2, u16 arg3) {
s32 sp0;
    void **temp_r0_2;
    void *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r0_2 = temp_r0->unkA8;
    sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | (arg1 & 0x3FF));
    sp0.unk1 = (u8) ((3 & sp0.unk1) | ((arg2 & 0x3F) * 4));
    sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | (((u32) (arg2 << 0x10) >> 0x16) & 0x3FF));
    sp0.unk3 = (u8) ((3 & sp0.unk3) | ((arg3 & 0x3F) * 4));
    sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | (((u32) (arg3 << 0x10) >> 0x16) & 0x3FF));
    (*temp_r0_2)->unkB4(temp_r0_2, &sp0, 1);
    func_080D7F08(temp_r0);
}
