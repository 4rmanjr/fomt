#include "common.h"
s8 GetArticle__C12RucksackItem(void *);             /* extern */
s32 GetFood__C12RucksackItem(s32 *, void *);            /* extern */
u16 GetIconId__C4Food(s32 *);                         /* extern */
u16 GetIconId__C7Article();                         /* extern */
s32 GetKind__C12RucksackItem(void *);               /* extern */
s32 IsEmpty__C12RucksackItem(void *);               /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 func_080074C0(void *, s32);                     /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_08008910(void *);                          /* extern */
s32 func_08008940(void *);                          /* extern */
s32 func_08008E64(s32 **, s32, u16);                    /* extern */
s32 func_08008EB8(s32, void *, s32);                  /* extern */
s32 func_0804E5AC(s32, ? *, s32, s32);                /* extern */
s32 func_0804E7A0(s32, ? *, s32);                     /* extern */
s32 func_0805E790(s32 **, void *, s32);                 /* extern */
void *func_080CAFC4(s32, s32, s32, s32);            /* extern */
s32 func_080CB090(void *);                            /* extern */
s32 func_080CB304(void *, s32, ? *, u16);             /* extern */
void *func_080CC15C(s32, s32, s32, s32);            /* extern */
s32 func_080CC310(void *);                            /* extern */
s32 func_080CD620();                                  /* extern */
s32 memcpy(s32 **, ? **, s32);                          /* extern */
extern ? gUnk_08101038;
extern ? gUnk_08101044;
extern ? gUnk_08101048;
extern ? gUnk_0811785C;
extern ? gUnk_086678A0;
extern ? *gUnk_08750C8C;

