# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808BC14/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808BC14/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808BC14/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808BC14/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808BC14/kilo-1531/func.c" 2
s32 ExtractItemAt__8RucksackUi(s32 *, s32, s32);
s8 GetArticle__C12RucksackItem(s32 *);
s32 GetId__C7Article();
s32 GetKind__C12RucksackItem(s32 *);
s32 func_0800ED2C(s32);
s32 func_0800F204(s32);
s8 func_0800F258(s32);
s32 func_0800F390(s32);
s32 func_080CCDEC(s32, s32);
s32 func_080CD4D4(s32);
s32 func_080CE184(void *, s32, s32);

void func_0808BC14(void *arg0, s32 arg1) {
s32 sp0;
    s8 sp4;
    s32 temp_r4;
    s32 temp_r4_2;

    if (arg1 == 9) {
        if (func_0800F204(arg0->unk100) == 1) {
            sp4 = func_0800F258(arg0->unk100);
            if (GetId__C7Article() == 0x35) {
                func_0800ED2C(arg0->unk8 + 0x1BD8);
            }
        }
        func_0800F390(arg0->unk100);
        func_080CD4D4(arg0->unk7C);
        return;
    }
    temp_r4 = arg0->unk104;
    ExtractItemAt__8RucksackUi(&sp0, temp_r4, func_080CE184(arg0, arg1, 0));
    if (GetKind__C12RucksackItem(&sp0) == 1) {
        sp0.unk5 = GetArticle__C12RucksackItem(&sp0);
        if (GetId__C7Article() == 0x35) {
            func_0800ED2C(arg0->unk8 + 0x1BD8);
        }
    }
    temp_r4_2 = arg0->unk7C;
    func_080CCDEC(temp_r4_2, func_080CE184(arg0, arg1, 0));
}
