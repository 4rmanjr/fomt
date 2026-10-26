# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD49C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD49C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD49C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD49C/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AD49C/opencode/func.c" 2
s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, ? *, s32, s32);
void *__builtin_new(s32);
void *func_0802C210(s32);
void *func_08037CC4(void *, s32);
s32 memcpy(s32 *, ? *, s32);
extern ? vtable_unk_080E8404;

void func_080AD49C(s32 arg0, s32 arg1) {
s32 sp4;
s32 spC;
    u32 temp_r0;
    void **temp_r4;
    void *temp_r0_2;
    void *temp_r1;
    void *var_r0;
    void *var_r5;

    temp_r4 = arg0 + 8 + (arg1 * 4);
    temp_r1 = *temp_r4;
    if (temp_r1 != 0) {
        temp_r1->unk14->unk8(temp_r1, 3);
        *temp_r4 = 0;
    }
    var_r5 = 0;
    temp_r0 = arg1 - 0x5E;
    switch (temp_r0) {
    case 0:
        var_r0 = func_0802C210(arg0);
block_7:
        var_r5 = var_r0;
        break;
    case 1:
    case 2:
    case 3:
        var_r5 = __builtin_new(0x30);
        spC.unk0 = (u16) ((0xFFFFFC00 & spC.unk0) | 0x234);
        spC.unk1 = (u8) (3 & spC.unk1);
        spC.unk2 = (u16) (0xFFFFFC00 & spC.unk2);
        spC.unk3 = (u8) (3 & spC.unk3);
        spC.unk4 = (u16) (0xFFFFFC00 & spC.unk4);
        memcpy(&sp4, &spC, 6);
        sp4.unk6 = 0;
        __12AActorEntityP10GameObjectRC13ActorLocationUiUi(var_r5, arg0, &sp4, 2, 0);
        var_r5->unk14 = &vtable_unk_080E8404;
        break;
    case 4:
    case 5:
        temp_r0_2 = __builtin_new(0x18);
        sp4.unk0 = (u16) ((0xFFFFFC00 & sp4.unk0) | 0x234);
        sp4.unk1 = (u8) (3 & sp4.unk1);
        sp4.unk2 = (u16) (0xFFFFFC00 & sp4.unk2);
        sp4.unk3 = (u8) (3 & sp4.unk3);
        sp4.unk4 = (u16) (0xFFFFFC00 & sp4.unk4);
        var_r0 = func_08037CC4(temp_r0_2, arg0);
        goto block_7;
    }
    if (var_r5 != 0) {
        *(arg0 + 8 + (arg1 * 4)) = var_r5;
        var_r5->unk14->unk10(var_r5);
    }
}
