# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A05E8/Prodesk_347511/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A05E8/Prodesk_347511/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A05E8/Prodesk_347511/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A05E8/Prodesk_347511/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A05E8/Prodesk_347511/func.c" 2
s32 func_0809EA6C(s32 *, s32, ? *);
s32 memcpy(s32 *, ? *, s32);
s32 strcpy(void *, ? *);

void func_080A05E8(void *arg0, ? arg1) {
s32 sp0;
s32 sp14;
    u8 sp24;
s32 sp28;
s32 sp30;
    u32 temp_r0;
    u8 temp_r1;
    void *temp_r1_2;

    temp_r1 = arg0->unk3;
    temp_r0 = (u32) (temp_r1 << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        arg0->unk3 = (u8) (2 | temp_r1);
        sp30.unk0 = (u16) ((0xFFFFFC00 & sp30.unk0) | 0x1D);
        sp30.unk1 = (u8) ((3 & sp30.unk1) | 0x90);
        sp30.unk2 = (u16) ((0xFFFFFC00 & sp30.unk2) | 1);
        sp30.unk3 = (u8) ((3 & sp30.unk3) | 0x90);
        sp30.unk4 = (u16) ((0xFFFFFC00 & sp30.unk4) | 1);
        memcpy(&sp28, &sp30, 6);
        sp28.unk6 = (s8) temp_r0;
        func_0809EA6C(&sp0, arg1, &sp28);
        temp_r1_2 = arg0 + 4;
        arg0->unk4 = (s32) sp0.unk0;
        temp_r1_2->unk4 = (s32) sp0.unk4;
        temp_r1_2->unk8 = (s32) sp0.unk8;
        temp_r1_2->unkC = (s32) sp0.unkC;
        (temp_r1_2 + 0xC)->unk4 = (s32) (&sp0 + 0xC)->unk4;
        strcpy(arg0 + 0x18, &sp14);
        arg0->unk28 = (u8) sp24;
        (arg0 + 0x28)->unk1 = (u8) sp0.unk25;
        arg0->unk2A = (u8) ((-2 & arg0->unk2A) | ((u32) (sp0.unk26 << 0x1F) >> 0x1F));
    }
}
