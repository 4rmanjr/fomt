# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025A40/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025A40/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025A40/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025A40/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08025A40/opencode/func.c" 2
s32 func_08008B6C(s32, s32);
s32 func_08008CD0(s32);
s32 func_0800EC4C(s32);
s32 func_0800ECB0(s32);
s32 func_08025944();
s32 func_0802A510(void *);

void func_08025A40(void *arg0, u8 arg1) {
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    void *temp_r0;
    void *temp_r0_2;

    if ((func_08025944() << 0x18) != 0) {
        temp_r0 = (*arg0->unk0)->unk14C();
        var_r4 = temp_r0->unk0;
        temp_r6 = temp_r0->unk4;
        if (var_r4 != temp_r6) {
loop_2:
            if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                var_r4 += 4;
                if (var_r4 == temp_r6) {
                    goto block_4;
                }
                goto loop_2;
            }
            var_r0 = *var_r4;
        } else {
block_4:
            var_r0 = *(temp_r6 - 4);
        }
        func_08008B6C(var_r0, 0xC7);
        arg0->unk3C = 0;
        return;
    }
    if (arg1 == 0) {
        var_r0_2 = func_0800EC4C(arg0->unk38);
    } else {
        var_r0_2 = func_0800ECB0(arg0->unk38);
    }
    if (var_r0_2 != 0) {
        arg0->unk3C = 0x15;
        (arg0 + 0x3C)->unk1 = 0x14;
        func_0802A510(arg0);
        temp_r0_2 = (*arg0->unk0)->unk14C();
        var_r4_2 = temp_r0_2->unk0;
        temp_r5 = temp_r0_2->unk4;
        if (var_r4_2 != temp_r5) {
loop_13:
            if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
                var_r4_2 += 4;
                if (var_r4_2 == temp_r5) {
                    goto block_15;
                }
                goto loop_13;
            }
            var_r0_3 = *var_r4_2;
        } else {
block_15:
            var_r0_3 = *(temp_r5 - 4);
        }
        func_08008B6C(var_r0_3, 0xBC);
    }
}
