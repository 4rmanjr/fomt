# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080550AC/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080550AC/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080550AC/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080550AC/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080550AC/kilo-1531/func.c" 2
s32 free(void *);
void *func_08008910(void *);
s32 func_08008F0C(s32 *, void *, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);

void func_080550AC(void *arg0, s32 arg1) {
s32 sp0;
    s32 sp10;
    s32 sp14;
    void *sp18;
    s32 *var_r0_3;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r8;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r3;
    void *temp_r6;
    void *var_r0;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r4_3;

    var_r1 = arg1;
    var_r4 = 0x11;
    if (var_r1 > 0) {
        var_r0 = arg0 + 0x219E;
        do {
            var_r0->unk0 = 0x3046;
            var_r0->unk2 = 0x3047;
            var_r1 -= 0x19;
            var_r0 -= 0x40;
            var_r4 -= 1;
        } while (var_r1 > 0);
    }
    arg0->unk22DC = (s8) ((var_r4 * 8) + 8);
    temp_r1 = var_r4 << 6;
    temp_r3 = arg0 + 0x1D5E;
    *(temp_r3 + temp_r1) = 0x304A;
    temp_r2 = arg0 + 0x1D60;
    *(temp_r2 + temp_r1) = 0x304B;
    temp_r4 = var_r4 - 1;
    temp_r1_2 = temp_r4 << 6;
    *(temp_r3 + temp_r1_2) = 0x3048;
    *(temp_r2 + temp_r1_2) = 0x3049;
    var_r4_2 = temp_r4 - 1;
    if (var_r4_2 > 5) {
        var_r0_2 = (var_r4_2 << 6) + 0x1D5E + arg0;
        do {
            var_r0_2->unk0 = 0x3044;
            var_r0_2->unk2 = 0x3045;
            var_r0_2 -= 0x40;
            var_r4_2 -= 1;
        } while (var_r4_2 > 5);
    }
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&sp0, arg0 + 0x1D5A, 0x0600F000, 0x500);
    temp_r1_3 = temp_r6->unk4;
    if (temp_r1_3 != temp_r6->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp0.unk0;
            temp_r1_3->unk4 = (s32) sp0.unk4;
            temp_r1_3->unk8 = (s32) sp0.unk8;
            temp_r1_3->unkC = (s32) sp0.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        return;
    }
    sp14 = 1;
    temp_r4_2 = (s32) (temp_r1_3 - temp_r6->unk0) >> 4;
    sp10 = temp_r4_2;
    var_r0_3 = &sp10;
    if ((u32) temp_r4_2 < 1U) {
        var_r0_3 = &sp14;
    }
    temp_r0 = temp_r4_2 + *var_r0_3;
    if (temp_r0 != 0) {
        temp_r4_3 = temp_r0 * 0x10;
        var_r0_4 = malloc(temp_r4_3);
        var_r8 = temp_r4_3;
        if (var_r0_4 == 0) {
            var_r0_4 = func_080D3BC0(var_r8);
        }
    } else {
        var_r0_4 = 0;
        var_r8 = 0;
    }
    sp18 = var_r0_4;
    var_r2 = temp_r6->unk0;
    var_r3 = var_r0_4;
    if (var_r2 != temp_r1_3) {
        do {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) var_r2->unk0;
                var_r3->unk4 = (s32) var_r2->unk4;
                var_r3->unk8 = (s32) var_r2->unk8;
                var_r3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3 += 0x10;
        } while (var_r2 != temp_r1_3);
    }
    if (sp14 == 1) {
        if (var_r3 != 0) {
            var_r3->unk0 = (s32) sp0.unk0;
            var_r3->unk4 = (s32) sp0.unk4;
            var_r3->unk8 = (s32) sp0.unk8;
            var_r3->unkC = (s32) sp0.unkC;
        }
        var_r4_3 = var_r3 + 0x10;
    } else {
        var_r3_2 = sp14;
        var_r2_2 = var_r3;
        if (var_r3_2 != 0) {
            do {
                if (var_r2_2 != 0) {
                    var_r2_2->unk0 = (s32) sp0.unk0;
                    var_r2_2->unk4 = (s32) sp0.unk4;
                    var_r2_2->unk8 = (s32) sp0.unk8;
                    var_r2_2->unkC = (s32) sp0.unkC;
                }
                var_r3_2 -= 1;
                var_r2_2 += 0x10;
            } while (var_r3_2 != 0);
        }
        var_r4_3 = var_r2_2;
    }
    temp_r2_2 = temp_r6->unk4;
    temp_r1_4 = temp_r6->unk0;
    var_r0_5 = temp_r1_4;
    if (temp_r1_4 != temp_r2_2) {
        do {
            var_r0_5 += 0x10;
        } while (var_r0_5 != temp_r2_2);
    }
    if (temp_r1_4 != 0) {
        free(temp_r1_4);
    }
    temp_r6->unk0 = sp18;
    temp_r6->unk4 = var_r4_3;
    temp_r6->unkC = (void *) (sp18 + var_r8);
}
