# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B9C0/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B9C0/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B9C0/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B9C0/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B9C0/kilo-1531/func.c" 2
s32 func_0802B944();
s32 vfunc_10__7AEntity(void *);
extern ? vtable_unk_080E65F4;

void *func_0802B9C0(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;

    func_0802B944();
    arg0->unk14 = &vtable_unk_080E65F4;
    temp_r0 = arg0 + 0x34;
    arg0->unk34 = 0;
    temp_r0_2 = temp_r0 + 1;
    temp_r0->unk1 = 0;
    temp_r0_3 = temp_r0_2 + 3;
    temp_r0_2->unk3 = 0;
    temp_r0_3->unk1 = 0;
    temp_r0_3->unk4 = 0;
    temp_r0_3->unk8 = 0;
    temp_r0_3->unkC = 0;
    temp_r0_3->unk10 = 0;
    temp_r0_3->unk14 = 0;
    temp_r0_3->unk18 = 0;
    temp_r0_4 = temp_r0_3 + 0x1C;
    temp_r0_3->unk1C = 0;
    temp_r0_5 = temp_r0_4 + 2;
    temp_r0_4->unk2 = 0;
    temp_r0_5->unk2 = 0;
    (temp_r0_5 + 2)->unk1 = 0;
    vfunc_10__7AEntity(arg0);
    return arg0;
}
