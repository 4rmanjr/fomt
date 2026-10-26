# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808C0BC/Prodesk_341912/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808C0BC/Prodesk_341912/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808C0BC/Prodesk_341912/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808C0BC/Prodesk_341912/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0808C0BC/Prodesk_341912/func.c" 2
s32 GetSize__C8Rucksack(s32);
s32 __builtin_delete(void *);
void *__builtin_new(s32);
s32 func_08007184(void *, s32);
s32 func_080073E0(void *, s32);
s32 func_080079E8(void *, s32);
s32 func_08007C28(void *, s32);
s32 func_08008724();
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088CC(void *);
u32 func_080088D4(void *);
s32 func_08008910(void *);
void *func_08008918(void *);
void *func_08008940(void *);
s32 func_08008B6C(void *, s32);
s32 func_08009300(void *, void *);
s32 func_0800934C(void *, s32, s32, s32);
s32 func_08009378(void *, s32, s32, s32);
s32 func_08050DF0(void *);
s32 func_0808AC28(void *, s32);
s32 func_0808B16C(void *, s32, s32);
s32 func_0808BA60(void *, s32);
s32 func_0808BC14(void *, s32);
s32 func_0808BCD0(void *, s32);
s32 func_0808BDA0(void *, s32);
s32 func_0808BF8C(void *, s32);
void *func_080CAFC4(void *, s32, void *, s32, ? *);
s32 func_080CB090(void *);
void *func_080CC15C(void *, s32, void *, s32, ? *);
s32 func_080CC310(void *);
void *func_080CD9B0(void *, void *, s32);
s32 func_080CDA44(void *);
s32 func_080CDB08(void *);
s32 func_080CDC00(void *);
s32 func_080CDCD0(void *);
s32 func_080CDD7C(void *);
s32 func_080CE294(void *);
s32 func_080CE2C4(void *);
void *func_080CEC00(void *, void *);
s32 func_080CEC84(void *, s32, s32);
s32 func_080CECD0(void *);
s32 func_080CF050(void *);
extern ? gUnk_081000B4;
extern ? gUnk_081000BC;
extern ? vtable_unk_080E5A28;
extern ? vtable_unk_080E5B80;

