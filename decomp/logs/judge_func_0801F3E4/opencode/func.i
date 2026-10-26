# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F3E4/opencode/func.c" 2
u16 GetIconId__C7Article(s32 *);
s32 GetVaseArticleId__C9FarmHouse(s32);
s32 __7ArticleUi(s32 *);
void *__builtin_new(s32);
s32 func_0805E824(void ***, void **, u16, s32);
s32 func_080A4740(void *, void *, s32, s32);
s32 memcpy(s32 *, ? *, s32);
extern ? vtable_unk_080E602C;

void func_0801F3E4(void *arg0) {
s32 sp0;
    void **sp20;
s32 sp34;
    u16 *sp38;
    u16 temp_r7;
    void **temp_r4_2;
    void **var_r4;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r4;
    void *temp_r6;
    void *var_r5;

    if (arg0->unk0->unk14(arg0) == 0x1D) {
        if (GetVaseArticleId__C9FarmHouse(arg0->unk1038 + 0x1F4) != 0x5F) {
            __7ArticleUi(&sp34);
            temp_r7 = GetIconId__C7Article(&sp34);
            temp_r4 = arg0->unk1068;
            if (temp_r4 != 0) {
                func_0805E824(&sp20, arg0->unk0->unk64(arg0), temp_r7, 0x100);
                (*sp20)->unk10(&sp0, sp20, *(sp24 + (sp20.unkC * 4)));
                memcpy(&sp0, &sp0, 0x20);
                temp_r1 = temp_r4 + 0x28;
                temp_r0 = &sp0 + 0xC;
                temp_r4->unk28 = (s32) sp0.unk0;
                temp_r1->unk4 = (s32) sp0.unk4;
                temp_r1->unk8 = (s32) sp0.unk8;
                temp_r1_2 = temp_r1 + 0xC;
                temp_r1->unkC = (s32) sp0.unkC;
                temp_r1_2->unk4 = (s32) temp_r0->unk4;
                temp_r1_2->unk8 = (s32) temp_r0->unk8;
                temp_r1_2->unkC = (s32) temp_r0->unkC;
                (temp_r1_2 + 0xC)->unk4 = (s32) (temp_r0 + 0xC)->unk4;
                temp_r4->unk48 = 1;
                return;
            }
            var_r5 = __builtin_new(0x4C);
            temp_r4_2 = arg0->unk0->unk64(arg0);
            func_080A4740(var_r5, arg0, 2, 0x1B);
            var_r5->unk24 = &vtable_unk_080E602C;
            temp_r6 = *temp_r4_2;
            temp_r6->unkC(&sp38, temp_r4_2, temp_r7);
            temp_r6->unk10(var_r5 + 0x28, temp_r4_2, *sp38);
            var_r5->unk48 = 1;
            var_r4 = arg0 + 0x1068;
            goto block_6;
        }
    } else {
        var_r4 = arg0 + 0x1068;
        var_r5 = 0;
block_6:
        temp_r1_3 = *var_r4;
        if ((var_r5 != temp_r1_3) && (temp_r1_3 != 0)) {
            temp_r1_3->unk24->unk8(temp_r1_3, 3);
        }
        *var_r4 = var_r5;
    }
}
