# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08085584/Prodesk_341345/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08085584/Prodesk_341345/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08085584/Prodesk_341345/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08085584/Prodesk_341345/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08085584/Prodesk_341345/func.c" 2
s32 func_080C7F58();
s32 memcpy(void *, ? *, u32);
u32 strlen(s32 *);
extern ? gUnk_080FFC6C;
extern ? vtable_unk_080E7D30;

void *func_08085584(void *arg0, s32 arg2) {
    s32 var_r0;
    s32 var_r1;
    u32 var_r4;
    void *temp_r6;
    void *var_r0_2;

    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7D30;
    if (arg2 != 0) {
        if (arg2 != 1) {
            arg0->unk6A4 = 6;
        } else {
            arg0->unk6A4 = 5;
        }
    } else {
        arg0->unk6A4 = arg2;
    }
    arg0->unk6A8 = 0;
    arg0->unk72C = 0;
    var_r0 = 0x10;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r6 = arg0 + 0x3AB4;
    var_r4 = strlen(&gUnk_080FFC6C);
    if (var_r4 > 0x7FU) {
        var_r4 = 0x7F;
    }
    memcpy(temp_r6, &gUnk_080FFC6C, var_r4);
    *(temp_r6 + var_r4) = 0;
    arg0->unk3B34 = 0;
    var_r0_2 = arg0 + 0x3B98;
    var_r1 = 0xF;
    do {
        var_r0_2->unk4 = 0;
        var_r0_2 += 0x84;
        var_r1 -= 1;
    } while (var_r1 != -1);
    return arg0;
}
