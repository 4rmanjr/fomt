# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809323C/Prodesk_342421/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809323C/Prodesk_342421/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809323C/Prodesk_342421/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809323C/Prodesk_342421/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0809323C/Prodesk_342421/func.c" 2
s32 __builtin_new(s32);
s32 func_0800770C(s32 *);
s32 func_08007714(s32 *, s32);
s32 func_0800835C(s32 *);
s32 func_08008364(s32 *, s32);
s32 func_08008444();
s32 func_08008B54(void *, s32);
s32 func_08050CC0(void *, s32, s32, s32, s32, ? *, ? *);
s32 func_0809424C(s32);
s32 func_080947BC(s32, s32);
s32 func_080D02CC(void *);
s32 func_080E3A9C(s32, s32);
extern ? vtable_unk_080E7DF4;
extern ? vtable_unk_080E7F00;
extern ? vtable_unk_080E7F0C;

void *func_0809323C(void *arg0, s32 arg1) {
s32 spC;
s32 sp10;
    s32 temp_r4;

    func_08008444();
    temp_r4 = arg0 + 8;
    func_0809424C(temp_r4);
    arg0->unk8 = &vtable_unk_080E7F0C;
    func_080D02CC(arg0 + 0x38);
    func_080E3A9C(temp_r4, 0);
    arg0->unk8 = &vtable_unk_080E7DF4;
    arg0->unk4 = &vtable_unk_080E7F00;
    arg0->unk1C4 = 1;
    arg0->unk1C8 = func_080947BC(__builtin_new(0x4C), arg1);
    arg0->unk1CC = arg1;
    func_0800835C(&spC);
    func_0800770C(&sp10);
    func_08050CC0(arg0 + 0x1D0, 0, 0x1D, 0, 0, &spC, &sp10);
    func_08007714(&sp10, 2);
    func_08008364(&spC, 2);
    func_08008B54(arg0 + 0x1D4, 1);
    arg0->unk1E0 = 0;
    arg0->unk3E8 = 0;
    arg0->unk3EC = 1;
    return arg0;
}
