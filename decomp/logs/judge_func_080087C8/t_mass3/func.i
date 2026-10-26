# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080087C8/t_mass3/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080087C8/t_mass3/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080087C8/t_mass3/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080087C8/t_mass3/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080087C8/t_mass3/func.c" 2
void *func_08008AE0(s32);
s32 func_08008AF0(s32);
s32 func_080098AC(s32 *, s32);
s32 func_080098DC(s32 *, s32);
s32 func_08009940(s32 *, s32 *);
extern s32 vtable_unk_080E5AD0;
extern s32 vtable_unk_080E5AE0;
extern s32 vtable_unk_080E5AF0;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;
extern s32 vtable_unk_080E5BE8;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} GenObj;
void func_080087C8(s32 *arg0) {
    s32 sp0;
    s32 sp4;
    s32 *sp8;
    s32 spC;
    GenObj *sp10;
    s32 *sp18;
    s32 sp1C;
    GenObj *sp20;
    s32 *sp28;
    s32 sp2C;
    GenObj *sp30;
    s32 *sp38;
s32 sp3C;
    GenObj *sp40;
    s32 *sp48;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r5;
    s32 temp_r5_2;
    GenObj *temp_r0;
    GenObj *temp_r0_2;

    temp_r5 = *arg0;
    temp_r2 = temp_r5 + 0x34;
    sp0 = 0;
    sp4 = 0;
    sp8 = &vtable_unk_080E5AF0;
    spC = temp_r2;
    temp_r2_2 = temp_r2 + 0x58;
    sp10 = 0;
    sp10.unk4 = 0;
    sp18 = &vtable_unk_080E5AE0;
    sp1C = temp_r2_2;
    sp20 = 0;
    sp20.unk4 = 0;
    sp28 = &vtable_unk_080E5AD0;
    sp2C = temp_r2_2 - 0x68;
    sp30 = 0;
    sp30.unk4 = 0;
    sp38 = &vtable_unk_080E5BB4;
    sp30.unkC = &sp40;
    sp48 = &vtable_unk_080E5BE8;
    sp40 = 0;
    sp40.unk4 = 0;
    sp40.unk8 = &vtable_unk_080E5BD8;
    sp30.unk10 = &sp3C;
    sp30.unk14 = &sp40;
    func_08009940(&sp30, temp_r5 + 0x494);
    func_08009940(&sp30, &sp0);
    func_08009940(&sp30, &sp20);
    func_08009940(&sp30, &sp10);
    temp_r5_2 = temp_r5 + 0x490;
    temp_r0 = func_08008AE0(temp_r5_2);
    ((void (*)(void *,...))(temp_r0->unk8->unk10))(temp_r0, &sp30);
    func_08008AF0(temp_r5_2);
    temp_r0_2 = func_08008AE0(temp_r5_2);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk14))(temp_r0_2, &sp30);
    func_080098DC(&sp30, 2);
    func_080098AC(&sp20, 2);
    func_080098AC(&sp10, 2);
    func_080098AC(&sp0, 2);
}
