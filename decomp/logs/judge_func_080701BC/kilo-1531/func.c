#include "common.h"
u32 GetCapacity__C4Barn(void *);                    /* extern */
u32 GetCapacity__C4Coop(void *);                    /* extern */
void *GetChicken__C4CoopUi(void *, u32);            /* extern */
s32 GetCow__C4BarnUi(void *, u32);                  /* extern */
? *GetEgg__C4CoopUi(void *, u32);                   /* extern */
s32 GetFirstSlotWithArticle__C8RucksackUi(s32, s32); /* extern */
s32 GetFirstSlotWith__C5ShelfUi(s32, s32);          /* extern */
s32 GetGrowthStage__C7Chicken();                    /* extern */
void *GetHorse__4Farm(void *);                      /* extern */
s32 GetId__C7Article();                             /* extern */
s32 GetLocation__C3Npc(s32 *, void *);                  /* extern */
s32 GetSheep__C4BarnUi(void *, u32);                /* extern */
s32 GetShelf__9FarmHouse(void *);                   /* extern */
s32 GetUnkEnt__C4Coop(void *);                      /* extern */
s32 GetUnkFlag11__C4Farm(void *);                   /* extern */
s32 __5ActorRC5Actor(s32 *, void *);                    /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_08008444();                                  /* extern */
s32 func_0800E324(void *);                          /* extern */
s32 func_0800E924(s32 *, s32);                          /* extern */
s32 func_0800E934(s32);                             /* extern */
s32 func_0800E940(s32);                             /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800FFE0(s32 *, void *);                       /* extern */
s32 func_0805E6CC(void *, ? *);                       /* extern */
s32 func_0805E790(s32 *, void *, u32);                  /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
s32 func_0806F168(void *, u32, s16, s16, s32);        /* extern */
s32 func_0806FBA4(void *, u32);                       /* extern */
s32 func_080756B0(void *);                            /* extern */
s32 func_080757E8(void *, ? *);                       /* extern */
s32 func_080A1CBC(s32 *, void *, u32);                  /* extern */
s32 func_080A1ED4(void *, u32, s32);                /* extern */
s32 func_080E2094(void *);                            /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
s32 method_0800D058__C4Barn(void *);                /* extern */
extern ? gUnk_08527094;
extern ? gUnk_087537D0;
extern ? vtable_unk_080E7AE0;
extern ? vtable_unk_080E7AEC;

