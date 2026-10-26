# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080958C0/Prodesk_343690/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080958C0/Prodesk_343690/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080958C0/Prodesk_343690/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080958C0/Prodesk_343690/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080958C0/Prodesk_343690/func.c" 2
s32 __12RucksackItem(void **);
void *__builtin_new(s32);
s32 func_0800736C(void *);
s32 func_080073E0(void *, s32);
s32 func_08008724(void *);
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s16 *func_08008918(void *);
void *func_08008940(void *);
s32 func_08008B6C(void *, s32);
s32 func_08009300(void *, s16 *);
s32 func_0800934C(void *, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
s32 func_08050D8C(void *, ? *);
s32 func_080975F4(void *, s32);
s32 func_08097D38(void *);
s32 func_080989DC(void *, void *);
s32 func_08099144(void *, u32, u8, s32);
s32 func_080CD8A0(void *);
extern ? gUnk_08100AC0;
extern ? vtable_unk_080E5B80;

s32 func_080958C0(void *arg0) {
    void *sp0;
    void *sp4;
    void *sp8;
    s32 spC;
    s16 *temp_r0;
    s16 *temp_r0_6;
    s16 *temp_r1;
    s32 temp_r1_11;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_6;
    s32 temp_r5_2;
    s32 var_r1;
    s32 var_r3;
    s32 var_r4;
    s32 var_r4_3;
    s32 var_r5_2;
    s32 var_r8;
    s32 var_sl;
    s8 *var_r0;
    s8 temp_r0_3;
    s8 temp_r0_9;
    u16 *temp_r1_10;
    u16 *var_r2;
    u16 temp_r0_11;
    u32 temp_r0_5;
    u32 var_r7;
    u32 var_sb;
    u8 temp_r2;
    void **var_r4_2;
    void **var_r4_4;
    void **var_r5;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_7;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5;

    var_r8 = 0;
    var_r7 = 0;
    spC = 1;
    var_sb = 0;
    func_08008724(arg0);
    temp_r4 = arg0 + 0x320;
    func_080073E0(temp_r4, temp_r4->unk4);
    temp_r4->unk4 = func_0800736C(temp_r4);
    var_r5 = arg0 + 0x2BB0;
    var_r4 = 7;
    do {
        __12RucksackItem(&sp0);
        *var_r5 = sp0;
        var_r5 += 4;
        var_r4 -= 1;
    } while (var_r4 >= 0);
    var_r1 = 8;
    var_r0 = arg0 + 0x2BAF;
    do {
        *var_r0 = 0;
        var_r0 -= 1;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    func_080989DC(arg0, arg0 + 0x334);
    temp_r0 = func_08008918(arg0);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4_2 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg0);
    temp_r4_2->unk0 = 0;
    temp_r4_2->unk4 = 0;
    temp_r4_2->unk8 = &vtable_unk_080E5B80;
    temp_r5 = temp_r4_2 + 0xC;
    func_08009300(temp_r5, temp_r1);
    sp0 = temp_r4_2;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg0);
    temp_r0_2->unk8->unk10(temp_r0_2, sp0);
    arg0->unk33D2 = 2U;
    var_sl = 0;
loop_5:
    func_080087C8(arg0);
    func_080088B8(arg0);
    switch (var_r7) {
    case 0:
        temp_r1_2 = sp0->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            temp_r2 = arg0->unk35D;
            if (temp_r2 == 0) {
                arg0->unk33D4 = (s16) temp_r2;
                arg0->unk33D2 = 0U;
                var_r7 = 1;
            } else {
                arg0->unk33D4 = 1;
                arg0->unk33D2 = 0U;
                var_r7 = 7;
            }
        }
        break;
    case 1:
        if ((s8) arg0->unk33D2 != 2) {

        } else {
            temp_r0_3 = (s8) arg0->unk33D3;
            switch (temp_r0_3) {
            case 1:
            case 0:
                var_r7 = 8;
                break;
            case 2:
            case 1:
                var_r8 = 2;
                var_r7 = 9;
                break;
            case 0:
                func_08050D8C(arg0 + 0x80, &gUnk_08100AC0);
                var_r7 = 2;
                break;
            }
        }
        break;
    case 2:
        func_08009378(sp0 + 0xC, 0x889, 2, 1);
        temp_r0_4 = func_08008940(arg0);
        temp_r0_4->unk8->unk10(temp_r0_4, sp0);
        var_r7 = 3;
        break;
    case 3:
        temp_r1_3 = sp0->unk0;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {

        } else {
            func_08008B6C(arg0 + 0x94, 0xAD);
            var_sb = 0x78;
            var_r7 = 4;
        }
        break;
    case 4:
        temp_r0_5 = (var_sb << 0x10) + 0xFFFF0000;
        var_sb = temp_r0_5 >> 0x10;
        if ((s32) temp_r0_5 >= 0) {

        } else {
            temp_r0_6 = func_08008918(arg0);
            sp4 = 0x1040;
            *temp_r0_6 = 0x1040;
            temp_r1_4 = arg0->unk7C;
            if ((temp_r1_4 != 0) && (temp_r1_4 != 0)) {
                temp_r1_4->unk210->unk8(temp_r1_4, 3);
            }
            arg0->unk7C = 0;
            temp_r1_5 = arg0->unk78;
            if ((temp_r1_5 != 0) && (temp_r1_5 != 0)) {
                temp_r1_5->unk210->unk8(temp_r1_5, 3);
            }
            arg0->unk78 = 0;
            *(s16 *)0x05000000 = 0;
            spC = 0;
            func_0800934C(sp0 + 0xC, 0x889, 2, 1);
            temp_r0_7 = func_08008940(arg0);
            temp_r0_7->unk8->unk10(temp_r0_7, sp0);
            var_r7 = 5;
        }
        break;
    case 5:
        temp_r1_6 = sp0->unk0;
        if ((s32) ((0 - temp_r1_6) | temp_r1_6) < 0) {

        } else {
            temp_r1_7 = arg0 + 0x348;
            temp_r0_8 = arg0 + 0x334;
            arg0->unk348 = (s32) arg0->unk334;
            temp_r1_7->unk4 = (s32) temp_r0_8->unk4;
            temp_r1_7->unk8 = (s32) temp_r0_8->unk8;
            temp_r1_8 = temp_r1_7 + 0xC;
            temp_r1_7->unkC = (s32) temp_r0_8->unkC;
            temp_r1_8->unk4 = (s32) (temp_r0_8 + 0xC)->unk4;
            func_080975F4(arg0, temp_r1_8 + 8);
            var_r8 = -1;
            var_r7 = 6;
        }
        break;
    case 6:
        if ((s8) arg0->unk33D2 != 2) {

        } else {
            func_08050D8C(arg0 + 0x80, &gUnk_08100AC0);
            var_r7 = 9;
        }
        break;
    case 7:
        if ((s8) arg0->unk33D2 != 2) {

        } else {
            temp_r0_9 = (s8) arg0->unk33D3;
            switch (temp_r0_9);
        }
        break;
    case 8:
        temp_r1_9 = arg0 + 0x348;
        temp_r0_10 = arg0 + 0x334;
        arg0->unk348 = (s32) arg0->unk334;
        temp_r1_9->unk4 = (s32) temp_r0_10->unk4;
        temp_r1_9->unk8 = (s32) temp_r0_10->unk8;
        temp_r1_9->unkC = (s32) temp_r0_10->unkC;
        (temp_r1_9 + 0xC)->unk4 = (s32) (temp_r0_10 + 0xC)->unk4;
        var_r5_2 = 0;
        var_r4_2 = arg0 + 0x2BB0;
        do {
            if ((((s32) arg0->unk35C >> var_r5_2) ^ 1) & 1) {
                *(arg0 + 0x34A + (var_r5_2 * 2)) = 0;
                __12RucksackItem(&sp8);
                *var_r4_2 = sp8;
            }
            var_r4_2 += 4;
            var_r5_2 += 1;
        } while (var_r5_2 <= 7);
        var_r4_3 = 0;
        do {
            temp_r1_10 = arg0 + 0x34A + (var_r4_3 * 2);
            temp_r5_2 = var_r4_3 + 1;
            if (*temp_r1_10 == 0) {
                var_r3 = temp_r5_2;
                if (temp_r5_2 <= 7) {
                    var_r2 = (temp_r5_2 * 2) + 0x34A + arg0;
                    var_r4_4 = (temp_r5_2 * 4) + 0x2BB0 + arg0;
loop_58:
                    temp_r0_11 = *var_r2;
                    if (temp_r0_11 != 0) {
                        *temp_r1_10 = temp_r0_11;
                        ((var_r4_3 * 4) + arg0)->unk2BB0 = (void *) *var_r4_4;
                        *var_r2 = 0;
                        __12RucksackItem(&sp4);
                        *var_r4_4 = sp4;
                    } else {
                        var_r2 += 2;
                        var_r4_4 += 4;
                        var_r3 += 1;
                        if (var_r3 <= 7) {
                            goto loop_58;
                        }
                    }
                }
            }
            var_r4_3 = temp_r5_2;
        } while (var_r4_3 <= 6);
        var_r8 = 1;
        var_r7 = 9;
        break;
    case 9:
        func_08050D8C(arg0 + 0x80, &gUnk_08100AC0);
        func_08009378(sp0 + 0xC, 0x889, 1, 1);
        temp_r0_12 = func_08008940(arg0);
        temp_r0_12->unk8->unk10(temp_r0_12, sp0);
        var_r7 = 0xA;
        break;
    case 10:
        temp_r1_11 = sp0->unk0;
        if ((s32) ((0 - temp_r1_11) | temp_r1_11) >= 0) {
            var_sl = 1;
        }
        break;
    }
    if (spC != 0) {
        func_08099144(arg0, (u32) (arg0->unk346 << 0x14) >> 0x14, arg0->unk35C, 0);
    }
    func_080CD8A0(arg0);
    func_08097D38(arg0);
    if (var_sl == 0) {
        goto loop_5;
    }
    temp_r4_3 = arg0 + 0x320;
    func_080073E0(temp_r4_3, temp_r4_3->unk4);
    temp_r4_3->unk4 = 0;
    if (sp0 != 0) {
        sp0->unk8->unkC(sp0, 3);
    }
    return var_r8;
}
