# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F2DC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F2DC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F2DC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F2DC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0801F2DC/opencode/func.c" 2
s32 __builtin_new(s32);
void *func_080A4A00(s32, void *, s32, void *);

void func_0801F2DC(void *arg0) {
    s8 sp8;
    s32 var_r0;
    s32 var_r2;
    u32 temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *var_r1;

    if (arg0->unk0->unk14(arg0) == 0x23) {
        temp_r0 = (u32) (arg0->unk1038->unk12 << 0x1B) >> 0x1B;
        if (temp_r0 > 3U) {
            if (temp_r0 <= 8U) {
                var_r0 = __builtin_new(0x40);
                var_r1 = arg0 + 0xFF4;
                sp8 = 0;
                var_r2 = 0;
            } else if (temp_r0 <= 0xFU) {
                var_r0 = __builtin_new(0x40);
                var_r1 = arg0 + 0xFF4;
                sp8 = 0;
                var_r2 = 1;
            } else if (temp_r0 <= 0x12U) {
                var_r0 = __builtin_new(0x40);
                var_r1 = arg0 + 0xFF4;
                sp8 = 0;
                var_r2 = 2;
            } else {
                goto block_8;
            }
        } else {
block_8:
            var_r0 = __builtin_new(0x40);
            var_r1 = arg0 + 0xFF4;
            sp8 = 0;
            var_r2 = 3;
        }
        temp_r0_2 = func_080A4A00(var_r0, var_r1, var_r2, arg0);
        temp_r1 = arg0->unk1064;
        if ((temp_r0_2 != temp_r1) && (temp_r1 != 0)) {
            temp_r1->unk24->unk8(temp_r1, 3);
        }
        arg0->unk1064 = temp_r0_2;
        return;
    }
    temp_r1_2 = arg0->unk1064;
    if ((temp_r1_2 != 0) && (temp_r1_2 != 0)) {
        temp_r1_2->unk24->unk8(temp_r1_2, 3);
    }
    arg0->unk1064 = 0;
}
