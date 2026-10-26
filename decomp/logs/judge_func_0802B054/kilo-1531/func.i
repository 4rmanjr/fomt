# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B054/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B054/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B054/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B054/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B054/kilo-1531/func.c" 2
s32 GetId__C7Article(s8 *);
s32 IsDisplayEnabled__C11ShippingBini(void *, s32);
s32 func_0800F204(s32);
s8 func_0800F258(s32);
s32 func_0809C32C(void *);
u8 func_0809DFAC(void *);
u8 func_0809E02C(void *);
s32 func_0809E174(void *);
s32 func_0809E184(void *);
s32 func_0809E194(void *);
s32 func_0809E1A4(void *);
extern s32 gUnk_080F11BC;
extern s32 gUnk_080F11E0;

void func_0802B054(void *arg0) {
    s8 sp0;
    s32 sp4;
    s8 spC;
    s32 sp10;
    s32 sp18;
    s32 sp20;
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r7;
    s32 var_r7_2;
    u32 var_r6;
    u32 var_r6_2;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    if (func_0809DFAC(arg0->unk34 + 0x2E58) == 9) {
        temp_r4 = 0x30 & arg0->unk34->unk2189;
        if ((temp_r4 == 0) && (func_0800F204(arg0->unk38 + 0x54) == 1)) {
            sp0 = func_0800F258(arg0->unk38 + 0x54);
            if (GetId__C7Article(&sp0) == 0x25) {
                temp_r0 = arg0->unk0;
                sp4 = 0x330;
                sp4.unk4 = temp_r4;
                (*temp_r0)->unk140(temp_r0, &sp4, 0);
            }
        }
    }
    if (func_0809E02C(arg0->unk34 + 0x2E58) == 9) {
        temp_r4_2 = 0x18 & arg0->unk34->unk218B;
        if ((temp_r4_2 == 0) && (func_0800F204(arg0->unk38 + 0x54) == 1)) {
            spC = func_0800F258(arg0->unk38 + 0x54);
            if (GetId__C7Article() == 0x26) {
                temp_r0_2 = arg0->unk0;
                sp10 = 0x332;
                sp10.unk4 = temp_r4_2;
                (*temp_r0_2)->unk140(temp_r0_2, &sp10, 0);
            }
        }
    }
    if (!(0xC0 & arg0->unk34->unk2194)) {
        var_r7 = 1;
        var_r6 = 0;
        var_r4 = &gUnk_080F11BC;
loop_13:
        if (var_r6 <= 8U) {
            if ((IsDisplayEnabled__C11ShippingBini(arg0->unk34 + 0x54, *var_r4) << 0x18) == 0) {
                var_r7 = 0;
            } else {
                var_r4 += 4;
                var_r6 += 1;
                goto loop_13;
            }
        }
        if ((var_r7 != 0) && ((func_0809E184(arg0->unk34 + 0x2E58) << 0x18) != 0) && ((func_0809E194(arg0->unk34 + 0x2E58) << 0x18) != 0) && ((func_0809DFAC(arg0->unk34 + 0x2E58) << 0x18) != 0) && ((func_0809E1A4(arg0->unk34 + 0x2E58) << 0x18) != 0)) {
            temp_r0_3 = arg0->unk0;
            sp18 = 0x34D;
            sp18.unk4 = 0;
            (*temp_r0_3)->unk140(temp_r0_3, &sp18, 0);
        }
    }
    if (!(3 & arg0->unk34->unk2195)) {
        var_r7_2 = 1;
        var_r6_2 = 0;
        var_r4_2 = &gUnk_080F11E0;
loop_25:
        if (var_r6_2 <= 0xDU) {
            if ((IsDisplayEnabled__C11ShippingBini(arg0->unk34 + 0x54, *var_r4_2) << 0x18) == 0) {
                var_r7_2 = 0;
            } else {
                var_r4_2 += 4;
                var_r6_2 += 1;
                goto loop_25;
            }
        }
        if ((var_r7_2 != 0) && ((func_0809C32C(arg0->unk34 + 0x3480) << 0x18) != 0) && ((func_0809E174(arg0->unk34 + 0x2E58) << 0x18) != 0) && ((func_0809E02C(arg0->unk34 + 0x2E58) << 0x18) != 0)) {
            temp_r0_4 = arg0->unk0;
            sp20 = 0x34E;
            sp20.unk4 = 0;
            (*temp_r0_4)->unk140(temp_r0_4, &sp20, 0);
        }
    }
}
