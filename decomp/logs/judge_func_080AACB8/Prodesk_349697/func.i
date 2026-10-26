# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AACB8/Prodesk_349697/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AACB8/Prodesk_349697/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AACB8/Prodesk_349697/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AACB8/Prodesk_349697/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080AACB8/Prodesk_349697/func.c" 2
s32 func_0800E324(s32);
s32 func_080A1CBC(s32 *, s32, u32);
s32 func_080A1ED4(s32, u32, s32);
s32 func_080AA9C8(void *, ? *);
s32 func_080AAE14(void *, s32, s32);
extern ? gUnk_08107450;

void func_080AACB8(void *arg0) {
s32 sp0;
    s32 temp_r1;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r1;
    u32 temp_r0;
    u32 var_r4_2;
    u8 temp_r7;
    u8 var_r4;
    void *var_r0;

    temp_r8 = func_0800E324(arg0->unk94 + 0x10);
    temp_r0 = arg0->unk4;
    switch (temp_r0) {
    case 14:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x3C8;
block_8:
        func_080AAE14(var_r0, var_r1, 9);
block_12:
        temp_r6 = arg0->unk94 + 0x34C8;
        temp_r1 = temp_r8 * 2;
        temp_r7 = *(temp_r1 + (&gUnk_08107450 + 1));
        var_r4 = *(temp_r1 + &gUnk_08107450);
        if ((u32) var_r4 < (u32) temp_r7) {
            do {
                if ((func_080A1ED4(temp_r6, (u32) var_r4, temp_r8) << 0x18) != 0) {
                    func_080A1CBC(&sp0, temp_r6, (u32) var_r4);
                    func_080AA9C8(arg0, &sp0);
                }
                var_r4 += 1;
            } while ((u32) var_r4 < (u32) temp_r7);
        }
        var_r4_2 = 0x60;
        do {
            if ((func_080A1ED4(temp_r6, var_r4_2, temp_r8) << 0x18) != 0) {
                func_080A1CBC(&sp0, temp_r6, var_r4_2);
                func_080AA9C8(arg0, &sp0);
            }
            var_r4_2 += 1;
        } while (var_r4_2 <= 0x73U);
        return;
    case 15:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x3E4;
        goto block_8;
    case 8:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x2C0;
        goto block_8;
    case 4:
        func_080AAE14(arg0 + 0x9C, 0x3E6, 0xC);
        goto block_12;
    case 10:
    case 12:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x3E0;
        goto block_8;
    case 11:
    case 13:
        var_r0 = arg0 + 0x9C;
        var_r1 = 0x2B4;
        goto block_8;
    case 0:
        func_080AAE14(arg0 + 0x9C, 0, 0);
        if (temp_r8 != 2) {
            return;
        }
        goto block_12;
    default:
        func_080AAE14(arg0 + 0x9C, 0, 0);
        return;
    }
}
