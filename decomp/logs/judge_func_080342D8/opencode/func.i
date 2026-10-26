# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080342D8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080342D8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080342D8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080342D8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080342D8/opencode/func.c" 2
s32 GetCurrentTask__C13HarvestSprite(s32);
s32 GetFriendship__C3Npc(s32);
s32 GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32);
s32 func_080338F0();
s32 func_08034180(void *, s32, u8, s32);
s32 func_08034260(void *);
u16 func_080AB788(s32);
s32 method_0809E7D8__13HarvestSpritePC15UnkBarnAnimal2C(s32, s32 *);

void func_080342D8(void *arg0) {
    s32 sp0;
    s32 temp_r1;
    s32 temp_r4;

    GetFriendship__C3Npc(arg0->unk34);
    if (((func_080338F0() << 0x18) == 0) || ((func_08034260(arg0) << 0x18) == 0)) {
        temp_r1 = ((sp0 & 0xFFFF0000) | func_080AB788(0xB4)) & 0xFF00FFFF;
        sp0 = temp_r1;
        temp_r4 = arg0->unk34;
        sp0 = (temp_r1 & 0xFFFFFF) | (((func_080AB788(0x100 - GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r4, GetCurrentTask__C13HarvestSprite(temp_r4))) >> 6) + 2) << 0x18);
        method_0809E7D8__13HarvestSpritePC15UnkBarnAnimal2C(arg0->unk34, &sp0);
        func_08034180(arg0, 0, arg0->unk20, 0);
    }
}
