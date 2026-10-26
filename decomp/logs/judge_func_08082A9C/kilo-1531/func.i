# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082A9C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082A9C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082A9C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082A9C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08082A9C/kilo-1531/func.c" 2
s32 GetFirstSlotWithArticle__C8RucksackUi(s32, s32);
s32 GetId__C7Article(s8 *);
s32 func_0800F190(s32);
s32 func_0800F204(s32);
s8 func_0800F258(s32);
s32 func_08050E50(void *, s32);
s32 func_080CABA0(void *, ? *);
extern ? gUnk_080FEE68;
extern ? gUnk_080FEED8;
extern ? gUnk_080FEF44;
extern ? gUnk_080FEF78;
extern ? gUnk_080FEFAC;
extern ? gUnk_080FF040;

void func_08082A9C(void *arg0, s32 arg1, u32 arg2) {
    s8 sp0;
    s32 *var_r1_2;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_3;
    s32 var_r8;

    var_r8 = 0;
    if (GetFirstSlotWithArticle__C8RucksackUi(arg0->unk8 + 0x1C38, arg1) == -1) {
        if (((func_0800F190(arg0->unk8 + 0x1C2C) << 0x18) == 0) && (func_0800F204(arg0->unk8 + 0x1C2C) == 1)) {
            sp0 = func_0800F258(arg0->unk8 + 0x1C2C);
            var_r1 = 0;
            if (GetId__C7Article(&sp0) == arg1) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {
                var_r8 = 1;
            }
        }
        if (var_r8 != 0) {
            goto block_8;
        }
        if (arg1 == 0x17) {
            func_080CABA0(arg0, &gUnk_080FEFAC);
        } else {
            func_080CABA0(arg0, &gUnk_080FF040);
        }
        func_08050E50(arg0 + 0x348, 0xA8);
        var_r1_2 = arg0 + 0x6A4;
        var_r0 = 2;
    } else {
block_8:
        var_r1_3 = 0;
        if (arg2 > (u32) arg0->unk8->unk1AA8) {
            var_r1_3 = 1;
        }
        if (var_r1_3 != 0) {
            if (arg1 == 0x17) {
                func_080CABA0(arg0, &gUnk_080FEE68);
            } else {
                func_080CABA0(arg0, &gUnk_080FEED8);
            }
            func_08050E50(arg0 + 0x348, 0xA8);
            var_r1_2 = arg0 + 0x6A4;
            var_r0 = 3;
        } else {
            arg0->unk48DC = arg1;
            if (arg1 == 0x17) {
                arg0->unk48E4 = 5;
                arg0->unk48E0 = arg2;
                func_080CABA0(arg0, &gUnk_080FEF44);
            } else {
                arg0->unk48E4 = 1;
                arg0->unk48E0 = arg2;
                func_080CABA0(arg0, &gUnk_080FEF78);
            }
            func_08050E50(arg0 + 0x348, 0xA9);
            var_r1_2 = arg0 + 0x6A4;
            var_r0 = 5;
        }
    }
    *var_r1_2 = var_r0;
}
