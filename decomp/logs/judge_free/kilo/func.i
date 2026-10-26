# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_free/kilo/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_free/kilo/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_free/kilo/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_free/kilo/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_free/kilo/func.c" 2
typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
} GenObj;
void free(s32 arg0) {
    GenObj *temp_r0;
    void *temp_r1;
    GenObj *temp_r2;
    GenObj *temp_r2_2;
    GenObj *var_r3;

    if (arg0 != 0) {
        var_r3 = arg0 - 0x10;
        temp_r2 = var_r3->unk8;
        if ((temp_r2 != 0) && (temp_r2->unk4 == 0)) {
            temp_r2->unk0 = (s32) (temp_r2->unk0 + 0x10 + var_r3->unk0);
            temp_r2->unkC = (void *) var_r3->unkC;
            temp_r0 = var_r3->unkC;
            if (temp_r0 != 0) {
                temp_r0->unk8 = temp_r2;
            }
            var_r3 = temp_r2;
        }
        temp_r2_2 = var_r3->unkC;
        if ((temp_r2_2 != 0) && (temp_r2_2->unk4 == 0)) {
            var_r3->unk0 = (s32) (var_r3->unk0 + 0x10 + temp_r2_2->unk0);
            var_r3->unkC = (void *) temp_r2_2->unkC;
            temp_r1 = temp_r2_2->unkC;
            if (temp_r1 != 0) {
                temp_r1->unk8 = var_r3;
            }
        }
        var_r3->unk4 = 0;
    }
}
