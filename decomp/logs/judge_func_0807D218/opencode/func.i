# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807D218/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807D218/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807D218/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807D218/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0807D218/opencode/func.c" 2
u32 AddAmountOfTool__8RucksackUiUi(void *, s32);
s32 AddAmountOf__9ToolChestUiUi(void *, s32);
s32 AddAmount__9ToolStackUi(void *, u32);
s32 GetAmountOfTool__C8RucksackUi(void *, s32);
s32 GetAmountOf__C9ToolChestUi(void *, s32);
u32 GetAmountShipped__C11ShippingBini(s32, s32);
s32 GetAmount__C9ToolStack(void *);
s32 GetAvailableSpaceForTool__C8RucksackUi(void *, s32);
s32 GetAvailableSpaceFor__C9ToolChestUi(void *, s32);
u16 GetIconId__C4Tool(s32 *);
s32 GetId__C4Tool();
s32 **GetName__C4Tool(s32 *);
s8 GetTool__C9ToolStack(void *);
s32 IsDisplayEnabled__C11ShippingBini(s32, s32);
s32 IsEmpty__C9ToolStack(void *);
s32 __4ToolUi(s32 *, s32);
s32 __9ToolStackG4ToolUi(s32 **, u8, u32);
s32 *__builtin_new(s32);
s32 func_08008724();
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088CC(void *);
void *func_08008918(void *);
void *func_08008940(void *);
s32 func_08009300(s32 *, void *);
s32 func_0800934C(s32 *, s32, s32, s32);
s32 func_08009378(s32 *, s32, s32, s32);
s32 func_0804E9F4(s32, s32, s32, s32);
s32 func_0804EC84(s32, s32 **, s32);
s32 func_0804EDB4(u32, s32, s32, s32);
s32 func_08050E50(void *, s32);
s32 func_08050E5C(void *);
s32 func_0805E6CC(s32 **, s32 *);
s32 func_0805E824(void ***, s32 **, s32, s32);
s32 func_0805E860(void ***, u16);
s32 func_08075C88(void *, s16);
s32 func_08075E24(void *, s16);
s32 func_0807D1DC(void *, s32);
s32 func_0809ACC0(void *, s32);
s32 func_080C8550(void *);
s32 func_080C85A0(void *);
s32 func_080C9020(void *, u32);
s32 func_080C96C4(void *);
s32 func_080CA8B4(void *, u32, s32, s32);
s32 func_080CA98C(void *);
s32 func_080CAAF4(void *);
s32 func_080CABA0(void *, s32 *);
s32 func_080CABEC(void *, void *);
s32 memcpy(s32 **, s32 **, u32);
u32 strlen(s32 **);
extern s32 gUnk_080FDDD8;
extern s32 gUnk_080FDE40;
extern s32 *gUnk_080FDE70;
extern s32 gUnk_080FDE78;
extern s32 gUnk_080FDEAC;
extern s32 gUnk_080FDEC4;
extern s32 gUnk_080FDEDC;
extern s32 gUnk_080FDEF8;
extern s32 gUnk_080FDF50;
extern s32 **gUnk_08117814;
extern s32 **gUnk_08117828;
extern s32 gUnk_086678A0;
extern s32 vtable_unk_080E5A28;
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    struct GenObj *unk11;
    s32 unk14;
    s32 unk18;
    void *unk1C;
    s32 unk20;
    u8 _pad24[44];
    s32 unk50;
    u8 _pad54[121];
    s32 unkCD;
    s32 unkCF;
    u8 _padD3[465];
    s32 unk2A4;
    u8 _pad2A8[168];
    s32 unk350;
    u8 _pad354[845];
    s32 unk6A1;
    s32 unk6A4;
    u8 _pad6A8[96];
    s32 unk708;
    s32 unk70C;
    u8 _pad710[5016];
    s32 unk1AA8;
} GenObj;
void func_0807D218(GenObj *arg0) {
    GenObj *sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
    s32 sp10;
    s32 *sp14;
    s32 *sp18;
s32 sp48;
    void **sp4C;
s32 sp60;
    s8 sp7C;
    GenObj *sp80;
    s32 sp88;
    s32 *sp90;
s32 sp98;
s32 spA0;
    s32 *spA4;
s32 spC0;
s32 spC4;
    s8 spCC;
    s8 spD0;
    u32 *spD4;
    void *spD8;
    s32 spDC;
    u32 spE0;
    s32 **spE4;
    s32 *temp_r5_3;
    s32 *var_r1_4;
    s32 **temp_r1_4;
    s32 **temp_r1_5;
    s32 **temp_r3_2;
    s32 **temp_r3_3;
    s32 **temp_r4_5;
    s32 **temp_r5_4;
    s32 **temp_r5_6;
    s32 **temp_r6_5;
    s32 **temp_r8_2;
    s32 **temp_sb;
    s32 **temp_sb_2;
    s32 *temp_r0_12;
    s32 *temp_r2_10;
    s32 *temp_r2_11;
    s32 *temp_r2_12;
    s32 *temp_r2_13;
    s32 *temp_r2_2;
    s32 *temp_r2_3;
    s32 *temp_r2_4;
    s32 *temp_r2_5;
    s32 *temp_r2_6;
    s32 *temp_r2_7;
    s32 *temp_r2_8;
    s32 *temp_r2_9;
    GenObj *temp_r3;
    GenObj *temp_r4_3;
    s32 *temp_r5;
    s32 *var_r1;
    s32 *var_r1_3;
    s32 *var_r5_4;
    s32 temp_r1_3;
    s32 temp_r1_7;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_r5_2;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r5_3;
    s32 var_r5_5;
    s32 var_r6_2;
    s32 var_sl;
    s32 var_sl_2;
    u32 *temp_r0_8;
    u32 *var_r1_2;
    u32 temp_r0_10;
    u32 temp_r0_11;
    u32 temp_r0_13;
    u32 temp_r0_14;
    u32 temp_r0_15;
    u32 temp_r0_16;
    u32 temp_r0_19;
    u32 temp_r0_23;
    u32 temp_r0_25;
    u32 temp_r0_26;
    u32 temp_r0_27;
    u32 temp_r0_28;
    u32 temp_r0_29;
    u32 temp_r0_2;
    u32 temp_r0_31;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_9;
    u32 temp_r2;
    u32 temp_r4_6;
    u32 temp_r4_7;
    u32 temp_r5_5;
    u32 temp_r6;
    u32 temp_r6_2;
    u32 temp_r6_3;
    u32 temp_r6_4;
    u32 var_r4;
    u32 var_r5_6;
    u32 var_r5_7;
    u32 var_r5_8;
    u32 var_r5_9;
    u32 var_r6;
    u32 var_r8;
    GenObj *temp_r0;
    void *temp_r0_17;
    GenObj *temp_r0_18;
    void *temp_r0_20;
    GenObj *temp_r0_21;
    GenObj *temp_r0_22;
    void *temp_r0_24;
    void *temp_r0_30;
    GenObj *temp_r0_32;
    void *temp_r1;
    void *temp_r1_2;
    GenObj *temp_r1_6;

    func_08008724();
    func_080C85A0(arg0);
    temp_r0 = arg0->unk8;
    temp_r4 = (GenObj *)((u8 *)temp_r0 + 0x54);
    temp_r2 = (u32) (temp_r0->unk11 << 0x1E) >> 0x1E;
    switch (temp_r2) {
    case 2:
        temp_r0_2 = arg0->unk2A4;
        if (temp_r0_2 <= 0x27U) {
            temp_r2_2 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_2 * 4) + 4);
            if (temp_r2_2 != 0) {
                *temp_r2_2 = 8;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_3 = arg0->unk2A4;
        if (temp_r0_3 <= 0x27U) {
            temp_r2_3 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_3 * 4) + 4);
            if (temp_r2_3 != 0) {
                *temp_r2_3 = 9;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_4 = arg0->unk2A4;
        if (temp_r0_4 <= 0x27U) {
            temp_r2_4 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_4 * 4) + 4);
            if (temp_r2_4 != 0) {
                *temp_r2_4 = 0xA;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        var_r5 = 0;
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 0xA) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 0xA) > 0x63U)) {
            var_r5 = 1;
        }
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 0xB) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 0xB) > 0x63U)) {
            var_r5 += 1;
        }
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 0xC) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 0xC) > 0x63U)) {
            var_r5 += 1;
        }
        if (var_r5 == 3) {
            var_r1 = (GenObj *)((u8 *)arg0 + 0x2A4);
            temp_r0_5 = arg0->unk2A4;
            if (temp_r0_5 <= 0x27U) {
                temp_r2_5 = var_r1 + ((temp_r0_5 * 4) + 4);
                if (temp_r2_5 != 0) {
                    *temp_r2_5 = 0xB;
                }
block_87:
                *var_r1 += 1;
            }
        }
