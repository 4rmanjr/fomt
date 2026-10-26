# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D688/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D688/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D688/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D688/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803D688/opencode/func.c" 2
s32 SetLocation__3NpcRC13ActorLocation(void *, ? *);
s32 memcpy(s32 *, ? *, s32);

void func_0803D688(void *arg0, void *arg1, s32 arg2) {
s32 sp0;
s32 sp8;
s32 sp10;
    s16 temp_r0_2;
    s16 temp_r6;
    s32 temp_r1;
    s32 temp_sl;
    u32 temp_r4;
    void *temp_r0;
    void *temp_r1_2;
    void *var_ip;

    temp_sl = arg1->unk0(arg2);
    var_ip = 0;
    temp_r1 = arg1->unk8;
    if (temp_r1 != 0) {
        temp_r1_2 = *((temp_sl * 4) + temp_r1);
        if ((temp_r1_2 != 0) && (temp_r1_2->unk0 != 0)) {
            temp_r0 = temp_r1_2->unk4;
            if (temp_r0 != 0) {
                var_ip = temp_r0->unk4;
            }
        }
    }
    if (var_ip != 0) {
        temp_r6 = var_ip->unk6;
        temp_r0_2 = var_ip->unk8;
        sp8.unk0 = (u16) ((0xFFFFFC00 & sp8.unk0) | ((u32) (var_ip->unkA << 0x16) >> 0x16));
        sp8.unk1 = (u8) ((3 & sp8.unk1) | (((u16) temp_r6 & 0x3F) * 4));
        sp8.unk2 = (u16) ((0xFFFFFC00 & sp8.unk2) | ((u32) (temp_r6 << 0x10) >> 0x16));
        sp8.unk3 = (u8) ((3 & sp8.unk3) | (((u16) temp_r0_2 & 0x3F) * 4));
        sp8.unk4 = (u16) ((0xFFFFFC00 & sp8.unk4) | ((u32) (temp_r0_2 << 0x10) >> 0x16));
        temp_r4 = (u32) (var_ip->unkB << 0x1C) >> 0x1E;
        memcpy(&sp0, &sp8, 6);
        sp0.unk6 = (s8) temp_r4;
    } else {
        sp10.unk0 = (u16) ((0xFFFFFC00 & sp10.unk0) | 0x234);
        sp10.unk1 = (u8) (3 & sp10.unk1);
        sp10.unk2 = (u16) (0xFFFFFC00 & sp10.unk2);
        sp10.unk3 = (u8) (3 & sp10.unk3);
        sp10.unk4 = (u16) (0xFFFFFC00 & sp10.unk4);
        memcpy(&sp0, &sp10, 6);
        sp0.unk6 = 0;
    }
    SetLocation__3NpcRC13ActorLocation(arg0, &sp0);
    arg0->unkC = (u8) ((-0x20 & arg0->unkC) | (temp_sl & 0x1F));
    arg0->unkC = (s16) (0xFFFFFC1F & (u16) arg0->unkC);
    arg0->unkD = (u8) (-0x7D & arg0->unkD);
    arg0->unkC = (s32) ((s32) arg0->unkC & 0xFE007FFF);
}
