# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2018/looptest/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2018/looptest/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2018/looptest/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2018/looptest/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080E2018/looptest/func.c" 2
s32 free();
s32 func_080086BC(void *, s32);
s32 func_080756D0(void *, s32);
s32 func_080E20C0(s32, s32);
extern ? vtable_unk_080E5A28;

void func_080E2018(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r1;
    s32 var_r4;
    void **temp_r1;

    temp_r0 = arg0 + 0xE0;
    if (temp_r0 != 0) {
        var_r4 = arg0 + 0x1A0;
        if (temp_r0 != var_r4) {
            do {
                var_r4 -= 0x30;
                func_080E20C0(var_r4, 0);
            } while (temp_r0 != var_r4);
        }
    }
    temp_r2 = (arg0 + 0xD0)->unk4;
    var_r1 = arg0->unkD0;
    if (var_r1 != temp_r2) {
        do {
            var_r1 += 0x1C;
        } while (var_r1 != temp_r2);
    }
    if (arg0->unkD0 != 0) {
        free();
    }
    arg0->unkA0 = &vtable_unk_080E5A28;
    arg0->unk20 = &vtable_unk_080E5A28;
    func_080756D0(arg0 + 0x18, 2);
    temp_r1 = arg0->unkC;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    func_080086BC(arg0, arg1);
}
