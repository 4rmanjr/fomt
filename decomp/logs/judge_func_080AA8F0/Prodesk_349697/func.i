# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA8F0/Prodesk_349697/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA8F0/Prodesk_349697/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA8F0/Prodesk_349697/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA8F0/Prodesk_349697/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AA8F0/Prodesk_349697/func.c" 2
s32 GetFirstSlotWithTool__C8RucksackUi(s32, s32);
s32 GetFirstSlotWith__C9ToolChestUi(s32, s32);
s32 GetId__C4Tool();
u32 GetLove__C12Bachelorette();
u32 GetRivalEventCount__C12Bachelorette(s32);
s8 GetTool__C9ToolStack(s32);
s32 IsEmpty__C9ToolStack(s32);
s32 func_080A01F8(s32, s32);
s32 func_080A041C(s32);
s32 func_080A0504(s32);
extern ? gUnk_08107438;

s32 func_080AA8F0(void *arg0) {
    s32 sp0;
    s8 sp18;
    s32 *var_r5;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r7;
    s32 var_r6;
    u32 var_r6_2;
    void *temp_r0_2;
    void *temp_r1;

    temp_r7 = arg0->unk94 + 0x1CD4;
    if (((func_080A0504(temp_r7) << 0x18) == 0) && (func_080A041C(temp_r7) == 0)) {
        temp_r4 = arg0->unk94 + 0x1C34;
        var_r6 = 0;
        if ((((IsEmpty__C9ToolStack(temp_r4) << 0x18) == 0) && (sp18 = GetTool__C9ToolStack(temp_r4), (GetId__C4Tool() == 0x4B))) || (temp_r0 = GetFirstSlotWithTool__C8RucksackUi(arg0->unk94 + 0x1C38, 0x4B), (temp_r0 != -1)) || (GetFirstSlotWith__C9ToolChestUi(arg0->unk94 + 0x380, 0x4B) != temp_r0)) {
            var_r6 = 1;
        }
        if (var_r6 != 0) {
            goto block_15;
        }
        temp_r0_2 = &gUnk_08107438 + 0xC;
        sp0.unk0 = gUnk_08107438.unk0;
        sp0.unk4 = (s32) gUnk_08107438.unk4;
        sp0.unk8 = (s32) gUnk_08107438.unk8;
        temp_r1 = &sp0 + 0xC;
        sp0.unkC = (s32) gUnk_08107438.unkC;
        temp_r1->unk4 = (s32) temp_r0_2->unk4;
        temp_r1->unk8 = (s32) temp_r0_2->unk8;
        var_r6_2 = 0;
        var_r5 = &sp0;
loop_11:
        temp_r0_3 = func_080A01F8(temp_r7, *var_r5);
        if ((temp_r0_3 == 0) || (GetLove__C12Bachelorette() <= 0xC34FU) || (GetRivalEventCount__C12Bachelorette(temp_r0_3) > 3U)) {
            var_r5 += 4;
            var_r6_2 += 1;
            if (var_r6_2 > 5U) {
                goto block_15;
            }
            goto loop_11;
        }
        return 1;
    }
block_15:
    return 0;
}