void func_0809964C(void *arg0) {
    ? *sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
    s32 sp10;
    ? **sp18;
    ? **sp20;
    s32 sp28;
s32 sp30;
s32 sp54;
    s8 sp94;
    u16 *sp98;
s32 spA0;
s32 spA4;
    ? **spA8;
    ? **spAC;
    void *spB0;
    s32 *spB4;
    ? **spB8;
    ? **spBC;
    ? **spC0;
    ? **spC4;
    ? **temp_r1_3;
    ? **temp_r4;
    s16 *var_r0_2;
    s16 *var_r2_5;
    s32 temp_r1_10;
    s32 temp_r1_12;
    s32 temp_r1_13;
    s32 temp_r1_8;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r3;
    s32 var_r5;
    s32 var_r5_2;
    u16 var_r0;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r2_3;
    u16 var_r2_4;
    u8 temp_r1_14;
    u8 temp_r4_4;
    void **temp_r1_6;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_11;
    void *temp_r0_12;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_11;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_7;
    void *temp_r1_9;
    void *temp_r4_3;
    void *temp_r4_5;
    void *var_r0_3;
    void *var_r4;

    func_080CD620();
    temp_r1 = arg0->unk78;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        temp_r1->unk210->unk8(temp_r1, 3);
    }
    arg0->unk78 = 0;
    temp_r6 = __builtin_new(0x29C);
    temp_r5 = func_08008910(arg0);
    temp_r2 = func_08008940(arg0);
    sp0 = &gUnk_08101038;
    sp4 = 0;
    temp_r0 = func_080CAFC4(temp_r6, temp_r5, temp_r2, 8);
    temp_r1_2 = arg0->unk78;
    if ((temp_r0 != temp_r1_2) && (temp_r1_2 != 0)) {
        temp_r1_2->unk210->unk8(temp_r1_2, 3);
    }
    arg0->unk78 = temp_r0;
    func_080CB090(arg0->unk78);
    var_r5 = 0;
    temp_r4 = &sp0 + 0x10;
    spB8 = temp_r4;
    spBC = &sp0 + 0x18;
    temp_r1_3 = &sp0 + 0x20;
    spC0 = temp_r1_3;
    spB4 = arg0 + 0x1CC;
    spC4 = temp_r4 + 0x20;
    temp_r0_2 = arg0 + 0xF8;
    spAC = temp_r1_3 + 0x78;
    spB0 = arg0 + 0xC8;
    var_r4 = arg0 + 0x2BB0;
    do {
        if ((IsEmpty__C12RucksackItem(var_r4) << 0x18) == 0) {
            if (GetKind__C12RucksackItem(var_r4) == 0) {
                GetFood__C12RucksackItem(&spC, var_r4);
                var_r0 = GetIconId__C4Food(&spC);
            } else {
                sp94 = GetArticle__C12RucksackItem(var_r4);
                var_r0 = GetIconId__C7Article();
            }
            sp0 = (s32 *)1;
            func_080CB304(arg0->unk78, var_r5, &gUnk_086678A0, var_r0);
        }
        var_r4 += 4;
        var_r5 += 1;
    } while (var_r5 <= 7);
    temp_r1_4 = arg0->unk7C;
    if ((temp_r1_4 != 0) && (temp_r1_4 != 0)) {
        temp_r1_4->unk210->unk8(temp_r1_4, 3);
    }
    arg0->unk7C = 0;
    temp_r5_2 = __builtin_new(0x32C);
    temp_r4_2 = func_08008910(arg0);
    temp_r2_2 = func_08008940(arg0);
    sp0 = &gUnk_08101044;
    sp4 = 0;
    temp_r0_3 = func_080CC15C(temp_r5_2, temp_r4_2, temp_r2_2, 8);
    temp_r1_5 = arg0->unk7C;
    if ((temp_r0_3 != temp_r1_5) && (temp_r1_5 != 0)) {
        temp_r1_5->unk210->unk8(temp_r1_5, 3);
    }
    arg0->unk7C = temp_r0_3;
    func_080CC310(arg0->unk7C);
    temp_r0_4 = arg0 + 0x310;
    func_08008E64(&gUnk_08750C8C, (func_08007D4C(temp_r0_4, temp_r0_4->unk4) << 5) + 0x06010000, 0x1C0U);
    sp10 = 0;
    spB8->unk4 = 0;
    sp18 = 0;
    spBC->unk4 = 0U;
    sp20 = 0;
    spC0->unk4 = 0U;
    sp28 = 0;
    sp28.unk4 = 0;
    temp_r1_6 = arg0->unk1C8;
    (*temp_r1_6)->unk10(&sp30, temp_r1_6, *(*spB4 + ((arg0 + 0x1C8)->unkC * 4)));
    memcpy(spC4, spC4, 0x20);
    temp_r0_5 = spC4 + 0xC;
    spB8->unk0 = spC4->unk0;
    spB8->unk4 = (s32) spC4->unk4;
    spB8->unk8 = (s32) spC4->unk8;
    temp_r1_7 = spB8 + 0xC;
    spB8->unkC = (s32) spC4->unkC;
    temp_r1_7->unk4 = (s32) temp_r0_5->unk4;
    temp_r1_7->unk8 = (s32) temp_r0_5->unk8;
    temp_r1_7->unkC = (s32) temp_r0_5->unkC;
    (temp_r1_7 + 0xC)->unk4 = (s32) (temp_r0_5 + 0xC)->unk4;
    temp_r0_6 = arg0 + 0x2E8;
    temp_r1_8 = (func_080074C0(temp_r0_6, temp_r0_6->unk4) << 5) + 0x05000200;
    var_r2 = 0;
    if (sp20 != 0) {
        var_r2 = spC0->unk4;
    }
    func_08008E64(sp20, temp_r1_8, var_r2);
    temp_r4_3 = arg0->unkF8;
    temp_r4_3->unkC(spAC, temp_r0_2, 1);
    temp_r4_3->unk10(spC4, temp_r0_2, *sp98);
    memcpy(spC4, spC4, 0x20);
    temp_r0_7 = spC4 + 0xC;
    spB8->unk0 = spC4->unk0;
    spB8->unk4 = (s32) spC4->unk4;
    spB8->unk8 = (s32) spC4->unk8;
    temp_r1_9 = spB8 + 0xC;
    spB8->unkC = (s32) spC4->unkC;
    temp_r1_9->unk4 = (s32) temp_r0_7->unk4;
    temp_r1_9->unk8 = (s32) temp_r0_7->unk8;
    temp_r1_9->unkC = (s32) temp_r0_7->unkC;
    (temp_r1_9 + 0xC)->unk4 = (s32) (temp_r0_7 + 0xC)->unk4;
    temp_r0_8 = arg0 + 0x320;
    temp_r1_10 = (func_080074C0(temp_r0_8, temp_r0_8->unk4) << 5) + 0x05000200;
    var_r2_2 = 0;
    if (sp20 != 0) {
        var_r2_2 = spC0->unk4;
    }
    func_08008E64(sp20, temp_r1_10, var_r2_2);
    func_0805E790(spC4, spB0, 0);
    temp_r0_9 = spC4 + 0xC;
    spB8->unk0 = spC4->unk0;
    spB8->unk4 = (s32) spC4->unk4;
    spB8->unk8 = (s32) spC4->unk8;
    temp_r1_11 = spB8 + 0xC;
    spB8->unkC = (s32) spC4->unkC;
    temp_r1_11->unk4 = (s32) temp_r0_9->unk4;
    temp_r1_11->unk8 = (s32) temp_r0_9->unk8;
    temp_r1_11->unkC = (s32) temp_r0_9->unkC;
    (temp_r1_11 + 0xC)->unk4 = (s32) (temp_r0_9 + 0xC)->unk4;
    temp_r0_10 = arg0 + 0x2F8;
    temp_r1_12 = (func_080074C0(temp_r0_10, temp_r0_10->unk4) << 5) + 0x05000200;
    var_r2_3 = 0;
    if (sp20 != 0) {
        var_r2_3 = spC0->unk4;
    }
    func_08008E64(sp20, temp_r1_12, var_r2_3);
    temp_r0_11 = arg0 + 0x2F0;
    temp_r1_13 = (func_08007D4C(temp_r0_11, temp_r0_11->unk4) << 5) + 0x06010000;
    var_r2_4 = 0;
    if (sp18 != 0) {
        var_r2_4 = spBC->unk4;
    }
    func_08008E64(sp18, temp_r1_13, var_r2_4);
    func_08008EB8(0, (func_08007D4C(arg0 + 0x300, arg0->unk304) << 5) + 0x06010000, 0x700);
    var_r5_2 = 0;
    spA8 = &sp0 + 0x54;
    do {
        temp_r4_4 = *(var_r5_2 + &gUnk_08101048);
        if (temp_r4_4 != 0) {
            spA0.unk0 = 1;
            spA0.unk2 = 2;
            func_0804E7A0((s32) spA0.unk0, &sp54, 0);
            spA4.unk0 = 1;
            spA4.unk2 = 2;
            sp0 = (s32 *) temp_r4_4;
            sp4 = 0;
            sp8 = 1;
            func_0804E5AC((s32) spA4.unk0, &sp54, 0, 0);
            func_08008E64(spA8, ((func_08007D4C(arg0 + 0x300, arg0->unk304) + (var_r5_2 * 2)) << 5) + 0x06010000, 0x40U);
        }
        var_r5_2 += 1;
    } while (var_r5_2 <= 0x10);
    temp_r4_5 = arg0 + 0x308;
    *(0x05000200 + (func_080074C0(temp_r4_5, temp_r4_5->unk4) << 5)) = 0x3E0;
    *(0x05000202 + (func_080074C0(temp_r4_5, temp_r4_5->unk4) << 5)) = 0;
    *(0x05000204 + (func_080074C0(temp_r4_5, temp_r4_5->unk4) << 5)) = 0x4218;
    func_08008EB8(0x30003, arg0 + 0x2BD0, 0x300);
    var_r3 = 0;
    do {
        var_r3 += 1;
        temp_r0_12 = (var_r3 * 4) + &gUnk_0811785C;
        temp_r1_14 = temp_r0_12->unk0;
        temp_r2_3 = temp_r0_12->unk1 << 6;
        var_r0_2 = temp_r2_3 + (((temp_r1_14 + 1) * 2) + 0x2BD0) + arg0;
        var_r2_5 = temp_r2_3 + ((temp_r1_14 * 2) + 0x2BD0) + arg0;
        var_r1 = 1;
loop_33:
        *var_r2_5 = 0x101C;
        *var_r0_2 = 0x101C;
        var_r0_2 += 0x40;
        var_r2_5 += 0x40;
        var_r1 -= 1;
        if (var_r1 >= 0) {
            goto loop_33;
        }
    } while (var_r3 <= 7);
    var_r0_3 = arg0 + 0x2BEC;
    var_r1_2 = 0xB;
    do {
        var_r0_3->unk0 = 8;
        var_r0_3->unk2 = 2;
        var_r0_3 += 0x40;
        var_r1_2 -= 1;
    } while (var_r1_2 >= 0);
}

