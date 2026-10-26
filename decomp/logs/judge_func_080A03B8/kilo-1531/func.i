# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A03B8/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A03B8/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A03B8/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A03B8/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A03B8/kilo-1531/func.c" 2
s32 GetLocation__C3Npc(void *);
s32 func_080A0030(s32, s32);
s32 memcpy(void *, ? *, s32);

void *func_080A03B8(void *arg0, s32 arg1, s32 arg2) {
s32 sp0;

    if (func_080A0030(arg1, arg2) != 0) {
        GetLocation__C3Npc(arg0);
    } else {
        sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | 2);
        sp0.unk1 = (u8) (3 & sp0.unk1);
        sp0.unk2 = (u16) (0xFFFFFC00 & sp0.unk2);
        sp0.unk3 = (u8) (3 & sp0.unk3);
        sp0.unk4 = (u16) (0xFFFFFC00 & sp0.unk4);
        memcpy(arg0, &sp0, 6);
        arg0->unk6 = 0;
    }
    return arg0;
}
