#include "common.h"
u16 GetIconId__C7Article(s32 *);                      /* extern */
s32 __7ArticleUi(s32 *);                                /* extern */
s32 func_0804E9F4(s32, s32, s32, s32);                /* extern */
s32 func_0804EDB4(s32, s32, s32, s32);                /* extern */
s32 func_0805E6CC(s32 **, ? *);                         /* extern */
s32 func_0805E824(void ***, ? **, s32, s32);          /* extern */
s32 func_0805E860(void ***, u16);                     /* extern */
s32 func_08075DB8(void *, s16);                       /* extern */
s32 func_08075DD4(void *);                            /* extern */
s32 func_08075E24(void *, s16);                       /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
extern ? gUnk_080FE8FC;
extern ? gUnk_086678A0;
extern ? gUnk_08753608;
extern ? vtable_unk_080E5A28;

void func_08080E68(void *arg0) {
    ? *sp0;
    s32 sp4;
s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    ? *sp18;
s32 sp48;
    void **sp4C;
s32 sp60;
    s8 sp7C;
    s32 sp80;
    s32 sp88;
    s32 sp90;
s32 sp98;
s32 spA0;
s32 spF0;
    void **spF4;
    s32 spF8;
s32 sp108;
    s8 sp124;
s32 sp128;
s32 sp12C;
    s32 sp134;
    u32 *sp138;
    ? **sp13C;
    ? **temp_r3;
    s32 *var_r8;
    s32 temp_r4;
    u32 temp_r0_4;
    u32 temp_r0_7;
    u32 var_sl;
    void **temp_r1_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_8;
    void *temp_r1;
    void *temp_r1_3;
    void *temp_r2;
    void *var_r1;

    spC = 0x10;
    sp134 = 4;
    func_0805E6CC(&sp18, &gUnk_086678A0);
    sp48.unk0 = 0;
    sp48.unk2 = 0;
    func_0805E824(&sp4C, &sp18, 0, 0x100);
    sp60.unk0 = 0;
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
    sp88.unk0 = 0;
    sp88.unk4 = 0;
    sp90.unk0 = 0;
    sp90.unk4 = 0;
    sp98.unk0 = 0;
    sp98.unk4 = 0;
    func_08075DD4(arg0->unk1C);
    temp_r2 = arg0 + 0x24;
    temp_r0 = arg0 + 0x20 + ((arg0->unk20 * 0x10) + 4);
    var_r1 = temp_r2;
    if (var_r1 != temp_r0) {
        do {
            var_r1 += 0x10;
        } while (var_r1 != temp_r0);
    }
    arg0->unk20 = (u32) (arg0->unk20 - ((s32) (temp_r0 - temp_r2) >> 4));
    var_sl = 0;
    if ((u32) arg0->unk2A4 <= 0U) {

    } else {
        sp138 = arg0 + 0x2A4;
        var_r8 = arg0 + 0x2A8;
loop_5:
        sp8.unk0 = (s16) (sp134 * 8);
        temp_r0_2 = (*var_r8 * 8) + &gUnk_080FE8FC;
        sp12C.unk0 = (s32) temp_r0_2->unk0;
        sp12C.unk4 = (s32) temp_r0_2->unk4;
        if (sp12C.unk0 != 0xA) {
            __7ArticleUi(&sp128);
            func_0805E860(&sp4C, GetIconId__C7Article(&sp128));
            (*sp4C)->unk10(&spA0, sp4C, *(sp50 + (sp4C.unkC * 4)));
            memcpy(&spA0, &spA0, 0x20);
            temp_r0_3 = &spA0 + 0xC;
            sp80.unk0 = spA0.unk0;
            sp80.unk4 = (s32) spA0.unk4;
            sp80.unk8 = (s32) spA0.unk8;
            temp_r1 = &sp80 + 0xC;
            sp80.unkC = (s32) spA0.unkC;
            temp_r1->unk4 = (s32) temp_r0_3->unk4;
            temp_r1->unk8 = (s32) temp_r0_3->unk8;
            temp_r1->unkC = (s32) temp_r0_3->unkC;
            (temp_r1 + 0xC)->unk4 = (s32) (temp_r0_3 + 0xC)->unk4;
            sp10 = sp88;
            sp14 = sp90;
            temp_r0_4 = arg0->unk20;
            if (temp_r0_4 <= 0x27U) {
                temp_r0_5 = arg0 + 0x20 + ((temp_r0_4 * 0x10) + 4);
                if (temp_r0_5 != 0) {
                    temp_r0_5->unk0 = (s32) sp8.unk0;
                    temp_r0_5->unk4 = (s32) sp8.unk4;
                    temp_r0_5->unk8 = (s32) sp8.unk8;
                    temp_r0_5->unkC = (s32) sp8.unkC;
                }
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
        } else {
            temp_r3 = &sp0 + 0xC0;
            sp13C = temp_r3;
            func_0805E6CC(temp_r3, &gUnk_08753608);
            spF0.unk0 = 0;
            spF0.unk2 = 0;
            func_0805E824(&spF4, sp13C, 0, 0x100);
            sp108.unk0 = 0;
            sp108.unk2 = 0;
            sp108.unk4 = 0;
            sp108.unk6 = 0;
            sp108.unk8 = 0;
            sp108.unkC = 0;
            sp108.unk10 = 0;
            sp108.unk11 = 0;
            sp108.unk14 = 0;
            sp108.unk18 = 0;
            sp124 = 0;
            temp_r1_2 = spF4.unk0;
            (*temp_r1_2)->unk10(&spA0, temp_r1_2, *(spF8 + (spF4.unkC * 4)));
            memcpy(&spA0, &spA0, 0x20);
            temp_r0_6 = &spA0 + 0xC;
            sp80.unk0 = spA0.unk0;
            sp80.unk4 = (s32) spA0.unk4;
            sp80.unk8 = (s32) spA0.unk8;
            temp_r1_3 = &sp80 + 0xC;
            sp80.unkC = (s32) spA0.unkC;
            temp_r1_3->unk4 = (s32) temp_r0_6->unk4;
            temp_r1_3->unk8 = (s32) temp_r0_6->unk8;
            temp_r1_3->unkC = (s32) temp_r0_6->unkC;
            (temp_r1_3 + 0xC)->unk4 = (s32) (temp_r0_6 + 0xC)->unk4;
            sp10 = sp88;
            sp14 = sp90;
            temp_r0_7 = arg0->unk20;
            if (temp_r0_7 <= 0x27U) {
                temp_r0_8 = arg0 + 0x20 + ((temp_r0_7 * 0x10) + 4);
                if (temp_r0_8 != 0) {
                    temp_r0_8->unk0 = (s32) sp8.unk0;
                    temp_r0_8->unk4 = (s32) sp8.unk4;
                    temp_r0_8->unk8 = (s32) sp8.unk8;
                    temp_r0_8->unkC = (s32) sp8.unkC;
                }
                arg0->unk20 = (u32) (arg0->unk20 + 1);
            }
            *sp13C = &vtable_unk_080E5A28;
        }
        temp_r4 = sp134 << 6;
        sp0 = (s32 *)0x20;
        func_0804EDB4(sp12C.unk4, arg0->unk1C->unk18 + temp_r4 + 0x32, 0xA0, 0);
        sp0 = 0;
        sp4 = 0x20;
        func_0804E9F4(arg0->unk1C->unk18 + temp_r4 + 0x34, 0x20, 2, 2);
        sp134 += 2;
        var_r8 += 4;
        var_sl += 1;
        if (var_sl < (u32) *sp138) {
            goto loop_5;
        }
    }
    arg0->unkC = 0;
    arg0->unk648 = 0x28;
    func_08075DB8(arg0->unk1C, arg0->unkC);
    func_08075E24(arg0->unk1C, (s16) ((sp134 + 8) * 8));
    sp18 = &vtable_unk_080E5A28;
}

