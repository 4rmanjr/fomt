# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003B40/t_y/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003B40/t_y/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003B40/t_y/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003B40/t_y/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08003B40/t_y/func.c" 2
s32 func_080087C8(s32);
void *func_08008918(s32);
void *func_08008940(s32);
s32 func_08009300(s32 *, void *);
s32 func_0800934C(s32 *, s32, s32, s32);
s32 func_080094B8(s32 *, s32);
extern ? vtable_unk_080E5B80;

void func_08003B40(s32 arg0) {
    s16 sp0;
    s32 sp4;
    ? *spC;
s32 sp10;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;

    temp_r0 = func_08008918();
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r1 = func_08008918(arg0);
    sp4 = 0;
    sp4.unk4 = 0;
    spC = &vtable_unk_080E5B80;
    func_08009300(&sp10, temp_r1);
    func_0800934C(&sp10, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    temp_r0_2->unk8->unk10(temp_r0_2, &sp4);
loop_2:
    if ((s32) ((0 - sp4) | sp4) < 0) {
        func_080087C8(arg0);
        goto loop_2;
    }
    func_080094B8(&sp4, 2);
}
