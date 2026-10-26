s32 GetChicken__4CoopUi(s32, s32);                    /* extern */
s8 GetGrowthStage__C3Dog(s32);                      /* extern */
s8 GetGrowthStage__C7Chicken();                     /* extern */
u16 GetIconId__C4Food(s32 *);                         /* extern */
u16 GetIconId__C7Article();                         /* extern */
s32 GetId__C7Article();                             /* extern */
u8 func_0800F190(s32);                              /* extern */
u32 func_0800F204(s32);                             /* extern */
s32 func_0800F20C(s32 *, s32);                          /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F344(s32);                             /* extern */
s32 func_0800F360(s32);                             /* extern */
s32 func_0800F388(s32);                             /* extern */
u8 func_08025AFC(void *);                           /* extern */
s32 func_0805E850(void *, s32, s32);                  /* extern */

void func_0802A588(void *arg0) {
s32 sp0;
    s8 sp4;
    s32 temp_r4;
    s32 var_r1;
    s8 temp_r0_7;
    s8 temp_r0_9;
    u16 var_r2;
    u16 var_r4;
    u32 temp_r0_4;
    u8 temp_r4_2;
    u8 temp_r7;
    void *temp_r0;
    void *temp_r0_10;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_8;
    void *var_r0;
    void *var_r0_2;

    temp_r4 = arg0->unk38 + 0x54;
    temp_r7 = func_0800F190(temp_r4);
    if (temp_r7 != 0) {
        arg0->unk88 = 0;
        return;
    }
    temp_r0 = arg0 + 0x88;
    arg0->unk88 = 1;
    temp_r0->unk1 = temp_r7;
    temp_r0->unk4 = (s32) temp_r7;
    temp_r0->unk8 = (s32) temp_r7;
    temp_r0->unk14 = 0x150000;
    temp_r0_2 = arg0->unk10;
    if (temp_r0_2 == 0) {
        return;
    }
    if ((func_0800F388(temp_r4) << 0x18) != 0) {
        func_0805E850(temp_r0_2 + 0xB4, (**temp_r0_2->unk0)->unk64(), 0x160);
        temp_r0_3 = temp_r0_2 + 0xC8;
        temp_r0_2->unkC8 = 1;
        var_r0 = temp_r0_3 + 2;
        temp_r0_3->unk2 = temp_r7;
        goto block_25;
    }
    temp_r0_4 = func_0800F204(temp_r4);
    switch (temp_r0_4) {                            /* irregular */
    case 0:
        func_0800F20C(&sp0, temp_r4);
        var_r4 = GetIconId__C4Food(&sp0);
block_23:
        var_r1 = (**temp_r0_2->unk0)->unk64();
        var_r0_2 = temp_r0_2 + 0xB4;
        var_r2 = var_r4;
block_24:
        func_0805E850(var_r0_2, var_r1, (s32) var_r2);
        temp_r0_5 = temp_r0_2 + 0xC8;
        temp_r0_2->unkC8 = 1;
        var_r0 = temp_r0_5 + 2;
        temp_r0_5->unk2 = 0;
block_25:
        var_r0->unk1 = 1;
        return;
    case 1:
        sp4 = func_0800F258(temp_r4);
        if (GetId__C7Article() == 0x1B) {
            temp_r4_2 = func_08025AFC(arg0);
            if (temp_r4_2 != 0) {
                var_r1 = (**temp_r0_2->unk0)->unk64();
                var_r0_2 = temp_r0_2 + 0xB4;
                var_r2 = 4;
                goto block_24;
            }
            func_0805E850(temp_r0_2 + 0xB4, (**temp_r0_2->unk0)->unk64(), 3);
            temp_r0_6 = temp_r0_2 + 0xC8;
            temp_r0_2->unkC8 = 1;
            var_r0 = temp_r0_6 + 2;
            temp_r0_6->unk2 = temp_r4_2;
        } else {
            sp0.unk5 = func_0800F258(temp_r4);
            var_r4 = GetIconId__C7Article();
            goto block_23;
        }
        goto block_25;
    case 2:
        temp_r0_7 = GetGrowthStage__C3Dog(arg0->unk34 + 0x1C70);
        if (temp_r0_7 == 0) {
            func_0805E850(temp_r0_2 + 0xB4, (**temp_r0_2->unk0)->unk68(), 0x3DA);
            temp_r0_8 = temp_r0_2 + 0xC8;
            temp_r0_2->unkC8 = 1;
            var_r0 = temp_r0_8 + 2;
            temp_r0_8->unk2 = temp_r0_7;
        } else {
            var_r1 = (**temp_r0_2->unk0)->unk68();
            var_r0_2 = temp_r0_2 + 0xB4;
            var_r2 = 0x374;
            goto block_24;
        }
        goto block_25;
    case 3:
        GetChicken__4CoopUi(arg0->unk34 + 0x410, func_0800F344(temp_r4));
        temp_r0_9 = GetGrowthStage__C7Chicken();
        if (temp_r0_9 == 0) {
            func_0805E850(temp_r0_2 + 0xB4, (**temp_r0_2->unk0)->unk68(), 0x73D);
            temp_r0_10 = temp_r0_2 + 0xC8;
            temp_r0_2->unkC8 = 1;
            var_r0 = temp_r0_10 + 2;
            temp_r0_10->unk2 = temp_r0_9;
        } else {
            var_r1 = (**temp_r0_2->unk0)->unk68();
            var_r0_2 = temp_r0_2 + 0xB4;
            var_r2 = 0x734;
            goto block_24;
        }
        goto block_25;
    case 4:
        var_r1 = (**temp_r0_2->unk0)->unk64();
        var_r0_2 = temp_r0_2 + 0xB4;
        var_r2 = 0x35;
        goto block_24;
    case 5:
        var_r4 = (u16) func_0800F360(temp_r4);
        goto block_23;
    }
}
