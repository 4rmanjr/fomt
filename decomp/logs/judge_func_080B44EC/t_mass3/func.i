# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B44EC/t_mass3/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B44EC/t_mass3/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B44EC/t_mass3/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B44EC/t_mass3/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B44EC/t_mass3/func.c" 2
s32 func_080087C8(void *);
void *func_08008918(void *);
s32 func_08008B6C(void *, s32);
s32 func_080B45E4(void *);
s32 func_080B45F0(void *);
s32 func_080B469C(void *);
s32 func_080B5824(void *);
s32 func_080B7648(void *);
s32 func_080B888C(void *);

typedef struct GenObj {
    u8 _pad0[80];
    s32 unk50;
    u8 _pad54[1868];
    s32 unk7A0;
    u8 _pad7A4[880];
    s32 unkB14;
    u8 _padB18[26];
    s32 unkB32;
} GenObj;
s32 *func_080B44EC(s32 *arg0, GenObj *arg1) {
    s16 sp0;
    void **sp4;
    void ***sp8;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    GenObj *temp_r0;

    func_080B45E4(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    func_080B45F0(arg1);
    func_08008B6C((GenObj *)((u8 *)arg1 + 0x704), 0x21);
    if (arg1->unkB32 == 0) {
        do {
            func_080087C8(arg1);
            temp_r0_2 = arg1->unkB14;
            switch (temp_r0_2) {
            case 1:
                func_080B469C(arg1);
                break;
            case 2:
                func_080B7648(arg1);
                break;
            case 0:
                func_080B5824(arg1);
                break;
            case 3:
                func_080B888C(arg1);
                break;
            }
        } while (arg1->unkB32 == 0);
    }
    temp_r0_3 = *arg1->unk7A0;
    if ((s32) ((0 - temp_r0_3) | temp_r0_3) < 0) {
        do {
            func_080087C8(arg1);
            temp_r0_4 = *arg1->unk7A0;
        } while ((s32) ((0 - temp_r0_4) | temp_r0_4) < 0);
    }
    sp4 = 0;
    sp8 = &sp4;
    sp8.unk4 = 0;
    sp4 = 0;
    *arg0 = 0;
    if (sp4 != 0) {
        (*sp4)->unk8(sp4, 3);
    }
    return arg0;
}
