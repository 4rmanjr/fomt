# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCF4C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCF4C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCF4C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCF4C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080DCF4C/kilo-1531/func.c" 2
s32 __builtin_delete(void *);
extern ? __vt_7AEntity;
extern ? vtable_unk_080E7568;

void func_080DCF4C(void *arg0, s32 arg1) {
    s32 var_r5;
    u32 temp_r7;
    u32 var_r6;
    void **var_r4;
    void *temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    arg0->unk14 = &vtable_unk_080E7568;
    temp_r0 = arg0->unk10;
    if (temp_r0 != 0) {
        var_r6 = 0;
        temp_r7 = temp_r0->unk8;
        if (temp_r7 > 0U) {
            var_r5 = arg0->unk18;
            var_r4 = temp_r0 + 0xC;
            do {
                temp_r1 = *var_r4;
                if (temp_r1 != 0) {
                    temp_r1->unk4C->unk14(temp_r1, var_r5);
                }
                var_r5 += 0x10;
                var_r4 += 4;
                var_r6 += 1;
            } while (var_r6 < temp_r7);
        }
    }
    arg0->unk14 = &__vt_7AEntity;
    temp_r1_2 = arg0->unk10;
    if (temp_r1_2 != 0) {
        temp_r1_2->unk4->unk8(temp_r1_2, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
