# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034940/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034940/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034940/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034940/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08034940/opencode/func.c" 2
s32 SetLocation__7AEntityUiii(void *, s32, s16, s16);
s32 func_08034180(void *, s32, s32, s32);
s32 func_0809E994(s32, u8);
s32 method_0809E7FC__13HarvestSprite(s32, ? *);
s32 smethod_08009ADC__4Farm(s32 *);
s32 smethod_08009AE8__4Farm(s32 *);

s32 func_08034940(void *arg0) {
s32 sp0;
s32 sp4;
s32 sp8;
    s16 temp_r1;
    s32 var_r2;
    u16 temp_r0_2;
    u16 temp_r2;
    u32 temp_r0;

    temp_r2 = (*arg0->unk0)->unk144()->unkA;
    temp_r0 = (u32) (temp_r2 << 0x1B) >> 0x1B;
    if ((temp_r0 <= 5U) || ((u32) (((temp_r0 - 6) * 0x3C) + ((u32) (temp_r2 << 0x15) >> 0x1A)) >= (u32) (arg0->unk30 + 0x385))) {
        temp_r0_2 = arg0->unk4;
        switch (temp_r0_2) {
        case 37:
            smethod_08009ADC__4Farm(&sp0);
            SetLocation__7AEntityUiii(arg0, 2, sp0.unk0, sp0.unk2);
            break;
        case 17:
            smethod_08009AE8__4Farm(&sp4);
            SetLocation__7AEntityUiii(arg0, 2, sp4.unk0, sp4.unk2);
            break;
        }
        func_0809E994(arg0->unk38, arg0->unk30);
        method_0809E7FC__13HarvestSprite(arg0->unk34, &sp8);
        temp_r1 = arg0->unkA;
        if (temp_r1 == 0x168) {
            var_r2 = 1;
        } else {
            var_r2 = 2;
            if ((s32) temp_r1 <= 0x167) {
                var_r2 = 3;
            }
        }
        func_08034180(arg0, 1, var_r2, 0x8000);
        return 1;
    }
    return 0;
}
