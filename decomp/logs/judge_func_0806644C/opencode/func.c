#include "common.h"
s32 free();                                           /* extern */
void *func_08008910(s32);                           /* extern */
s32 func_08008F0C(s32 *, s32 *, s32, s32);                /* extern */
s32 func_0804E8F0(s32, s32 *, s32, s32);                /* extern */
s32 func_0804E9F4(s32, u32, s32, s32);                /* extern */
s32 func_0804EDB4(u32, s32, s32, s32);                /* extern */
s32 func_0804EE30(u32, s32, s32, s32);                /* extern */
s32 func_08075E24(void *, s16);                       /* extern */
s32 func_08076BFC(void *, s32, ?, s32);                 /* extern */
u32 *func_0809B018(void *, u32);                    /* extern */
u32 *func_0809B038(void *, u32);                    /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern s32 gUnk_080FB834;
extern s32 gUnk_080FB85C;
extern s32 gUnk_080FB864;
extern s32 gUnk_080FB86C;
extern s32 gUnk_080FB874;
extern s32 gUnk_080FB8C8;
extern s32 gUnk_080FB8F0;
extern s32 gUnk_080FB904;
extern s32 gUnk_080FB908;
extern s32 gUnk_080FB90C;
extern s32 gUnk_080FB914;
extern s32 gUnk_080FB91C;
extern s32 gUnk_08750C4C;
extern s32 gUnk_08750C6C;
extern s32 gUnk_08750C8C;
extern s32 gUnk_087510AC;
extern s32 gUnk_0875166C;
extern s32 gUnk_0875178C;
extern s32 gUnk_08752F8C;
extern s32 gUnk_0875300C;
extern s32 vtable_unk_080E7A18;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    s32 unk12;
    u8 _pad16[2];
    struct GenObj *unk18;
    u8 _pad1C[1392];
    void *unk58C;
    u8 _pad590[36];
    void *unk5B4;
    u8 _pad5B8[3244];
    s32 unk1264;
    u8 _pad1268[976];
    s32 unk1638;
    u8 _pad163C[1140];
    struct GenObj *unk1AB0;
    u8 _pad1AB4[240];
    s32 unk1BA4;
} GenObj;
void *func_0806644C(GenObj *arg0, ? arg1, ? arg2) {
    s32 *sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
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
    s16 sp90;
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
    u32 spD0;
    u32 spD4;
    u32 spD8;
    u32 spDC;
    u32 spE0;
    u8 spE4;
    GenObj *spE8;
    GenObj *spEC;
    s32 spF0;
    u32 spF8;
    u32 spFC;
    u32 *sp100;
    u8 sp104;
    void **sp108;
    s32 *sp10C;
    s32 sp110;
    s32 sp114;
    u32 sp118;
    s32 *sp11C;
    s32 *sp120;
    u32 sp124;
    s32 *sp128;
    u32 sp12C;
    s32 **sp130;
    s32 **sp134;
    s32 **sp138;
    s32 **sp13C;
    s32 **sp140;
    s32 **sp144;
    s32 **sp148;
    s32 *sp14C;
    s32 **sp150;
    s32 **sp154;
    s32 **sp158;
    s32 *sp15C;
    s32 **sp160;
    s32 **sp164;
    s32 **sp168;
    u32 sp16C;
    s32 *sp170;
    u32 sp174;
    s32 *sp178;
    u32 sp17C;
    s32 *sp180;
    void *sp184;
    void *sp188;
    s32 **temp_r1_2;
    s32 **temp_r1_3;
    s32 **temp_r1_4;
    s32 **temp_r1_5;
    s32 **temp_r3;
    s32 **temp_r4_2;
    s32 **temp_r5;
    s32 **temp_r5_2;
    s32 **temp_r5_3;
    s32 **temp_r5_4;
    s32 **temp_r5_5;
    s32 *temp_r4;
    s32 *var_sl;
    s16 temp_r1_36;
    s32 *var_r0;
    s32 *var_r0_11;
    s32 *var_r0_13;
    s32 *var_r0_15;
    s32 *var_r0_17;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 *var_r0_9;
    s32 temp_r0;
    s32 temp_r0_11;
    s32 temp_r0_13;
    s32 temp_r0_15;
    s32 temp_r0_17;
    s32 temp_r0_19;
    s32 temp_r0_21;
    s32 temp_r0_23;
    s32 temp_r0_25;
    s32 temp_r0_27;
    s32 temp_r0_29;
    s32 temp_r0_31;
    s32 temp_r0_33;
    s32 temp_r0_35;
    s32 temp_r0_37;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r0_9;
    s32 temp_r2_21;
    s32 temp_r2_22;
    s32 temp_r2_23;
    s32 temp_r2_24;
    s32 temp_r3_2;
    s32 temp_r3_3;
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
    s32 temp_r4_40;
    s32 temp_r4_41;
    s32 temp_r4_42;
    s32 temp_r4_45;
    s32 temp_r4_46;
    s32 temp_r4_47;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5_6;
    s32 temp_r6_20;
    s32 temp_r6_21;
    s32 temp_r6_22;
    s32 var_r0_39;
    s32 var_r1_21;
    s32 var_r2_39;
    s32 var_r3_10;
    s32 var_r3_12;
    s32 var_r3_14;
    s32 var_r3_16;
    s32 var_r3_18;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r3_6;
    s32 var_r3_8;
    s32 var_r4;
    s32 var_r5_20;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r7;
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
    u16 var_r1_23;
    u32 *var_r0_19;
    u32 *var_r0_21;
    u32 *var_r0_23;
    u32 *var_r0_25;
    u32 *var_r0_27;
    u32 *var_r0_29;
    u32 *var_r0_31;
    u32 *var_r0_33;
    u32 *var_r0_35;
    u32 *var_r0_37;
    u32 *var_r1_20;
    u32 temp_r0_39;
    u32 temp_r0_41;
    u32 temp_r0_43;
    u32 temp_r0_45;
    u32 temp_r0_47;
    u32 temp_r0_49;
    u32 temp_r0_50;
    u32 temp_r0_51;
    u32 temp_r0_52;
    u32 temp_r0_53;
    u32 temp_r1_17;
    u32 temp_r1_19;
    u32 temp_r1_21;
    u32 temp_r1_23;
    u32 temp_r1_25;
    u32 temp_r1_27;
    u32 temp_r1_29;
    u32 temp_r1_31;
    u32 temp_r2_20;
    u32 temp_r4_43;
    u32 temp_r4_44;
    u32 temp_r4_48;
    u32 temp_r4_49;
    u32 temp_r5_7;
    u32 temp_r7;
    u32 temp_r7_2;
    u32 temp_sl;
    u32 var_r1_22;
    u32 var_r1_24;
    u32 var_r3_20;
    u32 var_r3_22;
    u32 var_r3_24;
    u32 var_r3_26;
    u32 var_r3_28;
    u32 var_r3_30;
    u32 var_r3_32;
    u32 var_r3_34;
    u32 var_r3_36;
    u32 var_r3_38;
    u32 var_r3_39;
    u32 var_sb;
    u8 temp_r1_32;
    u8 temp_r1_33;
    u8 temp_r1_34;
    u8 temp_r2_25;
    void *temp_r0_10;
    void *temp_r0_12;
    void *temp_r0_14;
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
    void *temp_r0_34;
    void *temp_r0_36;
    void *temp_r0_38;
    GenObj *temp_r0_40;
    void *temp_r0_42;
    GenObj *temp_r0_44;
    GenObj *temp_r0_46;
    GenObj *temp_r0_48;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_8;
    GenObj *temp_r1;
    GenObj *temp_r1_10;
    GenObj *temp_r1_11;
    GenObj *temp_r1_12;
    GenObj *temp_r1_13;
    GenObj *temp_r1_14;
    GenObj *temp_r1_15;
    GenObj *temp_r1_16;
    GenObj *temp_r1_18;
    GenObj *temp_r1_20;
    GenObj *temp_r1_22;
    GenObj *temp_r1_24;
    GenObj *temp_r1_26;
    GenObj *temp_r1_28;
    GenObj *temp_r1_30;
    GenObj *temp_r1_35;
    GenObj *temp_r1_6;
    GenObj *temp_r1_7;
    GenObj *temp_r1_8;
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
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_16;
    void *var_r0_18;
    void *var_r0_20;
    void *var_r0_22;
    void *var_r0_24;
    void *var_r0_26;
    void *var_r0_28;
    void *var_r0_2;
    void *var_r0_30;
    void *var_r0_32;
    void *var_r0_34;
    void *var_r0_36;
    void *var_r0_38;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_10;
    void *var_r1_11;
    void *var_r1_12;
    void *var_r1_13;
    void *var_r1_14;
    void *var_r1_15;
    void *var_r1_16;
    void *var_r1_17;
    void *var_r1_18;
    void *var_r1_19;
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

    spE8 = arg0;
    sp0 = &gUnk_080FB8F0;
    func_08076BFC(arg0, arg1, arg2, 0x96);
    arg0->unk5B4 = &vtable_unk_080E7A18;
    spE8->unk1264 = 0U;
    spE8->unk1638 = 0U;
    spEC = spE8->unk4;
    sp18 = 2;
    sp18.unk2 = 2;
    temp_r4 = (GenObj *)((u8 *)spE8 + 0x748);
    sp0 = &gUnk_080FB8C8;
    func_0804E8F0(sp18, temp_r4, 0, 0);
    temp_r6 = func_08008910(spE8->unk0);
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
        temp_r3 = &sp0 + 0x24;
        sp130 = temp_r3;
        var_sl = (GenObj *)((u8 *)spE8 + 0x5BC);
        sp134 = &sp0 + 0x30;
        sp120 = (GenObj *)((u8 *)spE8 + 0x640);
        sp138 = &sp0 + 0x3C;
        sp128 = (GenObj *)((u8 *)spE8 + 0x6C4);
        sp13C = temp_r3 + 0x24;
        sp170 = (GenObj *)((u8 *)spE8 + 0x8D0);
        sp140 = &sp0 + 0x54;
        sp180 = (GenObj *)((u8 *)spE8 + 0xA54);
        sp144 = &sp0 + 0x60;
        sp10C = (GenObj *)((u8 *)spE8 + 0xBD8);
        sp148 = &sp0 + 0x6C;
        sp11C = (GenObj *)((u8 *)spE8 + 0xD5C);
        temp_r4_2 = &sp0 + 0x78;
        sp150 = temp_r4_2;
        sp15C = (GenObj *)((u8 *)spE8 + 0x7CC);
        sp154 = &sp0 + 0x84;
        sp14C = (GenObj *)((u8 *)spE8 + 0xEE0);
        sp158 = &sp0 + 0x90;
        sp178 = (GenObj *)((u8 *)spE8 + 0x1064);
        sp168 = &sp0 + 0xE4;
        sp160 = temp_r4_2 + 0x64;
        sp164 = &sp0 + 0xE0;
    } else {
        sp184 = temp_r1;
        sp20 = 1;
        temp_r4_3 = (s32) (temp_r1 - temp_r6->unk0) >> 4;
        sp1C = temp_r4_3;
        var_r0 = &sp1C;
        if ((u32) temp_r4_3 < 1U) {
            var_r0 = &sp20;
        }
        temp_r0 = temp_r4_3 + *var_r0;
        if (temp_r0 != 0) {
            temp_r4_4 = temp_r0 * 0x10;
            var_r0_2 = malloc(temp_r4_4);
            var_r8 = temp_r4_4;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_2 = 0;
            var_r8 = 0;
        }
        sp188 = var_r0_2;
        var_r2 = temp_r6->unk0;
        var_r3 = var_r0_2;
        sp130 = &sp0 + 0x24;
        var_sl = (GenObj *)((u8 *)spE8 + 0x5BC);
        temp_r5 = &sp0 + 0x30;
        sp134 = temp_r5;
        sp120 = (GenObj *)((u8 *)spE8 + 0x640);
        temp_r1_2 = &sp0 + 0x3C;
        sp138 = temp_r1_2;
        sp128 = (GenObj *)((u8 *)spE8 + 0x6C4);
        temp_r5_2 = temp_r5 + 0x18;
        sp13C = temp_r5_2;
        sp170 = (GenObj *)((u8 *)spE8 + 0x8D0);
        temp_r1_3 = temp_r1_2 + 0x18;
        sp140 = temp_r1_3;
        sp180 = (GenObj *)((u8 *)spE8 + 0xA54);
        temp_r5_3 = temp_r5_2 + 0x18;
        sp144 = temp_r5_3;
        sp10C = (GenObj *)((u8 *)spE8 + 0xBD8);
        temp_r1_4 = temp_r1_3 + 0x18;
        sp148 = temp_r1_4;
        sp11C = (GenObj *)((u8 *)spE8 + 0xD5C);
        temp_r5_4 = temp_r5_3 + 0x18;
        sp150 = temp_r5_4;
        sp15C = (GenObj *)((u8 *)spE8 + 0x7CC);
        temp_r1_5 = temp_r1_4 + 0x18;
        sp154 = temp_r1_5;
        sp14C = (GenObj *)((u8 *)spE8 + 0xEE0);
        temp_r5_5 = temp_r5_4 + 0x18;
        sp158 = temp_r5_5;
        sp178 = (GenObj *)((u8 *)spE8 + 0x1064);
        sp168 = temp_r1_5 + 0x60;
        sp160 = &sp0 + 0xDC;
        sp164 = temp_r5_5 + 0x50;
        if (var_r2 != sp184) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != sp184);
        }
        if (sp20 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) sp8;
                var_r3->unk4 = (s32) sp8.unk4;
                var_r3->unk8 = (s32) sp8.unk8;
                var_r3->unkC = (s32) sp8.unkC;
            }
            var_r5 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_r3_2 = sp20;
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
        temp_r6->unk0 = sp188;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (sp188 + var_r8);
    }
    sp24 = 2;
    sp130->unk2 = 2;
    sp0 = &gUnk_080FB834;
    func_0804E8F0(sp24, var_sl, 0, 0);
    temp_r6_2 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, var_sl, 0x06000780, 0x80);
    temp_r1_6 = temp_r6_2->unk4;
    if (temp_r1_6 != temp_r6_2->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32) sp8;
            temp_r1_6->unk4 = (s32) sp8.unk4;
            temp_r1_6->unk8 = (s32) sp8.unk8;
            temp_r1_6->unkC = (s32) sp8.unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
        sp16C = 0x3C0000;
    } else {
        sp2C = 1;
        temp_r4_5 = (s32) (temp_r1_6 - temp_r6_2->unk0) >> 4;
        sp28 = temp_r4_5;
        var_r0_3 = &sp28;
        if ((u32) temp_r4_5 < 1U) {
            var_r0_3 = &sp2C;
        }
        temp_r0_3 = temp_r4_5 + *var_r0_3;
        if (temp_r0_3 != 0) {
            temp_r4_6 = temp_r0_3 * 0x10;
            var_r0_4 = malloc(temp_r4_6);
            var_r8_2 = temp_r4_6;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_4 = 0;
            var_r8_2 = 0;
        }
        sp188 = var_r0_4;
        var_r2_3 = temp_r6_2->unk0;
        var_r3_3 = var_r0_4;
        sp16C = 0x3C0000;
        if (var_r2_3 != temp_r1_6) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != temp_r1_6);
        }
        if (sp2C == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) sp8;
                var_r3_3->unk4 = (s32) sp8.unk4;
                var_r3_3->unk8 = (s32) sp8.unk8;
                var_r3_3->unkC = (s32) sp8.unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_3 + 0x10);
        } else {
            var_r3_4 = sp2C;
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
        temp_r6_2->unk0 = sp188;
        temp_r6_2->unk4 = var_r5_2;
        temp_r6_2->unkC = (void *) (sp188 + var_r8_2);
    }
    sp30 = 2;
    sp134->unk2 = 2;
    sp0 = &gUnk_080FB904;
    func_0804E8F0(sp30, sp120, 0, 0);
    temp_r6_3 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp120, 0x06000800, 0x80);
    temp_r1_7 = temp_r6_3->unk4;
    if (temp_r1_7 != temp_r6_3->unkC) {
        if (temp_r1_7 != 0) {
            temp_r1_7->unk0 = (s32) sp8;
            temp_r1_7->unk4 = (s32) sp8.unk4;
            temp_r1_7->unk8 = (s32) sp8.unk8;
            temp_r1_7->unkC = (s32) sp8.unkC;
        }
        temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
        sp174 = 0x400000;
    } else {
        sp184 = temp_r1_7;
        sp38 = 1;
        temp_r4_7 = (s32) (temp_r1_7 - temp_r6_3->unk0) >> 4;
        sp34 = temp_r4_7;
        var_r0_5 = &sp34;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_5 = &sp38;
        }
        temp_r0_5 = temp_r4_7 + *var_r0_5;
        if (temp_r0_5 != 0) {
            temp_r4_8 = temp_r0_5 * 0x10;
            var_r0_6 = malloc(temp_r4_8);
            var_r8_3 = temp_r4_8;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_6 = 0;
            var_r8_3 = 0;
        }
        sp188 = var_r0_6;
        var_r2_5 = temp_r6_3->unk0;
        var_r3_5 = var_r0_6;
        sp174 = 0x400000;
        if (var_r2_5 != sp184) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_5->unk0;
                    var_r3_5->unk4 = (s32) var_r2_5->unk4;
                    var_r3_5->unk8 = (s32) var_r2_5->unk8;
                    var_r3_5->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_5 != sp184);
        }
        if (sp38 == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) sp8;
                var_r3_5->unk4 = (s32) sp8.unk4;
                var_r3_5->unk8 = (s32) sp8.unk8;
                var_r3_5->unkC = (s32) sp8.unkC;
            }
            var_r5_3 = (GenObj *)((u8 *)var_r3_5 + 0x10);
        } else {
            var_r3_6 = sp38;
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
        temp_r6_3->unk0 = sp188;
        temp_r6_3->unk4 = var_r5_3;
        temp_r6_3->unkC = (void *) (sp188 + var_r8_3);
    }
    sp3C = 2;
    sp138->unk2 = 2;
    sp0 = &gUnk_080FB908;
    func_0804E8F0(sp3C, sp128, 0, 0);
    temp_r6_4 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp128, 0x06000880, 0x80);
    temp_r1_8 = temp_r6_4->unk4;
    if (temp_r1_8 != temp_r6_4->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32) sp8;
            temp_r1_8->unk4 = (s32) sp8.unk4;
            temp_r1_8->unk8 = (s32) sp8.unk8;
            temp_r1_8->unkC = (s32) sp8.unkC;
        }
        temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
        sp17C = 0x440000;
    } else {
        sp184 = temp_r1_8;
        sp44 = 1;
        temp_r4_9 = (s32) (temp_r1_8 - temp_r6_4->unk0) >> 4;
        sp40 = temp_r4_9;
        var_r0_7 = &sp40;
        if ((u32) temp_r4_9 < 1U) {
            var_r0_7 = &sp44;
        }
        temp_r0_7 = temp_r4_9 + *var_r0_7;
        if (temp_r0_7 != 0) {
            temp_r4_10 = temp_r0_7 * 0x10;
            var_r0_8 = malloc(temp_r4_10);
            var_r8_4 = temp_r4_10;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_8 = 0;
            var_r8_4 = 0;
        }
        sp188 = var_r0_8;
        var_r2_7 = temp_r6_4->unk0;
        var_r3_7 = var_r0_8;
        sp17C = 0x440000;
        if (var_r2_7 != sp184) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_7->unk0;
                    var_r3_7->unk4 = (s32) var_r2_7->unk4;
                    var_r3_7->unk8 = (s32) var_r2_7->unk8;
                    var_r3_7->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_7 != sp184);
        }
        if (sp44 == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32) sp8;
                var_r3_7->unk4 = (s32) sp8.unk4;
                var_r3_7->unk8 = (s32) sp8.unk8;
                var_r3_7->unkC = (s32) sp8.unkC;
            }
            var_r5_4 = (GenObj *)((u8 *)var_r3_7 + 0x10);
        } else {
            var_r3_8 = sp44;
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
        temp_r6_4->unk0 = sp188;
        temp_r6_4->unk4 = var_r5_4;
        temp_r6_4->unkC = (void *) (sp188 + var_r8_4);
    }
    sp48 = 6;
    sp13C->unk2 = 2;
    sp0 = &gUnk_080FB85C;
    func_0804E8F0(sp48, sp170, 0, 0);
    temp_r6_5 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp170, 0x06000900, 0x180);
    temp_r1_9 = temp_r6_5->unk4;
    if (temp_r1_9 != temp_r6_5->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32) sp8;
            temp_r1_9->unk4 = (s32) sp8.unk4;
            temp_r1_9->unk8 = (s32) sp8.unk8;
            temp_r1_9->unkC = (s32) sp8.unkC;
        }
        temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
    } else {
        sp50 = 1;
        temp_r4_11 = (s32) (temp_r1_9 - temp_r6_5->unk0) >> 4;
        sp4C = temp_r4_11;
        var_r0_9 = &sp4C;
        if ((u32) temp_r4_11 < 1U) {
            var_r0_9 = &sp50;
        }
        temp_r0_9 = temp_r4_11 + *var_r0_9;
        if (temp_r0_9 != 0) {
            temp_r4_12 = temp_r0_9 * 0x10;
            var_r0_10 = malloc(temp_r4_12);
            var_r8_5 = temp_r4_12;
            if (var_r0_10 == 0) {
                var_r0_10 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_10 = 0;
            var_r8_5 = 0;
        }
        sp188 = var_r0_10;
        var_r2_9 = temp_r6_5->unk0;
        var_r3_9 = var_r0_10;
        if (var_r2_9 != temp_r1_9) {
            do {
                if (var_r3_9 != 0) {
                    var_r3_9->unk0 = (s32) var_r2_9->unk0;
                    var_r3_9->unk4 = (s32) var_r2_9->unk4;
                    var_r3_9->unk8 = (s32) var_r2_9->unk8;
                    var_r3_9->unkC = (s32) var_r2_9->unkC;
                }
                var_r2_9 += 0x10;
                var_r3_9 += 0x10;
            } while (var_r2_9 != temp_r1_9);
        }
        if (sp50 == 1) {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) sp8;
                var_r3_9->unk4 = (s32) sp8.unk4;
                var_r3_9->unk8 = (s32) sp8.unk8;
                var_r3_9->unkC = (s32) sp8.unkC;
            }
            var_r5_5 = (GenObj *)((u8 *)var_r3_9 + 0x10);
        } else {
            var_r3_10 = sp50;
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
        temp_r0_10 = temp_r6_5->unk0;
        var_r1_5 = temp_r0_10;
        if (temp_r0_10 != temp_r2_5) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_5);
        }
        if (temp_r0_10 != 0) {
            free();
        }
        temp_r6_5->unk0 = sp188;
        temp_r6_5->unk4 = var_r5_5;
        temp_r6_5->unkC = (void *) (sp188 + var_r8_5);
    }
    sp54 = 6;
    sp140->unk2 = 2;
    sp0 = &gUnk_080FB864;
    func_0804E8F0(sp54, sp180, 0, 0);
    temp_r6_6 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp180, 0x06000A80, 0x180);
    temp_r1_10 = temp_r6_6->unk4;
    if (temp_r1_10 != temp_r6_6->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32) sp8;
            temp_r1_10->unk4 = (s32) sp8.unk4;
            temp_r1_10->unk8 = (s32) sp8.unk8;
            temp_r1_10->unkC = (s32) sp8.unkC;
        }
        temp_r6_6->unk4 = (void *) (temp_r6_6->unk4 + 0x10);
    } else {
        sp5C = 1;
        temp_r4_13 = (s32) (temp_r1_10 - temp_r6_6->unk0) >> 4;
        sp58 = temp_r4_13;
        var_r0_11 = &sp58;
        if ((u32) temp_r4_13 < 1U) {
            var_r0_11 = &sp5C;
        }
        temp_r0_11 = temp_r4_13 + *var_r0_11;
        if (temp_r0_11 != 0) {
            temp_r4_14 = temp_r0_11 * 0x10;
            var_r0_12 = malloc(temp_r4_14);
            var_r8_6 = temp_r4_14;
            if (var_r0_12 == 0) {
                var_r0_12 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_12 = 0;
            var_r8_6 = 0;
        }
        sp188 = var_r0_12;
        var_r2_11 = temp_r6_6->unk0;
        var_r3_11 = var_r0_12;
        if (var_r2_11 != temp_r1_10) {
            do {
                if (var_r3_11 != 0) {
                    var_r3_11->unk0 = (s32) var_r2_11->unk0;
                    var_r3_11->unk4 = (s32) var_r2_11->unk4;
                    var_r3_11->unk8 = (s32) var_r2_11->unk8;
                    var_r3_11->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_r3_11 += 0x10;
            } while (var_r2_11 != temp_r1_10);
        }
        if (sp5C == 1) {
            if (var_r3_11 != 0) {
                var_r3_11->unk0 = (s32) sp8;
                var_r3_11->unk4 = (s32) sp8.unk4;
                var_r3_11->unk8 = (s32) sp8.unk8;
                var_r3_11->unkC = (s32) sp8.unkC;
            }
            var_r5_6 = (GenObj *)((u8 *)var_r3_11 + 0x10);
        } else {
            var_r3_12 = sp5C;
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
        temp_r0_12 = temp_r6_6->unk0;
        var_r1_6 = temp_r0_12;
        if (temp_r0_12 != temp_r2_6) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_6);
        }
        if (temp_r0_12 != 0) {
            free();
        }
        temp_r6_6->unk0 = sp188;
        temp_r6_6->unk4 = var_r5_6;
        temp_r6_6->unkC = (void *) (sp188 + var_r8_6);
    }
    sp60 = 6;
    sp144->unk2 = 2;
    sp0 = &gUnk_080FB86C;
    func_0804E8F0(sp60, sp10C, 0, 0);
    temp_r6_7 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp10C, 0x06000C00, 0x180);
    temp_r1_11 = temp_r6_7->unk4;
    if (temp_r1_11 != temp_r6_7->unkC) {
        if (temp_r1_11 != 0) {
            temp_r1_11->unk0 = (s32) sp8;
            temp_r1_11->unk4 = (s32) sp8.unk4;
            temp_r1_11->unk8 = (s32) sp8.unk8;
            temp_r1_11->unkC = (s32) sp8.unkC;
        }
        temp_r6_7->unk4 = (void *) (temp_r6_7->unk4 + 0x10);
    } else {
        sp68 = 1;
        temp_r4_15 = (s32) (temp_r1_11 - temp_r6_7->unk0) >> 4;
        sp64 = temp_r4_15;
        var_r0_13 = &sp64;
        if ((u32) temp_r4_15 < 1U) {
            var_r0_13 = &sp68;
        }
        temp_r0_13 = temp_r4_15 + *var_r0_13;
        if (temp_r0_13 != 0) {
            temp_r4_16 = temp_r0_13 * 0x10;
            var_r0_14 = malloc(temp_r4_16);
            var_r8_7 = temp_r4_16;
            if (var_r0_14 == 0) {
                var_r0_14 = func_080D3BC0(var_r8_7);
            }
        } else {
            var_r0_14 = 0;
            var_r8_7 = 0;
        }
        sp188 = var_r0_14;
        var_r2_13 = temp_r6_7->unk0;
        var_r3_13 = var_r0_14;
        if (var_r2_13 != temp_r1_11) {
            do {
                if (var_r3_13 != 0) {
                    var_r3_13->unk0 = (s32) var_r2_13->unk0;
                    var_r3_13->unk4 = (s32) var_r2_13->unk4;
                    var_r3_13->unk8 = (s32) var_r2_13->unk8;
                    var_r3_13->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_13 += 0x10;
            } while (var_r2_13 != temp_r1_11);
        }
        if (sp68 == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32) sp8;
                var_r3_13->unk4 = (s32) sp8.unk4;
                var_r3_13->unk8 = (s32) sp8.unk8;
                var_r3_13->unkC = (s32) sp8.unkC;
            }
            var_r5_7 = (GenObj *)((u8 *)var_r3_13 + 0x10);
        } else {
            var_r3_14 = sp68;
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
        temp_r0_14 = temp_r6_7->unk0;
        var_r1_7 = temp_r0_14;
        if (temp_r0_14 != temp_r2_7) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_7);
        }
        if (temp_r0_14 != 0) {
            free();
        }
        temp_r6_7->unk0 = sp188;
        temp_r6_7->unk4 = var_r5_7;
        temp_r6_7->unkC = (void *) (sp188 + var_r8_7);
    }
    sp6C = 6;
    sp148->unk2 = 2;
    sp0 = &gUnk_080FB874;
    func_0804E8F0(sp6C, sp11C, 0, 0);
    temp_r6_8 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp11C, 0x06000D80, 0x180);
    temp_r1_12 = temp_r6_8->unk4;
    if (temp_r1_12 != temp_r6_8->unkC) {
        if (temp_r1_12 != 0) {
            temp_r1_12->unk0 = (s32) sp8;
            temp_r1_12->unk4 = (s32) sp8.unk4;
            temp_r1_12->unk8 = (s32) sp8.unk8;
            temp_r1_12->unkC = (s32) sp8.unkC;
        }
        temp_r6_8->unk4 = (void *) (temp_r6_8->unk4 + 0x10);
    } else {
        sp74 = 1;
        temp_r4_17 = (s32) (temp_r1_12 - temp_r6_8->unk0) >> 4;
        sp70 = temp_r4_17;
        var_r0_15 = &sp70;
        if ((u32) temp_r4_17 < 1U) {
            var_r0_15 = &sp74;
        }
        temp_r0_15 = temp_r4_17 + *var_r0_15;
        if (temp_r0_15 != 0) {
            temp_r4_18 = temp_r0_15 * 0x10;
            var_r0_16 = malloc(temp_r4_18);
            var_r8_8 = temp_r4_18;
            if (var_r0_16 == 0) {
                var_r0_16 = func_080D3BC0(var_r8_8);
            }
        } else {
            var_r0_16 = 0;
            var_r8_8 = 0;
        }
        sp188 = var_r0_16;
        var_r2_15 = temp_r6_8->unk0;
        var_r3_15 = var_r0_16;
        if (var_r2_15 != temp_r1_12) {
            do {
                if (var_r3_15 != 0) {
                    var_r3_15->unk0 = (s32) var_r2_15->unk0;
                    var_r3_15->unk4 = (s32) var_r2_15->unk4;
                    var_r3_15->unk8 = (s32) var_r2_15->unk8;
                    var_r3_15->unkC = (s32) var_r2_15->unkC;
                }
                var_r2_15 += 0x10;
                var_r3_15 += 0x10;
            } while (var_r2_15 != temp_r1_12);
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
        temp_r0_16 = temp_r6_8->unk0;
        var_r1_8 = temp_r0_16;
        if (temp_r0_16 != temp_r2_8) {
            do {
                var_r1_8 += 0x10;
            } while (var_r1_8 != temp_r2_8);
        }
        if (temp_r0_16 != 0) {
            free();
        }
        temp_r6_8->unk0 = sp188;
        temp_r6_8->unk4 = var_r5_8;
        temp_r6_8->unkC = (void *) (sp188 + var_r8_8);
    }
    sp78 = 4;
    sp150->unk2 = 2;
    sp0 = &gUnk_080FB90C;
    func_0804E8F0(sp78, sp15C, 0, 0);
    temp_r6_9 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp15C, 0x06000F00, 0x100);
    temp_r1_13 = temp_r6_9->unk4;
    if (temp_r1_13 != temp_r6_9->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32) sp8;
            temp_r1_13->unk4 = (s32) sp8.unk4;
            temp_r1_13->unk8 = (s32) sp8.unk8;
            temp_r1_13->unkC = (s32) sp8.unkC;
        }
        temp_r6_9->unk4 = (void *) (temp_r6_9->unk4 + 0x10);
        sp118 = 0x780000;
    } else {
        sp184 = temp_r1_13;
        sp80 = 1;
        temp_r4_19 = (s32) (temp_r1_13 - temp_r6_9->unk0) >> 4;
        sp7C = temp_r4_19;
        var_r0_17 = &sp7C;
        if ((u32) temp_r4_19 < 1U) {
            var_r0_17 = &sp80;
        }
        temp_r0_17 = temp_r4_19 + *var_r0_17;
        if (temp_r0_17 != 0) {
            temp_r4_20 = temp_r0_17 * 0x10;
            var_r0_18 = malloc(temp_r4_20);
            var_r8_9 = temp_r4_20;
            if (var_r0_18 == 0) {
                var_r0_18 = func_080D3BC0(var_r8_9);
            }
        } else {
            var_r0_18 = 0;
            var_r8_9 = 0;
        }
        sp188 = var_r0_18;
        var_r2_17 = temp_r6_9->unk0;
        var_r3_17 = var_r0_18;
        sp118 = 0x780000;
        if (var_r2_17 != sp184) {
            do {
                if (var_r3_17 != 0) {
                    var_r3_17->unk0 = (s32) var_r2_17->unk0;
                    var_r3_17->unk4 = (s32) var_r2_17->unk4;
                    var_r3_17->unk8 = (s32) var_r2_17->unk8;
                    var_r3_17->unkC = (s32) var_r2_17->unkC;
                }
                var_r2_17 += 0x10;
                var_r3_17 += 0x10;
            } while (var_r2_17 != sp184);
        }
        if (sp80 == 1) {
            if (var_r3_17 != 0) {
                var_r3_17->unk0 = (s32) sp8;
                var_r3_17->unk4 = (s32) sp8.unk4;
                var_r3_17->unk8 = (s32) sp8.unk8;
                var_r3_17->unkC = (s32) sp8.unkC;
            }
            var_r5_9 = (GenObj *)((u8 *)var_r3_17 + 0x10);
        } else {
            var_r3_18 = sp80;
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
        temp_r0_18 = temp_r6_9->unk0;
        var_r1_9 = temp_r0_18;
        if (temp_r0_18 != temp_r2_9) {
            do {
                var_r1_9 += 0x10;
            } while (var_r1_9 != temp_r2_9);
        }
        if (temp_r0_18 != 0) {
            free();
        }
        temp_r6_9->unk0 = sp188;
        temp_r6_9->unk4 = var_r5_9;
        temp_r6_9->unkC = (void *) (sp188 + var_r8_9);
    }
    sp84 = 6;
    sp154->unk2 = 2;
    sp0 = &gUnk_080FB914;
    func_0804E8F0(sp84, sp14C, 0, 0);
    temp_r6_10 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp14C, 0x06001000, 0x180);
    temp_r1_14 = temp_r6_10->unk4;
    if (temp_r1_14 != temp_r6_10->unkC) {
        if (temp_r1_14 != 0) {
            temp_r1_14->unk0 = (s32) sp8;
            temp_r1_14->unk4 = (s32) sp8.unk4;
            temp_r1_14->unk8 = (s32) sp8.unk8;
            temp_r1_14->unkC = (s32) sp8.unkC;
        }
        temp_r6_10->unk4 = (void *) (temp_r6_10->unk4 + 0x10);
        sp124 = 0x800000;
    } else {
        sp184 = temp_r1_14;
        sp8C = 1;
        temp_r4_21 = (s32) (sp184 - temp_r6_10->unk0) >> 4;
        var_r0_19 = &sp88;
        *var_r0_19 = (u32) temp_r4_21;
        if ((u32) temp_r4_21 < (u32) sp8C) {
            var_r0_19 = &sp8C;
        }
        temp_r0_19 = temp_r4_21 + *var_r0_19;
        if (temp_r0_19 != 0) {
            temp_r4_22 = temp_r0_19 * 0x10;
            var_r0_20 = malloc(temp_r4_22);
            var_r8_10 = temp_r4_22;
            if (var_r0_20 == 0) {
                var_r0_20 = func_080D3BC0(var_r8_10);
            }
        } else {
            var_r0_20 = 0;
            var_r8_10 = 0;
        }
        sp188 = var_r0_20;
        var_r2_19 = temp_r6_10->unk0;
        var_r3_19 = var_r0_20;
        sp124 = 0x800000;
loop_266:
        if (var_r2_19 != sp184) {
            if (var_r3_19 != 0) {
                var_r3_19->unk0 = (s32) var_r2_19->unk0;
                var_r3_19->unk4 = (s32) var_r2_19->unk4;
                var_r3_19->unk8 = (s32) var_r2_19->unk8;
                var_r3_19->unkC = (s32) var_r2_19->unkC;
            }
            var_r2_19 += 0x10;
            var_r3_19 += 0x10;
            goto loop_266;
        }
        if (sp8C == 1) {
            if (var_r3_19 != 0) {
                var_r3_19->unk0 = (s32) sp8;
                var_r3_19->unk4 = (s32) sp8.unk4;
                var_r3_19->unk8 = (s32) sp8.unk8;
                var_r3_19->unkC = (s32) sp8.unkC;
            }
            var_r5_10 = (GenObj *)((u8 *)var_r3_19 + 0x10);
        } else {
            var_r3_20 = sp8C;
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
        temp_r0_20 = temp_r6_10->unk0;
        var_r1_10 = temp_r0_20;
        if (temp_r0_20 != temp_r2_10) {
            do {
                var_r1_10 += 0x10;
            } while (var_r1_10 != temp_r2_10);
        }
        if (temp_r0_20 != 0) {
            free();
        }
        temp_r6_10->unk0 = sp188;
        temp_r6_10->unk4 = var_r5_10;
        temp_r6_10->unkC = (void *) (sp188 + var_r8_10);
    }
    sp90 = 8;
    sp158->unk2 = 2;
    sp0 = &gUnk_080FB91C;
    func_0804E8F0((s32) sp90, sp178, 0, 0);
    temp_r6_11 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, sp178, 0x06001180, 0x200);
    temp_r1_15 = temp_r6_11->unk4;
    if (temp_r1_15 != temp_r6_11->unkC) {
        if (temp_r1_15 != 0) {
            temp_r1_15->unk0 = (s32) sp8;
            temp_r1_15->unk4 = (s32) sp8.unk4;
            temp_r1_15->unk8 = (s32) sp8.unk8;
            temp_r1_15->unkC = (s32) sp8.unkC;
        }
        temp_r6_11->unk4 = (void *) (temp_r6_11->unk4 + 0x10);
        sp12C = 0x8C0000;
    } else {
        sp184 = temp_r1_15;
        sp98 = 1;
        temp_r4_23 = (s32) (sp184 - temp_r6_11->unk0) >> 4;
        var_r0_21 = &sp94;
        *var_r0_21 = (u32) temp_r4_23;
        if ((u32) temp_r4_23 < (u32) sp98) {
            var_r0_21 = &sp98;
        }
        temp_r0_21 = temp_r4_23 + *var_r0_21;
        if (temp_r0_21 != 0) {
            temp_r4_24 = temp_r0_21 * 0x10;
            var_r0_22 = malloc(temp_r4_24);
            var_r8_11 = temp_r4_24;
            if (var_r0_22 == 0) {
                var_r0_22 = func_080D3BC0(var_r8_11);
            }
        } else {
            var_r0_22 = 0;
            var_r8_11 = 0;
        }
        sp188 = var_r0_22;
        var_r2_21 = temp_r6_11->unk0;
        var_r3_21 = var_r0_22;
        sp12C = 0x8C0000;
loop_295:
        if (var_r2_21 != sp184) {
            if (var_r3_21 != 0) {
                var_r3_21->unk0 = (s32) var_r2_21->unk0;
                var_r3_21->unk4 = (s32) var_r2_21->unk4;
                var_r3_21->unk8 = (s32) var_r2_21->unk8;
                var_r3_21->unkC = (s32) var_r2_21->unkC;
            }
            var_r2_21 += 0x10;
            var_r3_21 += 0x10;
            goto loop_295;
        }
        if (sp98 == 1) {
            if (var_r3_21 != 0) {
                var_r3_21->unk0 = (s32) sp8;
                var_r3_21->unk4 = (s32) sp8.unk4;
                var_r3_21->unk8 = (s32) sp8.unk8;
                var_r3_21->unkC = (s32) sp8.unkC;
            }
            var_r5_11 = (GenObj *)((u8 *)var_r3_21 + 0x10);
        } else {
            var_r3_22 = sp98;
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
        temp_r0_22 = temp_r6_11->unk0;
        var_r1_11 = temp_r0_22;
        if (temp_r0_22 != temp_r2_11) {
            do {
                var_r1_11 += 0x10;
            } while (var_r1_11 != temp_r2_11);
        }
        if (temp_r0_22 != 0) {
            free();
        }
        temp_r6_11->unk0 = sp188;
        temp_r6_11->unk4 = var_r5_11;
        temp_r6_11->unkC = (void *) (sp188 + var_r8_11);
    }
    temp_r6_12 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, &gUnk_08752F8C, 0x06010200, 0x80);
    temp_r1_16 = temp_r6_12->unk4;
    if (temp_r1_16 != temp_r6_12->unkC) {
        if (temp_r1_16 != 0) {
            temp_r1_16->unk0 = (s32) sp8;
            temp_r1_16->unk4 = (s32) sp8.unk4;
            temp_r1_16->unk8 = (s32) sp8.unk8;
            temp_r1_16->unkC = (s32) sp8.unkC;
        }
        temp_r6_12->unk4 = (void *) (temp_r6_12->unk4 + 0x10);
    } else {
        sp184 = temp_r1_16;
        spA0 = 1;
        temp_r4_25 = (s32) (sp184 - temp_r6_12->unk0) >> 4;
        var_r0_23 = &sp9C;
        *var_r0_23 = (u32) temp_r4_25;
        if ((u32) temp_r4_25 < (u32) spA0) {
            var_r0_23 = &spA0;
        }
        temp_r0_23 = temp_r4_25 + *var_r0_23;
        if (temp_r0_23 != 0) {
            temp_r4_26 = temp_r0_23 * 0x10;
            var_r0_24 = malloc(temp_r4_26);
            var_r8_12 = temp_r4_26;
            if (var_r0_24 == 0) {
                var_r0_24 = func_080D3BC0(var_r8_12);
            }
        } else {
            var_r0_24 = 0;
            var_r8_12 = 0;
        }
        sp188 = var_r0_24;
        var_r2_23 = temp_r6_12->unk0;
        var_r3_23 = var_r0_24;
loop_324:
        if (var_r2_23 != sp184) {
            if (var_r3_23 != 0) {
                var_r3_23->unk0 = (s32) var_r2_23->unk0;
                var_r3_23->unk4 = (s32) var_r2_23->unk4;
                var_r3_23->unk8 = (s32) var_r2_23->unk8;
                var_r3_23->unkC = (s32) var_r2_23->unkC;
            }
            var_r2_23 += 0x10;
            var_r3_23 += 0x10;
            goto loop_324;
        }
        temp_r1_17 = spA0;
        if (temp_r1_17 == 1) {
            if (var_r3_23 != 0) {
                var_r3_23->unk0 = (s32) sp8;
                var_r3_23->unk4 = (s32) sp8.unk4;
                var_r3_23->unk8 = (s32) sp8.unk8;
                var_r3_23->unkC = (s32) sp8.unkC;
            }
            var_r5_12 = (GenObj *)((u8 *)var_r3_23 + 0x10);
        } else {
            var_r3_24 = temp_r1_17;
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
        temp_r0_24 = temp_r6_12->unk0;
        var_r1_12 = temp_r0_24;
        if (temp_r0_24 != temp_r2_12) {
            do {
                var_r1_12 += 0x10;
            } while (var_r1_12 != temp_r2_12);
        }
        if (temp_r0_24 != 0) {
            free();
        }
        temp_r6_12->unk0 = sp188;
        temp_r6_12->unk4 = var_r5_12;
        temp_r6_12->unkC = (void *) (sp188 + var_r8_12);
    }
    temp_r6_13 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, &gUnk_0875300C, 0x05000240, 0x20);
    temp_r1_18 = temp_r6_13->unk4;
    if (temp_r1_18 != temp_r6_13->unkC) {
        if (temp_r1_18 != 0) {
            temp_r1_18->unk0 = (s32) sp8;
            temp_r1_18->unk4 = (s32) sp8.unk4;
            temp_r1_18->unk8 = (s32) sp8.unk8;
            temp_r1_18->unkC = (s32) sp8.unkC;
        }
        temp_r6_13->unk4 = (void *) (temp_r6_13->unk4 + 0x10);
    } else {
        sp184 = temp_r1_18;
        spA8 = 1;
        temp_r4_27 = (s32) (sp184 - temp_r6_13->unk0) >> 4;
        var_r0_25 = &spA4;
        *var_r0_25 = (u32) temp_r4_27;
        if ((u32) temp_r4_27 < (u32) spA8) {
            var_r0_25 = &spA8;
        }
        temp_r0_25 = temp_r4_27 + *var_r0_25;
        if (temp_r0_25 != 0) {
            temp_r4_28 = temp_r0_25 * 0x10;
            var_r0_26 = malloc(temp_r4_28);
            var_r8_13 = temp_r4_28;
            if (var_r0_26 == 0) {
                var_r0_26 = func_080D3BC0(var_r8_13);
            }
        } else {
            var_r0_26 = 0;
            var_r8_13 = 0;
        }
        sp188 = var_r0_26;
        var_r2_25 = temp_r6_13->unk0;
        var_r3_25 = var_r0_26;
        if (var_r2_25 != sp184) {
            do {
                if (var_r3_25 != 0) {
                    var_r3_25->unk0 = (s32) var_r2_25->unk0;
                    var_r3_25->unk4 = (s32) var_r2_25->unk4;
                    var_r3_25->unk8 = (s32) var_r2_25->unk8;
                    var_r3_25->unkC = (s32) var_r2_25->unkC;
                }
                var_r2_25 += 0x10;
                var_r3_25 += 0x10;
            } while (var_r2_25 != sp184);
        }
        temp_r1_19 = spA8;
        if (temp_r1_19 == 1) {
            if (var_r3_25 != 0) {
                var_r3_25->unk0 = (s32) sp8;
                var_r3_25->unk4 = (s32) sp8.unk4;
                var_r3_25->unk8 = (s32) sp8.unk8;
                var_r3_25->unkC = (s32) sp8.unkC;
            }
            var_r5_13 = (GenObj *)((u8 *)var_r3_25 + 0x10);
        } else {
            var_r3_26 = temp_r1_19;
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
        temp_r0_26 = temp_r6_13->unk0;
        var_r1_13 = temp_r0_26;
        if (temp_r0_26 != temp_r2_13) {
            do {
                var_r1_13 += 0x10;
            } while (var_r1_13 != temp_r2_13);
        }
        if (temp_r0_26 != 0) {
            free();
        }
        temp_r6_13->unk0 = sp188;
        temp_r6_13->unk4 = var_r5_13;
        temp_r6_13->unkC = (void *) (sp188 + var_r8_13);
    }
    temp_r6_14 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, &gUnk_08750C8C, 0x06002A00, 0x1A0);
    temp_r1_20 = temp_r6_14->unk4;
    if (temp_r1_20 != temp_r6_14->unkC) {
        if (temp_r1_20 != 0) {
            temp_r1_20->unk0 = (s32) sp8;
            temp_r1_20->unk4 = (s32) sp8.unk4;
            temp_r1_20->unk8 = (s32) sp8.unk8;
            temp_r1_20->unkC = (s32) sp8.unkC;
        }
        temp_r6_14->unk4 = (void *) (temp_r6_14->unk4 + 0x10);
    } else {
        sp184 = temp_r1_20;
        spB0 = 1;
        temp_r4_29 = (s32) (sp184 - temp_r6_14->unk0) >> 4;
        var_r0_27 = &spAC;
        *var_r0_27 = (u32) temp_r4_29;
        if ((u32) temp_r4_29 < (u32) spB0) {
            var_r0_27 = &spB0;
        }
        temp_r0_27 = temp_r4_29 + *var_r0_27;
        if (temp_r0_27 != 0) {
            temp_r4_30 = temp_r0_27 * 0x10;
            var_r0_28 = malloc(temp_r4_30);
            var_r8_14 = temp_r4_30;
            if (var_r0_28 == 0) {
                var_r0_28 = func_080D3BC0(var_r8_14);
            }
        } else {
            var_r0_28 = 0;
            var_r8_14 = 0;
        }
        sp188 = var_r0_28;
        var_r2_27 = temp_r6_14->unk0;
        var_r3_27 = var_r0_28;
loop_381:
        if (var_r2_27 != sp184) {
            if (var_r3_27 != 0) {
                var_r3_27->unk0 = (s32) var_r2_27->unk0;
                var_r3_27->unk4 = (s32) var_r2_27->unk4;
                var_r3_27->unk8 = (s32) var_r2_27->unk8;
                var_r3_27->unkC = (s32) var_r2_27->unkC;
            }
            var_r2_27 += 0x10;
            var_r3_27 += 0x10;
            goto loop_381;
        }
        temp_r1_21 = spB0;
        if (temp_r1_21 == 1) {
            if (var_r3_27 != 0) {
                var_r3_27->unk0 = (s32) sp8;
                var_r3_27->unk4 = (s32) sp8.unk4;
                var_r3_27->unk8 = (s32) sp8.unk8;
                var_r3_27->unkC = (s32) sp8.unkC;
            }
            var_r5_14 = (GenObj *)((u8 *)var_r3_27 + 0x10);
        } else {
            var_r3_28 = temp_r1_21;
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
        temp_r0_28 = temp_r6_14->unk0;
        var_r1_14 = temp_r0_28;
        if (temp_r0_28 != temp_r2_14) {
            do {
                var_r1_14 += 0x10;
            } while (var_r1_14 != temp_r2_14);
        }
        if (temp_r0_28 != 0) {
            free();
        }
        temp_r6_14->unk0 = sp188;
        temp_r6_14->unk4 = var_r5_14;
        temp_r6_14->unkC = (void *) (sp188 + var_r8_14);
    }
    temp_r6_15 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, &gUnk_0875166C, 0x06001380, 0x120);
    temp_r1_22 = temp_r6_15->unk4;
    if (temp_r1_22 != temp_r6_15->unkC) {
        if (temp_r1_22 != 0) {
            temp_r1_22->unk0 = (s32) sp8;
            temp_r1_22->unk4 = (s32) sp8.unk4;
            temp_r1_22->unk8 = (s32) sp8.unk8;
            temp_r1_22->unkC = (s32) sp8.unkC;
        }
        temp_r6_15->unk4 = (void *) (temp_r6_15->unk4 + 0x10);
    } else {
        sp184 = temp_r1_22;
        spB8 = 1;
        temp_r4_31 = (s32) (sp184 - temp_r6_15->unk0) >> 4;
        var_r0_29 = &spB4;
        *var_r0_29 = (u32) temp_r4_31;
        if ((u32) temp_r4_31 < (u32) spB8) {
            var_r0_29 = &spB8;
        }
        temp_r0_29 = temp_r4_31 + *var_r0_29;
        if (temp_r0_29 != 0) {
            temp_r4_32 = temp_r0_29 * 0x10;
            var_r0_30 = malloc(temp_r4_32);
            var_r8_15 = temp_r4_32;
            if (var_r0_30 == 0) {
                var_r0_30 = func_080D3BC0(var_r8_15);
            }
        } else {
            var_r0_30 = 0;
            var_r8_15 = 0;
        }
        sp188 = var_r0_30;
        var_r2_29 = temp_r6_15->unk0;
        var_r3_29 = var_r0_30;
        if (var_r2_29 != sp184) {
            do {
                if (var_r3_29 != 0) {
                    var_r3_29->unk0 = (s32) var_r2_29->unk0;
                    var_r3_29->unk4 = (s32) var_r2_29->unk4;
                    var_r3_29->unk8 = (s32) var_r2_29->unk8;
                    var_r3_29->unkC = (s32) var_r2_29->unkC;
                }
                var_r2_29 += 0x10;
                var_r3_29 += 0x10;
            } while (var_r2_29 != sp184);
        }
        temp_r1_23 = spB8;
        if (temp_r1_23 == 1) {
            if (var_r3_29 != 0) {
                var_r3_29->unk0 = (s32) sp8;
                var_r3_29->unk4 = (s32) sp8.unk4;
                var_r3_29->unk8 = (s32) sp8.unk8;
                var_r3_29->unkC = (s32) sp8.unkC;
            }
            var_r5_15 = (GenObj *)((u8 *)var_r3_29 + 0x10);
        } else {
            var_r3_30 = temp_r1_23;
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
        temp_r0_30 = temp_r6_15->unk0;
        var_r1_15 = temp_r0_30;
        if (temp_r0_30 != temp_r2_15) {
            do {
                var_r1_15 += 0x10;
            } while (var_r1_15 != temp_r2_15);
        }
        if (temp_r0_30 != 0) {
            free();
        }
        temp_r6_15->unk0 = sp188;
        temp_r6_15->unk4 = var_r5_15;
        temp_r6_15->unkC = (void *) (sp188 + var_r8_15);
    }
    temp_r6_16 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, &gUnk_087510AC, 0x060014A0, 0x120);
    temp_r1_24 = temp_r6_16->unk4;
    if (temp_r1_24 != temp_r6_16->unkC) {
        if (temp_r1_24 != 0) {
            temp_r1_24->unk0 = (s32) sp8;
            temp_r1_24->unk4 = (s32) sp8.unk4;
            temp_r1_24->unk8 = (s32) sp8.unk8;
            temp_r1_24->unkC = (s32) sp8.unkC;
        }
        temp_r6_16->unk4 = (void *) (temp_r6_16->unk4 + 0x10);
    } else {
        sp184 = temp_r1_24;
        spC0 = 1;
        temp_r4_33 = (s32) (sp184 - temp_r6_16->unk0) >> 4;
        var_r0_31 = &spBC;
        *var_r0_31 = (u32) temp_r4_33;
        if ((u32) temp_r4_33 < (u32) spC0) {
            var_r0_31 = &spC0;
        }
        temp_r0_31 = temp_r4_33 + *var_r0_31;
        if (temp_r0_31 != 0) {
            temp_r4_34 = temp_r0_31 * 0x10;
            var_r0_32 = malloc(temp_r4_34);
            var_r8_16 = temp_r4_34;
            if (var_r0_32 == 0) {
                var_r0_32 = func_080D3BC0(var_r8_16);
            }
        } else {
            var_r0_32 = 0;
            var_r8_16 = 0;
        }
        sp188 = var_r0_32;
        var_r2_31 = temp_r6_16->unk0;
        var_r3_31 = var_r0_32;
loop_438:
        if (var_r2_31 != sp184) {
            if (var_r3_31 != 0) {
                var_r3_31->unk0 = (s32) var_r2_31->unk0;
                var_r3_31->unk4 = (s32) var_r2_31->unk4;
                var_r3_31->unk8 = (s32) var_r2_31->unk8;
                var_r3_31->unkC = (s32) var_r2_31->unkC;
            }
            var_r2_31 += 0x10;
            var_r3_31 += 0x10;
            goto loop_438;
        }
        temp_r1_25 = spC0;
        if (temp_r1_25 == 1) {
            if (var_r3_31 != 0) {
                var_r3_31->unk0 = (s32) sp8;
                var_r3_31->unk4 = (s32) sp8.unk4;
                var_r3_31->unk8 = (s32) sp8.unk8;
                var_r3_31->unkC = (s32) sp8.unkC;
            }
            var_r5_16 = (GenObj *)((u8 *)var_r3_31 + 0x10);
        } else {
            var_r3_32 = temp_r1_25;
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
        temp_r0_32 = temp_r6_16->unk0;
        var_r1_16 = temp_r0_32;
        if (temp_r0_32 != temp_r2_16) {
            do {
                var_r1_16 += 0x10;
            } while (var_r1_16 != temp_r2_16);
        }
        if (temp_r0_32 != 0) {
            free();
        }
        temp_r6_16->unk0 = sp188;
        temp_r6_16->unk4 = var_r5_16;
        temp_r6_16->unkC = (void *) (sp188 + var_r8_16);
    }
    temp_r6_17 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, &gUnk_0875178C, 0x05000040, 0x20);
    temp_r1_26 = temp_r6_17->unk4;
    if (temp_r1_26 != temp_r6_17->unkC) {
        if (temp_r1_26 != 0) {
            temp_r1_26->unk0 = (s32) sp8;
            temp_r1_26->unk4 = (s32) sp8.unk4;
            temp_r1_26->unk8 = (s32) sp8.unk8;
            temp_r1_26->unkC = (s32) sp8.unkC;
        }
        temp_r6_17->unk4 = (void *) (temp_r6_17->unk4 + 0x10);
    } else {
        sp184 = temp_r1_26;
        spC8 = 1;
        temp_r4_35 = (s32) (sp184 - temp_r6_17->unk0) >> 4;
        var_r0_33 = &spC4;
        *var_r0_33 = (u32) temp_r4_35;
        if ((u32) temp_r4_35 < (u32) spC8) {
            var_r0_33 = &spC8;
        }
        temp_r0_33 = temp_r4_35 + *var_r0_33;
        if (temp_r0_33 != 0) {
            temp_r4_36 = temp_r0_33 * 0x10;
            var_r0_34 = malloc(temp_r4_36);
            var_r8_17 = temp_r4_36;
            if (var_r0_34 == 0) {
                var_r0_34 = func_080D3BC0(var_r8_17);
            }
        } else {
            var_r0_34 = 0;
            var_r8_17 = 0;
        }
        sp188 = var_r0_34;
        var_r2_33 = temp_r6_17->unk0;
        var_r3_33 = var_r0_34;
        if (var_r2_33 != sp184) {
            do {
                if (var_r3_33 != 0) {
                    var_r3_33->unk0 = (s32) var_r2_33->unk0;
                    var_r3_33->unk4 = (s32) var_r2_33->unk4;
                    var_r3_33->unk8 = (s32) var_r2_33->unk8;
                    var_r3_33->unkC = (s32) var_r2_33->unkC;
                }
                var_r2_33 += 0x10;
                var_r3_33 += 0x10;
            } while (var_r2_33 != sp184);
        }
        temp_r1_27 = spC8;
        if (temp_r1_27 == 1) {
            if (var_r3_33 != 0) {
                var_r3_33->unk0 = (s32) sp8;
                var_r3_33->unk4 = (s32) sp8.unk4;
                var_r3_33->unk8 = (s32) sp8.unk8;
                var_r3_33->unkC = (s32) sp8.unkC;
            }
            var_r5_17 = (GenObj *)((u8 *)var_r3_33 + 0x10);
        } else {
            var_r3_34 = temp_r1_27;
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
        temp_r0_34 = temp_r6_17->unk0;
        var_r1_17 = temp_r0_34;
        if (temp_r0_34 != temp_r2_17) {
            do {
                var_r1_17 += 0x10;
            } while (var_r1_17 != temp_r2_17);
        }
        if (temp_r0_34 != 0) {
            free();
        }
        temp_r6_17->unk0 = sp188;
        temp_r6_17->unk4 = var_r5_17;
        temp_r6_17->unkC = (void *) (sp188 + var_r8_17);
    }
    temp_r6_18 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, &gUnk_08750C4C, 0x060100A0, 0x20);
    temp_r1_28 = temp_r6_18->unk4;
    if (temp_r1_28 != temp_r6_18->unkC) {
        if (temp_r1_28 != 0) {
            temp_r1_28->unk0 = (s32) sp8;
            temp_r1_28->unk4 = (s32) sp8.unk4;
            temp_r1_28->unk8 = (s32) sp8.unk8;
            temp_r1_28->unkC = (s32) sp8.unkC;
        }
        temp_r6_18->unk4 = (void *) (temp_r6_18->unk4 + 0x10);
    } else {
        sp184 = temp_r1_28;
        spD0 = 1;
        temp_r4_37 = (s32) (sp184 - temp_r6_18->unk0) >> 4;
        var_r0_35 = &spCC;
        *var_r0_35 = (u32) temp_r4_37;
        if ((u32) temp_r4_37 < (u32) spD0) {
            var_r0_35 = &spD0;
        }
        temp_r0_35 = temp_r4_37 + *var_r0_35;
        if (temp_r0_35 != 0) {
            temp_r4_38 = temp_r0_35 * 0x10;
            var_r0_36 = malloc(temp_r4_38);
            var_r8_18 = temp_r4_38;
            if (var_r0_36 == 0) {
                var_r0_36 = func_080D3BC0(var_r8_18);
            }
        } else {
            var_r0_36 = 0;
            var_r8_18 = 0;
        }
        sp188 = var_r0_36;
        var_r2_35 = temp_r6_18->unk0;
        var_r3_35 = var_r0_36;
loop_495:
        if (var_r2_35 != sp184) {
            if (var_r3_35 != 0) {
                var_r3_35->unk0 = (s32) var_r2_35->unk0;
                var_r3_35->unk4 = (s32) var_r2_35->unk4;
                var_r3_35->unk8 = (s32) var_r2_35->unk8;
                var_r3_35->unkC = (s32) var_r2_35->unkC;
            }
            var_r2_35 += 0x10;
            var_r3_35 += 0x10;
            goto loop_495;
        }
        temp_r1_29 = spD0;
        if (temp_r1_29 == 1) {
            if (var_r3_35 != 0) {
                var_r3_35->unk0 = (s32) sp8;
                var_r3_35->unk4 = (s32) sp8.unk4;
                var_r3_35->unk8 = (s32) sp8.unk8;
                var_r3_35->unkC = (s32) sp8.unkC;
            }
            var_r5_18 = (GenObj *)((u8 *)var_r3_35 + 0x10);
        } else {
            var_r3_36 = temp_r1_29;
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
        temp_r0_36 = temp_r6_18->unk0;
        var_r1_18 = temp_r0_36;
        if (temp_r0_36 != temp_r2_18) {
            do {
                var_r1_18 += 0x10;
            } while (var_r1_18 != temp_r2_18);
        }
        if (temp_r0_36 != 0) {
            free();
        }
        temp_r6_18->unk0 = sp188;
        temp_r6_18->unk4 = var_r5_18;
        temp_r6_18->unkC = (void *) (sp188 + var_r8_18);
    }
    temp_r6_19 = func_08008910(spE8->unk0);
    func_08008F0C(&sp8, &gUnk_08750C6C, 0x05000220, 0x20);
    temp_r1_30 = temp_r6_19->unk4;
    if (temp_r1_30 != temp_r6_19->unkC) {
        if (temp_r1_30 != 0) {
            temp_r1_30->unk0 = (s32) sp8;
            temp_r1_30->unk4 = (s32) sp8.unk4;
            temp_r1_30->unk8 = (s32) sp8.unk8;
            temp_r1_30->unkC = (s32) sp8.unkC;
        }
        temp_r6_19->unk4 = (void *) (temp_r6_19->unk4 + 0x10);
    } else {
        sp184 = temp_r1_30;
        spD8 = 1;
        temp_r4_39 = (s32) (sp184 - temp_r6_19->unk0) >> 4;
        var_r0_37 = &spD4;
        *var_r0_37 = (u32) temp_r4_39;
        if ((u32) temp_r4_39 < (u32) spD8) {
            var_r0_37 = &spD8;
        }
        temp_r0_37 = temp_r4_39 + *var_r0_37;
        if (temp_r0_37 != 0) {
            temp_r4_40 = temp_r0_37 * 0x10;
            var_r0_38 = malloc(temp_r4_40);
            var_r8_19 = temp_r4_40;
            if (var_r0_38 == 0) {
                var_r0_38 = func_080D3BC0(var_r8_19);
            }
        } else {
            var_r0_38 = 0;
            var_r8_19 = 0;
        }
        sp188 = var_r0_38;
        var_r2_37 = temp_r6_19->unk0;
        var_r3_37 = var_r0_38;
        if (var_r2_37 != sp184) {
            do {
                if (var_r3_37 != 0) {
                    var_r3_37->unk0 = (s32) var_r2_37->unk0;
                    var_r3_37->unk4 = (s32) var_r2_37->unk4;
                    var_r3_37->unk8 = (s32) var_r2_37->unk8;
                    var_r3_37->unkC = (s32) var_r2_37->unkC;
                }
                var_r2_37 += 0x10;
                var_r3_37 += 0x10;
            } while (var_r2_37 != sp184);
        }
        temp_r1_31 = spD8;
        if (temp_r1_31 == 1) {
            if (var_r3_37 != 0) {
                var_r3_37->unk0 = (s32) sp8;
                var_r3_37->unk4 = (s32) sp8.unk4;
                var_r3_37->unk8 = (s32) sp8.unk8;
                var_r3_37->unkC = (s32) sp8.unkC;
            }
            var_r5_19 = (GenObj *)((u8 *)var_r3_37 + 0x10);
        } else {
            var_r3_38 = temp_r1_31;
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
        temp_r0_38 = temp_r6_19->unk0;
        var_r1_19 = temp_r0_38;
        if (temp_r0_38 != temp_r2_19) {
            do {
                var_r1_19 += 0x10;
            } while (var_r1_19 != temp_r2_19);
        }
        if (temp_r0_38 != 0) {
            free();
        }
        temp_r6_19->unk0 = sp188;
        temp_r6_19->unk4 = var_r5_19;
        temp_r6_19->unkC = (void *) (sp188 + var_r8_19);
    }
    spF0 = 4;
    *sp168 = (u8) spE8->unk58C->unk11;
    *sp160 = (s32 *)0xC8;
    temp_r1_32 = spE8->unk58C->unk10;
    *sp164 = ((temp_r1_32 >> 3) * 7) + ((u32) (temp_r1_32 << 0x1D) >> 0x1D);
    var_r1_20 = &spDC;
    if ((u32) *var_r1_20 > (u32) spE0) {
        var_r1_20 = &spE0;
    }
    var_r3_39 = *var_r1_20;
    if ((u32) ((u32) (spE8->unk58C->unk12 << 0x1B) >> 0x1B) <= 5U) {
        temp_r1_33 = spE4;
        temp_r2_20 = (u32) (temp_r1_33 << 0x19) >> 0x1B;
        if (temp_r2_20 == 0) {
            spE4 = (-4 & *sp168) | ((((u32) (temp_r1_33 << 0x1E) >> 0x1E) - 1) & 3);
            var_r2_39 = 0x1D;
        } else {
            var_r2_39 = temp_r2_20 - 1;
        }
        *sp168 = (u8) ((-0x7D & *sp168) | ((var_r2_39 & 0x1F) * 4));
        temp_r1_34 = *sp168;
        if ((((u32) (temp_r1_34 << 0x1E) >> 0x1E) == 3) && (((u32) (temp_r1_34 << 0x19) >> 0x1B) == 0x1D)) {
            var_r3_39 -= 1;
        }
    }
    temp_r4_41 = spF0 << 6;
    sp0 = (s32 *)0x20;
    func_0804EDB4(var_r3_39, spEC->unk18 + temp_r4_41 + 0xC, 0x120, 0);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r4_41 + 0xE, sp118 >> 0x10, 4, 2);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r4_41 + 0x1A, (((u32) (*sp168 << 0x1E) >> 0x1E) * 0xC) + 0x48, 6, 2);
    temp_r4_42 = (spF0 + 3) << 6;
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r4_42 + 0xA, sp174 >> 0x10, 2, 2);
    temp_r3_2 = (spF0 + 5) << 6;
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r3_2 + 0xA, sp17C >> 0x10, 2, 2);
    temp_sl = *func_0809B038(spE8->unk58C + 0x1AA8, 0U);
    temp_r4_43 = func_0809B038(spE8->unk58C + 0x1AA8, 0U)->unk4;
    sp0 = (s32 *)0x20;
    func_0804EDB4(temp_sl, spEC->unk18 + temp_r4_42 + 0x34, 0x120, 0);
    sp0 = (s32 *)0x20;
    func_0804EDB4(temp_r4_43, spEC->unk18 + temp_r3_2 + 0x34, 0x120, 0);
    temp_r4_44 = sp16C >> 0x10;
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r4_42 + 0x36, temp_r4_44, 2, 2);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r3_2 + 0x36, temp_r4_44, 2, 2);
    temp_r2_21 = spF0 + 8;
    spF0 = temp_r2_21;
    spC = 0x10;
    sp8 = (s16) (temp_r2_21 * 8);
    temp_r0_39 = spE8->unk1264;
    if (temp_r0_39 <= 0x3CU) {
        temp_r0_40 = (GenObj *)((u8 *)spE8 + 0x1264) + ((temp_r0_39 * 0x10) + 4);
        if (temp_r0_40 != 0) {
            temp_r0_40->unk0 = (s32) sp8;
            temp_r0_40->unk4 = (s32) sp8.unk4;
            temp_r0_40->unk8 = (s32) sp8.unk8;
            temp_r0_40->unkC = (s32) sp8.unkC;
        }
        spE8->unk1264 = (u32) (spE8->unk1264 + 1);
    }
    temp_r4_45 = (spF0 + 1) << 6;
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r4_45 + 8, 0x15BU, 1, 1);
    if (((spE8->unk58C + 0x1AA8)->unk4 << 0x1F) != 0) {
        sp0 = (s32 *)0x20;
        func_0804EE30(0x186A0U, spEC->unk18 + temp_r4_45 + 0x14, 0x150, 0);
    } else {
        sp0 = (s32 *)0x20;
        func_0804EE30(0x2710U, spEC->unk18 + temp_r4_45 + 0x12, 0x150, 0);
    }
    temp_r6_20 = spF0 << 6;
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r6_20 + 0x14, sp124 >> 0x10, 6, 2);
    sp0 = 0;
    sp4 = 0x20;
    func_0804E9F4(spEC->unk18 + temp_r6_20 + 0x24, sp12C >> 0x10, 8, 2);
    spF0 += 2;
    temp_r1_35 = spE8->unk58C;
    spF8 = 0x2710;
    if ((((GenObj *)((u8 *)temp_r1_35 + 0x1AA8))->unk4 << 0x1F) != 0) {
        spF8 = 0x186A0;
    }
    spFC = 0;
    if ((u32) temp_r1_35->unk1AB0 <= 0U) {

    } else if ((u32) (((u32) (*sp168 << 0x19) >> 0x1B) + 1) <= 0U) {

    } else {
        sp100 = (GenObj *)((u8 *)spE8 + 0x1264);
loop_561:
        temp_r5_6 = spF0 + 1;
        temp_r4_46 = temp_r5_6 << 6;
        sp0 = (s32 *)0x20;
        func_0804EDB4((((u32) (*sp168 << 0x19) >> 0x1B) + 1) - spFC, spEC->unk18 + temp_r4_46 + 8, 0x120, 0);
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(spEC->unk18 + temp_r4_46 + 0xA, 0x380000U >> 0x10, 2, 2);
        spC = 0x40;
        temp_r1_36 = spF0 * 8;
        sp8 = temp_r1_36;
        temp_r0_41 = *sp100;
        sp110 = temp_r5_6;
        if (temp_r0_41 <= 0x3CU) {
            temp_r0_42 = sp100 + ((temp_r0_41 * 0x10) + 4);
            if (temp_r0_42 != 0) {
                temp_r0_42->unk0 = (s32) sp8;
                temp_r0_42->unk4 = (s32) sp8.unk4;
                temp_r0_42->unk8 = (s32) sp8.unk8;
                temp_r0_42->unkC = (s32) sp8.unkC;
            }
            *sp100 += 1;
        }
        spC = 0xD0;
        sp8 = temp_r1_36;
        temp_r0_43 = spE8->unk1264;
        if (temp_r0_43 <= 0x3CU) {
            temp_r0_44 = (GenObj *)((u8 *)spE8 + 0x1264) + ((temp_r0_43 * 0x10) + 4);
            if (temp_r0_44 != 0) {
                temp_r0_44->unk0 = (s32) sp8;
                temp_r0_44->unk4 = (s32) sp8.unk4;
                temp_r0_44->unk8 = (s32) sp8.unk8;
                temp_r0_44->unkC = (s32) sp8.unkC;
            }
            spE8->unk1264 = (u32) (spE8->unk1264 + 1);
        }
        spC = 0x40;
        temp_r2_22 = spF0 + 2;
        sp8 = (s16) (temp_r2_22 * 8);
        temp_r0_45 = spE8->unk1638;
        if (temp_r0_45 <= 0x3BU) {
            temp_r0_46 = (GenObj *)((u8 *)spE8 + 0x1638) + ((temp_r0_45 * 0x10) + 4);
            if (temp_r0_46 != 0) {
                temp_r0_46->unk0 = (s32) sp8;
                temp_r0_46->unk4 = (s32) sp8.unk4;
                temp_r0_46->unk8 = (s32) sp8.unk8;
                temp_r0_46->unkC = (s32) sp8.unkC;
            }
            spE8->unk1638 = (u32) (spE8->unk1638 + 1);
        }
        spC = 0xE0;
        temp_r0_47 = spE8->unk1638;
        if (temp_r0_47 <= 0x3BU) {
            temp_r0_48 = (GenObj *)((u8 *)spE8 + 0x1638) + ((temp_r0_47 * 0x10) + 4);
            if (temp_r0_48 != 0) {
                temp_r0_48->unk0 = (s32) sp8;
                temp_r0_48->unk4 = (s32) sp8.unk4;
                temp_r0_48->unk8 = (s32) sp8.unk8;
                temp_r0_48->unkC = (s32) sp8.unkC;
            }
            spE8->unk1638 = (u32) (spE8->unk1638 + 1);
        }
        temp_r7 = *func_0809B018(spE8->unk58C + 0x1AA8, spFC);
        temp_r0_49 = temp_r7 / spF8;
        if (temp_r0_49 != 0) {
            temp_r6_21 = sp110 << 6;
            sp0 = 0;
            sp4 = 0x20;
            func_0804E9F4(spEC->unk18 + temp_r6_21 + 0x14, 0x15AU, 1, 1);
            if ((s32) temp_r0_49 > 0x64) {
                var_r1_21 = spEC->unk18 + temp_r6_21 + 0x1E;
                goto block_582;
            }
            if ((s32) temp_r0_49 > 0xA) {
                var_r1_21 = spEC->unk18 + temp_r6_21 + 0x1C;
block_582:
                sp0 = (s32 *)0x20;
                func_0804EE30(temp_r0_49, var_r1_21, 0x150, 0);
            } else {
                sp0 = (s32 *)0x20;
                func_0804EE30(temp_r0_49, spEC->unk18 + temp_r6_21 + 0x1A, 0x150, 0);
            }
        }
        temp_r0_50 = (u32) ((temp_r7 % spF8) * 0x50) / spF8;
        var_r6 = 0;
        sp114 = spF0 + 3;
        temp_r7_2 = spFC + 1;
loop_586:
        var_r1_22 = temp_r0_50;
        if ((s32) temp_r0_50 < 0) {
            var_r1_22 = temp_r0_50 + 7;
        }
        temp_r2_23 = (s32) var_r1_22 >> 3;
        if (var_r6 < temp_r2_23) {
            sp0 = (s32 *)2;
            sp4 = 0x20;
            func_0804E9F4(spEC->unk18 + (temp_r2_22 << 6) + ((0x11 - var_r6) * 2), 0xA4U, 1, 1);
            var_r6 += 1;
            goto loop_586;
        }
        if (var_r6 <= 9) {
            var_r1_23 = (temp_r0_50 - (temp_r2_23 * 8)) + 0x9C;
            sp0 = (s32 *)2;
            sp4 = 0x20;
            var_r0_39 = spEC->unk18 + (temp_r2_22 << 6) + ((0x11 - var_r6) * 2);
loop_592:
            func_0804E9F4(var_r0_39, (u32) var_r1_23, 1, 1);
            var_r6 += 1;
            if (var_r6 <= 9) {
                var_r0_39 = spEC->unk18 + (temp_r2_22 << 6) + ((0x11 - var_r6) * 2);
                sp0 = (s32 *)2;
                sp4 = 0x20;
                var_r1_23 = 0x9C;
                goto loop_592;
            }
        }
        var_r6_2 = 0;
        temp_r0_51 = func_0809B018(spE8->unk58C + 0x1AA8, spFC)->unk4;
        temp_r0_52 = temp_r0_51 / spF8;
        if (temp_r0_52 != 0) {
            temp_r4_47 = sp110 << 6;
            sp0 = 0;
            sp4 = 0x20;
            func_0804E9F4(spEC->unk18 + temp_r4_47 + 0x32, 0x15AU, 1, 1);
            sp0 = (s32 *)0x20;
            func_0804EE30(temp_r0_52, spEC->unk18 + temp_r4_47 + 0x30, 0x150, 0);
        }
        temp_r0_53 = (u32) ((temp_r0_51 % spF8) * 0x50) / spF8;
        var_r5_20 = 0x24;
loop_597:
        var_r1_24 = temp_r0_53;
        if ((s32) temp_r0_53 < 0) {
            var_r1_24 = temp_r0_53 + 7;
        }
        temp_r2_24 = (s32) var_r1_24 >> 3;
        if (var_r6_2 < temp_r2_24) {
            sp0 = (s32 *)2;
            sp4 = 0x20;
            func_0804E9F4(spEC->unk18 + (temp_r2_22 << 6) + var_r5_20, 0xADU, 1, 1);
            var_r5_20 += 2;
            var_r6_2 += 1;
            goto loop_597;
        }
        if (var_r6_2 <= 9) {
            sp0 = (s32 *)2;
            sp4 = 0x20;
            func_0804E9F4(spEC->unk18 + (temp_r2_22 << 6) + ((var_r6_2 + 0x12) * 2), (u32) (u16) ((temp_r0_53 - (temp_r2_24 * 8)) + 0xA5), 1, 1);
            var_r6_3 = var_r6_2 + 1;
            if (var_r6_3 <= 9) {
                var_r4 = (var_r6_3 * 2) + 0x24;
                do {
                    sp0 = (s32 *)2;
                    sp4 = 0x20;
                    func_0804E9F4(spEC->unk18 + (temp_r2_22 << 6) + var_r4, 0xA5U, 1, 1);
                    var_r4 += 2;
                    var_r6_3 += 1;
                } while (var_r6_3 <= 9);
            }
        }
        spF0 = sp114;
        spFC = temp_r7_2;
        if ((temp_r7_2 < (u32) spE8->unk58C->unk1AB0) && (temp_r7_2 < (u32) (((u32) (*sp168 << 0x19) >> 0x1B) + 1))) {
            goto loop_561;
        }
    }
    temp_r3_3 = spF0 + 1;
    spF0 = temp_r3_3;
    var_sb = 1;
    if ((u32) spE8->unk58C->unk1BA4 <= 1U) {

    } else {
        var_r7 = (temp_r3_3 << 6) + 0x80;
        sp108 = (GenObj *)((u8 *)spE8 + 0x58C);
loop_610:
        temp_r2_25 = (-4 & sp104) | (((u32) (*sp168 << 0x1E) >> 0x1E) & 3);
        sp104 = temp_r2_25;
        temp_r6_22 = spF0 << 6;
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(spEC->unk18 + temp_r6_22 + 4, (((((u32) (temp_r2_25 << 0x1E) >> 0x1E) - var_sb) & 3) * 0xC) + 0x48, 6, 2);
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(spEC->unk18 + temp_r6_22 + 0x12, sp174 >> 0x10, 2, 2);
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(spEC->unk18 + var_r7 + 0x12, sp17C >> 0x10, 2, 2);
        temp_r4_48 = *func_0809B038(*sp108 + 0x1AA8, var_sb);
        temp_r5_7 = func_0809B038(*sp108 + 0x1AA8, var_sb)->unk4;
        sp0 = (s32 *)0x20;
        func_0804EDB4(temp_r4_48, spEC->unk18 + temp_r6_22 + 0x34, 0x120, 0);
        sp0 = (s32 *)0x20;
        func_0804EDB4(temp_r5_7, spEC->unk18 + var_r7 + 0x34, 0x120, 0);
        temp_r4_49 = sp16C >> 0x10;
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(spEC->unk18 + temp_r6_22 + 0x36, temp_r4_49, 2, 2);
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(spEC->unk18 + var_r7 + 0x36, temp_r4_49, 2, 2);
        var_r7 += 0x140;
        spF0 += 5;
        var_sb += 1;
        if (var_sb < (u32) (*sp108)->unk1BA4) {
            goto loop_610;
        }
    }
    func_08075E24(spEC, (s16) (spF0 * 8));
    return spE8;
}

