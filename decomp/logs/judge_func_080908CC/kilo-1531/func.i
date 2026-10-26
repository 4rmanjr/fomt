# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080908CC/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080908CC/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080908CC/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080908CC/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080908CC/kilo-1531/func.c" 2
s32 func_08008B6C(void *, s32);
s32 func_08050DC8(void *, s32, s32, s32);
s32 func_080CAC70(s32 *);
void *func_080CB2E8(s32, s32);
void *func_080CB2FC(s32);
void *func_080CC70C(s32, s32);
s32 func_080CE184(void *, s32, s32);
extern s32 gUnk_08117ADC;

void func_080908CC(void *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r1;
    void *var_r0;

    func_080CAC70(&sp0);
    if (arg1 == 0) {
        var_r0 = func_080CB2FC(arg0->unk78);
    } else if (arg1 <= 8) {
        temp_r4 = arg0->unk78;
        var_r0 = func_080CB2E8(temp_r4, func_080CE184(arg0, arg1, 0));
    } else {
        temp_r4_2 = arg0->unk7C;
        var_r0 = func_080CC70C(temp_r4_2, func_080CE184(arg0, arg1, 0));
    }
    sp0.unk0 = (s32) var_r0->unk0;
    sp0.unk4 = (s32) var_r0->unk4;
    sp0.unk8 = (s32) var_r0->unk8;
    var_r1 = 0;
    if ((sp4 == 0) || (sp8 == 0)) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        func_08050DC8(arg0 + 0x80, gUnk_08117ADC, 0, 0);
        arg0->unk108 = 1;
        func_08008B6C(arg0 + 0xC, 0xC7);
    }
}
