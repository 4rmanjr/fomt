# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016FA4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016FA4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016FA4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016FA4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08016FA4/opencode/func.c" 2
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, ? *);
s32 SetLocation__7AEntityUiii(void *, u32, s16, s16);
s32 func_0800EECC(s32);
s32 func_080A0A90(s32);
s32 memcpy(s32 *, ? *, s32);

void func_08016FA4(void *arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5) {
s32 sp0;
s32 sp8;
    s32 sp10;
    void *sp14;
    s32 var_r1;
    u8 temp_r4;
    u8 temp_r6;
    void **temp_r0_2;
    void **temp_r0_4;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_5;

    sp10 = arg1;
    temp_r0 = arg0->unk4;
    sp14 = temp_r0;
    if (arg1 <= 0x49) {
        temp_r0_2 = temp_r0->unkA8;
        temp_r0_3 = (*temp_r0_2)->unk40(temp_r0_2, sp10);
        if (temp_r0_3 == 0) {

        } else {
            sp8.unk0 = (u16) ((0xFFFFFC00 & sp8.unk0) | (arg2 & 0x3FF));
            sp8.unk1 = (u8) ((3 & sp8.unk1) | ((arg3 & 0x3F) * 4));
            sp8.unk2 = (u16) ((0xFFFFFC00 & sp8.unk2) | (((u32) (arg3 << 0x10) >> 0x16) & 0x3FF));
            sp8.unk3 = (u8) ((3 & sp8.unk3) | (((u16) arg4 & 0x3F) * 4));
            sp8.unk4 = (u16) ((0xFFFFFC00 & sp8.unk4) | (((u32) (arg4 << 0x10) >> 0x16) & 0x3FF));
            memcpy(&sp0, &sp8, 6);
            sp0.unk6 = (s8) arg5;
            SetLocation__12AActorEntityRC13ActorLocation(temp_r0_3, &sp0);
            temp_r0_3->unk14->unk20(temp_r0_3);
        }
    } else {
        temp_r0_4 = sp14->unkA8;
        temp_r0_5 = (*temp_r0_4)->unk40(temp_r0_4, sp10);
        if (temp_r0_5 != 0) {
            sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | (arg2 & 0x3FF));
            temp_r6 = (3 & sp0.unk1) | ((arg3 & 0x3F) * 4);
            sp0.unk1 = temp_r6;
            sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | (((u32) (arg3 << 0x10) >> 0x16) & 0x3FF));
            temp_r4 = (3 & sp0.unk3) | (((u16) arg4 & 0x3F) * 4);
            sp0.unk3 = temp_r4;
            sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | (((u32) (arg4 << 0x10) >> 0x16) & 0x3FF));
            SetLocation__7AEntityUiii(temp_r0_5, (u32) (sp0.unk0 << 0x16) >> 0x16, (s16) (((sp0.unk2 & 0x3FF) << 6) | (temp_r6 >> 2)), (s16) (((sp0.unk4 & 0x3FF) << 6) | (temp_r4 >> 2)));
            temp_r0_5->unk14->unk20(temp_r0_5);
        }
    }
    if (sp10 == 0) {
        if (arg2 == 0x19) {
            func_080A0A90(sp14->unk8C + 0x1CD4);
        }
        var_r1 = 0;
        if ((u32) (arg2 - 0x35) <= 0xFEU) {
            var_r1 = arg2 - 0x34;
        } else if ((u32) (arg2 + 0xFFFFFECB) <= 0xFEU) {
            var_r1 = arg2 + 0xFFFFFECC;
        }
        if (var_r1 > 0) {
            func_0800EECC(sp14->unk8C + 0x1BD8);
        }
    }
}
