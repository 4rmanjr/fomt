# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A6524/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A6524/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A6524/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A6524/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080A6524/kilo-1531/func.c" 2
s32 GetStockingArticleId__C9FarmHouse(s32);
s32 HasStocking__C9FarmHouse(s32);
s32 func_080A4F50();
s32 func_080A5AB0(void *, ? *, u8, s32);
extern ? gUnk_0810710C;
extern ? gUnk_08107338;
extern ? gUnk_08107344;

void func_080A6524(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r2_2;
    s32 var_r2_3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r2;
    void *temp_r4;
    void *temp_r4_2;

    func_080A4F50();
    temp_r1 = arg0->unk0;
    switch (temp_r1) {
    case 29:
        if (arg0->unk98 != 0) {
            arg0->unk98 = 0U;
            if ((HasStocking__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
                if (GetStockingArticleId__C9FarmHouse(arg0->unk94 + 0x1F4) == 0x5F) {
                    var_r2 = 1;
                } else {
                    var_r2 = 2;
                }
            } else {
                var_r2 = 0;
            }
            func_080A5AB0(arg0, &gUnk_0810710C, var_r2, arg1);
            return;
        }
        return;
    case 6:
        if (((u32) (arg0->unk94->unk21A0 << 0x1E) >> 0x1E) == 1) {
            temp_r4 = arg0 + 0xB4;
            if (temp_r4->unk1 != 0) {
                temp_r4->unk1 = 0U;
                func_080A5AB0(arg0, &gUnk_08107338, arg0->unkB4, arg1);
                var_r2_2 = 0;
                temp_r0 = arg0->unkB4 + 1;
                arg0->unkB4 = temp_r0;
                if (temp_r0 == gUnk_08107338.unk4->unk2) {
                    var_r2_2 = 1;
                }
                if (var_r2_2 != 0) {
                    arg0->unkB4 = 0U;
                }
            }
            temp_r4_2 = arg0 + 0xB8;
            if (temp_r4_2->unk1 != 0) {
                temp_r4_2->unk1 = 0U;
                func_080A5AB0(arg0, &gUnk_08107344, arg0->unkB8, arg1);
                var_r2_3 = 0;
                temp_r0_2 = arg0->unkB8 + 1;
                arg0->unkB8 = temp_r0_2;
                if (temp_r0_2 == gUnk_08107344.unk4->unk2) {
                    var_r2_3 = 1;
                }
                if (var_r2_3 != 0) {
                    arg0->unkB8 = 0U;
                }
            }
        }
        break;
    }
}
