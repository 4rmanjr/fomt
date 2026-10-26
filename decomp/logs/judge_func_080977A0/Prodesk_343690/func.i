# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080977A0/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080977A0/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080977A0/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080977A0/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080977A0/Prodesk_343690/func.c" 2
s32 func_0809A58C(s32 *);
extern u16 gUnk_081010E8;

u16 func_080977A0(void *arg2) {
s32 sp0;
    s32 var_r3;
    u16 *var_r1;
    u16 *var_r2;
    u16 temp_r0;

    func_0809A58C(&sp0);
    arg2->unk0 = (s32) sp0.unk0;
    arg2->unk4 = (s32) sp0.unk4;
    arg2->unk8 = (s32) sp0.unk8;
    arg2->unkC = (s32) sp0.unkC;
    (arg2 + 0xC)->unk4 = (s32) (&sp0 + 0xC)->unk4;
    temp_r0 = (u16) arg2->unk0;
    if (temp_r0 == 0) {
        arg2->unk2 = temp_r0;
        arg2->unk4 = temp_r0;
        var_r3 = 0;
        var_r2 = &gUnk_081010E8 + 2;
        var_r1 = &gUnk_081010E8;
loop_2:
        if (*var_r1 & arg2->unk6) {
            arg2->unk0 = (u16) *var_r2;
        } else {
            var_r2 += 4;
            var_r1 += 4;
            var_r3 += 1;
            if (var_r3 <= 7) {
                goto loop_2;
            }
        }
        if ((u16) arg2->unk0 == 0) {
            arg2->unk0 = (u16) gUnk_081010E8.unk22;
        }
    }
    return (u16) arg2->unk0;
}
