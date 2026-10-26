# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08092754/Prodesk_342421/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08092754/Prodesk_342421/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08092754/Prodesk_342421/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08092754/Prodesk_342421/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08092754/Prodesk_342421/func.c" 2
s8 GetArticle__C12RucksackItem(s32 *);
s32 GetChicken__4CoopUi(s32, s32);
s32 GetFood__C12RucksackItem(s32 *, s32 *);
s32 GetGrowthStage__C3Dog(s32);
s32 GetGrowthStage__C7Chicken();
u16 GetIconId__C4Food(s32 *);
u16 GetIconId__C7Article();
s32 *GetItemAt__8RucksackUi(s32, u32);
s32 GetKind__C12RucksackItem(s32 *);
s32 IsEmpty__C12RucksackItem(s32 *);
s32 IsWrapped__C12RucksackItem(s32 *);
s32 func_0800F190(s32);
u32 func_0800F204(s32);
s32 func_0800F20C(s32 *, s32);
s8 func_0800F258(s32);
s32 func_0800F294(s32 *, s32);
s32 func_0800F344(s32);
s32 func_080CC728(s32, u32, ? *, u16);
s32 func_080CCE58(s32, ? *, s32, s32);
extern ? gUnk_0858BA28;
extern ? gUnk_086678A0;

void func_08092754(void *arg0, u32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s8 spC;
    ? *var_r1;
    s32 temp_r0;
    u16 var_r0;
    u16 var_r2;
    u16 var_r4;
    u16 var_r6_2;
    u16 var_r6_3;
    u32 temp_r0_2;
    u32 var_r6;

    var_r6 = 0;
    if (arg1 > 0U) {
        do {
            sp4 = *GetItemAt__8RucksackUi(arg0->unk104, var_r6);
            if ((IsEmpty__C12RucksackItem(&sp4) << 0x18) == 0) {
                var_r4 = 0;
                temp_r0 = GetKind__C12RucksackItem(&sp4);
                switch (temp_r0) {
                case 0:
                    GetFood__C12RucksackItem(&sp8, &sp4);
                    var_r0 = GetIconId__C4Food(&sp8);
block_7:
                    var_r4 = var_r0;
                    break;
                case 1:
                    spC = GetArticle__C12RucksackItem(&sp4);
                    var_r0 = GetIconId__C7Article();
                    goto block_7;
                }
                if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
                    var_r4 = 0x160;
                }
                sp0 = 1;
                func_080CC728(arg0->unk7C, var_r6, &gUnk_086678A0, var_r4);
            }
            var_r6 += 1;
        } while (var_r6 < arg1);
    }
    if ((func_0800F190(arg0->unk100) << 0x18) != 0) {
        return;
    }
    temp_r0_2 = func_0800F204(arg0->unk100);
    switch (temp_r0_2) {
    case 0:
        func_0800F20C(&sp4, arg0->unk100);
        var_r6_2 = GetIconId__C4Food(&sp4);
        func_0800F294(&sp4, arg0->unk100);
        if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
            var_r6_2 = 0x160;
        }
        var_r1 = &gUnk_086678A0;
        var_r2 = var_r6_2;
block_30:
        func_080CCE58(arg0->unk7C, var_r1, (s32) var_r2, 1);
        return;
    case 1:
        sp0.unkD = func_0800F258(arg0->unk100);
        var_r6_3 = GetIconId__C7Article();
        func_0800F294(&sp4, arg0->unk100);
        if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
            var_r6_3 = 0x160;
        }
        var_r1 = &gUnk_086678A0;
        var_r2 = var_r6_3;
        goto block_30;
    case 2:
        if (GetGrowthStage__C3Dog(arg0->unk8 + 0x1C70) == 0) {
            var_r1 = &gUnk_0858BA28;
            var_r2 = 0x3DA;
        } else {
            var_r1 = &gUnk_0858BA28;
            var_r2 = 0x374;
        }
        goto block_30;
    case 3:
        if (GetChicken__4CoopUi(arg0->unk8 + 0x410, func_0800F344(arg0->unk100)) != 0) {
            if (GetGrowthStage__C7Chicken() == 0) {
                var_r1 = &gUnk_0858BA28;
                var_r2 = 0x73D;
            } else {
                var_r1 = &gUnk_0858BA28;
                var_r2 = 0x734;
            }
            goto block_30;
        }
        return;
    case 4:
        func_080CCE58(arg0->unk7C, &gUnk_086678A0, 0x35, 1);
        break;
    }
}
