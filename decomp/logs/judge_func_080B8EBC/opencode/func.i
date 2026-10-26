# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8EBC/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8EBC/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8EBC/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8EBC/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B8EBC/opencode/func.c" 2
s32 free();
s16 func_080074C0(void *, s32);
void *func_08008910(s32);
s32 func_08008920(s32);
s32 func_08008F0C(s32 *, s32, s32, u16);
s32 func_0805E860(s32, u16);
s32 func_0805E8F0(s32);
s32 func_0805E99C(s32, s32, u16, ? *);
u16 func_080B8DAC(s32, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);

void func_080B8EBC(s32 arg0, u8 arg1, s32 arg2) {
    s32 sp0;
    s32 sp8;
s32 sp20;
s32 sp3C;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 *sp6C;
    s32 sp70;
    s32 sp74;
    void *sp78;
    void *sp7C;
    void *sp80;
    s16 temp_r2_5;
    s16 temp_r7_3;
    s32 *temp_r2_2;
    s32 *temp_r6;
    s32 *temp_r7;
    s32 *var_r0_2;
    s32 *var_r0_4;
    s32 temp_r0;
    s32 temp_r0_11;
    s32 temp_r0_8;
    s32 temp_r2;
    s32 temp_r2_3;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r6_2;
    s32 var_r3_3;
    s32 var_r3_6;
    s32 var_sl;
    s32 var_sl_2;
    s32 var_sl_3;
    u16 *var_r0;
    u16 var_r2;
    u16 var_r3;
    u16 var_r3_4;
    u32 temp_r4_3;
    u8 temp_r0_2;
    u8 temp_r1;
    void **temp_r1_2;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_9;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r4_6;
    void *temp_r7_2;
    void *temp_r7_4;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r1;
    void *var_r1_2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_5;
    void *var_r3_2;
    void *var_r3_5;
    void *var_r4;
    void *var_r5;

    sp60 = arg2;
    temp_r1 = arg1;
    sp5C = (s32) temp_r1;
    temp_r4 = temp_r1 << 6;
    temp_r0 = arg0 + 0x78;
    temp_r6 = temp_r0 + temp_r4;
    temp_r7 = (temp_r0 - 4) + temp_r4;
    temp_r5 = *temp_r7;
    if ((*temp_r6 != temp_r5) || (temp_r2 = arg0 + 0x6C, sp68 = temp_r2, var_sl = sp5C * 4, (*(arg0 + 0x70 + temp_r4) != *(temp_r2 + temp_r4)))) {
        *temp_r6 = temp_r5;
        temp_r6_2 = arg0 + 0x6C;
        temp_r2_2 = temp_r6_2 + temp_r4;
        *(arg0 + 0x70 + temp_r4) = *temp_r2_2;
        temp_r5_2 = sp5C * 4;
        temp_r4_2 = (temp_r5_2 + arg0)->unk7A4;
        func_0805E860(temp_r4_2, func_080B8DAC(arg0, *temp_r2_2, *temp_r7));
        sp68 = temp_r6_2;
        var_sl = temp_r5_2;
    }
    temp_r2_3 = sp5C << 6;
    sp64 = temp_r2_3;
    temp_r7_2 = temp_r2_3 + arg0;
    temp_r0_2 = temp_r7_2->unk9D;
    temp_r4_3 = (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F;
    temp_r7_2->unk9D = (u8) (temp_r4_3 | (((u32) (func_0805E8F0((var_sl + arg0)->unk7A4) << 0x18) >> 0x19) & 1));
    temp_r0_3 = (var_sl + arg0)->unk7A4;
    temp_r1_2 = temp_r0_3->unk0;
    (*temp_r1_2)->unk10(&sp0, temp_r1_2, *(temp_r0_3->unk4 + (temp_r0_3->unkC * 4)));
    sp20.unk0 = 0;
    sp20.unk2 = 0;
    sp20.unk4 = 0;
    sp20.unk6 = 0;
    sp20.unk8 = 0;
    sp20.unkC = 0;
    sp20.unk10 = 0;
    sp20.unk11 = 0;
    sp20.unk14 = 0;
    sp20.unk18 = 0;
    temp_r0_4 = (var_sl + arg0)->unk7AC;
    temp_r0_5 = temp_r0_4 + 0xC;
    sp20.unk0 = (s32) temp_r0_4->unk0;
    sp20.unk4 = (s32) temp_r0_4->unk4;
    sp20.unk8 = (s32) temp_r0_4->unk8;
    temp_r1_3 = &sp20 + 0xC;
    sp20.unkC = (s32) temp_r0_4->unkC;
    temp_r1_3->unk4 = (s32) temp_r0_5->unk4;
    temp_r1_3->unk8 = (s32) temp_r0_5->unk8;
    temp_r1_3->unkC = (s32) temp_r0_5->unkC;
    sp20.unk0 = (s16) ((u16) temp_r7_2->unk8A >> 8);
    sp74 = sp64;
    if (*(sp68 + sp64) != 5) {
        var_r0 = temp_r7_2 + 0x8C;
    } else {
        var_r0 = temp_r7_2 + 0x96;
    }
    sp20.unk2 = (s16) ((u16) *var_r0 >> 8);
    temp_r7_3 = sp60 + var_sl;
    sp20.unk6 = temp_r7_3;
    temp_r5_3 = sp5C * 8;
    temp_r0_6 = temp_r5_3 + arg0 + 0x72C;
    sp20.unk4 = func_080074C0(temp_r0_6, temp_r0_6->unk4);
    sp20.unk18 = 1;
    temp_r7_4 = sp74 + arg0;
    sp20.unk8 = (s16) temp_r7_4->unk95;
    temp_r3 = func_08008920(arg0);
    var_r2 = 0;
    sp70 = temp_r5_3;
    if (sp0 != 0) {
        var_r2 = sp0.unk4;
    }
    func_0805E99C(temp_r3, sp0, var_r2, &sp20);
    if (temp_r7_4->unk9D == 0) {
        return;
    }
    temp_r0_7 = func_08008910(arg0);
    var_r3 = 0;
    if (sp8 != 0) {
        var_r3 = sp8.unk4;
    }
    func_08008F0C(&sp3C, sp8, (temp_r7_3 << 5) + 0x06010000, var_r3);
    temp_r1_4 = temp_r0_7->unk4;
    if (temp_r1_4 != temp_r0_7->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp3C.unk0;
            temp_r1_4->unk4 = (s32) sp3C.unk4;
            temp_r1_4->unk8 = (s32) sp3C.unk8;
            temp_r1_4->unkC = (s32) sp3C.unkC;
        }
        temp_r0_7->unk4 = (void *) (temp_r0_7->unk4 + 0x10);
        sp6C = &sp0 + 0x10;
    } else {
        sp78 = temp_r1_4;
        sp50 = 1;
        temp_r4_4 = (s32) (temp_r1_4 - temp_r0_7->unk0) >> 4;
        sp4C = temp_r4_4;
        var_r0_2 = &sp4C;
        if ((u32) temp_r4_4 < 1U) {
            var_r0_2 = &sp50;
        }
        temp_r0_8 = temp_r4_4 + *var_r0_2;
        if (temp_r0_8 != 0) {
            temp_r4_5 = temp_r0_8 * 0x10;
            var_r0_3 = malloc(temp_r4_5);
            var_sl_2 = temp_r4_5;
            if (var_r0_3 == 0) {
                var_r0_3 = func_080D3BC0(var_sl_2);
            }
        } else {
            var_r0_3 = 0;
            var_sl_2 = 0;
        }
        sp7C = var_r0_3;
        var_r2_2 = temp_r0_7->unk0;
        var_r3_2 = var_r0_3;
        sp6C = &sp0 + 0x10;
        if (var_r2_2 != sp78) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2_2->unk0;
                    var_r3_2->unk4 = (s32) var_r2_2->unk4;
                    var_r3_2->unk8 = (s32) var_r2_2->unk8;
                    var_r3_2->unkC = (s32) var_r2_2->unkC;
                }
                var_r2_2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2_2 != sp78);
        }
        if (sp50 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp3C.unk0;
                var_r3_2->unk4 = (s32) sp3C.unk4;
                var_r3_2->unk8 = (s32) sp3C.unk8;
                var_r3_2->unkC = (s32) sp3C.unkC;
            }
            var_r4 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = sp50;
            var_r2_3 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_3 != 0) {
                        var_r2_3->unk0 = (s32) sp3C.unk0;
                        var_r2_3->unk4 = (s32) sp3C.unk4;
                        var_r2_3->unk8 = (s32) sp3C.unk8;
                        var_r2_3->unkC = (s32) sp3C.unkC;
                    }
                    var_r3_3 -= 1;
                    var_r2_3 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r4 = var_r2_3;
        }
        temp_r2_4 = temp_r0_7->unk4;
        temp_r0_9 = temp_r0_7->unk0;
        var_r1 = temp_r0_9;
        if (temp_r0_9 != temp_r2_4) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_4);
        }
        if (temp_r0_9 != 0) {
            free();
        }
        temp_r0_7->unk0 = sp7C;
        temp_r0_7->unk4 = var_r4;
        temp_r0_7->unkC = (void *) (sp7C + var_sl_2);
    }
    temp_r4_6 = func_08008910(arg0);
    temp_r0_10 = sp70 + arg0 + 0x72C;
    temp_r2_5 = func_080074C0(temp_r0_10, temp_r0_10->unk4);
    var_r3_4 = 0;
    if (sp10 != 0) {
        var_r3_4 = sp6C->unk4;
    }
    func_08008F0C(&sp3C, sp10, (temp_r2_5 << 5) + 0x05000200, var_r3_4);
    temp_r1_5 = temp_r4_6->unk4;
    if (temp_r1_5 != temp_r4_6->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) sp3C.unk0;
            temp_r1_5->unk4 = (s32) sp3C.unk4;
            temp_r1_5->unk8 = (s32) sp3C.unk8;
            temp_r1_5->unkC = (s32) sp3C.unkC;
        }
        temp_r4_6->unk4 = (void *) (temp_r4_6->unk4 + 0x10);
    } else {
        sp7C = temp_r1_5;
        sp58 = 1;
        temp_r4_7 = (s32) (temp_r1_5 - temp_r4_6->unk0) >> 4;
        sp54 = temp_r4_7;
        var_r0_4 = &sp54;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_4 = &sp58;
        }
        temp_r0_11 = temp_r4_7 + *var_r0_4;
        if (temp_r0_11 != 0) {
            temp_r4_8 = temp_r0_11 * 0x10;
            var_r0_5 = malloc(temp_r4_8);
            var_sl_3 = temp_r4_8;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_sl_3);
            }
        } else {
            var_r0_5 = 0;
            var_sl_3 = 0;
        }
        sp80 = var_r0_5;
        var_r2_4 = temp_r4_6->unk0;
        var_r3_5 = var_r0_5;
        if (var_r2_4 != sp7C) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_4->unk0;
                    var_r3_5->unk4 = (s32) var_r2_4->unk4;
                    var_r3_5->unk8 = (s32) var_r2_4->unk8;
                    var_r3_5->unkC = (s32) var_r2_4->unkC;
                }
                var_r2_4 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_4 != sp7C);
        }
        if (sp58 == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) sp3C.unk0;
                var_r3_5->unk4 = (s32) sp3C.unk4;
                var_r3_5->unk8 = (s32) sp3C.unk8;
                var_r3_5->unkC = (s32) sp3C.unkC;
            }
            var_r5 = var_r3_5 + 0x10;
        } else {
            var_r3_6 = sp58;
            var_r2_5 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_5 != 0) {
                        var_r2_5->unk0 = (s32) sp3C.unk0;
                        var_r2_5->unk4 = (s32) sp3C.unk4;
                        var_r2_5->unk8 = (s32) sp3C.unk8;
                        var_r2_5->unkC = (s32) sp3C.unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_5 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r5 = var_r2_5;
        }
        temp_r2_6 = temp_r4_6->unk4;
        temp_r0_12 = temp_r4_6->unk0;
        var_r1_2 = temp_r0_12;
        if (temp_r0_12 != temp_r2_6) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_6);
        }
        if (temp_r0_12 != 0) {
            free();
        }
        temp_r4_6->unk0 = sp80;
        temp_r4_6->unk4 = var_r5;
        temp_r4_6->unkC = (void *) (sp80 + var_sl_3);
    }
    (sp74 + arg0)->unk9D = 0;
}
