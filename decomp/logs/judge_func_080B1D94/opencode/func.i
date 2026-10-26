# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1D94/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1D94/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1D94/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1D94/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080B1D94/opencode/func.c" 2
s32 __builtin_delete();
s32 __builtin_new(s32);
s32 free();
s32 func_08007D4C(void *, s32);
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088CC(void *);
void *func_08008910(void *);
s32 func_08008F0C(s32 *, s32, s32, u16);
void *func_0805E824(s32, s32, s32, s32);
s32 func_0805E860(void *, s32);
s32 func_080AF814(void *);
s32 func_080B0708(void *, s32);
s32 func_080B3518(void *);
s32 func_080B36B4(void *);
s32 func_080B3948(void *);
s32 func_080B3BA8(void *);
void *func_080D3BC0(s32);
void *malloc(s32);
s32 memcpy(s32 *, ? *, s32);

void func_080B1D94(void *arg0) {
s32 sp0;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    void *sp34;
    void *sp38;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r3;
    s32 temp_r0_10;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r5_2;
    s32 temp_r7;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_r1;
    s32 var_sb;
    s32 var_sb_2;
    u16 var_r3_2;
    u16 var_r3_4;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r5;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3_3;
    void *var_r3_5;
    void *var_r4;
    void *var_r4_2;

    sp30 = 0;
    var_r1 = 0;
    var_r3 = arg0 + 0x848;
    do {
        *var_r3 = 1;
        var_r3 += 4;
        *(arg0 + 0x91A + var_r1) = 1;
        var_r1 += 1;
    } while (var_r1 <= 4);
    temp_r0 = func_0805E824(__builtin_new(0x14), arg0->unk420, 0, 0x100);
    if (temp_r0 != arg0->unk4B0) {
        __builtin_delete();
    }
    arg0->unk4B0 = temp_r0;
    func_0805E860(temp_r0, 0);
    temp_r4 = arg0 + 0x4B8;
    temp_r0_2 = arg0->unk4B0;
    temp_r1 = temp_r0_2->unk0;
    (*temp_r1)->unk10(&sp0, temp_r1, *(temp_r0_2->unk4 + (temp_r0_2->unkC * 4)));
    memcpy(&sp0, &sp0, 0x20);
    temp_r0_3 = &sp0 + 0xC;
    arg0->unk4B8 = (s32) sp0.unk0;
    temp_r4->unk4 = (s32) sp0.unk4;
    temp_r4->unk8 = (s32) sp0.unk8;
    temp_r4_2 = temp_r4 + 0xC;
    temp_r4->unkC = (s32) sp0.unkC;
    temp_r4_2->unk4 = (s32) temp_r0_3->unk4;
    temp_r4_2->unk8 = (s32) temp_r0_3->unk8;
    temp_r4_2->unkC = (s32) temp_r0_3->unkC;
    (temp_r4_2 + 0xC)->unk4 = (s32) (temp_r0_3 + 0xC)->unk4;
    temp_r5 = func_08008910(arg0);
    temp_r7 = arg0->unk4C0;
    temp_r0_4 = arg0 + 0x890;
    temp_r2 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
    var_r3_2 = 0;
    if (arg0->unk4C0 != 0) {
        var_r3_2 = (arg0 + 0x4C0)->unk4;
    }
    sp34 = temp_r5;
    func_08008F0C(&sp0, temp_r7, (temp_r2 << 5) + 0x06010000, var_r3_2);
    temp_r1_2 = temp_r5->unk4;
    if (temp_r1_2 != temp_r5->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp0.unk0;
            temp_r1_2->unk4 = (s32) sp0.unk4;
            temp_r1_2->unk8 = (s32) sp0.unk8;
            temp_r1_2->unkC = (s32) sp0.unkC;
        }
        sp34->unk4 = (void *) (sp34->unk4 + 0x10);
    } else {
        sp38 = temp_r1_2;
        sp24 = 1;
        temp_r4_3 = (s32) (temp_r1_2 - sp34->unk0) >> 4;
        sp20 = temp_r4_3;
        var_r0 = &sp20;
        if ((u32) temp_r4_3 < 1U) {
            var_r0 = &sp24;
        }
        temp_r0_5 = temp_r4_3 + *var_r0;
        if (temp_r0_5 != 0) {
            temp_r4_4 = temp_r0_5 * 0x10;
            var_r0_2 = malloc(temp_r4_4);
            var_sb = temp_r4_4;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        var_r2 = sp34->unk0;
        var_r3_3 = var_r0_2;
loop_20:
        if (var_r2 != sp38) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) var_r2->unk0;
                var_r3_3->unk4 = (s32) var_r2->unk4;
                var_r3_3->unk8 = (s32) var_r2->unk8;
                var_r3_3->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3_3 += 0x10;
            goto loop_20;
        }
        if (sp24 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) sp0.unk0;
                var_r3_3->unk4 = (s32) sp0.unk4;
                var_r3_3->unk8 = (s32) sp0.unk8;
                var_r3_3->unkC = (s32) sp0.unkC;
            }
            var_r4 = var_r3_3 + 0x10;
        } else {
            var_ip = sp24;
            var_r2_2 = var_r3_3;
            if (sp24 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp0.unk0;
                        var_r2_2->unk4 = (s32) sp0.unk4;
                        var_r2_2->unk8 = (s32) sp0.unk8;
                        var_r2_2->unkC = (s32) sp0.unkC;
                    }
                    var_ip -= 1;
                    var_r2_2 += 0x10;
                } while (var_ip != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2_2 = sp34->unk4;
        temp_r0_6 = sp34->unk0;
        var_r1_2 = temp_r0_6;
        if (temp_r0_6 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_6 != 0) {
            free();
        }
        sp34->unk0 = var_r0_2;
        sp34->unk4 = var_r4;
        sp34->unkC = (void *) (var_sb + var_r0_2);
    }
    temp_r4_5 = func_08008910(arg0);
    temp_r0_7 = arg0->unk4C8;
    var_r3_4 = 0;
    if (temp_r0_7 != 0) {
        var_r3_4 = (arg0 + 0x4C8)->unk4;
    }
    sp34 = temp_r4_5;
    func_08008F0C(&sp0, temp_r0_7, 0x05000260, var_r3_4);
    temp_r1_3 = temp_r4_5->unk4;
    if (temp_r1_3 != temp_r4_5->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp0.unk0;
            temp_r1_3->unk4 = (s32) sp0.unk4;
            temp_r1_3->unk8 = (s32) sp0.unk8;
            temp_r1_3->unkC = (s32) sp0.unkC;
        }
        sp34->unk4 = (void *) (sp34->unk4 + 0x10);
    } else {
        sp38 = temp_r1_3;
        sp2C = 1;
        temp_r4_6 = (s32) (temp_r1_3 - sp34->unk0) >> 4;
        sp28 = temp_r4_6;
        var_r0_3 = &sp28;
        if ((u32) temp_r4_6 < 1U) {
            var_r0_3 = &sp2C;
        }
        temp_r0_8 = temp_r4_6 + *var_r0_3;
        if (temp_r0_8 != 0) {
            temp_r4_7 = temp_r0_8 * 0x10;
            var_r0_4 = malloc(temp_r4_7);
            var_sb_2 = temp_r4_7;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_4 = 0;
            var_sb_2 = 0;
        }
        var_r2_3 = sp34->unk0;
        var_r3_5 = var_r0_4;
        if (var_r2_3 != sp38) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_3->unk0;
                    var_r3_5->unk4 = (s32) var_r2_3->unk4;
                    var_r3_5->unk8 = (s32) var_r2_3->unk8;
                    var_r3_5->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_3 != sp38);
        }
        if (sp2C == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) sp0.unk0;
                var_r3_5->unk4 = (s32) sp0.unk4;
                var_r3_5->unk8 = (s32) sp0.unk8;
                var_r3_5->unkC = (s32) sp0.unkC;
            }
            var_r4_2 = var_r3_5 + 0x10;
        } else {
            var_ip_2 = sp2C;
            var_r2_4 = var_r3_5;
            if (sp2C != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp0.unk0;
                        var_r2_4->unk4 = (s32) sp0.unk4;
                        var_r2_4->unk8 = (s32) sp0.unk8;
                        var_r2_4->unkC = (s32) sp0.unkC;
                    }
                    var_ip_2 -= 1;
                    var_r2_4 += 0x10;
                } while (var_ip_2 != 0);
            }
            var_r4_2 = var_r2_4;
        }
        temp_r2_3 = sp34->unk4;
        temp_r0_9 = sp34->unk0;
        var_r1_3 = temp_r0_9;
        if (temp_r0_9 != temp_r2_3) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0_9 != 0) {
            free();
        }
        sp34->unk0 = var_r0_4;
        sp34->unk4 = var_r4_2;
        sp34->unkC = (void *) (var_sb_2 + var_r0_4);
    }
    func_080AF814(arg0);
    var_r0_5 = arg0 + 0x838;
loop_74:
    if (*var_r0_5 == 3) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_r0_10 = arg0->unk83C;
        switch (temp_r0_10) {
        case 0:
            func_080B3518(arg0);
            func_080B36B4(arg0);
            func_080B3948(arg0);
            temp_r5_2 = sp30 + 1;
            sp30 = temp_r5_2;
            func_080B0708(arg0, temp_r5_2);
            if (temp_r5_2 == 0x3C) {
                sp30 = 0;
            }
            break;
        case 1:
            if (8 & func_080088CC(arg0)) {
                func_080B3BA8(arg0);
            }
            break;
        }
        func_080AF814(arg0);
        var_r0_5 = arg0 + 0x838;
        goto loop_74;
    }
}
