# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070140/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070140/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070140/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070140/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08070140/kilo-1531/func.c" 2
s32 func_08008920(void *);
s32 func_08075AE8(void *, s32, ? *, s32, s32);
s32 memcpy(s32 *, ? *, s32);

void func_08070140(void *arg0) {
s32 sp4;
    s32 temp_r6;
    s32 temp_r7;
    s32 var_r1;
    s32 var_r1_2;
    void **temp_r1;
    void *var_r4;

    var_r4 = arg0->unkD0;
    temp_r7 = (arg0 + 0xD0)->unk4;
    if (var_r4 != temp_r7) {
        do {
            temp_r6 = func_08008920(arg0);
            temp_r1 = var_r4->unk8;
            (*temp_r1)->unk10(&sp4, temp_r1, *(var_r4->unkC + (var_r4->unk14 * 4)));
            memcpy(&sp4, &sp4, 0x20);
            var_r1 = arg0->unk14;
            if (var_r1 < 0) {
                var_r1 += 0xFF;
            }
            var_r1_2 = arg0->unk10;
            if (var_r1_2 < 0) {
                var_r1_2 += 0xFF;
            }
            func_08075AE8(arg0 + 0x18, temp_r6, &sp4, var_r4->unk0 - (var_r1 >> 8), var_r4->unk4 - (var_r1_2 >> 8));
            var_r4 += 0x1C;
        } while (var_r4 != temp_r7);
    }
}
