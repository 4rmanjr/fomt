# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076BFC/Prodesk_339833/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076BFC/Prodesk_339833/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076BFC/Prodesk_339833/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076BFC/Prodesk_339833/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08076BFC/Prodesk_339833/func.c" 2
s32 __builtin_new(s32);
s32 free();
void *func_08008910(s32);
s32 func_08008918(s32);
s32 func_08008940(s32);
s32 func_08008F0C(s32 *, void *, s32, s32);
s32 func_0804E7A0(s32, void *, s32);
s32 func_0804E8F0(s32, void *, s32, s32, s32);
s32 func_08075B00(s32, s32, s32, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
s32 strlen(s32);
extern ? vtable_unk_080E7B88;

void *func_08076BFC(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
s32 spC;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    void *sp30;
    void *sp34;
    s32 *var_r0;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    s32 var_r3_2;
    s32 var_sl;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4_2;
    void *temp_r6;
    void *var_r0_2;
    void *var_r1;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r5;

    arg0->unk5B4 = &vtable_unk_080E7B88;
    arg0->unk0 = arg1;
    temp_r5 = __builtin_new(0x4C);
    temp_r4 = func_08008940(arg1);
    arg0->unk4 = func_08075B00(temp_r5, arg3, temp_r4, func_08008918(arg1), 0x0600F000);
    arg0->unk58C = arg2;
    arg0->unk590 = 0;
    arg0->unk594 = 0;
    (arg0 + 0x594)->unk4 = 0;
    (arg0 + 0x59C)->unk4 = 0;
    arg0->unk5A4 = 0;
    (arg0 + 0x5A4)->unk4 = 0;
    (arg0 + 0x5AC)->unk4 = 0;
    sp1C.unk0 = 0x16;
    sp1C.unk2 = 2;
    temp_r4_2 = arg0 + 0xC;
    func_0804E7A0(sp1C, temp_r4_2, 0);
    temp_r0 = strlen(arg4);
    if (!(1 & temp_r0)) {
        sp20.unk0 = 0x16;
        sp20.unk2 = 2;
        func_0804E8F0(sp20, temp_r4_2, (0x16 - temp_r0) * 4, 0, arg4);
    } else {
        sp24.unk0 = 0x16;
        sp24.unk2 = 2;
        func_0804E8F0(sp24, temp_r4_2, (0x15 - temp_r0) * 4, 0, arg4);
    }
    temp_r6 = func_08008910(arg1);
    func_08008F0C(&spC, arg0 + 0xC, 0x06008020, 0x580);
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) spC.unk0;
            temp_r1->unk4 = (s32) spC.unk4;
            temp_r1->unk8 = (s32) spC.unk8;
            temp_r1->unkC = (s32) spC.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
    } else {
        sp30 = temp_r1;
        sp2C = 1;
        temp_r4_3 = (s32) (temp_r1 - temp_r6->unk0) >> 4;
        sp28 = temp_r4_3;
        var_r0 = &sp28;
        if ((u32) temp_r4_3 < 1U) {
            var_r0 = &sp2C;
        }
        temp_r0_2 = temp_r4_3 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_4 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_4);
            var_sl = temp_r4_4;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        sp34 = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_r3 = var_r0_2;
        if (var_r2 != sp30) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp30);
        }
        if (sp2C == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) spC.unk0;
                var_r3->unk4 = (s32) spC.unk4;
                var_r3->unk8 = (s32) spC.unk8;
                var_r3->unkC = (s32) spC.unkC;
            }
            var_r5 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp2C;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) spC.unk0;
                        var_r2_2->unk4 = (s32) spC.unk4;
                        var_r2_2->unk8 = (s32) spC.unk8;
                        var_r2_2->unkC = (s32) spC.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r6->unk4;
        temp_r0_3 = temp_r6->unk0;
        var_r1 = temp_r0_3;
        if (temp_r0_3 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_3 != 0) {
            free();
        }
        temp_r6->unk0 = sp34;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (sp34 + var_sl);
    }
    return arg0;
}