void func_0808C0BC(void *arg0) {
    s8 sp4;
    s16 sp8;
    void *spC;
    s32 temp_r0_7;
    s32 temp_r1_4;
    s32 temp_r1_6;
    s32 temp_r4;
    s32 temp_r4_7;
    s32 temp_r5;
    s32 temp_r6_2;
    s32 temp_r8;
    s32 var_r4;
    s32 var_sl;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r6;

    func_08008724();
    func_080CE294(arg0);
    temp_r8 = GetSize__C8Rucksack(arg0->unk104);
    temp_r6 = __builtin_new(0x29C);
    temp_r5 = func_08008910(arg0);
    temp_r2 = func_08008940(arg0);
    sp4 = 1;
    temp_r0 = func_080CAFC4(temp_r6, temp_r5, temp_r2, temp_r8, &gUnk_081000B4);
    temp_r1 = arg0->unk78;
    if ((temp_r0 != temp_r1) && (temp_r1 != 0)) {
        temp_r1->unk210->unk8(temp_r1, 3);
    }
    arg0->unk78 = temp_r0;
    func_080CB090(arg0->unk78);
    func_0808BCD0(arg0, temp_r8);
    temp_r5_2 = __builtin_new(0x32C);
    temp_r4 = func_08008910(arg0);
    temp_r2_2 = func_08008940(arg0);
    sp4 = 1;
    temp_r0_2 = func_080CC15C(temp_r5_2, temp_r4, temp_r2_2, temp_r8, &gUnk_081000BC);
    temp_r1_2 = arg0->unk7C;
    if ((temp_r0_2 != temp_r1_2) && (temp_r1_2 != 0)) {
        temp_r1_2->unk210->unk8(temp_r1_2, 3);
    }
    arg0->unk7C = temp_r0_2;
    func_080CC310(arg0->unk7C);
    func_0808BDA0(arg0, temp_r8);
    temp_r0_3 = func_080CD9B0(__builtin_new(0x8C), arg0, 1);
    temp_r5_3 = arg0->unk8C;
    if ((temp_r0_3 != temp_r5_3) && (temp_r5_3 != 0)) {
        temp_r5_3->unk24 = &vtable_unk_080E5A28;
        temp_r4_2 = temp_r5_3 + 0x1C;
        func_080073E0(temp_r4_2, temp_r4_2->unk4);
        func_08007184(temp_r4_2, 2);
        temp_r4_3 = temp_r4_2 - 8;
        func_08007C28(temp_r4_3, temp_r4_3->unk4);
        func_080079E8(temp_r4_3, 2);
        __builtin_delete(temp_r5_3);
    }
    arg0->unk8C = temp_r0_3;
    temp_r0_4 = func_080CEC00(__builtin_new(0x88), arg0);
    temp_r5_4 = arg0->unk90;
    if ((temp_r0_4 != temp_r5_4) && (temp_r5_4 != 0)) {
        temp_r4_4 = temp_r5_4 + 0x74;
        func_080073E0(temp_r4_4, temp_r4_4->unk4);
        func_08007184(temp_r4_4, 2);
        temp_r4_5 = temp_r4_4 - 8;
        func_08007C28(temp_r4_5, temp_r4_5->unk4);
        func_080079E8(temp_r4_5, 2);
        temp_r5_4->unk4 = &vtable_unk_080E5A28;
        __builtin_delete(temp_r5_4);
    }
    arg0->unk90 = temp_r0_4;
    func_0808BF8C(arg0, arg0->unk8C->unk4);
    temp_r0_5 = func_08008918(arg0);
    sp8 = 0x3F;
    temp_r0_5->unk50 = 0x3F;
    temp_r4_6 = __builtin_new(0x10);
    temp_r1_3 = func_08008918(arg0);
    temp_r4_6->unk0 = 0;
    temp_r4_6->unk4 = 0;
    temp_r4_6->unk8 = &vtable_unk_080E5B80;
    temp_r5_5 = temp_r4_6 + 0xC;
    func_08009300(temp_r5_5, temp_r1_3);
    spC = temp_r4_6;
    func_0800934C(temp_r5_5, 0x889, 1, 1);
    temp_r0_6 = func_08008940(arg0);
    temp_r0_6->unk8->unk10(temp_r0_6, spC);
    var_sl = 0;
loop_13:
    func_080087C8(arg0);
    func_080088B8(arg0);
    func_080CE2C4(arg0);
    temp_r1_4 = spC->unk0;
    if ((s32) ((0 - temp_r1_4) | temp_r1_4) < 0) {
        goto loop_13;
    }
    if (var_sl == 0) {
        temp_r6_2 = arg0->unk8C->unk4;
        temp_r0_7 = arg0->unk108;
        switch (temp_r0_7) {
        case 1:
            if (arg0->unk88 != 3) {

            } else {
                if (func_08050DF0(arg0 + 0x80) == 1) {
                    func_0808BC14(arg0, arg0->unk8C->unk4);
                }
                func_0808BF8C(arg0, arg0->unk8C->unk4);
                arg0->unk108 = var_sl;
            }
            break;
        case 2:
            if (arg0->unk88 != 3) {

            } else {
                func_0808BF8C(arg0, temp_r6_2);
                arg0->unk108 = var_sl;
            }
            break;
        case 0:
            if (func_080088D4(arg0) & 0x40) {
                func_080CDA44(arg0->unk8C);
                goto block_37;
            }
            if (func_080088D4(arg0) & 0x80) {
                func_080CDB08(arg0->unk8C);
                goto block_37;
            }
            if (func_080088D4(arg0) & 0x10) {
                func_080CDCD0(arg0->unk8C);
                goto block_37;
            }
            if (func_080088D4(arg0) & 0x20) {
                func_080CDC00(arg0->unk8C);
                goto block_37;
            }
            var_r4 = 0;
            if ((1 & (func_080088D4(arg0) >> 8)) || (2 & (func_080088D4(arg0) >> 8))) {
                var_r4 = 1;
            }
            if (var_r4 != 0) {
                func_080CDD7C(arg0->unk8C);
block_37:
                func_08008B6C(arg0 + 0xC, 0xCB);
            } else if (func_080088CC(arg0) & 1) {
                temp_r2_3 = arg0->unk90;
                if (temp_r2_3->unk84 == 0) {
                    func_080CEC84(temp_r2_3, arg0->unk8C->unk4, 0);
                } else {
                    temp_r4_7 = arg0->unk8C->unk4;
                    if (temp_r4_7 == func_080CF050(temp_r2_3)) {
                        if ((func_0808AC28(arg0, arg0->unk8C->unk4) << 0x18) != 0) {
                            func_0808BF8C(arg0, arg0->unk8C->unk4);
                            func_08008B6C(arg0 + 0xC, 0xC5);
                            goto block_50;
                        }
                        goto block_51;
                    }
                    if ((s32) arg0->unk8C->unk4 <= 8) {
                        if (func_080CF050(arg0->unk90) <= 8) {
                            if ((s32) arg0->unk8C->unk4 > 8) {
                                goto block_47;
                            }
                            goto block_48;
                        }
                        goto block_51;
                    }
block_47:
                    if (func_080CF050(arg0->unk90) > 8) {
block_48:
                        if ((func_0808B16C(arg0, func_080CF050(arg0->unk90), arg0->unk8C->unk4) << 0x18) != 0) {
                            func_08008B6C(arg0 + 0xC, 0xC5);
                            func_0808BF8C(arg0, arg0->unk8C->unk4);
block_50:
                            func_080CECD0(arg0->unk90);
                        } else {
                            goto block_51;
                        }
                    } else {
block_51:
                        func_08008B6C(arg0 + 0xC, 0xC7);
                    }
                }
            } else if (func_080088CC(arg0) & 2) {
                temp_r1_5 = arg0->unk90;
                if (temp_r1_5->unk84 != 0) {
                    func_080CECD0(temp_r1_5);
                } else {
                    temp_r1_6 = spC->unk0;
                    if ((s32) ((0 - temp_r1_6) | temp_r1_6) >= 0) {
                        var_sl = 1;
                        func_08009378(spC + 0xC, 0x889, 1, 1);
                        temp_r0_8 = func_08008940(arg0);
                        temp_r0_8->unk8->unk10(temp_r0_8, spC);
                    }
                }
            } else if (func_080088CC(arg0) & 8) {
                func_0808BA60(arg0, arg0->unk8C->unk4);
            }
            if (temp_r6_2 == arg0->unk8C->unk4) {

            } else {
                func_0808BF8C(arg0);
            }
            break;
        }
        goto loop_13;
    }
    spC->unk8->unkC(spC, 3);
}
