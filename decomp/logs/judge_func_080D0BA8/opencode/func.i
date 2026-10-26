# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0BA8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0BA8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0BA8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0BA8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080D0BA8/opencode/func.c" 2
extern void *gUnk_03000420;

void func_080D0BA8(void *arg0) {
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;

    gUnk_03000420->unk38 = (u32) ((u32) (gUnk_03000420->unk38 + 1) % 10U);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    temp_r4 = gUnk_03000420 + (gUnk_03000420->unk38 << 5);
    temp_r4_2 = temp_r4 + 0x3C;
    temp_r5 = arg0 + 0xC;
    temp_r4->unk3C = (s32) arg0->unk0;
    temp_r4_2->unk4 = (s32) arg0->unk4;
    temp_r4_2->unk8 = (s32) arg0->unk8;
    temp_r4_3 = temp_r4_2 + 0xC;
    temp_r4_2->unkC = (s32) arg0->unkC;
    temp_r4_3->unk4 = (s32) temp_r5->unk4;
    temp_r4_3->unk8 = (s32) temp_r5->unk8;
    temp_r4_3->unkC = (s32) temp_r5->unkC;
    (temp_r4_3 + 0xC)->unk4 = (s32) (temp_r5 + 0xC)->unk4;
}
