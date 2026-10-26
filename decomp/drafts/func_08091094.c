s8 GetArticle__C12RucksackItem(s32 *);              /* extern */
s32 GetChicken__4CoopUi(s32, s32);                  /* extern */
s32 GetFood__C12RucksackItem(s32 *, s32 *);           /* extern */
s32 GetGrowthStage__C3Dog(s32);                     /* extern */
s32 GetGrowthStage__C7Chicken();                    /* extern */
u16 GetIconId__C4Food(s32 *);                       /* extern */
u16 GetIconId__C7Article();                         /* extern */
s32 *GetItemAt__8RucksackUi(s32, u32);              /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 IsWrapped__C12RucksackItem(s32 *);              /* extern */
s32 func_0800F190(s32);                             /* extern */
u32 func_0800F204(s32);                             /* extern */
s32 func_0800F20C(s32 *, s32);                        /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F294(s32 *, s32);                        /* extern */
s32 func_0800F344(s32);                             /* extern */
s32 func_080CC728(s32, u32, ? *, u16);                /* extern */
s32 func_080CCE58(s32, ? *, s32, s32);                /* extern */
extern ? gUnk_0858BA28;
extern ? gUnk_086678A0;

void func_08091094(void *arg0, u32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s8 spC;
    ? *var_r1;
    s32 temp_r0;
    u16 var_r0;
    u16 var_r2;
    u16 var_r4;
    u16 var_r6_2;
    u16 var_r6_3;
    u32 temp_r0_2;
    u32 var_r6;

    var_r6 = 0;
    if (arg1 > 0U) {
        do {
            sp4 = *GetItemAt__8RucksackUi(arg0->unk104, var_r6);
            if ((IsEmpty__C12RucksackItem(&sp4) << 0x18) == 0) {
                var_r4 = 0;
                temp_r0 = GetKind__C12RucksackItem(&sp4);
                switch (temp_r0) {                  /* switch 1; irregular */
                case 0:                             /* switch 1 */
                    GetFood__C12RucksackItem(&sp8, &sp4);
                    var_r0 = GetIconId__C4Food(&sp8);
block_7:
                    var_r4 = var_r0;
                    break;
                case 1:                             /* switch 1 */
                    spC = GetArticle__C12RucksackItem(&sp4);
                    var_r0 = GetIconId__C7Article();
                    goto block_7;
                }
                if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
                    var_r4 = 0x160;
                }
                sp0 = 1;
                func_080CC728(arg0->unk7C, var_r6, &gUnk_086678A0, var_r4);
            }
            var_r6 += 1;
        } while (var_r6 < arg1);
    }
    if ((func_0800F190(arg0->unk100) << 0x18) != 0) {
        return;
    }
    temp_r0_2 = func_0800F204(arg0->unk100);
    switch (temp_r0_2) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        func_0800F20C(&sp4, arg0->unk100);
        var_r6_2 = GetIconId__C4Food(&sp4);
        func_0800F294(&sp4, arg0->unk100);
        if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
            var_r6_2 = 0x160;
        }
        var_r1 = &gUnk_086678A0;
        var_r2 = var_r6_2;
block_30:
        func_080CCE58(arg0->unk7C, var_r1, (s32) var_r2, 1);
        return;
    case 1:                                         /* switch 2 */
        sp0.unkD = func_0800F258(arg0->unk100);
        var_r6_3 = GetIconId__C7Article();
        func_0800F294(&sp4, arg0->unk100);
        if ((IsWrapped__C12RucksackItem(&sp4) << 0x18) != 0) {
            var_r6_3 = 0x160;
        }
        var_r1 = &gUnk_086678A0;
        var_r2 = var_r6_3;
        goto block_30;
    case 2:                                         /* switch 2 */
        if (GetGrowthStage__C3Dog(arg0->unk8 + 0x1C70) == 0) {
            var_r1 = &gUnk_0858BA28;
            var_r2 = 0x3DA;
        } else {
            var_r1 = &gUnk_0858BA28;
            var_r2 = 0x374;
        }
        goto block_30;
    case 3:                                         /* switch 2 */
        if (GetChicken__4CoopUi(arg0->unk8 + 0x410, func_0800F344(arg0->unk100)) != 0) {
            if (GetGrowthStage__C7Chicken() == 0) {
                var_r1 = &gUnk_0858BA28;
                var_r2 = 0x73D;
            } else {
                var_r1 = &gUnk_0858BA28;
                var_r2 = 0x734;
            }
            goto block_30;
        }
        return;
    case 4:                                         /* switch 2 */
        func_080CCE58(arg0->unk7C, &gUnk_086678A0, 0x35, 1);
        break;
    }
}
