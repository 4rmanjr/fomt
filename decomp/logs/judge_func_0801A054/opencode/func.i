# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801A054/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801A054/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801A054/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801A054/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801A054/opencode/func.c" 2
void *GetMapData(s32);
s32 GetUpgradeLevel__C4Barn(s32);
s32 GetUpgradeLevel__C4Coop(s32);
s32 GetUpgradeLevel__C9FarmHouse(s32);
s32 func_0800E324(s32);
s32 func_0803A8A4(u32, s32, s32, s32, s32);

void *func_0801A054(void *arg0, void *arg1, u32 arg2) {
    s32 sp4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    u16 temp_r5_2;
    u16 temp_r6_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r4;

    if (arg2 > 0x233U) {
        arg0->unk0 = 0;
        arg0->unk4 = 0;
        arg0->unk8 = 0U;
        arg0->unkA = 0U;
    } else {
        temp_r0 = arg1->unk4;
        sp4 = temp_r0->unk0;
        if ((arg2 == 2) && (sp4 != 2)) {
            arg0->unk0 = (s32) arg1->unk1050;
            arg0->unk4 = 0;
            arg0->unk8 = 0x80U;
            arg0->unkA = 0x58U;
        } else {
            if (sp4 == arg2) {
                var_r0 = temp_r0->unk4;
            } else {
                temp_r8 = func_0800E324(arg1->unk1038 + 0x10);
                temp_r6 = GetUpgradeLevel__C9FarmHouse(arg1->unk1038 + 0x1F4);
                temp_r5 = GetUpgradeLevel__C4Coop(arg1->unk1038 + 0x410);
                var_r0 = func_0803A8A4(arg2, temp_r8, temp_r6, temp_r5, GetUpgradeLevel__C4Barn(arg1->unk1038 + 0x5F0));
            }
            temp_r0_2 = GetMapData(var_r0);
            temp_r5_2 = temp_r0_2->unk20;
            temp_r6_2 = temp_r0_2->unk22;
            if (sp4 == arg2) {
                temp_r4 = arg1->unk4;
                GetMapData(temp_r4->unk4);
                var_r1 = 0;
                var_r0_2 = temp_r4->unk2C;
            } else {
                var_r1 = temp_r0_2->unk1C;
                var_r0_2 = temp_r0_2->unk18;
            }
            arg0->unk0 = var_r0_2;
            arg0->unk4 = var_r1;
            arg0->unk8 = temp_r5_2;
            arg0->unkA = temp_r6_2;
        }
    }
    return arg0;
}
