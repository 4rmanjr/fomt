# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008020/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008020/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008020/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008020/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008020/opencode/func.c" 2
s32 func_08007EA8(void *);
u32 func_080D7568(u8 *, u32);

s32 func_08008020(void *arg0, u32 arg1) {
    s32 sp0;
    s32 var_r1;
    s32 var_r3;
    u32 temp_r0;
    u32 var_r1_2;
    u8 *var_r4;
    u8 temp_r5;

    if (arg1 <= 9U) {
        var_r3 = 0;
        var_r4 = arg0 + 4;
loop_2:
        temp_r5 = *var_r4;
        if (temp_r5 == 0) {
            sp0 = var_r3;
            temp_r0 = func_080D7568(var_r4, arg1);
            var_r1 = 0;
            if (temp_r0 <= 0x1FFU) {
                var_r1 = 1;
            }
            if (var_r1 != 0) {
                arg0->unk1 = temp_r5;
                var_r1_2 = 0;
                if (arg0->unk4 != 0) {
                    var_r1_2 = (u32) (0 - arg0->unk80) >> 0x1F;
                }
                arg0->unk0 = (s8) var_r1_2;
                return (var_r3 << 9) | temp_r0;
            }
            goto block_9;
        }
block_9:
        var_r4 += 0x7C;
        var_r3 += 1;
        if (var_r3 > 1) {
            goto block_14;
        }
        goto loop_2;
    }
    if ((arg1 == 0xA) && (arg0->unk1 != 0)) {
        func_08007EA8(arg0);
        return 0;
    }
block_14:
    return 0x400;
}
