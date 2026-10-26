# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007A28/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007A28/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007A28/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007A28/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007A28/opencode/func.c" 2
s32 func_08007EE8(void *, u32, s32);
s32 func_08007F84(void *, u16, u16);
s32 func_080080A0(void *, u32, u32);
extern void *gUnk_03000408;

void func_08007A28(u32 arg1, s32 arg2) {
    u32 sp0;
    s32 sp4;
    u32 sp8;
    void *spC;
    u16 *sp10;
    u16 *sp14;
    s32 *temp_r2_2;
    s32 temp_r1;
    u16 *temp_r4;
    u32 temp_r2;
    u32 temp_r3;
    u32 var_r0;
    u32 var_r7;
    void *temp_r5;
    void *var_r6;
    void *var_r8;

    sp0 = arg1;
    sp4 = arg2;
    temp_r5 = gUnk_03000408;
    temp_r4 = temp_r5 + 0x92A;
    if (temp_r5->unk92A != 0) {
        func_08007F84(temp_r5 + 0x824, temp_r5->unk928, temp_r5->unk92A);
        *temp_r4 = 0;
    }
    if (sp4 != 0) {
        sp8 = sp0 + sp4;
        var_r7 = 0;
        sp14 = temp_r4;
        spC = temp_r5 + 0x824;
        sp10 = temp_r5 + 0x928;
        if (temp_r5->unk920 != 0) {
            var_r8 = temp_r5 + 0x24;
            var_r6 = var_r8;
loop_5:
            var_r0 = 0;
            if (var_r7 <= 0xFFU) {
                temp_r1 = *(temp_r5 + ((var_r7 >> 5) * 4)) & (1 << (0x1F & var_r7));
                var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
            }
            if (var_r0 != 0) {
                temp_r3 = (u32) (var_r6->unk0 << 0x16) >> 0x16;
                temp_r2 = var_r6->unk1 << 0x1A;
                if ((sp0 < (u32) (temp_r3 + (1 << (temp_r2 >> 0x1C)))) && (temp_r3 < sp8)) {
                    func_080080A0(spC, temp_r3, temp_r2 >> 0x1C);
                    var_r6->unk4 = 0;
                    var_r6->unk0 = (void *) temp_r5->unk20;
                    temp_r5->unk20 = var_r8;
                    if (var_r7 <= 0xFFU) {
                        temp_r2_2 = temp_r5 + ((var_r7 >> 5) * 4);
                        *temp_r2_2 &= ~(1 << (0x1F & var_r7));
                    }
                    temp_r5->unk920 = (u16) (temp_r5->unk920 - 1);
                }
            }
            var_r6 += 8;
            var_r8 += 8;
            var_r7 += 1;
            if ((temp_r5->unk920 != 0) && (var_r7 <= 0xFFU)) {
                goto loop_5;
            }
        }
        func_08007EE8(spC, sp0, sp4);
        *sp10 = sp0.unk0;
        *sp14 = sp0.unk4;
    }
}