block_88:
        var_r1_2 = (GenObj *)((u8 *)arg0 + 0x2A4);
block_89:
        temp_r0_6 = *var_r1_2;
        if (temp_r0_6 <= 0x27U) {
            temp_r2_6 = var_r1_2 + ((temp_r0_6 * 4) + 4);
            if (temp_r2_6 != 0) {
                *temp_r2_6 = 0xC;
            }
            *var_r1_2 += 1;
        }
        break;
    case 0:
        temp_r0_7 = arg0->unk2A4;
        if (temp_r0_7 <= 0x27U) {
            temp_r0_8 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_7 * 4) + 4);
            if (temp_r0_8 != 0) {
                *temp_r0_8 = temp_r2;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_9 = arg0->unk2A4;
        if (temp_r0_9 <= 0x27U) {
            temp_r2_7 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_9 * 4) + 4);
            if (temp_r2_7 != 0) {
                *temp_r2_7 = 1;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_10 = arg0->unk2A4;
        if (temp_r0_10 <= 0x27U) {
            temp_r2_8 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_10 * 4) + 4);
            if (temp_r2_8 != 0) {
                *temp_r2_8 = 2;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        var_r5_2 = 0;
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 0) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 0) > 0x63U)) {
            var_r5_2 = 1;
        }
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 1) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 1) > 0x63U)) {
            var_r5_2 += 1;
        }
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 2) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 2) > 0x63U)) {
            var_r5_2 += 1;
        }
        if (var_r5_2 != 3) {

        } else {
            var_r1 = (GenObj *)((u8 *)arg0 + 0x2A4);
            temp_r0_11 = arg0->unk2A4;
            if (temp_r0_11 > 0x27U) {

            } else {
                temp_r0_12 = var_r1 + ((temp_r0_11 * 4) + 4);
                if (temp_r0_12 == 0) {

                } else {
                    *temp_r0_12 = var_r5_2;
                }
                goto block_87;
            }
        }
        goto block_88;
    case 1:
        temp_r0_13 = arg0->unk2A4;
        if (temp_r0_13 <= 0x27U) {
            temp_r2_9 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_13 * 4) + 4);
            if (temp_r2_9 != 0) {
                *temp_r2_9 = 4;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_14 = arg0->unk2A4;
        if (temp_r0_14 <= 0x27U) {
            temp_r2_10 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_14 * 4) + 4);
            if (temp_r2_10 != 0) {
                *temp_r2_10 = 5;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        temp_r0_15 = arg0->unk2A4;
        if (temp_r0_15 <= 0x27U) {
            temp_r2_11 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_15 * 4) + 4);
            if (temp_r2_11 != 0) {
                *temp_r2_11 = 6;
            }
            arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
        }
        var_r5_3 = 0;
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 5) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 5) > 0x63U)) {
            var_r5_3 = 1;
        }
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 6) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 6) > 0x63U)) {
            var_r5_3 += 1;
        }
        if (((IsDisplayEnabled__C11ShippingBini(temp_r4, 7) << 0x18) != 0) && (GetAmountShipped__C11ShippingBini(temp_r4, 7) > 0x63U)) {
            var_r5_3 += 1;
        }
        if (var_r5_3 == 3) {
            temp_r0_16 = arg0->unk2A4;
            if (temp_r0_16 <= 0x27U) {
                temp_r2_12 = (GenObj *)((u8 *)arg0 + 0x2A4) + ((temp_r0_16 * 4) + 4);
                if (temp_r2_12 != 0) {
                    *temp_r2_12 = 7;
                }
                arg0->unk2A4 = (u32) (arg0->unk2A4 + 1);
            }
        }
        var_r1_2 = (GenObj *)((u8 *)arg0 + 0x2A4);
        goto block_89;
    }
    spC = 0x10;
    var_sl = 4;
    func_0805E6CC(&sp18, &gUnk_086678A0);
    sp48 = 0;
    sp48.unk2 = 0;
    func_0805E824(&sp4C, &sp18, 0, 0x100);
    sp60 = 0;
    sp60.unk2 = 0;
    sp60.unk4 = 0;
    sp60.unk6 = 0;
    sp60.unk8 = 0;
    sp60.unkC = 0;
    sp60.unk10 = 0;
    sp60.unk11 = 0;
    sp60.unk14 = 0;
    sp60.unk18 = 0;
    sp7C = 0;
    sp80 = 0;
    sp80.unk4 = 0;
    sp88 = 0;
    sp88.unk4 = 0;
    sp90.unk0 = 0;
    sp90.unk4 = 0;
    sp98 = 0;
    sp98.unk4 = 0;
    var_r6 = 0;
    spE4 = &(GenObj *)((u8 *)sp90 + 0x10);
    if ((u32) arg0->unk2A4 > 0U) {
        spD4 = (GenObj *)((u8 *)arg0 + 0x2A4);
        spD8 = (GenObj *)((u8 *)arg0 + 0x20);
        var_r5_4 = (GenObj *)((u8 *)arg0 + 0x2A8);
        do {
            sp8 = (s16) (var_sl * 8);
            temp_r0_17 = (*var_r5_4 * 8) + &gUnk_080FDDD8;
            spC4 = (s32) temp_r0_17->unk0;
            spC4.unk4 = (u32) temp_r0_17->unk4;
            __4ToolUi(&spC0, spC4);
            func_0805E860(&sp4C, GetIconId__C4Tool(&spC0));
            (*sp4C)->unk10(&spA0, sp4C, *((u8 *)sp50 + (sp4C.unkC * 4)));
            memcpy(spE4, spE4, 0x20U);
            temp_r0_18 = spE4 + 0xC;
            sp80.unk0 = spE4->unk0;
            sp80.unk4 = (s32) spE4->unk4;
            sp80.unk8 = (s32) spE4->unk8;
            temp_r1 = &(GenObj *)((u8 *)sp80 + 0xC);
            sp80.unkC = (s32) spE4->unkC;
            temp_r1->unk4 = (s32) temp_r0_18->unk4;
            temp_r1->unk8 = (s32) temp_r0_18->unk8;
            temp_r1->unkC = (s32) temp_r0_18->unkC;
            ((GenObj *)((u8 *)temp_r1 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_18 + 0xC))->unk4;
            sp10 = sp88;
            sp14 = sp90;
            temp_r0_19 = arg0->unk20;
            if (temp_r0_19 <= 0x27U) {
                temp_r0_20 = spD8 + ((temp_r0_19 * 0x10) + 4);
                if (temp_r0_20 != 0) {
                    temp_r0_20->unk0 = (s32) sp8;
                    temp_r0_20->unk4 = (s32) sp8.unk4;
                    temp_r0_20->unk8 = (s32) sp8.unk8;
                    temp_r0_20->unkC = (s32) sp8.unkC;
                }
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
            temp_r4_2 = var_sl << 6;
            sp0 = 0x20;
            func_0804EDB4(spC4.unk4, arg0->unk1C->unk18 + temp_r4_2 + 0x32, 0xA0, 0);
            sp0 = 0;
            sp4 = 0x20;
            func_0804E9F4(arg0->unk1C->unk18 + temp_r4_2 + 0x34, 0x20, 2, 2);
            var_sl += 2;
            var_r5_4 += 4;
            var_r6 += 1;
        } while (var_r6 < (u32) *spD4);
    }
    func_08075C88(arg0->unk1C, arg0->unkC);
    func_08075E24(arg0->unk1C, (s16) ((var_sl + 8) * 8));
    func_0807D1DC(arg0, arg0->unk10);
    temp_r0_21 = func_08008918(arg0);
    spE4->unk0 = 0x3F;
    temp_r0_21->unk50 = 0x3F;
    temp_r4_3 = __builtin_new(0x10);
    temp_r1_2 = func_08008918(arg0);
    temp_r4_3->unk0 = 0;
    temp_r4_3->unk4 = 0;
    temp_r4_3->unk8 = &vtable_unk_080E5B80;
    temp_r5 = (GenObj *)((u8 *)temp_r4_3 + 0xC);
    func_08009300(temp_r5, temp_r1_2);
    spE4->unk0 = temp_r4_3;
    func_0800934C(temp_r5, 0x889, 1, 1);
    temp_r0_22 = func_08008940(arg0);
    ((void (*)(void *,...))(temp_r0_22->unk8->unk10))(temp_r0_22, spE4->unk0);
    spDC = 0;
loop_101:
    func_080087C8(arg0);
    func_080088B8(arg0);
    temp_r3 = spE4->unk0;
    temp_r1_3 = temp_r3->unk0;
    if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
block_192:
        func_080C96C4(arg0);
        goto loop_101;
    }
    if (spDC == 0) {
        temp_r0_23 = arg0->unk708;
        switch (temp_r0_23) {
        case 0:
            if (arg0->unk14 != arg0->unk10) {
                func_0807D1DC(arg0);
            }
            if (arg0->unk6A1 == 0) {
                if (func_080088CC(arg0) & 2) {
                    if (arg0->unk70C != 0) {
                        func_080CABA0(arg0, &gUnk_080FDEAC);
                        func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x43);
                    } else {
                        func_080CABA0(arg0, &gUnk_080FDEC4);
                        func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x46);
                    }
                    var_r1_3 = (GenObj *)((u8 *)arg0 + 0x708);
                    var_r0 = 4;
                    goto block_156;
                }
            } else {
                temp_r0_24 = (((arg0->unk10 * 4) + arg0)->unk2A8 * 8) + &gUnk_080FDDD8;
                spC4 = (s32) temp_r0_24->unk0;
                spC4.unk4 = (u32) temp_r0_24->unk4;
                spE0 = spC4.unk4;
                temp_r5_2 = GetAvailableSpaceForTool__C8RucksackUi(arg0->unk8 + 0x1C38, spC4);
                var_r5_5 = temp_r5_2 + GetAvailableSpaceFor__C9ToolChestUi(arg0->unk8 + 0x380, spC4);
                if ((IsEmpty__C9ToolStack(arg0->unk8 + 0x1C34) << 0x18) != 0) {
                    var_r5_5 += 0x63;
                } else {
                    spCC = GetTool__C9ToolStack(arg0->unk8 + 0x1C34);
                    var_r2 = 0;
                    if (GetId__C4Tool() == spC4) {
                        var_r2 = 1;
                    }
                    if (var_r2 != 0) {
                        var_r5_5 = (var_r5_5 + 0x63) - GetAmount__C9ToolStack(arg0->unk8 + 0x1C34);
                    }
                }
                temp_r8 = GetAmountOfTool__C8RucksackUi(arg0->unk8 + 0x1C38, spC4);
                var_sl_2 = 0;
                temp_r4_4 = GetAmountOf__C9ToolChestUi(arg0->unk8 + 0x380, spC4);
                if ((IsEmpty__C9ToolStack(arg0->unk8 + 0x1C34) << 0x18) == 0) {
                    sp0.unkCD = GetTool__C9ToolStack(arg0->unk8 + 0x1C34);
                    var_r2_2 = 0;
                    if (GetId__C4Tool() == spC4) {
                        var_r2_2 = 1;
                    }
                    if (var_r2_2 != 0) {
                        var_sl_2 = GetAmount__C9ToolStack(arg0->unk8 + 0x1C34);
                    }
                }
                func_0804EC84(temp_r8 + var_sl_2 + temp_r4_4, &spA4, 7);
                var_r2_3 = 0;
                if ((u32) arg0->unk8->unk1AA8 >= (u32) spC4.unk4) {
                    var_r2_3 = 1;
                }
                if (var_r2_3 == 0) {
                    func_080CABA0(arg0, &gUnk_080FDE78);
                    func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x46);
                    var_r1_3 = (GenObj *)((u8 *)arg0 + 0x708);
                    var_r0 = 2;
                    goto block_156;
                }
                if (var_r5_5 == 0) {
                    func_080CABA0(arg0, &gUnk_080FDE40);
                    var_r1_3 = (GenObj *)((u8 *)arg0 + 0x708);
                    var_r0 = 2;
block_156:
                    *var_r1_3 = var_r0;
                } else {
                    func_080CA8B4((GenObj *)((u8 *)arg0 + 0x684), spE0, var_r5_5, 5);
                    arg0->unk708 = 3U;
                    temp_r5_3 = &(GenObj *)((u8 *)sp0 + 0xCE);
                    __4ToolUi(temp_r5_3, spC4);
                    temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x6A4);
                    arg0->unk6A4 = 0;
                    temp_sb = GetName__C4Tool(temp_r5_3);
                    temp_r5_4 = temp_sb;
                    temp_r0_25 = strlen(temp_r4_5);
                    temp_r3_2 = temp_r4_5 + temp_r0_25;
                    temp_r6 = 0x63 - temp_r0_25;
                    if (temp_r6 != 0) {
                        var_r5_6 = strlen(temp_r5_4);
                        if (var_r5_6 > temp_r6) {
                            var_r5_6 = temp_r6;
                        }
                        memcpy(temp_r3_2, temp_sb, var_r5_6);
                        *((u8 *)temp_r3_2 + var_r5_6) = 0;
                    }
                    temp_r0_26 = strlen(temp_r4_5);
                    temp_r1_4 = temp_r4_5 + temp_r0_26;
                    temp_r6_2 = 0x63 - temp_r0_26;
                    if (temp_r6_2 != 0) {
                        var_r5_7 = strlen(&gUnk_080FDE70);
                        if (var_r5_7 > temp_r6_2) {
                            var_r5_7 = temp_r6_2;
                        }
                        memcpy(temp_r1_4, &gUnk_080FDE70, var_r5_7);
                        *((u8 *)temp_r1_4 + var_r5_7) = 0;
                    }
                    temp_sb_2 = gUnk_08117828;
                    temp_r0_27 = strlen(temp_r4_5);
                    temp_r3_3 = temp_r4_5 + temp_r0_27;
                    temp_r6_3 = 0x63 - temp_r0_27;
                    if (temp_r6_3 != 0) {
                        var_r5_8 = strlen(temp_sb_2);
                        if (var_r5_8 > temp_r6_3) {
                            var_r5_8 = temp_r6_3;
                        }
                        memcpy(temp_r3_3, temp_sb_2, var_r5_8);
                        *((u8 *)temp_r3_3 + var_r5_8) = 0;
                    }
                    temp_r0_28 = strlen(temp_r4_5);
                    temp_r1_5 = temp_r4_5 + temp_r0_28;
                    temp_r6_4 = 0x63 - temp_r0_28;
                    if (temp_r6_4 != 0) {
                        var_r5_9 = strlen(&spA4);
                        if (var_r5_9 > temp_r6_4) {
                            var_r5_9 = temp_r6_4;
                        }
                        memcpy(temp_r1_5, &spA4, var_r5_9);
                        *((u8 *)temp_r1_5 + var_r5_9) = 0;
                    }
                    temp_r8_2 = gUnk_08117814;
                    temp_r0_29 = strlen(temp_r4_5);
                    temp_r6_5 = temp_r4_5 + temp_r0_29;
                    temp_r5_5 = 0x63 - temp_r0_29;
                    if (temp_r5_5 != 0) {
                        var_r4 = strlen(temp_r8_2);
                        if (var_r4 > temp_r5_5) {
                            var_r4 = temp_r5_5;
                        }
                        memcpy(temp_r6_5, temp_r8_2, var_r4);
                        *((u8 *)temp_r6_5 + var_r4) = 0;
                    }
                    func_080CABEC(arg0, (GenObj *)((u8 *)arg0 + 0x6A4));
                }
            }
            arg0->unk14 = (s32) arg0->unk10;
            func_080C9020(arg0, arg0->unk2A4);
            break;
        case 1:
            if (arg0->unk350 != 3) {

            } else {
                func_080CABA0(arg0, &gUnk_080FDEDC);
                func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x43);
                arg0->unk708 = 2U;
            }
            break;
        case 2:
            if (arg0->unk350 != 3) {

            } else {
                func_08050E5C((GenObj *)((u8 *)arg0 + 0x348));
                arg0->unk708 = 0U;
                arg0->unk14 = -1;
            }
            break;
        case 3:
            temp_r4_6 = func_080088CC(arg0) & 1;
            if (temp_r4_6 == 0) {
                if (func_080088CC(arg0) & 2) {
                    func_080CAAF4((GenObj *)((u8 *)arg0 + 0x684));
                    arg0->unk708 = temp_r4_6;
                    func_0807D1DC(arg0, arg0->unk10);
                } else {
                    temp_r1_6 = (GenObj *)((u8 *)arg0 + 0x684);
                    if (temp_r1_6->unk8 != 0) {
                        func_080CA98C(temp_r1_6);
                    }
                }
            } else {
                var_r8 = ((GenObj *)((u8 *)arg0 + 0x684))->unk14;
                var_r6_2 = 1;
                func_080CAAF4();
                func_0807D1DC(arg0, arg0->unk10);
                temp_r0_30 = (((arg0->unk10 * 4) + arg0)->unk2A8 * 8) + &gUnk_080FDDD8;
                spC4 = (s32) temp_r0_30->unk0;
                spC4.unk4 = (u32) temp_r0_30->unk4;
                func_0809ACC0(arg0->unk8 + 0x1AA8, spC4.unk4 * var_r8);
                func_080C8550(arg0);
                if ((IsEmpty__C9ToolStack(arg0->unk8 + 0x1C34) << 0x18) != 0) {
                    temp_r5_6 = arg0->unk8 + 0x1C34;
                    __4ToolUi(&(GenObj *)((u8 *)sp0 + 0xCF), spC4);
                    __9ToolStackG4ToolUi(&spA4, sp0.unkCF, var_r8);
                    memcpy(temp_r5_6, &spA4, 2U);
                    goto block_183;
                }
                spD0 = GetTool__C9ToolStack(arg0->unk8 + 0x1C34);
                var_r2_4 = 0;
                if (GetId__C4Tool() == spC4) {
                    var_r2_4 = 1;
                }
                if (var_r2_4 != 0) {
                    temp_r4_7 = 0x63 - GetAmount__C9ToolStack(arg0->unk8 + 0x1C34);
                    if (var_r8 > temp_r4_7) {
                        AddAmount__9ToolStackUi(arg0->unk8 + 0x1C34, temp_r4_7);
                        var_r8 -= temp_r4_7;
                        if (temp_r4_7 != 0) {
                            var_r6_2 = 0;
                        }
                    } else {
                        AddAmount__9ToolStackUi(arg0->unk8 + 0x1C34, var_r8);
                        var_r8 = 0;
                    }
                }
                if (var_r8 != 0) {
                    temp_r0_31 = AddAmountOfTool__8RucksackUiUi(arg0->unk8 + 0x1C38, spC4);
                    if (var_r8 > temp_r0_31) {
                        var_r6_2 = 0;
                    }
                    if (temp_r0_31 != 0) {
                        AddAmountOf__9ToolChestUiUi(arg0->unk8 + 0x380, spC4);
                        if (var_r6_2 != 0) {
                            var_r1_4 = &gUnk_080FDEF8;
                        } else {
                            var_r1_4 = &gUnk_080FDF50;
                        }
                        func_080CABA0(arg0, var_r1_4);
                    } else {
                        goto block_183;
                    }
                } else {
block_183:
                    func_080CABA0(arg0, &gUnk_080FDEAC);
                }
                func_08050E50((GenObj *)((u8 *)arg0 + 0x348), 0x44);
                arg0->unk708 = 1U;
                arg0->unk70C = 1U;
            }
            break;
        case 4:
            if (arg0->unk350 == 3) {
                temp_r2_13 = spE4->unk0;
                temp_r1_7 = *temp_r2_13;
                if ((s32) ((0 - temp_r1_7) | temp_r1_7) >= 0) {
                    spDC = 1;
                    func_08009378(temp_r2_13 + 0xC, 0x889, 1, 1);
                    temp_r0_32 = func_08008940(arg0);
                    ((void (*)(void *,...))(temp_r0_32->unk8->unk10))(temp_r0_32, spE4->unk0);
                }
            }
            break;
        }
        goto block_192;
    }
    ((void (*)(void *,...))(temp_r3->unk8->unkC))(temp_r3, 3);
    sp18 = &vtable_unk_080E5A28;
}
