# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008364/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008364/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008364/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008364/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08008364/opencode/func.c" 2
s32 __builtin_delete(s32 *);
s32 free();
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);

void func_08008364(s32 *arg0, s32 arg1) {
    ? *temp_r0;
    s32 temp_r6;
    void *var_r4;
    void *var_r5;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        var_r5 = temp_r0 + 0xA0;
loop_2:
        if (temp_r0 != var_r5) {
            var_r5 -= 0x14;
            temp_r6 = var_r5->unk4;
            var_r4 = var_r5->unk0;
            if (var_r4 != temp_r6) {
                do {
                    func_08007C28(var_r4, var_r4->unk4);
                    func_080079E8(var_r4, 2);
                    var_r4 += 8;
                } while (var_r4 != temp_r6);
            }
            if (var_r5->unk0 != 0) {
                free();
            }
            goto loop_2;
        }
        __builtin_delete(temp_r0);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
