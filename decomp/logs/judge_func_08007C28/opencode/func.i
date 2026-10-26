# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007C28/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007C28/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007C28/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007C28/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08007C28/opencode/func.c" 2
s32 func_080080A0(void *, u32, u32);
extern void *gUnk_03000408;

void func_08007C28(s32 arg1) {
    s32 sp0;
    s32 *temp_r2;
    s32 temp_r1;
    s32 var_r1;
    u16 temp_r0;
    u16 temp_r7;
    u32 var_r0;
    u8 temp_r5;
    void *temp_r4;
    void *temp_r6;

    temp_r6 = gUnk_03000408;
    if (arg1 != 0) {
        sp0 = arg1;
        temp_r5 = sp0;
        var_r0 = 0;
        if ((u32) temp_r5 <= 0xFFU) {
            temp_r1 = *(temp_r6 + ((temp_r5 >> 5) * 4)) & (1 << (0x1F & temp_r5));
            var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if (var_r0 != 0) {
            temp_r4 = temp_r6 + 0x20 + ((temp_r5 * 8) + 4);
            var_r1 = 0;
            if (((u32) (arg1 << 8) >> 0x10) == temp_r4->unk4) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {
                temp_r0 = temp_r4->unk2 - 1;
                temp_r4->unk2 = temp_r0;
                temp_r7 = temp_r0;
                if (temp_r7 == 0) {
                    func_080080A0(temp_r6 + 0x824, (u32) (temp_r4->unk0 << 0x16) >> 0x16, (u32) (temp_r4->unk1 << 0x1A) >> 0x1C);
                    temp_r4->unk4 = temp_r7;
                    temp_r4->unk0 = (void *) temp_r6->unk20;
                    temp_r6->unk20 = temp_r4;
                    if ((u32) temp_r5 <= 0xFFU) {
                        temp_r2 = temp_r6 + ((temp_r5 >> 5) * 4);
                        *temp_r2 &= ~(1 << (temp_r5 & 0x1F));
                    }
                    temp_r6->unk920 = (u16) (temp_r6->unk920 - 1);
                }
            }
        }
    }
}
