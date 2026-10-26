# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000E1C/t_dbgG/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000E1C/t_dbgG/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000E1C/t_dbgG/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000E1C/t_dbgG/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08000E1C/t_dbgG/func.c" 2
void *__builtin_new(s32);
s32 func_08000F5C(void *);
s32 func_08008724();
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088CC(void *);
void *func_08008918(void *);
void *func_08008940(void *);
s32 func_08008B6C(void *, s32);
s32 func_08009300(void *, void *);
s32 func_0800934C(void *, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    void *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[60];
    s32 unk50;
    u8 _pad54[27864];
    s32 unk6D2C;
    u8 _pad6D30[2];
    s32 unk6D32;
} GenObj;
void func_08000E1C(GenObj *arg0) {
    s16 sp0;
    GenObj *sp4;
    s16 temp_r0_3;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 var_r6;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r4;
    void *temp_r5;

    func_08008724();
    func_08000F5C(arg0);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    var_r6 = 0;
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    temp_r5 = (GenObj *)((u8 *)temp_r4 + 0xC);
    func_08009300(temp_r5, temp_r1);
    sp4 = temp_r4;
    func_0800934C(temp_r5, 0x889, 1, 0);
    temp_r0_2 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    arg0->unk6D32 = 0;
    func_08008B6C((GenObj *)((u8 *)arg0 + 8), 0);
    do {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_r0_3 = arg0->unk6D32;
        switch (temp_r0_3) {
        case 0:
            temp_r1_2 = sp4->unk0;
            if ((s32) ((0 - temp_r1_2) | temp_r1_2) >= 0) {
                arg0->unk6D2C = 0x78;
                arg0->unk6D32 = 1;
            }
            break;
        case 1:
            arg0->unk6D2C = (s32) (arg0->unk6D2C - 1);
            if (func_080088CC(arg0) & 8) {
                arg0->unk6D2C = 0;
            }
            if ((s32) arg0->unk6D2C <= 0) {
                func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 0);
                temp_r0_4 = func_08008940(arg0);
                ((void (*)(void *,...))(temp_r0_4->unk8->unk10))(temp_r0_4, sp4);
                arg0->unk6D32 = 2;
            }
            break;
        case 2:
            temp_r1_3 = sp4->unk0;
            if ((s32) ((0 - temp_r1_3) | temp_r1_3) >= 0) {
                var_r6 = 1;
            }
            break;
        }
    } while (var_r6 == 0);
    if (sp4 != 0) {
        ((void (*)(void *,...))(sp4->unk8->unkC))(sp4, 3);
    }
}
