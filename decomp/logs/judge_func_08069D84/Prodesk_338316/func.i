# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069D84/Prodesk_338316/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069D84/Prodesk_338316/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069D84/Prodesk_338316/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069D84/Prodesk_338316/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08069D84/Prodesk_338316/func.c" 2
s32 func_08069C34(void *, s32);
s32 func_08076B64(void *);
s32 func_08076BE0(void *, s16);
s16 func_08076BEC(void *);

void func_08069D84(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = (arg0->unk160 * 8) + 4 + (arg0 + 0x124);
    temp_r4->unk4 = func_08076BEC(arg0);
    func_08076B64(arg0);
    switch (arg1) {
    case 0:
        temp_r0 = arg0->unk160 + 1;
        arg0->unk160 = temp_r0;
        if (temp_r0 == arg0->unk124) {
            arg0->unk160 = arg1;
        }
        break;
    case 1:
        var_r0 = arg0->unk160;
        if (var_r0 == 0) {
            var_r0 = arg0->unk124;
        }
        arg0->unk160 = (s32) (var_r0 - 1);
        break;
    }
    temp_r4_2 = arg0 + 0x124;
    func_08069C34(arg0, *(temp_r4_2 + ((arg0->unk160 * 8) + 4)));
    func_08076BE0(arg0, (temp_r4_2 + ((arg0->unk160 * 8) + 4))->unk4);
}
