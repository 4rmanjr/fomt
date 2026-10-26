# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3900/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3900/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3900/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3900/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A3900/kilo-1531/func.c" 2
s8 GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32);
s32 SetPlayedMinigame__13HarvestSpriteQ213HarvestSprite4Taskb(s32, s32, u8);
s32 func_08011498(s32, s32);
s32 func_080A0930(s32, s32);
s32 func_080B3BE4(s32 *, s32 *);
s32 func_080B3C0C(s32 *, s32);
s32 func_080B3C3C(void ***, ? *);
u8 func_080B3C78(s32 *);
s32 func_080B3C84(s32 *);

void **func_080A3900(void **arg0, void *arg1) {
s32 sp0;
    void **sp8;
    s32 spC;
    void ***sp14;
    void *sp18;
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 var_r0;
    u32 temp_r0;
    u8 temp_r4;
    void *temp_r0_3;

    spC = 2;
    spC.unk4 = 0x12;
    temp_r0 = arg1->unkC - 0x24;
    switch (temp_r0) {
    case 0:
        var_r0 = 0;
block_9:
        spC = var_r0;
        break;
    case 1:
        var_r0 = 2;
        goto block_9;
    case 2:
        var_r0 = 3;
        goto block_9;
    case 3:
        var_r0 = 4;
        goto block_9;
    case 4:
        var_r0 = 5;
        goto block_9;
    case 5:
        var_r0 = 6;
        goto block_9;
    case 6:
        var_r0 = 1;
        goto block_9;
    }
    temp_r0_2 = func_080A0930(arg1->unk8 + 0x1CD4, arg1->unkC);
    spC.unk4 = GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r0_2, 2);
    func_080B3BE4(&sp0, &spC);
    func_080B3C3C(&sp8, &sp0);
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    temp_r4 = func_080B3C78(&sp0);
    SetPlayedMinigame__13HarvestSpriteQ213HarvestSprite4Taskb(temp_r0_2, 2, temp_r4);
    arg1->unk4->unkC = temp_r4;
    temp_r4_2 = arg1->unk8;
    func_08011498(temp_r4_2, func_080B3C84(&sp0));
    temp_r0_3 = arg1->unk4;
    arg1->unk4 = 0;
    sp14 = &sp8;
    sp18 = temp_r0_3;
    sp8 = 0;
    *arg0 = temp_r0_3;
    func_080B3C0C(&sp0, 2);
    return arg0;
}
