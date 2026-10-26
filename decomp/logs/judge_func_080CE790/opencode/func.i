# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE790/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE790/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE790/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE790/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080CE790/opencode/func.c" 2
s32 free();
s16 func_080074C0(void *, s32);
s16 func_08007D4C(void *, s32);
void *func_08008910(void *);
s32 func_08008920(void *);
s32 func_08008F0C(s32 *, s32, s32, u16);
s32 func_0805E8F0(void *);
s32 func_0805E99C(s32, s32, u16, ? *);
void *func_080D3BC0(s32);
void *malloc(s32);

void func_080CE790(void *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
s32 sp3C;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    void *sp5C;
    void *sp60;
    s16 temp_r2;
    s16 temp_r2_3;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 var_ip;
    s32 var_r3_5;
    s32 var_sb;
    s32 var_sl;
    u16 var_r2;
    u16 var_r2_4;
    u16 var_r3;
    u16 var_r3_3;
    void **temp_r1;
    void **temp_r1_4;
    void *temp_r0;
    void *temp_r0_12;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r5;
    void *temp_r5_2;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r3_2;
    void *var_r3_4;
    void *var_r4;
    void *var_r4_2;

    arg0->unk80 = 1U;
    arg0->unkB8 = 1U;
    sp0.unk0 = 0U;
    sp0.unk2 = 0U;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    if (arg0->unk80 == 0) {

    } else {
        temp_r4 = arg0 + 0x50;
        if (arg0->unk0->unk88 == 3) {
            func_0805E8F0(temp_r4);
        }
        temp_r1 = arg0->unk50;
        (*temp_r1)->unk10(&sp1C, temp_r1, *(arg0->unk54 + (temp_r4->unkC * 4)));
        temp_r0 = arg0 + 0x64;
        temp_r0_2 = temp_r0 + 0xC;
        sp0.unk0 = (s32) arg0->unk64;
        sp0.unk4 = (s32) temp_r0->unk4;
        sp0.unk8 = (s32) temp_r0->unk8;
        temp_r1_2 = &sp0 + 0xC;
        sp0.unkC = (s32) temp_r0->unkC;
        temp_r1_2->unk4 = (s32) temp_r0_2->unk4;
        temp_r1_2->unk8 = (s32) temp_r0_2->unk8;
        temp_r1_2->unkC = (s32) temp_r0_2->unkC;
        sp0.unk0 = (u16) arg0->unk4C;
        sp0.unk2 = (u16) arg0->unk4E;
        sp0.unk8 = 1;
        temp_r0_3 = arg0 + 0x14;
        sp0.unk4 = func_080074C0(temp_r0_3, temp_r0_3->unk4);
        temp_r5 = arg0 + 4;
        sp0.unk6 = func_08007D4C(temp_r5, temp_r5->unk4);
        sp0.unk18 = 1;
        temp_r0_4 = func_08008920(arg0->unk0);
        var_r2 = 0;
        if (sp1C != 0) {
            var_r2 = sp1C.unk4;
        }
        func_0805E99C(temp_r0_4, sp1C, var_r2, &sp0);
        temp_r4_2 = func_08008910(arg0->unk0);
        temp_r2 = func_08007D4C(temp_r5, temp_r5->unk4);
        var_r3 = 0;
        if (sp24 != 0) {
            var_r3 = sp24.unk4;
        }
        sp5C = temp_r4_2;
        func_08008F0C(&sp3C, sp24, (temp_r2 << 5) + 0x06010000, var_r3);
        temp_r1_3 = temp_r4_2->unk4;
        if (temp_r1_3 != temp_r4_2->unkC) {
            if (temp_r1_3 != 0) {
                temp_r1_3->unk0 = (s32) sp3C.unk0;
                temp_r1_3->unk4 = (s32) sp3C.unk4;
                temp_r1_3->unk8 = (s32) sp3C.unk8;
                temp_r1_3->unkC = (s32) sp3C.unkC;
            }
            sp5C->unk4 = (void *) (sp5C->unk4 + 0x10);
        } else {
            sp60 = temp_r1_3;
            sp50 = 1;
            temp_r4_3 = (s32) (sp60 - sp5C->unk0) >> 4;
            sp4C = temp_r4_3;
            var_r0 = &sp4C;
            if ((u32) temp_r4_3 < 1U) {
                var_r0 = &sp50;
            }
            temp_r0_5 = temp_r4_3 + *var_r0;
            if (temp_r0_5 != 0) {
                temp_r4_4 = temp_r0_5 * 0x10;
                var_r0_2 = malloc(temp_r4_4);
                var_sl = temp_r4_4;
                if (var_r0_2 == 0) {
                    var_r0_2 = func_080D3BC0(var_sl);
                }
            } else {
                var_r0_2 = 0;
                var_sl = 0;
            }
            var_r2_2 = sp5C->unk0;
            var_r3_2 = var_r0_2;
            if (var_r2_2 != sp60) {
                do {
                    if (var_r3_2 != 0) {
                        var_r3_2->unk0 = (s32) var_r2_2->unk0;
                        var_r3_2->unk4 = (s32) var_r2_2->unk4;
                        var_r3_2->unk8 = (s32) var_r2_2->unk8;
                        var_r3_2->unkC = (s32) var_r2_2->unkC;
                    }
                    var_r2_2 += 0x10;
                    var_r3_2 += 0x10;
                } while (var_r2_2 != sp60);
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
                var_ip = sp50;
                var_r2_3 = var_r3_2;
                if (sp50 != 0) {
                    do {
                        if (var_r2_3 != 0) {
                            var_r2_3->unk0 = (s32) sp3C.unk0;
                            var_r2_3->unk4 = (s32) sp3C.unk4;
                            var_r2_3->unk8 = (s32) sp3C.unk8;
                            var_r2_3->unkC = (s32) sp3C.unkC;
                        }
                        var_ip -= 1;
                        var_r2_3 += 0x10;
                    } while (var_ip != 0);
                }
                var_r4 = var_r2_3;
            }
            temp_r2_2 = sp5C->unk4;
            temp_r0_6 = sp5C->unk0;
            var_r1 = temp_r0_6;
            if (temp_r0_6 != temp_r2_2) {
                do {
                    var_r1 += 0x10;
                } while (var_r1 != temp_r2_2);
            }
            if (temp_r0_6 != 0) {
                free();
            }
            sp5C->unk0 = var_r0_2;
            sp5C->unk4 = var_r4;
            sp5C->unkC = (void *) (var_sl + var_r0_2);
        }
    }
    if (arg0->unkB8 == 0) {
        return;
    }
    temp_r4_5 = arg0 + 0x88;
    if (arg0->unk0->unk88 == 3) {
        func_0805E8F0(temp_r4_5);
    }
    temp_r1_4 = arg0->unk88;
    (*temp_r1_4)->unk10(&sp1C, temp_r1_4, *(arg0->unk8C + (temp_r4_5->unkC * 4)));
    temp_r0_7 = arg0 + 0x9C;
    temp_r0_8 = temp_r0_7 + 0xC;
    sp0.unk0 = (s32) arg0->unk9C;
    sp0.unk4 = (s32) temp_r0_7->unk4;
    sp0.unk8 = (s32) temp_r0_7->unk8;
    temp_r1_5 = &sp0 + 0xC;
    sp0.unkC = (s32) temp_r0_7->unkC;
    temp_r1_5->unk4 = (s32) temp_r0_8->unk4;
    temp_r1_5->unk8 = (s32) temp_r0_8->unk8;
    temp_r1_5->unkC = (s32) temp_r0_8->unkC;
    sp0.unk0 = (u16) arg0->unk84;
    sp0.unk2 = (u16) arg0->unk86;
    sp0.unk8 = 1;
    temp_r0_9 = arg0 + 0x14;
    sp0.unk4 = func_080074C0(temp_r0_9, temp_r0_9->unk4);
    temp_r5_2 = arg0 + 0xC;
    sp0.unk6 = func_08007D4C(temp_r5_2, temp_r5_2->unk4);
    sp0.unk18 = 1;
    temp_r0_10 = func_08008920(arg0->unk0);
    var_r2_4 = 0;
    if (sp1C != 0) {
        var_r2_4 = sp1C.unk4;
    }
    func_0805E99C(temp_r0_10, sp1C, var_r2_4, &sp0);
    temp_r4_6 = func_08008910(arg0->unk0);
    temp_r2_3 = func_08007D4C(temp_r5_2, temp_r5_2->unk4);
    var_r3_3 = 0;
    if (sp24 != 0) {
        var_r3_3 = sp24.unk4;
    }
    func_08008F0C(&sp3C, sp24, (temp_r2_3 << 5) + 0x06010000, var_r3_3);
    temp_r1_6 = temp_r4_6->unk4;
    if (temp_r1_6 != temp_r4_6->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32) sp3C.unk0;
            temp_r1_6->unk4 = (s32) sp3C.unk4;
            temp_r1_6->unk8 = (s32) sp3C.unk8;
            temp_r1_6->unkC = (s32) sp3C.unkC;
        }
        temp_r4_6->unk4 = (void *) (temp_r4_6->unk4 + 0x10);
        return;
    }
    sp58 = 1;
    temp_r4_7 = (s32) (temp_r1_6 - temp_r4_6->unk0) >> 4;
    sp54 = temp_r4_7;
    var_r0_3 = &sp54;
    if ((u32) temp_r4_7 < 1U) {
        var_r0_3 = &sp58;
    }
    temp_r0_11 = temp_r4_7 + *var_r0_3;
    if (temp_r0_11 != 0) {
        temp_r4_8 = temp_r0_11 * 0x10;
        var_r0_4 = malloc(temp_r4_8);
        var_sb = temp_r4_8;
        if (var_r0_4 == 0) {
            var_r0_4 = func_080D3BC0(var_sb);
        }
    } else {
        var_r0_4 = 0;
        var_sb = 0;
    }
    sp60 = var_r0_4;
    var_r2_5 = temp_r4_6->unk0;
    var_r3_4 = var_r0_4;
    if (var_r2_5 != temp_r1_6) {
        do {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) var_r2_5->unk0;
                var_r3_4->unk4 = (s32) var_r2_5->unk4;
                var_r3_4->unk8 = (s32) var_r2_5->unk8;
                var_r3_4->unkC = (s32) var_r2_5->unkC;
            }
            var_r2_5 += 0x10;
            var_r3_4 += 0x10;
        } while (var_r2_5 != temp_r1_6);
    }
    if (sp58 == 1) {
        if (var_r3_4 != 0) {
            var_r3_4->unk0 = (s32) sp3C.unk0;
            var_r3_4->unk4 = (s32) sp3C.unk4;
            var_r3_4->unk8 = (s32) sp3C.unk8;
            var_r3_4->unkC = (s32) sp3C.unkC;
        }
        var_r4_2 = var_r3_4 + 0x10;
    } else {
        var_r3_5 = sp58;
        var_r2_6 = var_r3_4;
        if (var_r3_5 != 0) {
            do {
                if (var_r2_6 != 0) {
                    var_r2_6->unk0 = (s32) sp3C.unk0;
                    var_r2_6->unk4 = (s32) sp3C.unk4;
                    var_r2_6->unk8 = (s32) sp3C.unk8;
                    var_r2_6->unkC = (s32) sp3C.unkC;
                }
                var_r3_5 -= 1;
                var_r2_6 += 0x10;
            } while (var_r3_5 != 0);
        }
        var_r4_2 = var_r2_6;
    }
    temp_r2_4 = temp_r4_6->unk4;
    temp_r0_12 = temp_r4_6->unk0;
    var_r1_2 = temp_r0_12;
    if (temp_r0_12 != temp_r2_4) {
        do {
            var_r1_2 += 0x10;
        } while (var_r1_2 != temp_r2_4);
    }
    if (temp_r0_12 != 0) {
        free();
    }
    temp_r4_6->unk0 = sp60;
    temp_r4_6->unk4 = var_r4_2;
    temp_r4_6->unkC = (void *) (sp60 + var_sb);
}
