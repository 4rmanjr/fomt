# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034260/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034260/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034260/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034260/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034260/opencode/func.c" 2
s32 GetCurrentTask__C13HarvestSprite(s32);
s32 GetLocation__C7AEntity(s32 *, void *);
s32 func_080330F4(u8 *, s32, s32, ? *, s32, s32);
s32 func_0809E988(s32, u8, u8 *);
s32 method_0809E7E4__13HarvestSpritePC15UnkBarnAnimal2C(s32, s32 *);

s32 func_08034260(void *arg0) {
    u8 sp8;
s32 sp10;
    s32 sp18;
    s32 temp_r5;

    if (arg0->unk41 != 0) {
        return 0;
    }
    temp_r5 = arg0->unk0;
    GetLocation__C7AEntity(&sp10, arg0);
    func_080330F4(&sp8, arg0->unk3C, temp_r5, &sp10, GetCurrentTask__C13HarvestSprite(arg0->unk34), arg0->unk38);
    if ((sp8 << 0x1C) == 0) {
        arg0->unk41 = 1U;
        return 0;
    }
    func_0809E988(arg0->unk38, arg0->unk30, &sp8);
    sp18 &= 0xFFFF0000;
    method_0809E7E4__13HarvestSpritePC15UnkBarnAnimal2C(arg0->unk34, &sp18);
    return 1;
}
