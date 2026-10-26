# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A37A8/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A37A8/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A37A8/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A37A8/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A37A8/kilo-1531/func.c" 2
s8 GetAffection__C6Animal(void **);
void **GetChicken__4CoopUi(s32);
s32 GetName__C6Animal(void **);
s32 GetUnkEnt__C4Coop(s32);
s32 SetFestivalWinner__6Animal(void **);
s32 func_080B3C90(s32 *);
s32 func_080BC898(s32 *, ? *);
s32 func_080BC8C0(s32 *, s32);
s8 func_080BC8F0(s32 *);
s32 func_080BC8FC(void ***, ? *);
s32 memcpy(s32 *, s32, u32);
u32 strlen();

void ***func_080A37A8(void ***arg0, void *arg1) {
    void **sp0;
s32 sp4;
s32 sp18;
    void ***sp20;
    void **sp24;
    void ***sp28;
    void **sp2C;
    u32 sp30;
    u32 sp34;
    void ***sp38;
    void **sp3C;
    s32 temp_r6;
    u32 *var_r0;
    u32 temp_r1_2;
    u32 var_r4;
    u8 temp_r0_3;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r1;
    void **temp_r1_3;
    void **temp_r4;

    if (GetUnkEnt__C4Coop(arg1->unk8 + 0x410) == -1) {
        temp_r0 = arg1->unk4;
        arg1->unk4 = 0;
        sp0 = temp_r0;
        sp20 = &sp0;
        sp24 = temp_r0;
        sp0 = 0;
        *arg0 = temp_r0;
        goto block_4;
    }
    temp_r0_2 = GetChicken__4CoopUi(arg1->unk8 + 0x410);
    if (temp_r0_2 == 0) {
        temp_r1 = arg1->unk4;
        arg1->unk4 = temp_r0_2;
        sp0 = temp_r1;
        sp28 = &sp0;
        sp2C = temp_r1;
        sp0 = temp_r0_2;
        *arg0 = temp_r1;
block_4:
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
    } else {
        func_080B3C90(&sp4);
        sp30 = 0xC8;
        temp_r0_3 = arg1->unk8->unk10;
        temp_r1_2 = ((temp_r0_3 >> 3) * 7) + ((u32) (temp_r0_3 << 0x1D) >> 0x1D);
        sp34 = temp_r1_2;
        var_r0 = &sp30;
        if (temp_r1_2 < 0xC8U) {
            var_r0 = &sp34;
        }
        sp4.unk10 = (s8) *var_r0;
        temp_r6 = GetName__C6Animal(temp_r0_2);
        var_r4 = strlen();
        if (var_r4 > 0xCU) {
            var_r4 = 0xC;
        }
        memcpy(&sp4, temp_r6, var_r4);
        *(&sp4 + var_r4) = 0;
        sp4.unk11 = GetAffection__C6Animal(temp_r0_2);
        func_080BC898(&sp18, &sp4);
        func_080BC8FC(&sp0, &sp18);
        if (sp0 != 0) {
            (*sp0)->unk8(sp0, 3);
        }
        if ((func_080BC8F0(&sp18) << 0x18) != 0) {
            SetFestivalWinner__6Animal(temp_r0_2);
        }
        temp_r4 = arg1->unk4;
        temp_r4->unkC = func_080BC8F0(&sp18);
        temp_r1_3 = arg1->unk4;
        arg1->unk4 = 0;
        sp0 = temp_r1_3;
        sp38 = &sp0;
        sp3C = temp_r1_3;
        sp0 = 0;
        *arg0 = temp_r1_3;
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0->unk8(temp_r1_3, 3);
        }
        func_080BC8C0(&sp18, 2);
    }
    return arg0;
}
