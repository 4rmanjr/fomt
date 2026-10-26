# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A56DC/Prodesk_349095/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A56DC/Prodesk_349095/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A56DC/Prodesk_349095/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A56DC/Prodesk_349095/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A56DC/Prodesk_349095/func.c" 2
s32 func_080A5960(void *, s16, s16);

void func_080A56DC(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk0 = (u32) ((u32) (arg1->unk0 << 0x16) >> 0x16);
    arg0->unk8 = (s32) ((((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)) << 0x10);
    arg0->unkC = (s32) ((((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)) << 0x10);
    arg0->unk90->unk14(arg0, arg2, arg3, arg4);
    func_080A5960(arg0, (s16) (((arg1->unk2 & 0x3FF) << 6) | ((u8) arg1->unk1 >> 2)), (s16) (((arg1->unk4 & 0x3FF) << 6) | ((u8) arg1->unk3 >> 2)));
}
