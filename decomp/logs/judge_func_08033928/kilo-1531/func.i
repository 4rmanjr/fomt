# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033928/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033928/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033928/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033928/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033928/kilo-1531/func.c" 2
s32 GetCurrentTask__C13HarvestSprite(void *);
s32 GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(void *, s32);
s32 SetLocation__12AActorEntityRC13ActorLocation(void *, ? *);
s32 __12AActorEntityP10GameObjectRC13ActorLocationUiUi(void *, s32, ? *, s32, s32);
s32 func_08033914();
s32 func_08034180(void *, u8, u8, s32);
s32 func_0809E804(s32 *, s8);
s32 func_080A03B8(s32 *, s32, s32);
void *func_080A099C(s32, s8);
extern ? gUnk_080F149C;
extern ? gUnk_080F14E2;
extern ? vtable_unk_080E68C8;

void *func_08033928(void *arg0, s32 arg1, s8 arg2, s32 arg3, s32 arg4) {
s32 sp4;
s32 spC;
    s32 var_r8;
    u32 temp_r0;
    u8 var_r5;
    void *temp_r4;

    func_080A03B8(&sp4, arg3, *((arg2 * 4) + &gUnk_080F149C));
    __12AActorEntityP10GameObjectRC13ActorLocationUiUi(arg0, arg1, &sp4, 2, (s32) *((arg2 * 2) + &gUnk_080F14E2));
    arg0->unk14 = &vtable_unk_080E68C8;
    var_r5 = 0;
    arg0->unk30 = arg2;
    arg0->unk34 = func_080A099C(arg3, arg2);
    arg0->unk38 = (s32) (arg3 + 0x438);
    arg0->unk3C = arg4;
    arg0->unk41 = 0;
    (arg0 + 0x41)->unk1 = 0;
    var_r8 = 0x8000;
    temp_r0 = arg0->unk34->unk1C;
    switch (temp_r0) {
    case 4:
        var_r5 = 4;
        break;
    case 2:
        var_r5 = arg0->unk34->unk22;
        break;
    case 0:
        func_0809E804(&spC, arg2);
        SetLocation__12AActorEntityRC13ActorLocation(arg0, &spC);
        break;
    case 3:
        var_r5 = 1;
        temp_r4 = arg0->unk34;
        GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r4, GetCurrentTask__C13HarvestSprite(temp_r4));
        var_r8 = func_08033914();
        break;
    case 1:
    case 5:
        var_r5 = 1;
        break;
    }
    arg0->unk40 = (u8) ~var_r5;
    func_08034180(arg0, var_r5, *((arg0 + 0x40) - 0x20), var_r8);
    return arg0;
}
