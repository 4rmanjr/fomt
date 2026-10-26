# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014C34/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014C34/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014C34/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014C34/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08014C34/opencode/func.c" 2
s32 SetHorse__4FarmRC5Horse(s32, ? *);
s32 __5HorseRC13ActorLocationUi(s32 *, ? *, s32);
s32 memcpy(s32 *, ? *, s32);

void func_08014C34(void *arg0, s8 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
s32 sp0;
s32 sp2C;
s32 sp34;
    s32 sp3C;
    void *sp40;
    s32 temp_sl;
    void **temp_r0_2;
    void **temp_r0_3;
    void *temp_r0;
    void *temp_r0_4;

    sp3C = arg2;
    temp_r0 = arg0->unk4;
    sp40 = temp_r0;
    if (arg1 == 0) {
        temp_sl = temp_r0->unk8C + 0x14;
        sp34.unk0 = (u16) ((0xFFFFFC00 & sp34.unk0) | (arg3 & 0x3FF));
        sp34.unk1 = (u8) ((3 & sp34.unk1) | (((u16) arg4 & 0x3F) * 4));
        sp34.unk2 = (u16) ((0xFFFFFC00 & sp34.unk2) | (((u32) (arg4 << 0x10) >> 0x16) & 0x3FF));
        sp34.unk3 = (u8) ((3 & sp34.unk3) | (((u16) arg5 & 0x3F) * 4));
        sp34.unk4 = (u16) ((0xFFFFFC00 & sp34.unk4) | (((u32) (arg5 << 0x10) >> 0x16) & 0x3FF));
        memcpy(&sp2C, &sp34, 6);
        sp2C.unk6 = arg1;
        __5HorseRC13ActorLocationUi(&sp0, &sp2C, sp3C * 0x78);
        SetHorse__4FarmRC5Horse(temp_sl, &sp0);
        temp_r0_2 = sp40->unkA8;
        (*temp_r0_2)->unk38(temp_r0_2, 0x2C);
        temp_r0_3 = sp40->unkA8;
        temp_r0_4 = (*temp_r0_3)->unk40(temp_r0_3, 0x2C);
        if ((temp_r0_4 != 0) && ((temp_r0_4->unk14->unk28(temp_r0_4) << 0x18) == 0)) {
            temp_r0_4->unk14->unk20(temp_r0_4);
        }
    }
}
