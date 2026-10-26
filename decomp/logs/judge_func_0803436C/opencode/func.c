#include "common.h"
s32 AddTaskExp__13HarvestSpriteQ213HarvestSprite4Taski(s32, s32, s32); /* extern */
u8 GetArticle__C12RucksackItem(s32 *);                /* extern */
void *GetEgg__C4CoopUi(s32);                        /* extern */
s32 GetFood__C12RucksackItem(s32 *, s32 *);               /* extern */
s32 GetKind__C12RucksackItem(s32 *);                  /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                  /* extern */
s32 SetBushelForPregnancyStall__4BarnUi(s32, u8);     /* extern */
s32 SetBushelForStall__4BarnUi(s32, u8);              /* extern */
s32 SetEntBushel__4CoopUi(s32, u8);                   /* extern */
s32 SubtractStoredBushels__4BarnUi(s32, s32);         /* extern */
s32 SubtractStoredBushels__4CoopUi(s32, s32);         /* extern */
s32 __12RucksackItem();                               /* extern */
s32 __4FoodUi(s32 *, s32);                              /* extern */
s32 __7ArticleUi(u8 *, s32);                          /* extern */
s32 __7ProductG4Food(s32 *, s32);                       /* extern */
s32 __7ProductG7Article(void *, u8);                  /* extern */
s32 func_08033584(s32 *, s32, void **);               /* extern */
s32 func_08033830(s32 *, s32 *, s32, void **);            /* extern */
s32 func_08034BFC(s32, u8, s16, s16);                 /* extern */
s32 func_0809E994(s32, u8, s32);                      /* extern */
u32 func_080AB788(s32);                             /* extern */
s32 memcpy(s32 *, s32 *, s32);                            /* extern */
s32 method_0800C9B8__4CoopUi(s32, u8);                /* extern */
extern s32 gUnk_080F1496;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk3;
    s32 unk4;
    s32 unk6;
    s32 unk9;
    s32 unkA;
    s32 unkE;
    s32 unk10;
    s32 unk11;
    s32 unk12;
    struct GenObj *unk14;
    u8 _pad18[24];
    s32 unk30;
    s32 unk34;
    s32 unk38;
    s32 unk3C;
    u8 _pad40[16];
    s32 unk50;
    s32 unk54;
    s32 unk58;
    u8 _pad5C[20];
    s32 unk70;
    s32 unk74;
    s32 unk78;
    u8 _pad7C[12];
    s32 unk88;
} GenObj;
s32 func_0803436C(GenObj *arg0) {
s32 sp0;
s32 sp8;
s32 sp10;
s32 sp18;
s32 sp1C;
    u8 sp20;
    GenObj *sp24;
    void **sp28;
    ? (**temp_r4_2)(void **, s32 *);
    ? (**temp_r4_3)(void **, void *);
    ? (**temp_r4_4)(void **, s32 *);
    ? (**temp_r4_6)(void **, s32 *);
    ? (**temp_r5_4)(void **, void *);
    ? (*var_r2)(void **, u8);
    s32 *temp_r6_3;
    s32 *temp_r6_5;
    s16 temp_r4;
    s16 temp_r5_2;
    s16 temp_r6;
    s16 temp_r6_2;
    s32 temp_r0;
    s32 temp_r0_4;
    s32 temp_r4_5;
    s32 temp_r5;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r6;
    s32 var_r7;
    u16 var_r0;
    u16 var_r1;
    u32 temp_r0_10;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u8 var_r1_2;
    void **temp_r0_11;
    void *temp_r0_5;
    void *temp_r0_8;
    GenObj *temp_r0_9;
    void *temp_r1;
    void *temp_r5_3;
    void *temp_r6_4;

    sp24 = arg0;
    sp28 = arg0->unk0;
    temp_r0 = sp24->unk38;
    temp_r1 = temp_r0 + (sp24->unk30 * 8);
    sp0 = (s32) temp_r1->unk0;
    sp0.unk4 = (s32) temp_r1->unk4;
    func_0809E994(temp_r0, sp24->unk30, &(GenObj *)((u8 *)sp0 + 8));
    if ((func_08033584(&sp0, arg0->unk3C, sp28) << 0x18) == 0) {
        goto block_71;
    }
    temp_r5 = sp24->unk10;
    if (temp_r5 != 0) {
        func_08033830(&sp18, &sp0, sp24->unk3C, sp28);
        temp_r0_2 = (u32) ((u8) sp0 << 0x1C) >> 0x1C;
        switch (temp_r0_2) {                        /* switch 1; irregular */
        case 3:                                     /* switch 1 */
            var_r0 = sp18.unk2 - 0x18;
block_14:
            sp18.unk2 = var_r0;
            break;
        case 4:                                     /* switch 1 */
            var_r1 = (s16) sp18.unk2 + 0x18;
            if ((u32) (sp0.unk1 & 7) <= 3U) {
                var_r1 -= 0x38;
            }
            sp18.unk2 = var_r1;
            break;
        case 5:                                     /* switch 1 */
            var_r0 = sp18.unk2 - 0x28;
            goto block_14;
        }
        func_08034BFC(temp_r5, sp24->unk30, sp18, (s16) sp18.unk2);
    }
    temp_r0_3 = (u32) ((u8) sp0 << 0x1C) >> 0x1C;
    switch (temp_r0_3) {                            /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        temp_r6 = sp24->unkA;
        temp_r4 = sp24->unkE;
        sp8 = (u16) ((0xFFFFFC00 & sp8) | 2);
        sp8.unk1 = (u8) ((3 & sp8.unk1) | (((u16) temp_r6 & 0x3F) * 4));
        sp8.unk2 = (u16) ((0xFFFFFC00 & sp8.unk2) | ((u32) (temp_r6 << 0x10) >> 0x16));
        sp8.unk3 = (u8) ((3 & sp8.unk3) | (((u16) temp_r4 & 0x3F) * 4));
        sp8.unk4 = (u16) ((0xFFFFFC00 & sp8.unk4) | ((u32) (temp_r4 << 0x10) >> 0x16));
        (*sp28)->unkD8(sp28, &sp8);
        var_r6 = 1;
block_72:
        memcpy(&sp8, &gUnk_080F1496, 3);
        if ((var_r6 != 3) && (func_080AB788(0xC8) < (u32) *(&sp8 + var_r6))) {
            AddTaskExp__13HarvestSpriteQ213HarvestSprite4Taski(sp24->unk34, var_r6, 1);
        }
        return 1;
    case 2:                                         /* switch 2 */
        __12RucksackItem();
        temp_r5_2 = sp24->unkA;
        temp_r6_2 = sp24->unkE;
        sp10 = (u16) ((0xFFFFFC00 & sp10) | 2);
        sp10.unk1 = (u8) ((3 & sp10.unk1) | (((u16) temp_r5_2 & 0x3F) * 4));
        sp10.unk2 = (u16) ((0xFFFFFC00 & sp10.unk2) | ((u32) (temp_r5_2 << 0x10) >> 0x16));
        sp10.unk3 = (u8) ((3 & sp10.unk3) | (((u16) temp_r6_2 & 0x3F) * 4));
        sp10.unk4 = (u16) ((0xFFFFFC00 & sp10.unk4) | ((u32) (temp_r6_2 << 0x10) >> 0x16));
        (*sp28)->unkE0(sp28, &sp10, &sp8);
        if ((IsEmpty__C12RucksackItem(&sp8) << 0x18) != 0) {
        case 0:                                     /* switch 2 */
block_71:
            return 0;
        }
        temp_r0_4 = GetKind__C12RucksackItem(&sp8);
        switch (temp_r0_4) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            temp_r4_2 = *sp28 + 0x15C;
            GetFood__C12RucksackItem(&sp10, &sp8);
            __7ProductG4Food(&sp1C, (sp0.unk12 << 0x10) | ((sp0.unk11 << 8) | (u8) sp10));
            *temp_r4_2(sp28, &sp1C);
block_27:
            var_r6 = 0;
            goto block_72;
        case 1:                                     /* switch 3 */
            temp_r4_3 = *sp28 + 0x15C;
            temp_r5_3 = &(GenObj *)((u8 *)sp0 + 0x1D);
            __7ProductG7Article(temp_r5_3, GetArticle__C12RucksackItem(&sp8));
            *temp_r4_3(sp28, temp_r5_3);
            goto block_27;
        }
        break;
    case 3:                                         /* switch 2 */
        SubtractStoredBushels__4CoopUi(sp24->unk3C + 0x3FC, 1);
        SetEntBushel__4CoopUi(sp24->unk3C + 0x3FC, sp0.unk1);
        var_r1_2 = sp0.unk1;
        var_r2 = (*sp28)->unkA0;
block_31:
        var_r2(sp28, var_r1_2);
        var_r6 = 2;
        goto block_72;
    case 4:                                         /* switch 2 */
        SubtractStoredBushels__4BarnUi(sp24->unk3C + 0x5DC, 1);
        SetBushelForStall__4BarnUi(sp24->unk3C + 0x5DC, sp0.unk1);
        var_r1_2 = sp0.unk1;
        var_r2 = (*sp28)->unk9C;
        goto block_31;
    case 5:                                         /* switch 2 */
        SubtractStoredBushels__4BarnUi(sp24->unk3C + 0x5DC, 1);
        SetBushelForPregnancyStall__4BarnUi(sp24->unk3C + 0x5DC, sp0.unk1);
        var_r1_2 = sp0.unk1 + 0x10;
        var_r2 = (*sp28)->unk9C;
        goto block_31;
    case 6:                                         /* switch 2 */
        temp_r0_5 = (*sp28)->unk40(sp28, sp0.unk1 + 0x36);
        if (temp_r0_5 == 0) {
            goto block_71;
        }
        if ((((void (*)(void *,...))(temp_r0_5->unk14->unk50))(temp_r0_5) << 0x18) != 0) {
            ((void (*)(void *,...))(temp_r0_5->unk14->unk70))(temp_r0_5);
        }
        if ((((void (*)(void *,...))(temp_r0_5->unk14->unk54))(temp_r0_5) << 0x18) != 0) {
            temp_r0_6 = ((void (*)(void *,...))(temp_r0_5->unk14->unk74))(temp_r0_5);
            var_r1_3 = 0x1C;
            switch (temp_r0_6) {                    /* switch 4 */
            case 0:                                 /* switch 4 */
                var_r1_3 = 0x1C;
                break;
            case 1:                                 /* switch 4 */
                var_r1_3 = 0x1D;
                break;
            case 2:                                 /* switch 4 */
                var_r1_3 = 0x1E;
                break;
            case 3:                                 /* switch 4 */
                var_r1_3 = 0x1F;
                break;
            case 4:                                 /* switch 4 */
                var_r1_3 = 0x20;
                break;
            case 5:                                 /* switch 4 */
                var_r1_3 = 0x21;
                break;
            }
            temp_r4_4 = *sp28 + 0x15C;
            temp_r6_3 = &(GenObj *)((u8 *)sp0 + 0x1E);
            __4FoodUi(&sp8, var_r1_3);
            __7ProductG4Food(temp_r6_3, (sp0.unkA << 0x10) | ((sp0.unk9 << 8) | (u8) sp8));
            *temp_r4_4(sp28, temp_r6_3);
        }
        if ((((void (*)(void *,...))(temp_r0_5->unk14->unk58))(temp_r0_5) << 0x18) != 0) {
            temp_r0_7 = ((void (*)(void *,...))(temp_r0_5->unk14->unk78))(temp_r0_5);
            var_r1_4 = 5;
            switch (temp_r0_7) {                    /* switch 5 */
            case 0:                                 /* switch 5 */
                var_r1_4 = 5;
                break;
            case 1:                                 /* switch 5 */
                var_r1_4 = 6;
                break;
            case 2:                                 /* switch 5 */
                var_r1_4 = 7;
                break;
            case 3:                                 /* switch 5 */
                var_r1_4 = 8;
                break;
            case 4:                                 /* switch 5 */
                var_r1_4 = 9;
                break;
            case 5:                                 /* switch 5 */
                var_r1_4 = 0xA;
                break;
            }
            temp_r5_4 = *sp28 + 0x15C;
            temp_r6_4 = &(GenObj *)((u8 *)sp0 + 0x1F);
            __7ArticleUi(&sp20, var_r1_4);
            __7ProductG7Article(temp_r6_4, sp20);
            *temp_r5_4(sp28, temp_r6_4);
        }
        ((void (*)(void *,...))(temp_r0_5->unk14->unk88))(temp_r0_5, 0x3C);
        var_r6 = 2;
        goto block_72;
    case 7:                                         /* switch 2 */
        temp_r0_8 = (*sp28)->unk40(sp28, sp0.unk1 + 0x2E);
        if (temp_r0_8 != 0) {
            if ((((void (*)(void *,...))(temp_r0_8->unk14->unk50))(temp_r0_8) << 0x18) != 0) {
                ((void (*)(void *,...))(temp_r0_8->unk14->unk70))(temp_r0_8);
            }
            ((void (*)(void *,...))(temp_r0_8->unk14->unk88))(temp_r0_8, 0x3C);
            var_r6 = 2;
            goto block_72;
        }
        goto block_71;
    case 8:                                         /* switch 2 */
        temp_r4_5 = sp0.unk1 + 0x4C;
        temp_r0_9 = GetEgg__C4CoopUi(sp24->unk3C + 0x3FC);
        if (temp_r0_9 != 0) {
            temp_r0_10 = (u32) (temp_r0_9->unk6 << 0x1D) >> 0x1D;
            var_r7 = 0xF;
            switch (temp_r0_10) {                   /* switch 6 */
            case 0:                                 /* switch 6 */
                var_r7 = 0xF;
                break;
            case 1:                                 /* switch 6 */
                var_r7 = 0x10;
                break;
            case 2:                                 /* switch 6 */
                var_r7 = 0x11;
                break;
            case 3:                                 /* switch 6 */
                var_r7 = 0x12;
                break;
            case 4:                                 /* switch 6 */
                var_r7 = 0x13;
                break;
            case 5:                                 /* switch 6 */
                var_r7 = 0x14;
                break;
            }
            temp_r0_11 = sp24->unk0;
            (*temp_r0_11)->unk3C(temp_r0_11, temp_r4_5);
            method_0800C9B8__4CoopUi(sp24->unk3C + 0x3FC, sp0.unk1);
            temp_r4_6 = *sp28 + 0x15C;
            temp_r6_5 = &(GenObj *)((u8 *)sp0 + 0x21);
            __4FoodUi(&sp8, var_r7);
            __7ProductG4Food(temp_r6_5, (sp0.unkA << 0x10) | ((sp0.unk9 << 8) | (u8) sp8));
            *temp_r4_6(sp28, temp_r6_5);
            var_r6 = 2;
            goto block_72;
        }
        goto block_71;
    }
}

