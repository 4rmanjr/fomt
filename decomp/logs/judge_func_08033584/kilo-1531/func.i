# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033584/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033584/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033584/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033584/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08033584/kilo-1531/func.c" 2
s32 GetArticle__C12RucksackItem(s32 *);
s32 GetFood__C12RucksackItem(s32 *, ? *);
s32 GetKind__C12RucksackItem(s32 *);
s32 GetPrice__C7Product(s32 *);
s32 GetStoredBushelCount__C4Barn(s32);
s32 GetStoredBushelCount__C4Coop(s32);
s32 HasBushelForEnt__C4CoopUi(s32, u8);
s32 HasBushelForPregnancyStall__C4BarnUi(s32, u8);
s32 HasBushelForStall__C4BarnUi(s32, u8);
s32 IsEmpty__C12RucksackItem(s32 *);
s32 __7ProductG4Food(s32 *, s32);
s32 __7ProductG7Article(s32 *, s32);
s32 method_0800A4A4__9FieldPlot(s32 *, s32 *);

u32 func_08033584(void *arg0, s32 arg1, void **arg2) {
s32 sp0;
s32 sp4;
    s32 sp8;
s32 spC;
    ? *temp_r4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 var_r0;
    u32 temp_r0_4;
    u32 var_r3;
    u32 var_r5;
    u32 var_r6;
    void *temp_r0_6;

    temp_r0_4 = (u32) (arg0->unk0 << 0x1C) >> 0x1C;
    switch (temp_r0_4) {
    case 1:
        temp_r1 = *(arg1 + 0x9C8 + (((arg0->unk2 * 0x2B) + arg0->unk1) * 4));
        var_r3 = 0;
        if ((((u32) (temp_r1 << 0x1E) >> 0x1E) == 1) && ((u32) (((u32) (temp_r1 << 0x14) >> 0x1C) - 1) <= 3U)) {
            var_r3 = (u32) (0 - (((u32) (temp_r1 << 0x18) >> 0x1A) ^ 0x14)) >> 0x1F;
        }
        return var_r3;
    case 2:
        temp_r1_2 = *(arg1 + 0x9C8 + (((arg0->unk2 * 0x2B) + arg0->unk1) * 4));
        if (((u32) (temp_r1_2 << 0x14) >> 0x1C) == 5) {
            sp8 = temp_r1_2;
            method_0800A4A4__9FieldPlot(&sp0, &sp8);
            if ((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) {
                temp_r0_5 = GetKind__C12RucksackItem(&sp0);
                if (temp_r0_5 != 0) {
                    if (temp_r0_5 != 1) {
                        goto block_10;
                    }
                    temp_r4 = &sp0 + 0xD;
                    __7ProductG7Article(temp_r4, GetArticle__C12RucksackItem(&sp0));
                    temp_r0_2 = GetPrice__C7Product(temp_r4);
                    return (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F;
                }
                GetFood__C12RucksackItem(&sp4, &sp0);
                __7ProductG4Food(&spC, (sp0.unk6 << 0x10) | ((sp4.unk1 << 8) | sp4.unk0));
                temp_r0 = GetPrice__C7Product(&spC);
                return (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
            }
        }
    default:
block_10:
        return 0U;
    case 3:
        var_r6 = 0;
        temp_r5 = arg1 + 0x3FC;
        if (GetStoredBushelCount__C4Coop(temp_r5) != 0) {
            var_r0 = HasBushelForEnt__C4CoopUi(temp_r5, arg0->unk1);
block_19:
            if ((var_r0 << 0x18) == 0) {
                var_r6 = 1;
            }
        }
block_21:
        return var_r6;
    case 4:
        var_r6 = 0;
        temp_r5_2 = arg1 + 0x5DC;
        if (GetStoredBushelCount__C4Barn(temp_r5_2) != 0) {
            var_r0 = HasBushelForStall__C4BarnUi(temp_r5_2, arg0->unk1);
            goto block_19;
        }
        goto block_21;
    case 5:
        var_r6 = 0;
        temp_r5_3 = arg1 + 0x5DC;
        if (GetStoredBushelCount__C4Barn(temp_r5_3) != 0) {
            var_r0 = HasBushelForPregnancyStall__C4BarnUi(temp_r5_3, arg0->unk1);
            goto block_19;
        }
        goto block_21;
    case 6:
        temp_r0_6 = (*arg2)->unk44(arg2, arg0->unk1 + 0x36);
        var_r5 = 0;
        if ((temp_r0_6 != 0) && (((temp_r0_6->unk14->unk50(temp_r0_6) << 0x18) != 0) || ((temp_r0_6->unk14->unk54(temp_r0_6) << 0x18) != 0) || ((temp_r0_6->unk14->unk58(temp_r0_6) << 0x18) != 0))) {
            var_r5 = 1;
        }
        return var_r5;
    case 7:
        (*arg2)->unk44(arg2, arg0->unk1 + 0x2E);
        goto block_10;
    case 8:
        temp_r0_3 = (s32) (*arg2)->unk44(arg2, arg0->unk1 + 0x4C);
        return (u32) ((0 - temp_r0_3) | temp_r0_3) >> 0x1F;
    }
}
