# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B260/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B260/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B260/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B260/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0802B260/kilo-1531/func.c" 2
s32 func_08032560(void *, void ***, s32, ? *);
s32 func_080A47B4(s32 *, s32);
s32 func_080A4A00(s32 *, s32, s32, void **);
s32 func_080DC840(void *, ? *);
extern ? gUnk_080F1218;
extern ? vtable_unk_080E6708;
extern ? vtable_unk_080E681C;

void *func_0802B260(void *arg0, void ***arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s8 sp10;
    u8 sp14;
s32 sp18;
s32 sp40;
    u8 sp54;
    u32 sp5C;
    s32 *sp60;
    s32 *sp64;
    s32 *sp68;
    s32 temp_r1;
    s32 temp_r1_2;
    u32 temp_r1_3;
    u32 temp_r4;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r4_2;
    void *temp_r5;

    sp0 = 3;
    sp4 = 1;
    sp8 = 0;
    spC = 1;
    sp10 = 1;
    func_08032560(arg0, arg1, 6, &gUnk_080F1218);
    arg0->unk4 = &vtable_unk_080E6708;
    temp_r1 = (**arg1)->unk64();
    sp0 = 2;
    sp4 = 1;
    sp8 = 0;
    func_080A4A00(arg0 + 0x8C, temp_r1, 0, *arg1);
    arg0->unkCC = 0U;
    arg0->unk281 = 0;
    sp5C = 0;
    sp68 = &sp8;
    sp60 = &sp0 + 0x18;
    sp64 = &sp0 + 0x58;
    do {
        temp_r1_2 = (**arg1)->unk68();
        sp14 = 0;
        sp0 = 0;
        sp4 = 0x12;
        *sp68 = 0;
        func_080A4A00(&sp18, temp_r1_2, 0, *arg1);
        sp64->unk0 = 0;
        sp64->unk2 = 0;
        temp_r1_3 = arg0->unkCC;
        if (temp_r1_3 <= 5U) {
            temp_r5 = arg0 + 0xCC + ((temp_r1_3 * 0x48) + 4);
            if (temp_r5 != 0) {
                temp_r5->unk0 = (u8) sp14;
                temp_r4_2 = temp_r5 + 4;
                func_080DC840(temp_r4_2, &sp18);
                temp_r4_2->unk24 = &vtable_unk_080E681C;
                temp_r1_4 = temp_r5 + 0x2C;
                temp_r5->unk2C = (s32) sp40.unk0;
                temp_r1_4->unk4 = (s32) sp40.unk4;
                temp_r1_4->unk8 = (s32) sp40.unk8;
                temp_r1_4->unkC = (s32) sp40.unkC;
                (temp_r1_4 + 0xC)->unk4 = (s32) (&sp40 + 0xC)->unk4;
                temp_r5->unk40 = (u8) sp54;
                temp_r1_5 = temp_r5 + 0x41;
                temp_r5->unk41 = (u8) sp0.unk55;
                temp_r1_5->unk1 = (u8) sp0.unk56;
                (temp_r1_5 + 1)->unk1 = (u8) sp0.unk57;
                temp_r5->unk44 = sp58;
            }
            arg0->unkCC = (u32) (arg0->unkCC + 1);
        }
        func_080A47B4(sp60, 2);
        temp_r4 = sp5C + 1;
        sp5C = temp_r4;
    } while (temp_r4 <= 5U);
    arg0->unk280 = 0;
    return arg0;
}
