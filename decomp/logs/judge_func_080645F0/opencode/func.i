# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080645F0/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080645F0/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080645F0/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080645F0/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;typedef struct { u8 pad[0x25]; u8 v; } S_AD8;typedef struct { u8 pad[0x26]; u8 v; } S_AE0;typedef struct { u8 pad[0x14]; u8 v; } S_CD8;typedef struct { u8 pad[3]; u8 v; } S_39C;typedef struct { u8 pad[0x58]; u8 v; } S_601C;typedef struct { u8 pad[0x14]; u8 v; } S_B68;typedef struct { u8 pad[0x26]; u8 v; } S_AEC;typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080645F0/opencode/func.c" 2

s32 free(void *);
void *func_08008910(s32);
s32 func_08008F0C(s32 *, s32 *, s32, s32);
s32 func_0804E8F0(s32, s32 *, s32, s32);
s32 func_08076BFC(void *, s32, ?, s32);
void *func_080D3BC0(s32);
void *malloc(s32);
extern s32 gUnk_080FB8B4;
extern s32 gUnk_080FB8C8;
extern s32 gUnk_080FB8CC;
extern s32 gUnk_080FB8D4;
extern s32 gUnk_080FB8E0;
extern s32 gUnk_08750C4C;
extern s32 gUnk_08750C6C;
extern s32 gUnk_08750E4C;
extern s32 gUnk_08750F6C;
extern s32 gUnk_08750F8C;
extern s32 gUnk_087517AC;
extern s32 gUnk_0875254C;
extern s32 gUnk_087525CC;
extern s32 gUnk_0875290C;
extern s32 gUnk_0875298C;
extern s32 gUnk_087529AC;
extern s32 gUnk_08752ACC;
extern s32 gUnk_08752B4C;
extern s32 gUnk_08752D4C;
extern s32 gUnk_08752DCC;
extern s32 vtable_unk_080E7A28;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[1444];
    void *unk5B4;
    u8 _pad5B8[7084];
    s32 unk2164;
} GenObj;
void func_080645F0(GenObj *arg0, ? arg1, ? arg2) {
    s32 *sp0;
GenObj sp8;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
    u32 sp88;
    u32 sp8C;
    u32 sp90;
    u32 sp94;
    u32 sp98;
    u32 sp9C;
    u32 spA0;
    u32 spA4;
    u32 spA8;
    u32 spAC;
    u32 spB0;
    u32 spB4;
    u32 spB8;
    u32 spBC;
    u32 spC0;
    u32 spC4;
    u32 spC8;
    u32 spCC;
    GenObj *spF0;
    s32 spF4;
    s32 spF8;
    s32 *sp10C;
    s32 **sp110;
    s32 **sp114;
    s32 **sp118;
    s32 *sp130;
    void *sp160;
    void *sp164;
    s32 *temp_r4;
    s32 *var_sl;
    s32 *var_r0_10;
    s32 *var_r0_13;
    s32 *var_r0_16;
    s32 *var_r0_19;
    s32 *var_r0_22;
    s32 *var_r0_25;
    s32 *var_r0_2;
    s32 *var_r0_4;
    s32 *var_r0_6;
    s32 *var_r0_8;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_14;
    s32 temp_r0_15;
    s32 temp_r0_17;
    s32 temp_r0_19;
    s32 temp_r0_21;
    s32 temp_r0_23;
    s32 temp_r0_25;
    s32 temp_r0_27;
    s32 temp_r0_29;
    s32 temp_r0_31;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r0_9;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_29;
    s32 temp_r4_2;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_33;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_38;
    s32 temp_r4_39;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_r0;
    s32 var_r3_10;
    s32 var_r3_12;
    s32 var_r3_14;
    s32 var_r3_16;
    s32 var_r3_18;
    s32 var_r3_20;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r3_6;
    s32 var_r3_8;
    s32 var_r8;
    s32 var_r8_10;
    s32 var_r8_11;
    s32 var_r8_12;
    s32 var_r8_13;
    s32 var_r8_14;
    s32 var_r8_15;
    s32 var_r8_16;
    s32 var_r8_17;
    s32 var_r8_18;
    s32 var_r8_19;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    s32 var_r8_9;
    u32 *var_r0_28;
    u32 *var_r0_30;
    u32 *var_r0_32;
    u32 *var_r0_34;
    u32 *var_r0_36;
    u32 *var_r0_38;
    u32 *var_r0_40;
    u32 *var_r0_42;
    u32 *var_r0_44;
    u32 temp_r1_18;
    u32 temp_r1_20;
    u32 temp_r1_22;
    u32 temp_r1_24;
    u32 temp_r1_26;
    u32 temp_r1_28;
    u32 temp_r1_30;
    u32 temp_r1_32;
    u32 temp_r1_34;
    u32 var_r3_22;
    u32 var_r3_24;
    u32 var_r3_26;
    u32 var_r3_28;
    u32 var_r3_30;
    u32 var_r3_32;
    u32 var_r3_34;
    u32 var_r3_36;
    u32 var_r3_38;
    void *temp_r0_16;
    void *temp_r0_18;
    void *temp_r0_20;
    void *temp_r0_22;
    void *temp_r0_24;
    void *temp_r0_26;
    void *temp_r0_28;
    void *temp_r0_2;
    void *temp_r0_30;
    void *temp_r0_32;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_8;
    GenObj *temp_r1;
    void *temp_r1_10;
    GenObj *temp_r1_11;
    void *temp_r1_12;
    GenObj *temp_r1_13;
    void *temp_r1_14;
    GenObj *temp_r1_15;
    void *temp_r1_16;
    GenObj *temp_r1_17;
    GenObj *temp_r1_19;
    GenObj *temp_r1_21;
    GenObj *temp_r1_23;
    GenObj *temp_r1_25;
    GenObj *temp_r1_27;
    GenObj *temp_r1_29;
    GenObj *temp_r1_2;
    GenObj *temp_r1_31;
    GenObj *temp_r1_33;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_5;
    void *temp_r1_6;
    GenObj *temp_r1_7;
    void *temp_r1_8;
    GenObj *temp_r1_9;
    void *temp_r2;
    void *temp_r2_10;
    void *temp_r2_11;
    void *temp_r2_12;
    void *temp_r2_13;
    void *temp_r2_14;
    void *temp_r2_15;
    void *temp_r2_16;
    void *temp_r2_17;
    void *temp_r2_18;
    void *temp_r2_19;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r2_9;
    GenObj *temp_r6;
    GenObj *temp_r6_10;
    GenObj *temp_r6_11;
    GenObj *temp_r6_12;
    GenObj *temp_r6_13;
    GenObj *temp_r6_14;
    GenObj *temp_r6_15;
    GenObj *temp_r6_16;
    GenObj *temp_r6_17;
    GenObj *temp_r6_18;
    GenObj *temp_r6_19;
    GenObj *temp_r6_2;
    GenObj *temp_r6_3;
    GenObj *temp_r6_4;
    GenObj *temp_r6_5;
    GenObj *temp_r6_6;
    GenObj *temp_r6_7;
    GenObj *temp_r6_8;
    GenObj *temp_r6_9;
    void *var_r0_11;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_15;
    void *var_r0_17;
    void *var_r0_18;
    void *var_r0_20;
    void *var_r0_21;
    void *var_r0_23;
    void *var_r0_24;
    void *var_r0_26;
    void *var_r0_27;
    void *var_r0_29;
    void *var_r0_31;
    void *var_r0_33;
    void *var_r0_35;
    void *var_r0_37;
    void *var_r0_39;
    void *var_r0_3;
    void *var_r0_41;
    void *var_r0_43;
    void *var_r0_45;
    void *var_r0_5;
    void *var_r0_7;
    void *var_r0_9;
    void *var_r1;
    void *var_r1_10;
    void *var_r1_11;
    void *var_r1_12;
    void *var_r1_13;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r1_9;
    GenObj *var_r2;
    GenObj *var_r2_10;
    GenObj *var_r2_11;
    GenObj *var_r2_12;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_15;
    GenObj *var_r2_16;
    GenObj *var_r2_17;
    GenObj *var_r2_18;
    GenObj *var_r2_19;
    GenObj *var_r2_20;
    GenObj *var_r2_21;
    GenObj *var_r2_22;
    GenObj *var_r2_23;
    GenObj *var_r2_24;
    GenObj *var_r2_25;
    GenObj *var_r2_26;
    GenObj *var_r2_27;
    GenObj *var_r2_28;
    GenObj *var_r2_29;
    GenObj *var_r2_2;
    GenObj *var_r2_30;
    GenObj *var_r2_31;
    GenObj *var_r2_32;
    GenObj *var_r2_33;
    GenObj *var_r2_34;
    GenObj *var_r2_35;
    GenObj *var_r2_36;
    GenObj *var_r2_37;
    GenObj *var_r2_38;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r2_9;
    GenObj *var_r3;
    GenObj *var_r3_11;
    GenObj *var_r3_13;
    GenObj *var_r3_15;
    GenObj *var_r3_17;
    GenObj *var_r3_19;
    GenObj *var_r3_21;
    GenObj *var_r3_23;
    GenObj *var_r3_25;
    GenObj *var_r3_27;
    GenObj *var_r3_29;
    GenObj *var_r3_31;
    GenObj *var_r3_33;
    GenObj *var_r3_35;
    GenObj *var_r3_37;
    GenObj *var_r3_3;
    GenObj *var_r3_5;
    GenObj *var_r3_7;
    GenObj *var_r3_9;
    void *var_r5;
    void *var_r5_10;
    void *var_r5_11;
    void *var_r5_12;
    void *var_r5_13;
    void *var_r5_14;
    void *var_r5_15;
    void *var_r5_16;
    void *var_r5_17;
    void *var_r5_18;
    void *var_r5_19;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;
    void *var_r5_8;
    void *var_r5_9;

    spF0 = arg0;
    sp0 = &gUnk_080FB8B4;
    func_08076BFC(arg0, arg1, arg2, 0x35);
    arg0->unk5B4 = &vtable_unk_080E7A28;
    var_r0 = 6;
    sp110 = &sp0 + 0x34;
    sp114 = &sp0 + 0x40;
    sp118 = &sp0 + 0x4C;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    spF0->unk2164 = 0;
    spF4 = spF0->unk4;
    sp28 = 2;
    sp28.unk2 = 2;
    temp_r4 = (GenObj *)((u8 *)spF0 + 0x5BC);
    sp0 = &gUnk_080FB8C8;
    func_0804E8F0(sp28, temp_r4, 0, 0);
    temp_r6 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, temp_r4, 0x06000700, 0x80);
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) sp8;
            temp_r1->unk4 = (s32) sp8.unk4;
            temp_r1->unk8 = (s32) sp8.unk8;
            temp_r1->unkC = (s32) sp8.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        var_sl = (GenObj *)((u8 *)spF0 + 0x640);
        sp10C = (GenObj *)((u8 *)spF0 + 0x744);
        sp130 = (GenObj *)((u8 *)spF0 + 0x948);
    } else {
        sp160 = temp_r1;
        sp30 = 1;
        temp_r4_2 = (s32) (temp_r1 - temp_r6->unk0) >> 4;
        sp2C = temp_r4_2;
        var_r0_2 = &sp2C;
        if ((u32) temp_r4_2 < 1U) {
            var_r0_2 = &sp30;
        }
        temp_r0 = temp_r4_2 + *var_r0_2;
        if (temp_r0 != 0) {
            temp_r4_3 = temp_r0 * 0x10;
            var_r0_3 = malloc(temp_r4_3);
            var_r8 = temp_r4_3;
            if (var_r0_3 == 0) {
                var_r0_3 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_3 = 0;
            var_r8 = 0;
        }
        sp164 = var_r0_3;
        var_r2 = temp_r6->unk0;
        var_r3 = var_r0_3;
        var_sl = (GenObj *)((u8 *)spF0 + 0x640);
        sp10C = (GenObj *)((u8 *)spF0 + 0x744);
        sp130 = (GenObj *)((u8 *)spF0 + 0x948);
        if (var_r2 != sp160) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp160);
        }
        if (sp30 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp8;
                var_r3->unk4 = (s32) sp8.unk4;
                var_r3->unk8 = (s32) sp8.unk8;
                var_r3->unkC = (s32) sp8.unkC;
            }
            var_r5 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_r3_2 = sp30;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp8;
                        var_r2_2->unk4 = (s32) sp8.unk4;
                        var_r2_2->unk8 = (s32) sp8.unk8;
                        var_r2_2->unkC = (s32) sp8.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r6->unk4;
        temp_r0_2 = temp_r6->unk0;
        var_r1 = temp_r0_2;
        if (temp_r0_2 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_2 != 0) {
            free();
        }
        temp_r6->unk0 = sp164;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (sp164 + var_r8);
    }
    sp34 = 4;
    sp110->unk2 = 2;
    sp0 = &gUnk_080FB8CC;
    func_0804E8F0(sp34, var_sl, 0, 0);
    temp_r6_2 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, var_sl, 0x06000780, 0x100);
    temp_r1_2 = temp_r6_2->unk4;
    if (temp_r1_2 != temp_r6_2->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp8;
            temp_r1_2->unk4 = (s32) sp8.unk4;
            temp_r1_2->unk8 = (s32) sp8.unk8;
            temp_r1_2->unkC = (s32) sp8.unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        sp3C = 1;
        temp_r4_4 = (s32) (temp_r1_2 - temp_r6_2->unk0) >> 4;
        sp38 = temp_r4_4;
        var_r0_4 = &sp38;
        if ((u32) temp_r4_4 < 1U) {
            var_r0_4 = &sp3C;
        }
        temp_r0_3 = temp_r4_4 + *var_r0_4;
        if (temp_r0_3 != 0) {
            temp_r4_5 = temp_r0_3 * 0x10;
            var_r0_5 = malloc(temp_r4_5);
            var_r8_2 = temp_r4_5;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_5 = 0;
            var_r8_2 = 0;
        }
        sp164 = var_r0_5;
        var_r2_3 = temp_r6_2->unk0;
        var_r3_3 = var_r0_5;
        if (var_r2_3 != temp_r1_2) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != temp_r1_2);
        }
        if (sp3C == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) sp8;
                var_r3_3->unk4 = (s32) sp8.unk4;
                var_r3_3->unk8 = (s32) sp8.unk8;
                var_r3_3->unkC = (s32) sp8.unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_3 + 0x10);
        } else {
            var_r3_4 = sp3C;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp8;
                        var_r2_4->unk4 = (s32) sp8.unk4;
                        var_r2_4->unk8 = (s32) sp8.unk8;
                        var_r2_4->unkC = (s32) sp8.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_2 = temp_r6_2->unk4;
        temp_r0_4 = temp_r6_2->unk0;
        var_r1_2 = temp_r0_4;
        if (temp_r0_4 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_4 != 0) {
            free();
        }
        temp_r6_2->unk0 = sp164;
        temp_r6_2->unk4 = var_r5_2;
        temp_r6_2->unkC = (void *) (sp164 + var_r8_2);
    }
    sp40 = 8;
    sp114->unk2 = 2;
    sp0 = &gUnk_080FB8D4;
    func_0804E8F0(sp40, sp10C, 0, 0);
    temp_r6_3 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, sp10C, 0x06000880, 0x200);
    temp_r1_3 = temp_r6_3->unk4;
    if (temp_r1_3 != temp_r6_3->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp8;
            temp_r1_3->unk4 = (s32) sp8.unk4;
            temp_r1_3->unk8 = (s32) sp8.unk8;
            temp_r1_3->unkC = (s32) sp8.unkC;
        }
        temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
    } else {
        sp48 = 1;
        temp_r4_6 = (s32) (temp_r1_3 - temp_r6_3->unk0) >> 4;
        sp44 = temp_r4_6;
        var_r0_6 = &sp44;
        if ((u32) temp_r4_6 < 1U) {
            var_r0_6 = &sp48;
        }
        temp_r0_5 = temp_r4_6 + *var_r0_6;
        if (temp_r0_5 != 0) {
            temp_r4_7 = temp_r0_5 * 0x10;
            var_r0_7 = malloc(temp_r4_7);
            var_r8_3 = temp_r4_7;
            if (var_r0_7 == 0) {
                var_r0_7 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_7 = 0;
            var_r8_3 = 0;
        }
        sp164 = var_r0_7;
        var_r2_5 = temp_r6_3->unk0;
        var_r3_5 = var_r0_7;
        if (var_r2_5 != temp_r1_3) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_5->unk0;
                    var_r3_5->unk4 = (s32) var_r2_5->unk4;
                    var_r3_5->unk8 = (s32) var_r2_5->unk8;
                    var_r3_5->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_5 != temp_r1_3);
        }
        if (sp48 == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) sp8;
                var_r3_5->unk4 = (s32) sp8.unk4;
                var_r3_5->unk8 = (s32) sp8.unk8;
                var_r3_5->unkC = (s32) sp8.unkC;
            }
            var_r5_3 = (GenObj *)((u8 *)var_r3_5 + 0x10);
        } else {
            var_r3_6 = sp48;
            var_r2_6 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) sp8;
                        var_r2_6->unk4 = (s32) sp8.unk4;
                        var_r2_6->unk8 = (s32) sp8.unk8;
                        var_r2_6->unkC = (s32) sp8.unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r5_3 = var_r2_6;
        }
        temp_r2_3 = temp_r6_3->unk4;
        temp_r0_6 = temp_r6_3->unk0;
        var_r1_3 = temp_r0_6;
        if (temp_r0_6 != temp_r2_3) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0_6 != 0) {
            free();
        }
        temp_r6_3->unk0 = sp164;
        temp_r6_3->unk4 = var_r5_3;
        temp_r6_3->unkC = (void *) (sp164 + var_r8_3);
    }
    sp4C = 0xC;
    sp118->unk2 = 2;
    sp0 = &gUnk_080FB8E0;
    func_0804E8F0(sp4C, sp130, 0, 0);
    temp_r6_4 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, sp130, 0x06000A80, 0x300);
    temp_r1_4 = temp_r6_4->unk4;
    if (temp_r1_4 != temp_r6_4->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp8;
            temp_r1_4->unk4 = (s32) sp8.unk4;
            temp_r1_4->unk8 = (s32) sp8.unk8;
            temp_r1_4->unkC = (s32) sp8.unkC;
        }
        temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
    } else {
        sp54 = 1;
        temp_r4_8 = (s32) (temp_r1_4 - temp_r6_4->unk0) >> 4;
        sp50 = temp_r4_8;
        var_r0_8 = &sp50;
        if ((u32) temp_r4_8 < 1U) {
            var_r0_8 = &sp54;
        }
        temp_r0_7 = temp_r4_8 + *var_r0_8;
        if (temp_r0_7 != 0) {
            temp_r4_9 = temp_r0_7 * 0x10;
            var_r0_9 = malloc(temp_r4_9);
            var_r8_4 = temp_r4_9;
            if (var_r0_9 == 0) {
                var_r0_9 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_9 = 0;
            var_r8_4 = 0;
        }
        sp164 = var_r0_9;
        var_r2_7 = temp_r6_4->unk0;
        var_r3_7 = var_r0_9;
        if (var_r2_7 != temp_r1_4) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_7->unk0;
                    var_r3_7->unk4 = (s32) var_r2_7->unk4;
                    var_r3_7->unk8 = (s32) var_r2_7->unk8;
                    var_r3_7->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_7 != temp_r1_4);
        }
        if (sp54 == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32) sp8;
                var_r3_7->unk4 = (s32) sp8.unk4;
                var_r3_7->unk8 = (s32) sp8.unk8;
                var_r3_7->unkC = (s32) sp8.unkC;
            }
            var_r5_4 = (GenObj *)((u8 *)var_r3_7 + 0x10);
        } else {
            var_r3_8 = sp54;
            var_r2_8 = var_r3_7;
            if (var_r3_8 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) sp8;
                        var_r2_8->unk4 = (s32) sp8.unk4;
                        var_r2_8->unk8 = (s32) sp8.unk8;
                        var_r2_8->unkC = (s32) sp8.unkC;
                    }
                    var_r3_8 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r3_8 != 0);
            }
            var_r5_4 = var_r2_8;
        }
        temp_r2_4 = temp_r6_4->unk4;
        temp_r0_8 = temp_r6_4->unk0;
        var_r1_4 = temp_r0_8;
        if (temp_r0_8 != temp_r2_4) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_4);
        }
        if (temp_r0_8 != 0) {
            free();
        }
        temp_r6_4->unk0 = sp164;
        temp_r6_4->unk4 = var_r5_4;
        temp_r6_4->unkC = (void *) (sp164 + var_r8_4);
    }
    temp_r6_5 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_0875254C, 0x06000D80, 0x80);
    temp_r1_5 = temp_r6_5->unk4;
    if (temp_r1_5 != temp_r6_5->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) sp8;
            temp_r1_5->unk4 = (s32) sp8.unk4;
            temp_r1_5->unk8 = (s32) sp8.unk8;
            temp_r1_5->unkC = (s32) sp8.unkC;
        }
        temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
    } else {
        sp5C = 1;
        temp_r4_10 = (s32) (temp_r1_5 - temp_r6_5->unk0) >> 4;
        sp58 = temp_r4_10;
        var_r0_10 = &sp58;
        if ((u32) temp_r4_10 < 1U) {
            var_r0_10 = &sp5C;
        }
        temp_r0_9 = temp_r4_10 + *var_r0_10;
        if (temp_r0_9 != 0) {
            temp_r4_11 = temp_r0_9 * 0x10;
            var_r0_11 = malloc(temp_r4_11);
            var_r8_5 = temp_r4_11;
            if (var_r0_11 == 0) {
                var_r0_11 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_11 = 0;
            var_r8_5 = 0;
        }
        sp164 = var_r0_11;
        var_r2_9 = temp_r6_5->unk0;
        var_r3_9 = var_r0_11;
        if (var_r2_9 != temp_r1_5) {
            do {
                if (var_r3_9 != 0) {
                    var_r3_9->unk0 = (s32) var_r2_9->unk0;
                    var_r3_9->unk4 = (s32) var_r2_9->unk4;
                    var_r3_9->unk8 = (s32) var_r2_9->unk8;
                    var_r3_9->unkC = (s32) var_r2_9->unkC;
                }
                var_r2_9 += 0x10;
                var_r3_9 += 0x10;
            } while (var_r2_9 != temp_r1_5);
        }
        if (sp5C == 1) {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) sp8;
                var_r3_9->unk4 = (s32) sp8.unk4;
                var_r3_9->unk8 = (s32) sp8.unk8;
                var_r3_9->unkC = (s32) sp8.unkC;
            }
            var_r5_5 = (GenObj *)((u8 *)var_r3_9 + 0x10);
        } else {
            var_r3_10 = sp5C;
            var_r2_10 = var_r3_9;
            if (var_r3_10 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32) sp8;
                        var_r2_10->unk4 = (s32) sp8.unk4;
                        var_r2_10->unk8 = (s32) sp8.unk8;
                        var_r2_10->unkC = (s32) sp8.unkC;
                    }
                    var_r3_10 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r3_10 != 0);
            }
            var_r5_5 = var_r2_10;
        }
        temp_r2_5 = temp_r6_5->unk4;
        temp_r1_6 = temp_r6_5->unk0;
        var_r0_12 = temp_r1_6;
        if (temp_r1_6 != temp_r2_5) {
            do {
                var_r0_12 += 0x10;
            } while (var_r0_12 != temp_r2_5);
        }
        if (temp_r1_6 != 0) {
            free(temp_r1_6);
        }
        temp_r6_5->unk0 = sp164;
        temp_r6_5->unk4 = var_r5_5;
        temp_r6_5->unkC = (void *) (sp164 + var_r8_5);
    }
    temp_r6_6 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_087525CC, 0x05000020, 0x20);
    temp_r1_7 = temp_r6_6->unk4;
    if (temp_r1_7 != temp_r6_6->unkC) {
        if (temp_r1_7 != 0) {
            temp_r1_7->unk0 = (s32) sp8;
            temp_r1_7->unk4 = (s32) sp8.unk4;
            temp_r1_7->unk8 = (s32) sp8.unk8;
            temp_r1_7->unkC = (s32) sp8.unkC;
        }
        temp_r6_6->unk4 = (void *) (temp_r6_6->unk4 + 0x10);
    } else {
        sp64 = 1;
        temp_r4_12 = (s32) (temp_r1_7 - temp_r6_6->unk0) >> 4;
        sp60 = temp_r4_12;
        var_r0_13 = &sp60;
        if ((u32) temp_r4_12 < 1U) {
            var_r0_13 = &sp64;
        }
        temp_r0_10 = temp_r4_12 + *var_r0_13;
        if (temp_r0_10 != 0) {
            temp_r4_13 = temp_r0_10 * 0x10;
            var_r0_14 = malloc(temp_r4_13);
            var_r8_6 = temp_r4_13;
            if (var_r0_14 == 0) {
                var_r0_14 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_14 = 0;
            var_r8_6 = 0;
        }
        sp164 = var_r0_14;
        var_r2_11 = temp_r6_6->unk0;
        var_r3_11 = var_r0_14;
        if (var_r2_11 != temp_r1_7) {
            do {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (s32) var_r2_11->unk0;
                    var_r3_11->unk4 = (s32) var_r2_11->unk4;
                    var_r3_11->unk8 = (s32) var_r2_11->unk8;
                    var_r3_11->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_r3_11 += 0x10;
            } while (var_r2_11 != temp_r1_7);
        }
        if (sp64 == 1) {
            if (var_r3_11 != 0) {
                var_r3_11->unk0 = (s32) sp8;
                var_r3_11->unk4 = (s32) sp8.unk4;
                var_r3_11->unk8 = (s32) sp8.unk8;
                var_r3_11->unkC = (s32) sp8.unkC;
            }
            var_r5_6 = (GenObj *)((u8 *)var_r3_11 + 0x10);
        } else {
            var_r3_12 = sp64;
            var_r2_12 = var_r3_11;
            if (var_r3_12 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) sp8;
                        var_r2_12->unk4 = (s32) sp8.unk4;
                        var_r2_12->unk8 = (s32) sp8.unk8;
                        var_r2_12->unkC = (s32) sp8.unkC;
                    }
                    var_r3_12 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_12 != 0);
            }
            var_r5_6 = var_r2_12;
        }
        temp_r2_6 = temp_r6_6->unk4;
        temp_r1_8 = temp_r6_6->unk0;
        var_r0_15 = temp_r1_8;
        if (temp_r1_8 != temp_r2_6) {
            do {
                var_r0_15 += 0x10;
            } while (var_r0_15 != temp_r2_6);
        }
        if (temp_r1_8 != 0) {
            free(temp_r1_8);
        }
        temp_r6_6->unk0 = sp164;
        temp_r6_6->unk4 = var_r5_6;
        temp_r6_6->unkC = (void *) (sp164 + var_r8_6);
    }
    temp_r6_7 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08752DCC, 0x06000E00, 0x20);
    temp_r1_9 = temp_r6_7->unk4;
    if (temp_r1_9 != temp_r6_7->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32) sp8;
            temp_r1_9->unk4 = (s32) sp8.unk4;
            temp_r1_9->unk8 = (s32) sp8.unk8;
            temp_r1_9->unkC = (s32) sp8.unkC;
        }
        temp_r6_7->unk4 = (void *) (temp_r6_7->unk4 + 0x10);
    } else {
        sp6C = 1;
        temp_r4_14 = (s32) (temp_r1_9 - temp_r6_7->unk0) >> 4;
        sp68 = temp_r4_14;
        var_r0_16 = &sp68;
        if ((u32) temp_r4_14 < 1U) {
            var_r0_16 = &sp6C;
        }
        temp_r0_11 = temp_r4_14 + *var_r0_16;
        if (temp_r0_11 != 0) {
            temp_r4_15 = temp_r0_11 * 0x10;
            var_r0_17 = malloc(temp_r4_15);
            var_r8_7 = temp_r4_15;
            if (var_r0_17 == 0) {
                var_r0_17 = func_080D3BC0(var_r8_7);
            }
        } else {
            var_r0_17 = 0;
            var_r8_7 = 0;
        }
        sp164 = var_r0_17;
        var_r2_13 = temp_r6_7->unk0;
        var_r3_13 = var_r0_17;
        if (var_r2_13 != temp_r1_9) {
            do {
                if (var_r3_13 != 0) {
                    var_r3_13->unk0 = (s32) var_r2_13->unk0;
                    var_r3_13->unk4 = (s32) var_r2_13->unk4;
                    var_r3_13->unk8 = (s32) var_r2_13->unk8;
                    var_r3_13->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_13 += 0x10;
            } while (var_r2_13 != temp_r1_9);
        }
        if (sp6C == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32) sp8;
                var_r3_13->unk4 = (s32) sp8.unk4;
                var_r3_13->unk8 = (s32) sp8.unk8;
                var_r3_13->unkC = (s32) sp8.unkC;
            }
            var_r5_7 = (GenObj *)((u8 *)var_r3_13 + 0x10);
        } else {
            var_r3_14 = sp6C;
            var_r2_14 = var_r3_13;
            if (var_r3_14 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32) sp8;
                        var_r2_14->unk4 = (s32) sp8.unk4;
                        var_r2_14->unk8 = (s32) sp8.unk8;
                        var_r2_14->unkC = (s32) sp8.unkC;
                    }
                    var_r3_14 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r3_14 != 0);
            }
            var_r5_7 = var_r2_14;
        }
        temp_r2_7 = temp_r6_7->unk4;
        temp_r1_10 = temp_r6_7->unk0;
        var_r0_18 = temp_r1_10;
        if (temp_r1_10 != temp_r2_7) {
            do {
                var_r0_18 += 0x10;
            } while (var_r0_18 != temp_r2_7);
        }
        if (temp_r1_10 != 0) {
            free(temp_r1_10);
        }
        temp_r6_7->unk0 = sp164;
        temp_r6_7->unk4 = var_r5_7;
        temp_r6_7->unkC = (void *) (sp164 + var_r8_7);
    }
    temp_r6_8 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08752B4C, 0x06000E20, 0x20);
    temp_r1_11 = temp_r6_8->unk4;
    if (temp_r1_11 != temp_r6_8->unkC) {
        if (temp_r1_11 != 0) {
            temp_r1_11->unk0 = (s32) sp8;
            temp_r1_11->unk4 = (s32) sp8.unk4;
            temp_r1_11->unk8 = (s32) sp8.unk8;
            temp_r1_11->unkC = (s32) sp8.unkC;
        }
        temp_r6_8->unk4 = (void *) (temp_r6_8->unk4 + 0x10);
    } else {
        sp74 = 1;
        temp_r4_16 = (s32) (temp_r1_11 - temp_r6_8->unk0) >> 4;
        sp70 = temp_r4_16;
        var_r0_19 = &sp70;
        if ((u32) temp_r4_16 < 1U) {
            var_r0_19 = &sp74;
        }
        temp_r0_12 = temp_r4_16 + *var_r0_19;
        if (temp_r0_12 != 0) {
            temp_r4_17 = temp_r0_12 * 0x10;
            var_r0_20 = malloc(temp_r4_17);
            var_r8_8 = temp_r4_17;
            if (var_r0_20 == 0) {
                var_r0_20 = func_080D3BC0(var_r8_8);
            }
        } else {
            var_r0_20 = 0;
            var_r8_8 = 0;
        }
        sp164 = var_r0_20;
        var_r2_15 = temp_r6_8->unk0;
        var_r3_15 = var_r0_20;
        if (var_r2_15 != temp_r1_11) {
            do {
                if (var_r3_15 != 0) {
                    var_r3_15->unk0 = (s32) var_r2_15->unk0;
                    var_r3_15->unk4 = (s32) var_r2_15->unk4;
                    var_r3_15->unk8 = (s32) var_r2_15->unk8;
                    var_r3_15->unkC = (s32) var_r2_15->unkC;
                }
                var_r2_15 += 0x10;
                var_r3_15 += 0x10;
            } while (var_r2_15 != temp_r1_11);
        }
        if (sp74 == 1) {
            if (var_r3_15 != 0) {
                var_r3_15->unk0 = (s32) sp8;
                var_r3_15->unk4 = (s32) sp8.unk4;
                var_r3_15->unk8 = (s32) sp8.unk8;
                var_r3_15->unkC = (s32) sp8.unkC;
            }
            var_r5_8 = (GenObj *)((u8 *)var_r3_15 + 0x10);
        } else {
            var_r3_16 = sp74;
            var_r2_16 = var_r3_15;
            if (var_r3_16 != 0) {
                do {
                    if (var_r2_16 != 0) {
                        var_r2_16->unk0 = (s32) sp8;
                        var_r2_16->unk4 = (s32) sp8.unk4;
                        var_r2_16->unk8 = (s32) sp8.unk8;
                        var_r2_16->unkC = (s32) sp8.unkC;
                    }
                    var_r3_16 -= 1;
                    var_r2_16 += 0x10;
                } while (var_r3_16 != 0);
            }
            var_r5_8 = var_r2_16;
        }
        temp_r2_8 = temp_r6_8->unk4;
        temp_r1_12 = temp_r6_8->unk0;
        var_r0_21 = temp_r1_12;
        if (temp_r1_12 != temp_r2_8) {
            do {
                var_r0_21 += 0x10;
            } while (var_r0_21 != temp_r2_8);
        }
        if (temp_r1_12 != 0) {
            free(temp_r1_12);
        }
        temp_r6_8->unk0 = sp164;
        temp_r6_8->unk4 = var_r5_8;
        temp_r6_8->unkC = (void *) (sp164 + var_r8_8);
    }
    temp_r6_9 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_087529AC, 0x06000E40, 0x20);
    temp_r1_13 = temp_r6_9->unk4;
    if (temp_r1_13 != temp_r6_9->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32) sp8;
            temp_r1_13->unk4 = (s32) sp8.unk4;
            temp_r1_13->unk8 = (s32) sp8.unk8;
            temp_r1_13->unkC = (s32) sp8.unkC;
        }
        temp_r6_9->unk4 = (void *) (temp_r6_9->unk4 + 0x10);
    } else {
        sp7C = 1;
        temp_r4_18 = (s32) (temp_r1_13 - temp_r6_9->unk0) >> 4;
        sp78 = temp_r4_18;
        var_r0_22 = &sp78;
        if ((u32) temp_r4_18 < 1U) {
            var_r0_22 = &sp7C;
        }
        temp_r0_13 = temp_r4_18 + *var_r0_22;
        if (temp_r0_13 != 0) {
            temp_r4_19 = temp_r0_13 * 0x10;
            var_r0_23 = malloc(temp_r4_19);
            var_r8_9 = temp_r4_19;
            if (var_r0_23 == 0) {
                var_r0_23 = func_080D3BC0(var_r8_9);
            }
        } else {
            var_r0_23 = 0;
            var_r8_9 = 0;
        }
        sp164 = var_r0_23;
        var_r2_17 = temp_r6_9->unk0;
        var_r3_17 = var_r0_23;
        if (var_r2_17 != temp_r1_13) {
            do {
                if (var_r3_17 != 0) {
                    var_r3_17->unk0 = (s32) var_r2_17->unk0;
                    var_r3_17->unk4 = (s32) var_r2_17->unk4;
                    var_r3_17->unk8 = (s32) var_r2_17->unk8;
                    var_r3_17->unkC = (s32) var_r2_17->unkC;
                }
                var_r2_17 += 0x10;
                var_r3_17 += 0x10;
            } while (var_r2_17 != temp_r1_13);
        }
        if (sp7C == 1) {
            if (var_r3_17 != 0) {
                var_r3_17->unk0 = (s32) sp8;
                var_r3_17->unk4 = (s32) sp8.unk4;
                var_r3_17->unk8 = (s32) sp8.unk8;
                var_r3_17->unkC = (s32) sp8.unkC;
            }
            var_r5_9 = (GenObj *)((u8 *)var_r3_17 + 0x10);
        } else {
            var_r3_18 = sp7C;
            var_r2_18 = var_r3_17;
            if (var_r3_18 != 0) {
                do {
                    if (var_r2_18 != 0) {
                        var_r2_18->unk0 = (s32) sp8;
                        var_r2_18->unk4 = (s32) sp8.unk4;
                        var_r2_18->unk8 = (s32) sp8.unk8;
                        var_r2_18->unkC = (s32) sp8.unkC;
                    }
                    var_r3_18 -= 1;
                    var_r2_18 += 0x10;
                } while (var_r3_18 != 0);
            }
            var_r5_9 = var_r2_18;
        }
        temp_r2_9 = temp_r6_9->unk4;
        temp_r1_14 = temp_r6_9->unk0;
        var_r0_24 = temp_r1_14;
        if (temp_r1_14 != temp_r2_9) {
            do {
                var_r0_24 += 0x10;
            } while (var_r0_24 != temp_r2_9);
        }
        if (temp_r1_14 != 0) {
            free(temp_r1_14);
        }
        temp_r6_9->unk0 = sp164;
        temp_r6_9->unk4 = var_r5_9;
        temp_r6_9->unkC = (void *) (sp164 + var_r8_9);
    }
    temp_r6_10 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08752D4C, 0x06000E60, 0x80);
    temp_r1_15 = temp_r6_10->unk4;
    if (temp_r1_15 != temp_r6_10->unkC) {
        if (temp_r1_15 != 0) {
            temp_r1_15->unk0 = (s32) sp8;
            temp_r1_15->unk4 = (s32) sp8.unk4;
            temp_r1_15->unk8 = (s32) sp8.unk8;
            temp_r1_15->unkC = (s32) sp8.unkC;
        }
        temp_r6_10->unk4 = (void *) (temp_r6_10->unk4 + 0x10);
    } else {
        sp84 = 1;
        temp_r4_20 = (s32) (temp_r1_15 - temp_r6_10->unk0) >> 4;
        sp80 = temp_r4_20;
        var_r0_25 = &sp80;
        if ((u32) temp_r4_20 < 1U) {
            var_r0_25 = &sp84;
        }
        temp_r0_14 = temp_r4_20 + *var_r0_25;
        if (temp_r0_14 != 0) {
            temp_r4_21 = temp_r0_14 * 0x10;
            var_r0_26 = malloc(temp_r4_21);
            var_r8_10 = temp_r4_21;
            if (var_r0_26 == 0) {
                var_r0_26 = func_080D3BC0(var_r8_10);
            }
        } else {
            var_r0_26 = 0;
            var_r8_10 = 0;
        }
        sp164 = var_r0_26;
        var_r2_19 = temp_r6_10->unk0;
        var_r3_19 = var_r0_26;
        if (var_r2_19 != temp_r1_15) {
            do {
                if (var_r3_19 != 0) {
                    var_r3_19->unk0 = (s32) var_r2_19->unk0;
                    var_r3_19->unk4 = (s32) var_r2_19->unk4;
                    var_r3_19->unk8 = (s32) var_r2_19->unk8;
                    var_r3_19->unkC = (s32) var_r2_19->unkC;
                }
                var_r2_19 += 0x10;
                var_r3_19 += 0x10;
            } while (var_r2_19 != temp_r1_15);
        }
        if (sp84 == 1) {
            if (var_r3_19 != 0) {
                var_r3_19->unk0 = (s32) sp8;
                var_r3_19->unk4 = (s32) sp8.unk4;
                var_r3_19->unk8 = (s32) sp8.unk8;
                var_r3_19->unkC = (s32) sp8.unkC;
            }
            var_r5_10 = (GenObj *)((u8 *)var_r3_19 + 0x10);
        } else {
            var_r3_20 = sp84;
            var_r2_20 = var_r3_19;
            if (var_r3_20 != 0) {
                do {
                    if (var_r2_20 != 0) {
                        var_r2_20->unk0 = (s32) sp8;
                        var_r2_20->unk4 = (s32) sp8.unk4;
                        var_r2_20->unk8 = (s32) sp8.unk8;
                        var_r2_20->unkC = (s32) sp8.unkC;
                    }
                    var_r3_20 -= 1;
                    var_r2_20 += 0x10;
                } while (var_r3_20 != 0);
            }
            var_r5_10 = var_r2_20;
        }
        temp_r2_10 = temp_r6_10->unk4;
        temp_r1_16 = temp_r6_10->unk0;
        var_r0_27 = temp_r1_16;
        if (temp_r1_16 != temp_r2_10) {
            do {
                var_r0_27 += 0x10;
            } while (var_r0_27 != temp_r2_10);
        }
        if (temp_r1_16 != 0) {
            free(temp_r1_16);
        }
        temp_r6_10->unk0 = sp164;
        temp_r6_10->unk4 = var_r5_10;
        temp_r6_10->unkC = (void *) (sp164 + var_r8_10);
    }
    temp_r6_11 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08752ACC, 0x06000EE0, 0x80);
    temp_r1_17 = temp_r6_11->unk4;
    if (temp_r1_17 != temp_r6_11->unkC) {
        if (temp_r1_17 != 0) {
            temp_r1_17->unk0 = (s32) sp8;
            temp_r1_17->unk4 = (s32) sp8.unk4;
            temp_r1_17->unk8 = (s32) sp8.unk8;
            temp_r1_17->unkC = (s32) sp8.unkC;
        }
        temp_r6_11->unk4 = (void *) (temp_r6_11->unk4 + 0x10);
    } else {
        sp160 = temp_r1_17;
        sp8C = 1;
        temp_r4_22 = (s32) (sp160 - temp_r6_11->unk0) >> 4;
        var_r0_28 = &sp88;
        *var_r0_28 = (u32) temp_r4_22;
        if ((u32) temp_r4_22 < (u32) sp8C) {
            var_r0_28 = &sp8C;
        }
        temp_r0_15 = temp_r4_22 + *var_r0_28;
        if (temp_r0_15 != 0) {
            temp_r4_23 = temp_r0_15 * 0x10;
            var_r0_29 = malloc(temp_r4_23);
            var_r8_11 = temp_r4_23;
            if (var_r0_29 == 0) {
                var_r0_29 = func_080D3BC0(var_r8_11);
            }
        } else {
            var_r0_29 = 0;
            var_r8_11 = 0;
        }
        sp164 = var_r0_29;
        var_r2_21 = temp_r6_11->unk0;
        var_r3_21 = var_r0_29;
        if (var_r2_21 != sp160) {
            do {
                if (var_r3_21 != 0) {
                    var_r3_21->unk0 = (s32) var_r2_21->unk0;
                    var_r3_21->unk4 = (s32) var_r2_21->unk4;
                    var_r3_21->unk8 = (s32) var_r2_21->unk8;
                    var_r3_21->unkC = (s32) var_r2_21->unkC;
                }
                var_r2_21 += 0x10;
                var_r3_21 += 0x10;
            } while (var_r2_21 != sp160);
        }
        temp_r1_18 = sp8C;
        if (temp_r1_18 == 1) {
            if (var_r3_21 != 0) {
                var_r3_21->unk0 = (s32) sp8;
                var_r3_21->unk4 = (s32) sp8.unk4;
                var_r3_21->unk8 = (s32) sp8.unk8;
                var_r3_21->unkC = (s32) sp8.unkC;
            }
            var_r5_11 = (GenObj *)((u8 *)var_r3_21 + 0x10);
        } else {
            var_r3_22 = temp_r1_18;
            var_r2_22 = var_r3_21;
            if (var_r3_22 != 0) {
                do {
                    if (var_r2_22 != 0) {
                        var_r2_22->unk0 = (s32) sp8;
                        var_r2_22->unk4 = (s32) sp8.unk4;
                        var_r2_22->unk8 = (s32) sp8.unk8;
                        var_r2_22->unkC = (s32) sp8.unkC;
                    }
                    var_r3_22 -= 1;
                    var_r2_22 += 0x10;
                } while (var_r3_22 != 0);
            }
            var_r5_11 = var_r2_22;
        }
        temp_r2_11 = temp_r6_11->unk4;
        temp_r0_16 = temp_r6_11->unk0;
        var_r1_5 = temp_r0_16;
        if (temp_r0_16 != temp_r2_11) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_11);
        }
        if (temp_r0_16 != 0) {
            free();
        }
        temp_r6_11->unk0 = sp164;
        temp_r6_11->unk4 = var_r5_11;
        temp_r6_11->unkC = (void *) (sp164 + var_r8_11);
    }
    temp_r6_12 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_0875290C, 0x06000F60, 0x80);
    temp_r1_19 = temp_r6_12->unk4;
    if (temp_r1_19 != temp_r6_12->unkC) {
        if (temp_r1_19 != 0) {
            temp_r1_19->unk0 = (s32) sp8;
            temp_r1_19->unk4 = (s32) sp8.unk4;
            temp_r1_19->unk8 = (s32) sp8.unk8;
            temp_r1_19->unkC = (s32) sp8.unkC;
        }
        temp_r6_12->unk4 = (void *) (temp_r6_12->unk4 + 0x10);
    } else {
        sp160 = temp_r1_19;
        sp94 = 1;
        temp_r4_24 = (s32) (sp160 - temp_r6_12->unk0) >> 4;
        var_r0_30 = &sp90;
        *var_r0_30 = (u32) temp_r4_24;
        if ((u32) temp_r4_24 < (u32) sp94) {
            var_r0_30 = &sp94;
        }
        temp_r0_17 = temp_r4_24 + *var_r0_30;
        if (temp_r0_17 != 0) {
            temp_r4_25 = temp_r0_17 * 0x10;
            var_r0_31 = malloc(temp_r4_25);
            var_r8_12 = temp_r4_25;
            if (var_r0_31 == 0) {
                var_r0_31 = func_080D3BC0(var_r8_12);
            }
        } else {
            var_r0_31 = 0;
            var_r8_12 = 0;
        }
        sp164 = var_r0_31;
        var_r2_23 = temp_r6_12->unk0;
        var_r3_23 = var_r0_31;
        if (var_r2_23 != sp160) {
            do {
                if (var_r3_23 != 0) {
                    var_r3_23->unk0 = (s32) var_r2_23->unk0;
                    var_r3_23->unk4 = (s32) var_r2_23->unk4;
                    var_r3_23->unk8 = (s32) var_r2_23->unk8;
                    var_r3_23->unkC = (s32) var_r2_23->unkC;
                }
                var_r2_23 += 0x10;
                var_r3_23 += 0x10;
            } while (var_r2_23 != sp160);
        }
        temp_r1_20 = sp94;
        if (temp_r1_20 == 1) {
            if (var_r3_23 != 0) {
                var_r3_23->unk0 = (s32) sp8;
                var_r3_23->unk4 = (s32) sp8.unk4;
                var_r3_23->unk8 = (s32) sp8.unk8;
                var_r3_23->unkC = (s32) sp8.unkC;
            }
            var_r5_12 = (GenObj *)((u8 *)var_r3_23 + 0x10);
        } else {
            var_r3_24 = temp_r1_20;
            var_r2_24 = var_r3_23;
            if (var_r3_24 != 0) {
                do {
                    if (var_r2_24 != 0) {
                        var_r2_24->unk0 = (s32) sp8;
                        var_r2_24->unk4 = (s32) sp8.unk4;
                        var_r2_24->unk8 = (s32) sp8.unk8;
                        var_r2_24->unkC = (s32) sp8.unkC;
                    }
                    var_r3_24 -= 1;
                    var_r2_24 += 0x10;
                } while (var_r3_24 != 0);
            }
            var_r5_12 = var_r2_24;
        }
        temp_r2_12 = temp_r6_12->unk4;
        temp_r0_18 = temp_r6_12->unk0;
        var_r1_6 = temp_r0_18;
        if (temp_r0_18 != temp_r2_12) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_12);
        }
        if (temp_r0_18 != 0) {
            free();
        }
        temp_r6_12->unk0 = sp164;
        temp_r6_12->unk4 = var_r5_12;
        temp_r6_12->unkC = (void *) (sp164 + var_r8_12);
    }
    temp_r6_13 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_0875298C, 0x05000040, 0x20);
    temp_r1_21 = temp_r6_13->unk4;
    if (temp_r1_21 != temp_r6_13->unkC) {
        if (temp_r1_21 != 0) {
            temp_r1_21->unk0 = (s32) sp8;
            temp_r1_21->unk4 = (s32) sp8.unk4;
            temp_r1_21->unk8 = (s32) sp8.unk8;
            temp_r1_21->unkC = (s32) sp8.unkC;
        }
        temp_r6_13->unk4 = (void *) (temp_r6_13->unk4 + 0x10);
    } else {
        sp160 = temp_r1_21;
        sp9C = 1;
        temp_r4_26 = (s32) (sp160 - temp_r6_13->unk0) >> 4;
        var_r0_32 = &sp98;
        *var_r0_32 = (u32) temp_r4_26;
        if ((u32) temp_r4_26 < (u32) sp9C) {
            var_r0_32 = &sp9C;
        }
        temp_r0_19 = temp_r4_26 + *var_r0_32;
        if (temp_r0_19 != 0) {
            temp_r4_27 = temp_r0_19 * 0x10;
            var_r0_33 = malloc(temp_r4_27);
            var_r8_13 = temp_r4_27;
            if (var_r0_33 == 0) {
                var_r0_33 = func_080D3BC0(var_r8_13);
            }
        } else {
            var_r0_33 = 0;
            var_r8_13 = 0;
        }
        sp164 = var_r0_33;
        var_r2_25 = temp_r6_13->unk0;
        var_r3_25 = var_r0_33;
loop_358:
        if (var_r2_25 != sp160) {
            if (var_r3_25 != 0) {
                var_r3_25->unk0 = (s32) var_r2_25->unk0;
                var_r3_25->unk4 = (s32) var_r2_25->unk4;
                var_r3_25->unk8 = (s32) var_r2_25->unk8;
                var_r3_25->unkC = (s32) var_r2_25->unkC;
            }
            var_r2_25 += 0x10;
            var_r3_25 += 0x10;
            goto loop_358;
        }
        temp_r1_22 = sp9C;
        if (temp_r1_22 == 1) {
            if (var_r3_25 != 0) {
                var_r3_25->unk0 = (s32) sp8;
                var_r3_25->unk4 = (s32) sp8.unk4;
                var_r3_25->unk8 = (s32) sp8.unk8;
                var_r3_25->unkC = (s32) sp8.unkC;
            }
            var_r5_13 = (GenObj *)((u8 *)var_r3_25 + 0x10);
        } else {
            var_r3_26 = temp_r1_22;
            var_r2_26 = var_r3_25;
            if (var_r3_26 != 0) {
                do {
                    if (var_r2_26 != 0) {
                        var_r2_26->unk0 = (s32) sp8;
                        var_r2_26->unk4 = (s32) sp8.unk4;
                        var_r2_26->unk8 = (s32) sp8.unk8;
                        var_r2_26->unkC = (s32) sp8.unkC;
                    }
                    var_r3_26 -= 1;
                    var_r2_26 += 0x10;
                } while (var_r3_26 != 0);
            }
            var_r5_13 = var_r2_26;
        }
        temp_r2_13 = temp_r6_13->unk4;
        temp_r0_20 = temp_r6_13->unk0;
        var_r1_7 = temp_r0_20;
        if (temp_r0_20 != temp_r2_13) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_13);
        }
        if (temp_r0_20 != 0) {
            free();
        }
        temp_r6_13->unk0 = sp164;
        temp_r6_13->unk4 = var_r5_13;
        temp_r6_13->unkC = (void *) (sp164 + var_r8_13);
    }
    temp_r6_14 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_087517AC, 0x06001380, 0x120);
    temp_r1_23 = temp_r6_14->unk4;
    if (temp_r1_23 != temp_r6_14->unkC) {
        if (temp_r1_23 != 0) {
            temp_r1_23->unk0 = (s32) sp8;
            temp_r1_23->unk4 = (s32) sp8.unk4;
            temp_r1_23->unk8 = (s32) sp8.unk8;
            temp_r1_23->unkC = (s32) sp8.unkC;
        }
        temp_r6_14->unk4 = (void *) (temp_r6_14->unk4 + 0x10);
    } else {
        sp160 = temp_r1_23;
        spA4 = 1;
        temp_r4_28 = (s32) (sp160 - temp_r6_14->unk0) >> 4;
        var_r0_34 = &spA0;
        *var_r0_34 = (u32) temp_r4_28;
        if ((u32) temp_r4_28 < (u32) spA4) {
            var_r0_34 = &spA4;
        }
        temp_r0_21 = temp_r4_28 + *var_r0_34;
        if (temp_r0_21 != 0) {
            temp_r4_29 = temp_r0_21 * 0x10;
            var_r0_35 = malloc(temp_r4_29);
            var_r8_14 = temp_r4_29;
            if (var_r0_35 == 0) {
                var_r0_35 = func_080D3BC0(var_r8_14);
            }
        } else {
            var_r0_35 = 0;
            var_r8_14 = 0;
        }
        sp164 = var_r0_35;
        var_r2_27 = temp_r6_14->unk0;
        var_r3_27 = var_r0_35;
        if (var_r2_27 != sp160) {
            do {
                if (var_r3_27 != 0) {
                    var_r3_27->unk0 = (s32) var_r2_27->unk0;
                    var_r3_27->unk4 = (s32) var_r2_27->unk4;
                    var_r3_27->unk8 = (s32) var_r2_27->unk8;
                    var_r3_27->unkC = (s32) var_r2_27->unkC;
                }
                var_r2_27 += 0x10;
                var_r3_27 += 0x10;
            } while (var_r2_27 != sp160);
        }
        temp_r1_24 = spA4;
        if (temp_r1_24 == 1) {
            if (var_r3_27 != 0) {
                var_r3_27->unk0 = (s32) sp8;
                var_r3_27->unk4 = (s32) sp8.unk4;
                var_r3_27->unk8 = (s32) sp8.unk8;
                var_r3_27->unkC = (s32) sp8.unkC;
            }
            var_r5_14 = (GenObj *)((u8 *)var_r3_27 + 0x10);
        } else {
            var_r3_28 = temp_r1_24;
            var_r2_28 = var_r3_27;
            if (var_r3_28 != 0) {
                do {
                    if (var_r2_28 != 0) {
                        var_r2_28->unk0 = (s32) sp8;
                        var_r2_28->unk4 = (s32) sp8.unk4;
                        var_r2_28->unk8 = (s32) sp8.unk8;
                        var_r2_28->unkC = (s32) sp8.unkC;
                    }
                    var_r3_28 -= 1;
                    var_r2_28 += 0x10;
                } while (var_r3_28 != 0);
            }
            var_r5_14 = var_r2_28;
        }
        temp_r2_14 = temp_r6_14->unk4;
        temp_r0_22 = temp_r6_14->unk0;
        var_r1_8 = temp_r0_22;
        if (temp_r0_22 != temp_r2_14) {
            do {
                var_r1_8 += 0x10;
            } while (var_r1_8 != temp_r2_14);
        }
        if (temp_r0_22 != 0) {
            free();
        }
        temp_r6_14->unk0 = sp164;
        temp_r6_14->unk4 = var_r5_14;
        temp_r6_14->unkC = (void *) (sp164 + var_r8_14);
    }
    temp_r6_15 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08750F8C, 0x060014A0, 0x120);
    temp_r1_25 = temp_r6_15->unk4;
    if (temp_r1_25 != temp_r6_15->unkC) {
        if (temp_r1_25 != 0) {
            temp_r1_25->unk0 = (s32) sp8;
            temp_r1_25->unk4 = (s32) sp8.unk4;
            temp_r1_25->unk8 = (s32) sp8.unk8;
            temp_r1_25->unkC = (s32) sp8.unkC;
        }
        temp_r6_15->unk4 = (void *) (temp_r6_15->unk4 + 0x10);
    } else {
        sp160 = temp_r1_25;
        spAC = 1;
        temp_r4_30 = (s32) (sp160 - temp_r6_15->unk0) >> 4;
        var_r0_36 = &spA8;
        *var_r0_36 = (u32) temp_r4_30;
        if ((u32) temp_r4_30 < (u32) spAC) {
            var_r0_36 = &spAC;
        }
        temp_r0_23 = temp_r4_30 + *var_r0_36;
        if (temp_r0_23 != 0) {
            temp_r4_31 = temp_r0_23 * 0x10;
            var_r0_37 = malloc(temp_r4_31);
            var_r8_15 = temp_r4_31;
            if (var_r0_37 == 0) {
                var_r0_37 = func_080D3BC0(var_r8_15);
            }
        } else {
            var_r0_37 = 0;
            var_r8_15 = 0;
        }
        sp164 = var_r0_37;
        var_r2_29 = temp_r6_15->unk0;
        var_r3_29 = var_r0_37;
        if (var_r2_29 != sp160) {
            do {
                if (var_r3_29 != 0) {
                    var_r3_29->unk0 = (s32) var_r2_29->unk0;
                    var_r3_29->unk4 = (s32) var_r2_29->unk4;
                    var_r3_29->unk8 = (s32) var_r2_29->unk8;
                    var_r3_29->unkC = (s32) var_r2_29->unkC;
                }
                var_r2_29 += 0x10;
                var_r3_29 += 0x10;
            } while (var_r2_29 != sp160);
        }
        temp_r1_26 = spAC;
        if (temp_r1_26 == 1) {
            if (var_r3_29 != 0) {
                var_r3_29->unk0 = (s32) sp8;
                var_r3_29->unk4 = (s32) sp8.unk4;
                var_r3_29->unk8 = (s32) sp8.unk8;
                var_r3_29->unkC = (s32) sp8.unkC;
            }
            var_r5_15 = (GenObj *)((u8 *)var_r3_29 + 0x10);
        } else {
            var_r3_30 = temp_r1_26;
            var_r2_30 = var_r3_29;
            if (var_r3_30 != 0) {
                do {
                    if (var_r2_30 != 0) {
                        var_r2_30->unk0 = (s32) sp8;
                        var_r2_30->unk4 = (s32) sp8.unk4;
                        var_r2_30->unk8 = (s32) sp8.unk8;
                        var_r2_30->unkC = (s32) sp8.unkC;
                    }
                    var_r3_30 -= 1;
                    var_r2_30 += 0x10;
                } while (var_r3_30 != 0);
            }
            var_r5_15 = var_r2_30;
        }
        temp_r2_15 = temp_r6_15->unk4;
        temp_r0_24 = temp_r6_15->unk0;
        var_r1_9 = temp_r0_24;
        if (temp_r0_24 != temp_r2_15) {
            do {
                var_r1_9 += 0x10;
            } while (var_r1_9 != temp_r2_15);
        }
        if (temp_r0_24 != 0) {
            free();
        }
        temp_r6_15->unk0 = sp164;
        temp_r6_15->unk4 = var_r5_15;
        temp_r6_15->unkC = (void *) (sp164 + var_r8_15);
    }
    temp_r6_16 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08750E4C, 0x060015C0, 0x120);
    temp_r1_27 = temp_r6_16->unk4;
    if (temp_r1_27 != temp_r6_16->unkC) {
        if (temp_r1_27 != 0) {
            temp_r1_27->unk0 = (s32) sp8;
            temp_r1_27->unk4 = (s32) sp8.unk4;
            temp_r1_27->unk8 = (s32) sp8.unk8;
            temp_r1_27->unkC = (s32) sp8.unkC;
        }
        temp_r6_16->unk4 = (void *) (temp_r6_16->unk4 + 0x10);
    } else {
        sp160 = temp_r1_27;
        spB4 = 1;
        temp_r4_32 = (s32) (sp160 - temp_r6_16->unk0) >> 4;
        var_r0_38 = &spB0;
        *var_r0_38 = (u32) temp_r4_32;
        if ((u32) temp_r4_32 < (u32) spB4) {
            var_r0_38 = &spB4;
        }
        temp_r0_25 = temp_r4_32 + *var_r0_38;
        if (temp_r0_25 != 0) {
            temp_r4_33 = temp_r0_25 * 0x10;
            var_r0_39 = malloc(temp_r4_33);
            var_r8_16 = temp_r4_33;
            if (var_r0_39 == 0) {
                var_r0_39 = func_080D3BC0(var_r8_16);
            }
        } else {
            var_r0_39 = 0;
            var_r8_16 = 0;
        }
        sp164 = var_r0_39;
        var_r2_31 = temp_r6_16->unk0;
        var_r3_31 = var_r0_39;
        if (var_r2_31 != sp160) {
            do {
                if (var_r3_31 != 0) {
                    var_r3_31->unk0 = (s32) var_r2_31->unk0;
                    var_r3_31->unk4 = (s32) var_r2_31->unk4;
                    var_r3_31->unk8 = (s32) var_r2_31->unk8;
                    var_r3_31->unkC = (s32) var_r2_31->unkC;
                }
                var_r2_31 += 0x10;
                var_r3_31 += 0x10;
            } while (var_r2_31 != sp160);
        }
        temp_r1_28 = spB4;
        if (temp_r1_28 == 1) {
            if (var_r3_31 != 0) {
                var_r3_31->unk0 = (s32) sp8;
                var_r3_31->unk4 = (s32) sp8.unk4;
                var_r3_31->unk8 = (s32) sp8.unk8;
                var_r3_31->unkC = (s32) sp8.unkC;
            }
            var_r5_16 = (GenObj *)((u8 *)var_r3_31 + 0x10);
        } else {
            var_r3_32 = temp_r1_28;
            var_r2_32 = var_r3_31;
            if (var_r3_32 != 0) {
                do {
                    if (var_r2_32 != 0) {
                        var_r2_32->unk0 = (s32) sp8;
                        var_r2_32->unk4 = (s32) sp8.unk4;
                        var_r2_32->unk8 = (s32) sp8.unk8;
                        var_r2_32->unkC = (s32) sp8.unkC;
                    }
                    var_r3_32 -= 1;
                    var_r2_32 += 0x10;
                } while (var_r3_32 != 0);
            }
            var_r5_16 = var_r2_32;
        }
        temp_r2_16 = temp_r6_16->unk4;
        temp_r0_26 = temp_r6_16->unk0;
        var_r1_10 = temp_r0_26;
        if (temp_r0_26 != temp_r2_16) {
            do {
                var_r1_10 += 0x10;
            } while (var_r1_10 != temp_r2_16);
        }
        if (temp_r0_26 != 0) {
            free();
        }
        temp_r6_16->unk0 = sp164;
        temp_r6_16->unk4 = var_r5_16;
        temp_r6_16->unkC = (void *) (sp164 + var_r8_16);
    }
    temp_r6_17 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08750F6C, 0x05000060, 0x20);
    temp_r1_29 = temp_r6_17->unk4;
    if (temp_r1_29 != temp_r6_17->unkC) {
        if (temp_r1_29 != 0) {
            temp_r1_29->unk0 = (s32) sp8;
            temp_r1_29->unk4 = (s32) sp8.unk4;
            temp_r1_29->unk8 = (s32) sp8.unk8;
            temp_r1_29->unkC = (s32) sp8.unkC;
        }
        temp_r6_17->unk4 = (void *) (temp_r6_17->unk4 + 0x10);
    } else {
        sp160 = temp_r1_29;
        spBC = 1;
        temp_r4_34 = (s32) (sp160 - temp_r6_17->unk0) >> 4;
        var_r0_40 = &spB8;
        *var_r0_40 = (u32) temp_r4_34;
        if ((u32) temp_r4_34 < (u32) spBC) {
            var_r0_40 = &spBC;
        }
        temp_r0_27 = temp_r4_34 + *var_r0_40;
        if (temp_r0_27 != 0) {
            temp_r4_35 = temp_r0_27 * 0x10;
            var_r0_41 = malloc(temp_r4_35);
            var_r8_17 = temp_r4_35;
            if (var_r0_41 == 0) {
                var_r0_41 = func_080D3BC0(var_r8_17);
            }
        } else {
            var_r0_41 = 0;
            var_r8_17 = 0;
        }
        sp164 = var_r0_41;
        var_r2_33 = temp_r6_17->unk0;
        var_r3_33 = var_r0_41;
loop_471:
        if (var_r2_33 != sp160) {
            if (var_r3_33 != 0) {
                var_r3_33->unk0 = (s32) var_r2_33->unk0;
                var_r3_33->unk4 = (s32) var_r2_33->unk4;
                var_r3_33->unk8 = (s32) var_r2_33->unk8;
                var_r3_33->unkC = (s32) var_r2_33->unkC;
            }
            var_r2_33 += 0x10;
            var_r3_33 += 0x10;
            goto loop_471;
        }
        temp_r1_30 = spBC;
        if (temp_r1_30 == 1) {
            if (var_r3_33 != 0) {
                var_r3_33->unk0 = (s32) sp8;
                var_r3_33->unk4 = (s32) sp8.unk4;
                var_r3_33->unk8 = (s32) sp8.unk8;
                var_r3_33->unkC = (s32) sp8.unkC;
            }
            var_r5_17 = (GenObj *)((u8 *)var_r3_33 + 0x10);
        } else {
            var_r3_34 = temp_r1_30;
            var_r2_34 = var_r3_33;
            if (var_r3_34 != 0) {
                do {
                    if (var_r2_34 != 0) {
                        var_r2_34->unk0 = (s32) sp8;
                        var_r2_34->unk4 = (s32) sp8.unk4;
                        var_r2_34->unk8 = (s32) sp8.unk8;
                        var_r2_34->unkC = (s32) sp8.unkC;
                    }
                    var_r3_34 -= 1;
                    var_r2_34 += 0x10;
                } while (var_r3_34 != 0);
            }
            var_r5_17 = var_r2_34;
        }
        temp_r2_17 = temp_r6_17->unk4;
        temp_r0_28 = temp_r6_17->unk0;
        var_r1_11 = temp_r0_28;
        if (temp_r0_28 != temp_r2_17) {
            do {
                var_r1_11 += 0x10;
            } while (var_r1_11 != temp_r2_17);
        }
        if (temp_r0_28 != 0) {
            free();
        }
        temp_r6_17->unk0 = sp164;
        temp_r6_17->unk4 = var_r5_17;
        temp_r6_17->unkC = (void *) (sp164 + var_r8_17);
    }
    temp_r6_18 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08750C4C, 0x060100A0, 0x20);
    temp_r1_31 = temp_r6_18->unk4;
    if (temp_r1_31 != temp_r6_18->unkC) {
        if (temp_r1_31 != 0) {
            temp_r1_31->unk0 = (s32) sp8;
            temp_r1_31->unk4 = (s32) sp8.unk4;
            temp_r1_31->unk8 = (s32) sp8.unk8;
            temp_r1_31->unkC = (s32) sp8.unkC;
        }
        temp_r6_18->unk4 = (void *) (temp_r6_18->unk4 + 0x10);
    } else {
        sp160 = temp_r1_31;
        spC4 = 1;
        temp_r4_36 = (s32) (sp160 - temp_r6_18->unk0) >> 4;
        var_r0_42 = &spC0;
        *var_r0_42 = (u32) temp_r4_36;
        if ((u32) temp_r4_36 < (u32) spC4) {
            var_r0_42 = &spC4;
        }
        temp_r0_29 = temp_r4_36 + *var_r0_42;
        if (temp_r0_29 != 0) {
            temp_r4_37 = temp_r0_29 * 0x10;
            var_r0_43 = malloc(temp_r4_37);
            var_r8_18 = temp_r4_37;
            if (var_r0_43 == 0) {
                var_r0_43 = func_080D3BC0(var_r8_18);
            }
        } else {
            var_r0_43 = 0;
            var_r8_18 = 0;
        }
        sp164 = var_r0_43;
        var_r2_35 = temp_r6_18->unk0;
        var_r3_35 = var_r0_43;
        if (var_r2_35 != sp160) {
            do {
                if (var_r3_35 != 0) {
                    var_r3_35->unk0 = (s32) var_r2_35->unk0;
                    var_r3_35->unk4 = (s32) var_r2_35->unk4;
                    var_r3_35->unk8 = (s32) var_r2_35->unk8;
                    var_r3_35->unkC = (s32) var_r2_35->unkC;
                }
                var_r2_35 += 0x10;
                var_r3_35 += 0x10;
            } while (var_r2_35 != sp160);
        }
        temp_r1_32 = spC4;
        if (temp_r1_32 == 1) {
            if (var_r3_35 != 0) {
                var_r3_35->unk0 = (s32) sp8;
                var_r3_35->unk4 = (s32) sp8.unk4;
                var_r3_35->unk8 = (s32) sp8.unk8;
                var_r3_35->unkC = (s32) sp8.unkC;
            }
            var_r5_18 = (GenObj *)((u8 *)var_r3_35 + 0x10);
        } else {
            var_r3_36 = temp_r1_32;
            var_r2_36 = var_r3_35;
            if (var_r3_36 != 0) {
                do {
                    if (var_r2_36 != 0) {
                        var_r2_36->unk0 = (s32) sp8;
                        var_r2_36->unk4 = (s32) sp8.unk4;
                        var_r2_36->unk8 = (s32) sp8.unk8;
                        var_r2_36->unkC = (s32) sp8.unkC;
                    }
                    var_r3_36 -= 1;
                    var_r2_36 += 0x10;
                } while (var_r3_36 != 0);
            }
            var_r5_18 = var_r2_36;
        }
        temp_r2_18 = temp_r6_18->unk4;
        temp_r0_30 = temp_r6_18->unk0;
        var_r1_12 = temp_r0_30;
        if (temp_r0_30 != temp_r2_18) {
            do {
                var_r1_12 += 0x10;
            } while (var_r1_12 != temp_r2_18);
        }
        if (temp_r0_30 != 0) {
            free();
        }
        temp_r6_18->unk0 = sp164;
        temp_r6_18->unk4 = var_r5_18;
        temp_r6_18->unkC = (void *) (sp164 + var_r8_18);
    }
    temp_r6_19 = func_08008910(spF0->unk0);
    func_08008F0C(&sp8, &gUnk_08750C6C, 0x05000220, 0x20);
    temp_r1_33 = temp_r6_19->unk4;
    if (temp_r1_33 != temp_r6_19->unkC) {
        if (temp_r1_33 != 0) {
            temp_r1_33->unk0 = (s32) sp8;
            temp_r1_33->unk4 = (s32) sp8.unk4;
            temp_r1_33->unk8 = (s32) sp8.unk8;
            temp_r1_33->unkC = (s32) sp8.unkC;
        }
        temp_r6_19->unk4 = (void *) (temp_r6_19->unk4 + 0x10);
    } else {
        sp160 = temp_r1_33;
        spCC = 1;
        temp_r4_38 = (s32) (sp160 - temp_r6_19->unk0) >> 4;
        var_r0_44 = &spC8;
        *var_r0_44 = (u32) temp_r4_38;
        if ((u32) temp_r4_38 < (u32) spCC) {
            var_r0_44 = &spCC;
        }
        temp_r0_31 = temp_r4_38 + *var_r0_44;
        if (temp_r0_31 != 0) {
            temp_r4_39 = temp_r0_31 * 0x10;
            var_r0_45 = malloc(temp_r4_39);
            var_r8_19 = temp_r4_39;
            if (var_r0_45 == 0) {
                var_r0_45 = func_080D3BC0(var_r8_19);
            }
        } else {
            var_r0_45 = 0;
            var_r8_19 = 0;
        }
        sp164 = var_r0_45;
        var_r2_37 = temp_r6_19->unk0;
        var_r3_37 = var_r0_45;
loop_528:
        if (var_r2_37 != sp160) {
            if (var_r3_37 != 0) {
                var_r3_37->unk0 = (s32) var_r2_37->unk0;
                var_r3_37->unk4 = (s32) var_r2_37->unk4;
                var_r3_37->unk8 = (s32) var_r2_37->unk8;
                var_r3_37->unkC = (s32) var_r2_37->unkC;
            }
            var_r2_37 += 0x10;
            var_r3_37 += 0x10;
            goto loop_528;
        }
        temp_r1_34 = spCC;
        if (temp_r1_34 == 1) {
            if (var_r3_37 != 0) {
                var_r3_37->unk0 = (s32) sp8;
                var_r3_37->unk4 = (s32) sp8.unk4;
                var_r3_37->unk8 = (s32) sp8.unk8;
                var_r3_37->unkC = (s32) sp8.unkC;
            }
            var_r5_19 = (GenObj *)((u8 *)var_r3_37 + 0x10);
        } else {
            var_r3_38 = temp_r1_34;
            var_r2_38 = var_r3_37;
            if (var_r3_38 != 0) {
                do {
                    if (var_r2_38 != 0) {
                        var_r2_38->unk0 = (s32) sp8;
                        var_r2_38->unk4 = (s32) sp8.unk4;
                        var_r2_38->unk8 = (s32) sp8.unk8;
                        var_r2_38->unkC = (s32) sp8.unkC;
                    }
                    var_r3_38 -= 1;
                    var_r2_38 += 0x10;
                } while (var_r3_38 != 0);
            }
            var_r5_19 = var_r2_38;
        }
        temp_r2_19 = temp_r6_19->unk4;
        temp_r0_32 = temp_r6_19->unk0;
        var_r1_13 = temp_r0_32;
        if (temp_r0_32 != temp_r2_19) {
            do {
                var_r1_13 += 0x10;
            } while (var_r1_13 != temp_r2_19);
        }
        if (temp_r0_32 != 0) {
            free();
        }
        temp_r6_19->unk0 = sp164;
        temp_r6_19->unk4 = var_r5_19;
        temp_r6_19->unkC = (void *) (sp164 + var_r8_19);
    }
    spF8 = 0;
}
