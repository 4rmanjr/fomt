# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808E65C/Prodesk_341912/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808E65C/Prodesk_341912/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808E65C/Prodesk_341912/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808E65C/Prodesk_341912/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808E65C/Prodesk_341912/func.c" 2
s32 ExtractItemAt__8RucksackUi(s32 *, s32, s32);
s32 GetArticleStackAt__5ShelfUi(s32, s32);
s32 __12ArticleStack(s32 *);
s32 func_0800F390(s32);
s32 func_080CBA60(s32, s32);
s32 func_080CC0B4(s32);
s32 func_080CCDEC(s32, s32);
s32 func_080CE184(void *, s32, s32);
s32 memcpy(s32, ? *, s32);

void func_0808E65C(void *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;

    if (arg1 == 0) {
        func_0800F390(arg0->unkFC);
        func_080CC0B4(arg0->unk78);
        return;
    }
    if (arg1 <= 8) {
        temp_r4 = arg0->unk100;
        ExtractItemAt__8RucksackUi(&sp0, temp_r4, func_080CE184(arg0, arg1, 0));
        temp_r4_2 = arg0->unk78;
        func_080CBA60(temp_r4_2, func_080CE184(arg0, arg1, 0));
        return;
    }
    temp_r4_3 = GetArticleStackAt__5ShelfUi(arg0->unk104, func_080CE184(arg0, arg1, arg0->unk94->unkBC));
    __12ArticleStack(&sp0);
    memcpy(temp_r4_3, &sp0, 2);
    temp_r4_4 = arg0->unk7C;
    func_080CCDEC(temp_r4_4, func_080CE184(arg0, arg1, 0));
}
