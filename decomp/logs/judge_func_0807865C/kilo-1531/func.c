#include "common.h"
s32 GetFirstSlotWithArticle__C8RucksackUi(s32, s32); /* extern */
s32 GetFirstSlotWith__C5ShelfUi(s32, s32);          /* extern */
s32 GetId__C7Article();                             /* extern */
s32 GetShelf__C9FarmHouse(void *);                  /* extern */
s32 __5ActorRC5Actor(s32 *, void *);                    /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_0800770C(s32 *);                               /* extern */
s32 func_08007714(s32 *, s32);                          /* extern */
s32 func_0800835C(s32 *);                               /* extern */
s32 func_08008364(s32 *, s32);                          /* extern */
s32 func_08008444(void *);                            /* extern */
s32 func_0800E924(s32 *, s32);                          /* extern */
s32 func_0800E934(s32);                             /* extern */
s32 func_0800E940(s32);                             /* extern */
s32 func_0800F190(void *);                          /* extern */
s32 func_0800F204(void *);                          /* extern */
s8 func_0800F258(void *);                           /* extern */
s32 func_0800FFE0(s32 *, void *);                       /* extern */
s32 func_0803C5B0(void *);                            /* extern */
s32 func_08050CC0(void *, s32, s32, s32);             /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E760(s32 *, void *, u16);                /* extern */
s32 func_0805E790(s32 *, void *, u16);                  /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
s32 func_080756B0(void *);                            /* extern */
s32 func_080757E8(void *, ? *);                       /* extern */
s32 func_080782EC(void *, ? *, s32);                  /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, u32);                            /* extern */
? *method_08009AF4__C4Farm(s32);                    /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_080FC6C2;
extern ? gUnk_080FC6CC;
extern ? gUnk_080FC6D4;
extern ? gUnk_080FC6E8;
extern ? gUnk_08728208;
extern ? gUnk_087537D0;
extern ? vtable_unk_080E7BB4;
extern ? vtable_unk_080E7BC0;

