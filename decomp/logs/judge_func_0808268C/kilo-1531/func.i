# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808268C/kilo-1531/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808268C/kilo-1531/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808268C/kilo-1531/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808268C/kilo-1531/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808268C/kilo-1531/func.c" 2
u16 GetIconId__C4Tool(s32 *);
u16 GetIconId__C7Article(void *);
s32 __4ToolUi(s32 *, s32);
s32 __7ArticleUi(void *, s32);
s32 free();
void *func_08008910(void *);
s32 func_08008F0C(s32 *, void *, s32, s32);
s32 func_0804E7A0(s32, void *, s32);
s32 func_0804E958(s32, void *, s32, s32);
s32 func_0804E9F4(s32, u32, s32, s32);
s32 func_0804EDB4(s32, s32, s32, s32);
s32 func_08075DB8(void *, s16);
s32 func_08075DD4(void *);
s32 func_08075E24(void *, s16);
s32 func_08082264(void *, u16, s32, s32);
s32 func_0808234C(void *, s32, s32, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
extern ? gUnk_080FED8C;
extern ? gUnk_086678A0;
extern ? gUnk_0874EE38;
extern ? gUnk_0875352C;
extern ? gUnk_08755154;

void func_0808268C(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
s32 sp20;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
s32 sp40;
    s32 sp44;
    u32 sp48;
    s32 sp4C;
    u32 sp50;
    u32 sp54;
    s32 sp58;
    s32 sp5C;
    void *sp60;
    s32 *var_r0;
    s32 temp_r0_3;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_ip_2;
    s32 var_r3;
    s32 var_sl;
    u16 var_r1_3;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r2;
    void *temp_r4_4;
    void *temp_r5;
    void *temp_r5_2;
    void *var_ip;
    void *var_r0_2;
    void *var_r1;
    void *var_r1_2;
    void *var_r2;
    void *var_r2_2;
    void *var_r4;

    sp44 = 4;
    func_08075DD4(arg0->unk1C);
    temp_r5 = arg0 + 0x24;
    temp_r0 = arg0 + 0x20 + ((arg0->unk20 * 0x10) + 4);
    var_r1 = temp_r5;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r0);
    }
    arg0->unk20 = (s32) (arg0->unk20 - ((s32) (temp_r0 - temp_r5) >> 4));
    sp48 = 0;
    if ((u32) arg0->unk2A4 <= 0U) {

    } else {
loop_4:
        temp_r0_2 = (sp48 * 4) + arg0;
        temp_r3 = temp_r0_2->unk2A8;
        temp_r1 = (temp_r3 * 0x14) + &gUnk_080FED8C;
        spC.unk0 = temp_r1->unk0;
        spC.unk4 = (s32) temp_r1->unk4;
        spC.unk8 = (s32) temp_r1->unk8;
        spC.unkC = (s32) temp_r1->unkC;
        (&spC + 0xC)->unk4 = (s32) (temp_r1 + 0xC)->unk4;
        sp4C = (temp_r3 * 0x30) + 0xD0;
        if (sp18 == 1) {
            temp_r4 = sp44 << 6;
            sp0 = 0x20;
            func_0804EDB4(sp14, arg0->unk1C->unk18 + temp_r4 + 0x32, 0xA0, 0);
            sp0 = 0;
            sp4 = 0x20;
            func_0804E9F4(arg0->unk1C->unk18 + temp_r4 + 0x34, 0x20U, 2, 2);
            sp58 = sp44 + 2;
            sp50 = sp48 + 1;
        } else {
            sp30.unk0 = 0x18;
            sp30.unk2 = 2;
            func_0804E7A0(sp30, (temp_r3 * 0x604) + arg0 + 0x6AC + 4, 0);
            sp34.unk0 = 0x18;
            sp34.unk2 = 2;
            sp0 = sp10;
            sp4 = 0;
            sp8 = 1;
            func_0804E958(sp34, (temp_r0_2->unk2A8 * 0x604) + arg0 + 0x6AC + 4, 0, 0);
            temp_r5_2 = func_08008910(arg0);
            func_08008F0C(&sp20, (temp_r0_2->unk2A8 * 0x604) + arg0 + 0x6AC + 4, (sp4C << 5) + 0x06000000, 0x600);
            temp_r1_2 = temp_r5_2->unk4;
            if (temp_r1_2 != temp_r5_2->unkC) {
                if (temp_r1_2 != 0) {
                    temp_r1_2->unk0 = (s32) sp20.unk0;
                    temp_r1_2->unk4 = (s32) sp20.unk4;
                    temp_r1_2->unk8 = (s32) sp20.unk8;
                    temp_r1_2->unkC = (s32) sp20.unkC;
                }
                temp_r5_2->unk4 = (void *) (temp_r5_2->unk4 + 0x10);
                sp5C = sp44 << 6;
                sp54 = sp4C << 0x10;
                sp58 = sp44 + 2;
                sp50 = sp48 + 1;
            } else {
                sp60 = temp_r1_2;
                sp3C = 1;
                temp_r4_2 = (s32) (temp_r1_2 - temp_r5_2->unk0) >> 4;
                sp38 = temp_r4_2;
                var_r0 = &sp38;
                if ((u32) temp_r4_2 < 1U) {
                    var_r0 = &sp3C;
                }
                temp_r0_3 = temp_r4_2 + *var_r0;
                if (temp_r0_3 != 0) {
                    temp_r4_3 = temp_r0_3 * 0x10;
                    var_r0_2 = malloc(temp_r4_3);
                    var_sl = temp_r4_3;
                    if (var_r0_2 == 0) {
                        var_r0_2 = func_080D3BC0(var_sl);
                    }
                } else {
                    var_r0_2 = 0;
                    var_sl = 0;
                }
                var_r2 = temp_r5_2->unk0;
                var_ip = var_r0_2;
                sp5C = sp44 << 6;
                sp54 = sp4C << 0x10;
                sp58 = sp44 + 2;
                sp50 = sp48 + 1;
                if (var_r2 != sp60) {
                    do {
                        if (var_ip != 0) {
                            var_ip->unk0 = (s32) var_r2->unk0;
                            var_ip->unk4 = (s32) var_r2->unk4;
                            var_ip->unk8 = (s32) var_r2->unk8;
                            var_ip->unkC = (s32) var_r2->unkC;
                        }
                        var_r2 += 0x10;
                        var_ip += 0x10;
                    } while (var_r2 != sp60);
                }
                if (sp3C == 1) {
                    if (var_ip != 0) {
                        var_ip->unk0 = (s32) sp20.unk0;
                        var_ip->unk4 = (s32) sp20.unk4;
                        var_ip->unk8 = (s32) sp20.unk8;
                        var_ip->unkC = (s32) sp20.unkC;
                    }
                    var_r4 = var_ip + 0x10;
                } else {
                    var_ip_2 = sp3C;
                    var_r2_2 = var_ip;
                    if (sp3C != 0) {
                        do {
                            if (var_r2_2 != 0) {
                                var_r2_2->unk0 = (s32) sp20.unk0;
                                var_r2_2->unk4 = (s32) sp20.unk4;
                                var_r2_2->unk8 = (s32) sp20.unk8;
                                var_r2_2->unkC = (s32) sp20.unkC;
                            }
                            var_ip_2 -= 1;
                            var_r2_2 += 0x10;
                        } while (var_ip_2 != 0);
                    }
                    var_r4 = var_r2_2;
                }
                temp_r2 = temp_r5_2->unk4;
                temp_r0_4 = temp_r5_2->unk0;
                var_r1_2 = temp_r0_4;
                if (temp_r0_4 != temp_r2) {
                    do {
                        var_r1_2 += 0x10;
                    } while (var_r1_2 != temp_r2);
                }
                if (temp_r0_4 != 0) {
                    free();
                }
                temp_r5_2->unk0 = var_r0_2;
                temp_r5_2->unk4 = var_r4;
                temp_r5_2->unkC = (void *) (var_sl + var_r0_2);
            }
            if (sp18 == 0) {
                sp0 = sp18;
                sp4 = 0x20;
                func_0804E9F4(arg0->unk1C->unk18 + sp5C + 4, sp54 >> 0x10, 0x18, 2);
            } else {
                sp0 = 0;
                sp4 = 0x20;
                func_0804E9F4(arg0->unk1C->unk18 + sp5C + 8, sp54 >> 0x10, 0x18, 2);
            }
        }
        switch (sp18) {
        case 1:
            __4ToolUi(&sp40, spC);
            var_r1_3 = GetIconId__C4Tool(&sp40);
            var_r3 = sp44 * 8;
            sp0 = &gUnk_086678A0;
block_52:
            func_08082264(arg0, var_r1_3, 0x10, var_r3);
            break;
        case 2:
            temp_r4_4 = &sp0 + 0x41;
            __7ArticleUi(temp_r4_4, spC);
            var_r1_3 = GetIconId__C7Article(temp_r4_4);
            var_r3 = sp44 * 8;
            sp0 = &gUnk_086678A0;
            goto block_52;
        case 3:
            if (spC == 4) {
                sp0 = &gUnk_0875352C;
                func_08082264(arg0, 0U, 0x10, sp44 * 8);
            }
            if (spC == 5) {
                sp0 = &gUnk_0874EE38;
                func_08082264(arg0, 0U, 0x10, sp44 * 8);
            }
            if (spC == 6) {
                var_r3 = sp44 * 8;
                sp0 = &gUnk_08755154;
                var_r1_3 = 0;
                goto block_52;
            }
            break;
        case 0:
            func_0808234C(arg0, 0, 2, sp44);
            func_0808234C(arg0, 8, 4, sp44);
            func_0808234C(arg0, 0x10, 6, sp44);
            func_0808234C(arg0, 0x18, 8, sp44);
            func_0808234C(arg0, 0x20, 0xA, sp44);
            func_0808234C(arg0, 0x28, 0xC, sp44);
            break;
        }
        sp44 = sp58;
        sp48 = sp50;
        if (sp50 < (u32) arg0->unk2A4) {
            goto loop_4;
        }
    }
    arg0->unkC = 0;
    arg0->unk648 = 0x28;
    func_08075DB8(arg0->unk1C, arg0->unkC);
    func_08075E24(arg0->unk1C, (s16) ((sp44 + 8) * 8));
}
