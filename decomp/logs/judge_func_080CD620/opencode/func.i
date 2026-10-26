# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CD620/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CD620/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CD620/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CD620/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CD620/opencode/func.c" 2
s32 free(void *);
void *func_08008910(void *);
s16 *func_08008918(void *);
s32 func_08008E64(s32, s32, s32);
s32 func_08008EB8(s32, s32, s32);
s32 func_08008F0C(s32 *, ? *, s32, s32);
s32 func_08050D5C(void *);
void *func_080D3BC0(s32);
void *malloc(s32);
extern s32 gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 gUnk_080F9F78;
extern ? gUnk_08750C8C;

void func_080CD620(void *arg0) {
    s16 sp0;
s32 sp4;
    s32 sp34;
    s32 sp38;
    s16 *sp3C;
    s16 *sp40;
    void *sp44;
    void *sp48;
    s16 *sp4C;
    void *sp50;
    void *sp54;
    s16 *temp_r0;
    s16 *temp_r0_2;
    s16 *temp_r0_3;
    s16 *temp_r0_4;
    s32 *var_r0_2;
    s32 temp_r0_5;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r1;
    s32 var_r3_2;
    s32 var_sl;
    u16 var_r2_3;
    u16 var_r2_4;
    void **temp_r1_3;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r6;
    void *var_r0;
    void *var_r0_3;
    void *var_r0_4;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;
    void *var_r5;

    temp_r0 = func_08008918();
    sp0 = 0x1D40;
    temp_r0->unk8 = 0x1D40;
    temp_r0_2 = func_08008918(arg0);
    sp0 = 0x1E41;
    temp_r0_2->unkA = 0x1E41;
    temp_r0_3 = func_08008918(arg0);
    sp0 = 0x3F42;
    temp_r0_3->unkC = 0x3F42;
    func_08008EB8(-1, 0x0600F000, 0x800);
    func_08008EB8(-1, 0x0600F800, 0x800);
    func_08008EB8(0, 0x06000000, 0x8000);
    temp_r0_4 = func_08008918(arg0);
    sp0 = 0x1640;
    *temp_r0_4 = 0x1640;
    func_08008E64(gUnk_080F9F78, 0x05000000, 0x20);
    func_08008E64(gUnk_080F9F70, 0x06000000, gUnk_080F9F74);
    func_08008EB8(0x30003, 0x0600F800, 0x800);
    sp4C = &sp0 + 0x14;
    sp3C = &sp0 + 0x1C;
    sp40 = &sp0 + 0x24;
    var_r0 = (void *)0x0600F81C;
    var_r1 = 0x13;
    do {
        var_r0->unk0 = 8;
        var_r0->unk2 = 2;
        var_r0 += 0x40;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    func_08008EB8(0x03FF03FF, 0x0600F000, 0x800);
    temp_r6 = func_08008910(arg0);
    func_08008F0C(&sp4, &gUnk_08750C8C, 0x06000400, 0x1C0);
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp4.unk0;
            temp_r1->unk4 = (s32) sp4.unk4;
            temp_r1->unk8 = (s32) sp4.unk8;
            temp_r1->unkC = (s32) sp4.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        sp44 = arg0 + 0x44;
        sp48 = arg0 + 0x80;
    } else {
        sp50 = temp_r1;
        sp38 = 1;
        temp_r4 = (s32) (sp50 - temp_r6->unk0) >> 4;
        sp34 = temp_r4;
        var_r0_2 = &sp34;
        if ((u32) temp_r4 < 1U) {
            var_r0_2 = &sp38;
        }
        temp_r0_5 = temp_r4 + *var_r0_2;
        if (temp_r0_5 != 0) {
            temp_r4_2 = temp_r0_5 * 0x10;
            var_r0_3 = malloc(temp_r4_2);
            var_sl = temp_r4_2;
            if (var_r0_3 == 0) {
                var_r0_3 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_3 = 0;
            var_sl = 0;
        }
        sp54 = var_r0_3;
        var_r2 = temp_r6->unk0;
        var_r3 = var_r0_3;
        sp44 = arg0 + 0x44;
        sp48 = arg0 + 0x80;
        if (var_r2 != sp50) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp50);
        }
        if (sp38 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp4.unk0;
                var_r3->unk4 = (s32) sp4.unk4;
                var_r3->unk8 = (s32) sp4.unk8;
                var_r3->unkC = (s32) sp4.unkC;
            }
            var_r5 = var_r3 + 0x10;
        } else {
            var_r3_2 = sp38;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp4.unk0;
                        var_r2_2->unk4 = (s32) sp4.unk4;
                        var_r2_2->unk8 = (s32) sp4.unk8;
                        var_r2_2->unkC = (s32) sp4.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r6->unk4;
        temp_r1_2 = temp_r6->unk0;
        var_r0_4 = temp_r1_2;
        if (temp_r1_2 != temp_r2) {
            do {
                var_r0_4 += 0x10;
            } while (var_r0_4 != temp_r2);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        temp_r6->unk0 = sp54;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (sp54 + var_sl);
    }
    temp_r1_3 = arg0->unk44;
    (*temp_r1_3)->unk10(sp4C, temp_r1_3, *(arg0->unk48 + (sp44->unkC * 4)));
    var_r2_3 = 0;
    if (sp1C != 0) {
        var_r2_3 = sp3C->unk4;
    }
    func_08008E64(sp1C, 0x06000380, (s32) var_r2_3);
    var_r2_4 = 0;
    if (sp24 != 0) {
        var_r2_4 = sp40->unk4;
    }
    func_08008E64(sp24, 0x05000020, (s32) var_r2_4);
    func_08050D5C(sp48);
}
