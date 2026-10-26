# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007B54/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007B54/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007B54/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007B54/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007B54/opencode/func.c" 2
u32 func_08008020(void *);
s32 func_080080A0(void *, u32, s32);
extern void *gUnk_03000408;

s32 func_08007B54(s32 arg1) {
    s32 *temp_r2;
    s32 temp_r6_2;
    s32 var_r0;
    s32 var_r1;
    u32 temp_r0;
    u32 var_r0_2;
    void *temp_r3;
    void *temp_r4;
    void *temp_r6;

    temp_r4 = gUnk_03000408;
    temp_r6 = temp_r4 + 0x824;
    temp_r0 = func_08008020(temp_r6);
    var_r0 = 0;
    if (temp_r0 <= 0x3FFU) {
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        temp_r3 = temp_r4->unk20;
        if ((temp_r3 != 0) && (temp_r4->unk20 = (void *) temp_r3->unk0, (temp_r3 != 0))) {
            temp_r6_2 = (s32) ((temp_r3 - 4) - (temp_r4 + 0x20)) >> 3;
            if ((u32) temp_r6_2 <= 0xFFU) {
                temp_r2 = temp_r4 + (((u32) temp_r6_2 >> 5) * 4);
                *temp_r2 |= 1 << (0x1F & temp_r6_2);
            }
            temp_r4->unk920 = (u16) (temp_r4->unk920 + 1);
            temp_r3->unk0 = (s16) ((0xFFFFFC00 & (u16) temp_r3->unk0) | (temp_r0 & 0x3FF));
            temp_r3->unk1 = (u8) ((-0x3D & temp_r3->unk1) | ((arg1 & 0xF) * 4));
            temp_r3->unk2 = 1;
            var_r0_2 = temp_r4->unk922 + 1;
            if (var_r0_2 > 0xFFFFU) {
                var_r0_2 = 1;
            }
            temp_r3->unk4 = (u16) var_r0_2;
            temp_r4->unk922 = (u16) var_r0_2;
            var_r1 = (u8) temp_r6_2 | ((u16) temp_r3->unk4 << 8);
        } else {
            func_080080A0(temp_r6, temp_r0, arg1);
            goto block_11;
        }
    } else {
block_11:
        var_r1 = 0;
    }
    return var_r1;
}