void *func_080701BC(void *arg0, void *arg1, void ***arg2) {
    void **sp4;
s32 spC;
s32 sp14;
    s8 sp2C;
    void *sp30;
    void ***sp34;
    u32 sp38;
    void *sp3C;
    u32 sp40;
    s32 sp44;
    ? *temp_r0_9;
    s32 temp_r0_7;
    s32 temp_r2;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_sb;
    s32 var_r5;
    s32 var_sb;
    s32 var_sl;
    u16 temp_r5;
    u16 temp_r5_2;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r5_2;
    u32 var_r8;
    void **temp_r0_2;
    void **temp_r1;
    void **temp_r1_2;
    void *temp_r0;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_8;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r3;
    void *temp_r4;
    void *temp_r8;
    void *var_r4;

    sp30 = arg0;
    sp34 = arg2;
    sp30->unk0 = &vtable_unk_080E7AEC;
    temp_r0 = __builtin_new(0x1A0);
    temp_r1 = *arg2;
    *arg2 = 0;
    sp4 = temp_r1;
    func_08008444();
    temp_r0->unk4 = &vtable_unk_080E7AE0;
    temp_r0->unk8 = arg1;
    temp_r0_2 = sp4;
    sp4 = 0;
    temp_r0->unkC = temp_r0_2;
    temp_r0->unk10 = 0;
    temp_r0->unk14 = 0;
    func_080756B0(temp_r0 + 0x18);
    temp_r4 = temp_r0 + 0x20;
    func_0805E6CC(temp_r4, &gUnk_08527094);
    func_0805E824(temp_r0 + 0x50, temp_r4, 0, 0x100);
    func_0805E824(temp_r0 + 0x64, temp_r4, 1, 0x100);
    func_0805E824(temp_r0 + 0x78, temp_r4, 2, 0x100);
    func_0805E824(temp_r0 + 0x8C, temp_r4, 3, 0x100);
    func_0805E6CC(temp_r0 + 0xA0, &gUnk_087537D0);
    temp_r0_3 = temp_r0 + 0xD0;
    temp_r0->unkD0 = 0;
    temp_r0_3->unk4 = 0;
    (temp_r0_3 + 8)->unk4 = 0;
    var_r4 = temp_r4 + 0xC0;
    var_r5 = 3;
    do {
        func_080E2094(var_r4);
        var_r4 += 0x30;
        var_r5 -= 1;
    } while (var_r5 != -1);
    var_r4_2 = 0;
    temp_r0_4 = temp_r0 + 0x20;
    temp_r5 = temp_r0_4->unk22;
    temp_r0_5 = temp_r0 + 0xA0;
    if ((u32) temp_r5 > 0U) {
        do {
            func_0805E790(&spC, temp_r0_4, var_r4_2);
            func_080757E8(temp_r0 + 0x18, &spC);
            var_r4_2 += 1;
        } while (var_r4_2 < (u32) temp_r5);
    }
    var_r4_3 = 0;
    temp_r5_2 = temp_r0_5->unk22;
    if ((u32) temp_r5_2 > 0U) {
        do {
            func_0805E790(&spC, temp_r0_5, var_r4_3);
            func_080757E8(temp_r0 + 0x18, &spC);
            var_r4_3 += 1;
        } while (var_r4_3 < (u32) temp_r5_2);
    }
    temp_r2 = temp_r0->unk8 + 0x1BD8;
    func_0800E924(&sp14, temp_r2);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0);
    temp_r2_2 = temp_r0->unk8;
    if (!(0x10 & temp_r2_2->unk219C)) {
        __5ActorRC5Actor(&sp14, temp_r2_2 + 0x1C70);
        memcpy(&spC, &sp14, 6);
        func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 1);
    }
    temp_r0_6 = GetHorse__4Farm(temp_r0->unk8 + 0x14);
    if (temp_r0_6 != 0) {
        temp_r2_3 = temp_r0->unk8;
        if (!(2 & temp_r2_3->unk219A) && !(4 & temp_r2_3->unk21A1)) {
            __5ActorRC5Actor(&sp14, temp_r0_6);
            memcpy(&spC, &sp14, 6);
            func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 4);
        }
    }
    if (((func_0800E934(temp_r2) << 0x18) != 0) && ((temp_r4_2 = temp_r2 + 0x54, ((func_0800F190(temp_r4_2) << 0x18) != 0)) || (func_0800F204(temp_r4_2) != 4))) {
        func_0800FFE0(&spC, temp_r0->unk8 + 0x1CA0);
        func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 3);
    }
    if (((func_0800E940(temp_r2) << 0x18) != 0) && ((temp_r4_3 = temp_r2 + 0x54, ((func_0800F190(temp_r4_3) << 0x18) != 0)) || (func_0800F204(temp_r4_3) != 1) || (sp2C = func_0800F258(temp_r4_3), (GetId__C7Article() != 0x35))) && (GetFirstSlotWithArticle__C8RucksackUi(temp_r2 + 0x60, 0x35) < 0)) {
        temp_r0_7 = GetShelf__9FarmHouse(temp_r0->unk8 + 0x1F4);
        if ((temp_r0_7 == 0) || (GetFirstSlotWith__C5ShelfUi(temp_r0_7, 0x35) < 0)) {
            memcpy(&spC, temp_r0->unk8 + 0x1CCC, 6);
            func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 2);
        } else {
            func_0806F168(temp_r0, 0x1DU, 0, 0, 2);
        }
    }
    GetLocation__C3Npc(&sp14, temp_r0->unk8 + 0x2010);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0xE);
    GetLocation__C3Npc(&sp14, temp_r0->unk8 + 0x2034);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0xB);
    GetLocation__C3Npc(&sp14, temp_r0->unk8 + 0x2058);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0xF);
    GetLocation__C3Npc(&sp14, temp_r0->unk8 + 0x207C);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0xA);
    GetLocation__C3Npc(&sp14, temp_r0->unk8 + 0x20A0);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0x10);
    GetLocation__C3Npc(&sp14, temp_r0->unk8 + 0x20C4);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0xD);
    GetLocation__C3Npc(&sp14, temp_r0->unk8 + 0x20E8);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0xC);
    temp_r3 = temp_r0->unk8 + 0x5F0;
    sp38 = GetCapacity__C4Barn(temp_r3);
    temp_sb = method_0800D058__C4Barn(temp_r3);
    var_r5_2 = 0;
    if (sp38 > 0U) {
        do {
            if (((temp_sb < 0) || (var_r5_2 != temp_sb)) && ((var_sl = 7, (GetCow__C4BarnUi(temp_r3, var_r5_2) != 0)) || (var_sl = 8, (GetSheep__C4BarnUi(temp_r3, var_r5_2) != 0)))) {
                __5ActorRC5Actor(&sp14);
                memcpy(&spC, &sp14, 6);
                func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), var_sl);
            }
            var_r5_2 += 1;
        } while (var_r5_2 < sp38);
    }
    temp_r2_4 = temp_r0->unk8 + 0x410;
    sp3C = temp_r2_4;
    sp40 = GetCapacity__C4Coop(temp_r2_4);
    sp44 = GetUnkEnt__C4Coop(sp3C);
    var_r8 = 0;
    if (sp40 > 0U) {
        do {
            if ((sp44 < 0) || (var_r8 != sp44)) {
                temp_r0_8 = GetChicken__C4CoopUi(sp3C, var_r8);
                if (temp_r0_8 != 0) {
                    var_sb = 6;
                    if (GetGrowthStage__C7Chicken() == 1) {
                        var_sb = 5;
                    }
                    __5ActorRC5Actor(&sp14, temp_r0_8);
                    memcpy(&spC, &sp14, 6);
                    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), var_sb);
                }
            }
            temp_r0_9 = GetEgg__C4CoopUi(sp3C, var_r8);
            if (temp_r0_9 != 0) {
                memcpy(&spC, temp_r0_9, 6);
                func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 9);
            }
            var_r8 += 1;
        } while (var_r8 < sp40);
    }
    __5ActorRC5Actor(&sp14, temp_r0->unk8 + 0x34DC);
    memcpy(&spC, &sp14, 6);
    func_0806F168(temp_r0, (u32) (spC.unk0 << 0x16) >> 0x16, (s16) (((spC.unk2 & 0x3FF) << 6) | ((u8) spC.unk1 >> 2)), (s16) (((spC.unk4 & 0x3FF) << 6) | ((u8) spC.unk3 >> 2)), 0x13);
    if (func_0800E324(temp_r0->unk8 + 0x10) == 2) {
        temp_r8 = temp_r0->unk8 + 0x34C8;
        var_r4_4 = 0x5B;
        do {
            if ((func_080A1ED4(temp_r8, var_r4_4, 2) << 0x18) != 0) {
                func_080A1CBC(&spC, temp_r8, var_r4_4);
                func_0806F168(temp_r0, sp10, spC.unk8 + 8, spC.unkA + 8, 0x11);
            }
            var_r4_4 += 1;
        } while (var_r4_4 <= 0x5DU);
    }
    if ((GetUnkFlag11__C4Farm(temp_r0->unk8 + 0x14) << 0x18) != 0) {
        func_0806F168(temp_r0, 2U, 0x88, 0x168, 0x12);
    }
    var_r4_5 = 0;
    do {
        func_0806FBA4(temp_r0, var_r4_5);
        var_r4_5 += 1;
    } while (var_r4_5 <= 3U);
    if (sp4 != 0) {
        (*sp4)->unk8(sp4, 3);
    }
    sp30->unk4 = temp_r0;
    temp_r1_2 = *sp34;
    if (temp_r1_2 != 0) {
        (*temp_r1_2)->unk8(temp_r1_2, 3);
    }
    return sp30;
}