void *func_0807865C(void *arg0, void *arg1, void ***arg2, s32 arg3) {
    s32 sp0;
    ? *sp4;
    ? *sp8;
    void **spC;
s32 sp10;
s32 sp14;
s32 sp24;
s32 sp2C;
s32 sp44;
    s32 sp6C;
    s32 sp70;
    s8 sp74;
    void *sp78;
    void ***sp7C;
    s32 *sp80;
    ? *sp84;
    s32 *sp88;
    ? *sp8C;
    ? *temp_r1_2;
    ? *temp_r2;
    ? *temp_r3;
    ? *temp_r4_2;
    ? *temp_r4_3;
    ? *temp_r6_2;
    ? *temp_r6_3;
    ? *temp_sb;
    ? *temp_sb_2;
    s32 temp_r0_9;
    s32 temp_r5_8;
    u16 temp_r5_2;
    u16 var_r1;
    u16 var_r4;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r5_3;
    u32 temp_r5_4;
    u32 temp_r5_5;
    u32 temp_r5_6;
    u32 temp_r5_7;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r6;
    void **temp_r0;
    void **temp_r1_4;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r1_3;
    void *temp_r4;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r5;
    void *temp_r6;
    void *var_r0;

    sp78 = arg0;
    sp7C = arg2;
    sp78->unk0 = &vtable_unk_080E7BC0;
    temp_r1 = __builtin_new(0x1EC);
    temp_r0 = *arg2;
    *arg2 = 0;
    spC = temp_r0;
    func_08008444(temp_r1);
    temp_r1->unk4 = &vtable_unk_080E7BB4;
    temp_r1->unk8 = arg1;
    spC = 0;
    temp_r1->unkC = temp_r0;
    temp_r1->unk10 = arg3;
    temp_r1->unk14 = 0;
    func_0800835C(&sp10);
    func_0800770C(&sp14);
    sp0 = 0;
    sp4 = &sp10;
    sp8 = &sp14;
    func_08050CC0(temp_r1 + 0x18, 0, 0x1F, 0xF);
    func_08007714(&sp14, 2);
    func_08008364(&sp10, 2);
    func_0803C5B0(temp_r1 + 0x1C);
    func_080756B0(temp_r1 + 0x20);
    temp_r5 = temp_r1 + 0x28;
    func_0805E6CC(temp_r5, &gUnk_08728208);
    func_0805E790(temp_r1 + 0x58, temp_r5, 0U);
    func_0805E824(temp_r1 + 0x78, temp_r5, 0, 0x100);
    temp_r1->unk8C = 0;
    (temp_r1 + 0x8C)->unk4 = 0;
    temp_r1->unk94 = 0x28;
    temp_r1->unk98 = 0;
    temp_r1->unk118 = 0;
    temp_r1->unk198 = 0;
    temp_r6 = temp_r1 + 0x19C;
    func_0805E6CC(temp_r6, &gUnk_087537D0);
    temp_r1->unk1CC = 0;
    (temp_r1 + 0x1CC)->unk4 = 0;
    (temp_r1 + 0x1D4)->unk4 = 0;
    temp_r4 = temp_r1 + 0x1DC;
    temp_r4->unk4 = 0;
    var_r0 = malloc(0x18);
    if (var_r0 == 0) {
        var_r0 = func_080D3BC0(0x18);
    }
    temp_r4->unk4 = var_r0;
    temp_r4->unk8 = 0;
    temp_r4->unkC = 0;
    var_r0->unk0 = 0;
    var_r0->unk4 = 0;
    temp_r0_2 = temp_r4->unk4;
    temp_r0_2->unk8 = temp_r0_2;
    temp_r0_3 = temp_r4->unk4;
    temp_r0_3->unkC = temp_r0_3;
    var_r4 = 0;
    temp_r5_2 = temp_r5->unk22;
    sp8C = temp_r1 + 0x98;
    sp84 = temp_r1 + 0x118;
    sp80 = &sp0 + 0x24;
    sp88 = &sp0 + 0x64;
    if ((u32) temp_r5_2 > 0U) {
        do {
            func_0805E790(&sp24, temp_r1 + 0x28, var_r4);
            func_080757E8(temp_r1 + 0x20, &sp24);
            var_r4 += 1;
        } while ((u32) var_r4 < (u32) temp_r5_2);
    }
    memcpy(&sp24, &gUnk_080FC6C2, 8U);
    var_r6 = 0;
    do {
        func_0805E760(sp88, temp_r6, *(sp80 + (var_r6 * 2)));
        sp6C = sp64;
        sp70 = sp68;
        var_r4_2 = 0;
        var_r1 = 0;
        if (sp64 != 0) {
            var_r1 = sp6C.unk4;
        }
        var_r6 += 1;
        if ((u32) var_r1 > 0U) {
            do {
                func_0805E790(&sp44, temp_r6, *(sp6C.unk0 + (var_r4_2 * 4)));
                func_080757E8(temp_r1 + 0x20, &sp44);
                var_r4_2 += 1;
            } while (var_r4_2 < (u32) var_r1);
        }
    } while (var_r6 <= 3U);
    temp_sb = method_08009AF4__C4Farm(temp_r1->unk8 + 0x14);
    temp_r4_2 = temp_sb;
    temp_r0_4 = strlen(sp8C);
    temp_r3 = sp8C + temp_r0_4;
    temp_r5_3 = 0x7F - temp_r0_4;
    if (temp_r5_3 != 0) {
        var_r4_3 = strlen(temp_r4_2);
        if (var_r4_3 > temp_r5_3) {
            var_r4_3 = temp_r5_3;
        }
        memcpy(temp_r3, temp_sb, var_r4_3);
        *(temp_r3 + var_r4_3) = 0;
    }
    temp_r0_5 = strlen(sp8C);
    temp_r2 = sp8C + temp_r0_5;
    temp_r5_4 = 0x7F - temp_r0_5;
    if (temp_r5_4 != 0) {
        var_r4_4 = strlen(&gUnk_080FC6CC);
        if (var_r4_4 > temp_r5_4) {
            var_r4_4 = temp_r5_4;
        }
        memcpy(temp_r2, &gUnk_080FC6CC, var_r4_4);
        *(temp_r2 + var_r4_4) = 0;
    }
    temp_r0_6 = strlen(sp8C);
    temp_r6_2 = sp8C + temp_r0_6;
    temp_r5_5 = 0x7F - temp_r0_6;
    if (temp_r5_5 != 0) {
        var_r4_5 = strlen(&gUnk_080FC6D4);
        if (var_r4_5 > temp_r5_5) {
            var_r4_5 = temp_r5_5;
        }
        memcpy(temp_r6_2, &gUnk_080FC6D4, var_r4_5);
        *(temp_r6_2 + var_r4_5) = 0;
    }
    temp_sb_2 = method_08009AF4__C4Farm(temp_r1->unk8 + 0x14);
    temp_r4_3 = temp_sb_2;
    temp_r0_7 = strlen(sp84);
    temp_r1_2 = sp84 + temp_r0_7;
    temp_r5_6 = 0x7F - temp_r0_7;
    if (temp_r5_6 != 0) {
        var_r4_6 = strlen(temp_r4_3);
        if (var_r4_6 > temp_r5_6) {
            var_r4_6 = temp_r5_6;
        }
        memcpy(temp_r1_2, temp_sb_2, var_r4_6);
        *(temp_r1_2 + var_r4_6) = 0;
    }
    temp_r0_8 = strlen(sp84);
    temp_r6_3 = sp84 + temp_r0_8;
    temp_r5_7 = 0x7F - temp_r0_8;
    if (temp_r5_7 != 0) {
        var_r4_7 = strlen(&gUnk_080FC6E8);
        if (var_r4_7 > temp_r5_7) {
            var_r4_7 = temp_r5_7;
        }
        memcpy(temp_r6_3, &gUnk_080FC6E8, var_r4_7);
        *(temp_r6_3 + var_r4_7) = 0;
    }
    temp_r4_4 = temp_r1->unk8;
    temp_r5_8 = temp_r4_4 + 0x1BD8;
    func_0800E924(&sp2C, temp_r5_8);
    func_080782EC(temp_r1, &sp2C, 0);
    temp_r1_3 = temp_r1->unk8;
    if ((s32) (temp_r1_3->unk219C << 0x1B) >= 0) {
        __5ActorRC5Actor(&sp2C, temp_r1_3 + 0x1C70);
        func_080782EC(temp_r1, &sp2C, 1);
    }
    if (((func_0800E934(temp_r5_8) << 0x18) != 0) && ((temp_r4_5 = temp_r4_4 + 0x1C2C, ((func_0800F190(temp_r4_5) << 0x18) != 0)) || (func_0800F204(temp_r4_5) != 4))) {
        func_0800FFE0(&sp2C, temp_r1->unk8 + 0x1CA0);
        func_080782EC(temp_r1, &sp2C, 3);
    }
    if ((func_0800E940(temp_r5_8) << 0x18) != 0) {
        temp_r4_6 = temp_r5_8 + 0x54;
        if (((func_0800F190(temp_r4_6) << 0x18) == 0) && (func_0800F204(temp_r4_6) == 1)) {
            sp74 = func_0800F258(temp_r4_6);
            if (GetId__C7Article() != 0x35) {
                goto block_41;
            }
        } else {
block_41:
            if (GetFirstSlotWithArticle__C8RucksackUi(temp_r5_8 + 0x60, 0x35) < 0) {
                temp_r0_9 = GetShelf__C9FarmHouse(temp_r1->unk8 + 0x1F4);
                if ((temp_r0_9 == 0) || (GetFirstSlotWith__C5ShelfUi(temp_r0_9, 0x35) < 0)) {
                    func_080782EC(temp_r1, temp_r1->unk8 + 0x1CCC, 2);
                } else {
                    sp2C.unk0 = (u16) ((0xFFFFFC00 & sp2C.unk0) | 0x1D);
                    sp2C.unk1 = (u8) (3 & sp2C.unk1);
                    sp2C.unk2 = (u16) (0xFFFFFC00 & sp2C.unk2);
                    sp2C.unk3 = (u8) (3 & sp2C.unk3);
                    sp2C.unk4 = (u16) (0xFFFFFC00 & sp2C.unk4);
                    func_080782EC(temp_r1, &sp2C, 2);
                }
            }
        }
    }
    if (spC != 0) {
        (*spC)->unk8(spC, 3);
    }
    sp78->unk4 = temp_r1;
    temp_r1_4 = *sp7C;
    if (temp_r1_4 != 0) {
        (*temp_r1_4)->unk8(temp_r1_4, 3);
    }
    return sp78;
}

