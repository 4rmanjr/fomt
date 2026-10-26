# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096B88/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096B88/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096B88/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096B88/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08096B88/Prodesk_343690/func.c" 2
s8 GetArticle__C12RucksackItem(s32 *);
s32 GetFood__C12RucksackItem(s32 *, ? *);
u16 GetIconId__C4Food(s32 *);
u16 GetIconId__C7Article();
s32 GetKind__C12RucksackItem(s32 *);
s32 IsEmpty__C12RucksackItem(s32 *);
s32 IsWrapped__C12RucksackItem(s32 *);
s32 __12RucksackItem(s32 *);
s32 free(void *);
void *func_08008910(void *);
s32 func_08008F0C(s32 *, void *, s32, s32);
u8 func_08096EE8(void *, ? *, u8, s32);
s32 func_080CC728(s32, s32, ? *, u16, s32);
s32 func_080CCDEC(s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
extern ? gUnk_0811785C;
extern ? gUnk_086678A0;

void func_08096B88(void *arg0) {
s32 sp4;
s32 sp8;
s32 spC;
    s8 sp1C;
    s32 sp20;
    s32 sp24;
    void *sp28;
    void *sp2C;
    s16 *var_r0_3;
    s16 *var_r0_4;
    s16 *var_r2;
    s16 *var_r2_2;
    s16 var_r1;
    s32 *var_r0_6;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_ip;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r6;
    s32 var_r8;
    s32 var_sl;
    u16 var_r0;
    u16 var_r0_2;
    u16 var_r3;
    u16 var_r3_3;
    u8 temp_r1;
    u8 temp_r1_2;
    u8 temp_r7;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r2_3;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r0_8;
    void *var_r1_5;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3_4;
    void *var_r4_2;

    var_r8 = 8;
    __12RucksackItem(&sp4);
    if (arg0->unk2B90 == 0) {
        var_r8 = arg0->unk2BA0;
    }
    var_r6 = 0;
    if (var_r8 > 0) {
        do {
            temp_r7 = func_08096EE8(arg0, &sp4, arg0->unk2B90, var_r6);
            if ((IsEmpty__C12RucksackItem(&sp4) << 0x18) == 0) {
                if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
                    var_r3 = 0x160;
                } else {
                    if (GetKind__C12RucksackItem(&sp4) == 0) {
                        GetFood__C12RucksackItem(&sp8, &sp4);
                        var_r0 = GetIconId__C4Food(&sp8);
                    } else {
                        sp1C = GetArticle__C12RucksackItem(&sp4);
                        var_r0 = GetIconId__C7Article();
                    }
                    var_r3 = var_r0;
                }
                func_080CC728(arg0->unk7C, var_r6, &gUnk_086678A0, var_r3, (s32) temp_r7);
            } else {
                func_080CCDEC(arg0->unk7C, var_r6);
            }
            var_r6 += 1;
        } while (var_r6 < var_r8);
    }
    if (var_r8 <= 7) {
        var_r4 = var_r8;
        do {
            func_080CCDEC(arg0->unk7C, var_r4);
            var_r4 += 1;
        } while (var_r4 <= 7);
    }
    if (arg0->unk2B90 == 0) {
        var_r0_2 = (u16) arg0->unk2BA0;
    } else {
        var_r0_2 = 8;
    }
    var_r1 = 3;
    if (arg0->unk2B90 == 0) {
        var_r1 = 0x101C;
    }
    var_r3_2 = 0;
    if ((s32) var_r0_2 > 0) {
        do {
            var_r3_2 += 1;
            temp_r0 = (var_r3_2 * 4) + &gUnk_0811785C;
            temp_r1 = temp_r0->unk0 + 0xF;
            temp_r2 = temp_r0->unk1 << 6;
            var_r0_3 = temp_r2 + (((temp_r1 + 1) * 2) + 0x2BD0) + arg0;
            var_r2 = temp_r2 + ((temp_r1 * 2) + 0x2BD0) + arg0;
            var_r1_2 = 1;
loop_24:
            *var_r2 = 0x101C;
            *var_r0_3 = 0x101C;
            var_r0_3 += 0x40;
            var_r2 += 0x40;
            var_r1_2 -= 1;
            if (var_r1_2 >= 0) {
                goto loop_24;
            }
        } while (var_r3_2 < (s32) var_r0_2);
    }
    if ((u32) var_r0_2 <= 7U) {
        var_r3_3 = var_r0_2;
        if ((s32) var_r3_3 <= 7) {
            do {
                var_r3_3 += 1;
                temp_r0_2 = (var_r3_3 * 4) + &gUnk_0811785C;
                temp_r1_2 = temp_r0_2->unk0 + 0xF;
                temp_r2_2 = temp_r0_2->unk1 << 6;
                var_r0_4 = temp_r2_2 + (((temp_r1_2 + 1) * 2) + 0x2BD0) + arg0;
                var_r2_2 = temp_r2_2 + ((temp_r1_2 * 2) + 0x2BD0) + arg0;
                var_r1_3 = 1;
loop_30:
                *var_r2_2 = 3;
                *var_r0_4 = 3;
                var_r0_4 += 0x40;
                var_r2_2 += 0x40;
                var_r1_3 -= 1;
                if (var_r1_3 >= 0) {
                    goto loop_30;
                }
            } while ((s32) var_r3_3 <= 7);
        }
    }
    var_r1_4 = 0;
    var_r0_5 = arg0 + 0x2C32;
    do {
        var_r0_5->unk0 = var_r1;
        var_r0_5->unk2 = var_r1;
        var_r0_5 += 0x40;
        var_r1_4 += 1;
    } while (var_r1_4 <= 1);
    sp28 = func_08008910(arg0);
    func_08008F0C(&spC, arg0 + 0x2BD0, 0x0600F800, 0x300);
    temp_r1_3 = sp28->unk4;
    if (temp_r1_3 != sp28->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) spC.unk0;
            temp_r1_3->unk4 = (s32) spC.unk4;
            temp_r1_3->unk8 = (s32) spC.unk8;
            temp_r1_3->unkC = (s32) spC.unkC;
        }
        sp28->unk4 = (void *) (sp28->unk4 + 0x10);
    } else {
        sp2C = temp_r1_3;
        sp24 = 1;
        var_r1_5 = sp28->unk0;
        temp_r4 = (s32) (sp2C - var_r1_5) >> 4;
        sp20 = temp_r4;
        var_r0_6 = &sp20;
        if ((u32) temp_r4 < 1U) {
            var_r0_6 = &sp24;
        }
        temp_r0_3 = temp_r4 + *var_r0_6;
        if (temp_r0_3 != 0) {
            temp_r4_2 = temp_r0_3 * 0x10;
            var_r0_7 = malloc(temp_r4_2);
            var_sl = temp_r4_2;
            if (var_r0_7 == 0) {
                var_r0_7 = func_080D3BC0(var_sl);
            }
            var_r1_5 = sp28->unk0;
        } else {
            var_r0_7 = 0;
            var_sl = 0;
        }
        var_r2_3 = var_r1_5;
        var_r3_4 = var_r0_7;
loop_49:
        if (var_r2_3 != sp2C) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) var_r2_3->unk0;
                var_r3_4->unk4 = (s32) var_r2_3->unk4;
                var_r3_4->unk8 = (s32) var_r2_3->unk8;
                var_r3_4->unkC = (s32) var_r2_3->unkC;
            }
            var_r2_3 += 0x10;
            var_r3_4 += 0x10;
            goto loop_49;
        }
        if (sp24 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) spC.unk0;
                var_r3_4->unk4 = (s32) spC.unk4;
                var_r3_4->unk8 = (s32) spC.unk8;
                var_r3_4->unkC = (s32) spC.unkC;
            }
            var_r4_2 = var_r3_4 + 0x10;
        } else {
            var_ip = sp24;
            var_r2_4 = var_r3_4;
            if (sp24 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) spC.unk0;
                        var_r2_4->unk4 = (s32) spC.unk4;
                        var_r2_4->unk8 = (s32) spC.unk8;
                        var_r2_4->unkC = (s32) spC.unkC;
                    }
                    var_ip -= 1;
                    var_r2_4 += 0x10;
                } while (var_ip != 0);
            }
            var_r4_2 = var_r2_4;
        }
        temp_r2_3 = sp28->unk4;
        temp_r1_4 = sp28->unk0;
        var_r0_8 = temp_r1_4;
        if (temp_r1_4 != temp_r2_3) {
            do {
                var_r0_8 += 0x10;
            } while (var_r0_8 != temp_r2_3);
        }
        if (temp_r1_4 != 0) {
            free(temp_r1_4);
        }
        sp28->unk0 = var_r0_7;
        sp28->unk4 = var_r4_2;
        sp28->unkC = (void *) (var_sl + var_r0_7);
    }
    arg0->unk369 = (u8) arg0->unk2B90;
    arg0->unk36A = 0xD;
    arg0->unk36B = 8;
    arg0->unk2BA4 = 0;
    arg0->unk2BA5 = 0xFF;
    arg0->unk2BA6 = -1;
    if (arg0->unk2B90 == 0) {
        arg0->unk2BA4 = 8;
        temp_r0_4 = arg0->unk2BA0;
        switch (temp_r0_4) {
        case 2:
            arg0->unk2BA5 = 0xFC;

        case 4:
            arg0->unk2BA6 = 0xF0;
            break;
        }
    }
}
