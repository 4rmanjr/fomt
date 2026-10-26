# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFA38/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFA38/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFA38/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFA38/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CFA38/opencode/func.c" 2
s8 GetArticle__C12RucksackItem(s32 *);
s8 *GetDesc__C4Food(s32 *);
s8 *GetDesc__C7Article();
s32 GetFood__C12RucksackItem(s32 *, s32 *);
s32 GetKind__C12RucksackItem(s32 *);
s8 *GetName__C4Food(s32 *);
s8 *GetName__C7Article();
s32 IsWrapped__C12RucksackItem(s32 *);
s32 memcpy(s8 *, s8 *, u32);
u32 strlen(s8 *);
extern s8 *gUnk_08117AA4;

s8 *func_080CFA38(s8 *arg1, s32 arg2) {
    s32 sp0;
s32 sp4;
    s8 sp8;
    s32 temp_r0;
    s8 *temp_r7;
    s8 *temp_r8;
    s8 *var_r0;
    s8 *var_r0_2;
    s8 *var_sb;
    u32 temp_r0_2;
    u32 temp_r5;
    u32 var_r4;
    u32 var_r4_2;

    sp0 = arg2;
    var_sb = 0;
    *arg1 = 0;
    temp_r0 = GetKind__C12RucksackItem(&sp0);
    switch (temp_r0) {
    case 0:
        if ((IsWrapped__C12RucksackItem(&sp0) << 0x18) != 0) {
            GetFood__C12RucksackItem(&sp4, &sp0);
            var_r0 = GetName__C4Food(&sp4);
block_8:
            var_r4 = strlen();
            if (var_r4 > 0x63U) {
                var_r4 = 0x63;
            }
            memcpy(arg1, var_r0, var_r4);
            arg1[var_r4] = 0;
            temp_r8 = gUnk_08117AA4;
            temp_r0_2 = strlen(arg1);
            temp_r7 = &arg1[temp_r0_2];
            temp_r5 = 0x63 - temp_r0_2;
            if (temp_r5 != 0) {
                var_r4_2 = strlen(temp_r8);
                if (var_r4_2 > temp_r5) {
                    var_r4_2 = temp_r5;
                }
                memcpy(temp_r7, temp_r8, var_r4_2);
                temp_r7[var_r4_2] = 0;
            }
            var_sb = arg1;
        } else {
            GetFood__C12RucksackItem(&sp4, &sp0);
            var_r0_2 = GetDesc__C4Food(&sp4);
block_16:
            var_sb = var_r0_2;
        }
        break;
    case 1:
        if ((IsWrapped__C12RucksackItem(&sp0) << 0x18) != 0) {
            sp8 = GetArticle__C12RucksackItem(&sp0);
            var_r0 = GetName__C7Article();
            goto block_8;
        }
        sp0.unk9 = GetArticle__C12RucksackItem(&sp0);
        var_r0_2 = GetDesc__C7Article();
        goto block_16;
    }
    return var_sb;
}
