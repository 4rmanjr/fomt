#include "common.h"
u16 GetIconId__C4Tool(s32 *);                         /* extern */
u16 GetIconId__C7Article(void *);                   /* extern */
s32 __4ToolUi(s32 *, s32);                              /* extern */
s32 __7ArticleUi(void *, s32);                        /* extern */
s32 func_0804E9F4(s32, s32, s32, s32);                /* extern */
s32 func_0804EDB4(s32, s32, s32, s32);                /* extern */
s32 func_0805E6CC(s32 **, s32 *);                         /* extern */
s32 func_0805E824(void ***, s32 **, s32, s32);          /* extern */
s32 func_0805E860(void ***, u16);                     /* extern */
s32 func_08075DD4(void *);                            /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
extern s32 gUnk_080FE484;
extern s32 gUnk_086678A0;
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
    void *unk1C;
    s32 unk20;
    u8 _pad24[640];
    s32 unk2A4;
} GenObj;
s32 func_0807F6E8(GenObj *arg0) {
    s32 sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 *sp18;
s32 sp48;
    void **sp4C;
s32 sp60;
    s8 sp7C;
    GenObj *sp80;
    s32 sp88;
    s32 sp90;
s32 sp98;
GenObj spA0;
s32 spC0;
s32 spC4;
    u32 *spCC;
    s32 *var_r6;
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_4;
    s32 var_r0;
    s32 var_r1;
    s32 var_sl;
    u16 var_r0_2;
    u32 temp_r0_4;
    u32 var_r8;
    void *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_5;
    void *temp_r4_2;
    void *temp_r4_3;

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
    sp90 = 0;
    sp90.unk4 = 0;
    sp98 = 0;
    sp98.unk4 = 0;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x24);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x20) + ((arg0->unk20 * 0x10) + 4);
    var_r1 = temp_r4;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r0);
    }
    arg0->unk20 = (u32) (arg0->unk20 - ((s32) (temp_r0 - temp_r4) >> 4));
    func_08075DD4(arg0->unk1C);
    var_r8 = 0;
    if ((u32) arg0->unk2A4 <= 0U) {

    } else {
        spCC = (GenObj *)((u8 *)arg0 + 0x2A4);
        var_r6 = (GenObj *)((u8 *)arg0 + 0x2A8);
loop_5:
        sp8 = (s16) (var_sl * 8);
        temp_r2 = *var_r6;
        temp_r0_2 = (temp_r2 * 8) + &gUnk_080FE484;
        spC4 = (s32) temp_r0_2->unk0;
        spC4.unk4 = (s32) temp_r0_2->unk4;
        var_r0 = 0;
        if (temp_r2 <= 2) {
            var_r0 = 1;
        }
        if (var_r0 == 0) {
            __4ToolUi(&spC0, spC4);
            var_r0_2 = GetIconId__C4Tool(&spC0);
        } else {
            temp_r4_2 = &sp0 + 0xC1;
            __7ArticleUi(temp_r4_2, spC4);
            var_r0_2 = GetIconId__C7Article(temp_r4_2);
        }
        func_0805E860(&sp4C, var_r0_2);
        (*sp4C)->unk10(&spA0, sp4C, *((u8 *)sp50 + (sp4C.unkC * 4)));
        memcpy(&spA0, &spA0, 0x20);
        temp_r4_3 = &(GenObj *)((u8 *)spA0 + 0xC);
        sp80.unk0 = spA0;
        sp80.unk4 = (s32) spA0.unk4;
        sp80.unk8 = (s32) spA0.unk8;
        temp_r0_3 = &(GenObj *)((u8 *)sp80 + 0xC);
        sp80.unkC = (s32) spA0.unkC;
        temp_r0_3->unk4 = (s32) temp_r4_3->unk4;
        temp_r0_3->unk8 = (s32) temp_r4_3->unk8;
        temp_r0_3->unkC = (s32) temp_r4_3->unkC;
        ((GenObj *)((u8 *)temp_r0_3 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r4_3 + 0xC))->unk4;
        sp10 = sp88;
        sp14 = sp90;
        temp_r0_4 = arg0->unk20;
        if (temp_r0_4 <= 0x27U) {
            temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x20) + ((temp_r0_4 * 0x10) + 4);
            if (temp_r0_5 != 0) {
                temp_r0_5->unk0 = (s32) sp8;
                temp_r0_5->unk4 = (s32) sp8.unk4;
                temp_r0_5->unk8 = (s32) sp8.unk8;
                temp_r0_5->unkC = (s32) sp8.unkC;
            }
            arg0->unk20 = (u32) (arg0->unk20 + 1);
        }
        temp_r4_4 = var_sl << 6;
        sp0 = 0x20;
        func_0804EDB4(spC4.unk4, arg0->unk1C->unk18 + temp_r4_4 + 0x32, 0xA0, 0);
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(arg0->unk1C->unk18 + temp_r4_4 + 0x34, 0x20, 2, 2);
        var_sl += 2;
        var_r6 += 4;
        var_r8 += 1;
        if (var_r8 < (u32) *spCC) {
            goto loop_5;
        }
    }
    sp18 = &vtable_unk_080E5A28;
    return var_sl;
}

