s32 CanBeDiscarded__C7Article();                    /* extern */
s8 GetArticle__C12RucksackItem(s32 *);              /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
s32 GetToolAt__8RucksackUi(s32, s32);               /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 IsEmpty__C9ToolStack(s32 *);                      /* extern */
s32 IsWrapped__C12RucksackItem(s32 *);              /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0800F388(s32);                             /* extern */
s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
s32 func_08050E30(void *, s32 *, s32 *, s32 *);             /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
s32 memcpy(s32 *, s32, s32);                            /* extern */
extern s32 gUnk_081003F4;
extern s32 gUnk_08100420;
extern s32 gUnk_08100430;
extern s32 gUnk_08100434;
extern s32 gUnk_08100438;

typedef struct GenObj {
    u8 _pad0[21];
    s32 unk15;
    u8 _pad19[227];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
    s32 unk108;
} GenObj;
void func_08092A70(GenObj *arg0, s32 arg1) {
    GenObj *sp0;
    s32 sp4;
    s32 sp8;
s32 spC;
    s32 sp10;
    s8 sp14;
    s32 *var_r1;
    s32 *var_r1_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0;
    u8 temp_r0_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r4_9;

    if (arg1 == 0) {
        if ((IsEmpty__C9ToolStack(arg0->unkFC) << 0x18) != 0) {

        } else {
            goto block_30;
        }
        goto block_32;
    }
    if (arg1 <= 8) {
        temp_r4 = arg0->unk104;
        memcpy(&spC, GetToolAt__8RucksackUi(temp_r4, func_080CE184(arg0, arg1, 0)), 2);
        if ((IsEmpty__C9ToolStack(&spC) << 0x18) != 0) {

        } else {
            goto block_30;
        }
        goto block_32;
    }
    if (arg1 != 9) {
        temp_r4_2 = arg0->unk104;
        sp10 = *GetItemAt__8RucksackUi(temp_r4_2, func_080CE184(arg0, arg1, 0));
        if ((IsEmpty__C12RucksackItem(&sp10) << 0x18) == 0) {
            if (((IsWrapped__C12RucksackItem(&sp10) << 0x18) != 0) || ((var_r0 = GetKind__C12RucksackItem(&sp10), (var_r0 != 0)) && (sp0.unk15 = GetArticle__C12RucksackItem(&sp10), var_r0 = (s32) (u8) (CanBeDiscarded__C7Article() ^ 1), (var_r0 != 0)))) {
                goto block_30;
            }
            temp_r4_3 = (GenObj *)((u8 *)arg0 + 0x80);
            sp0 = var_r0;
            sp4 = var_r0;
            sp8 = var_r0;
            func_08050E30(temp_r4_3, &gUnk_08100420, &gUnk_08100430, &gUnk_08100434);
            func_08050E50(temp_r4_3, 0x43);
            var_r1 = (GenObj *)((u8 *)arg0 + 0x108);
            goto block_34;
        }
        goto block_32;
    }
    if ((func_0800F190(arg0->unk100) << 0x18) != 0) {
        goto block_32;
    }
    temp_r0 = func_0800F204(arg0->unk100);
    switch (temp_r0) {                              /* irregular */
    case 0:
        if ((func_0800F388(arg0->unk100) << 0x18) != 0) {
            temp_r4_4 = (GenObj *)((u8 *)arg0 + 0x80);
            func_08050DC8(temp_r4_4, &gUnk_081003F4, 0, 0);
            func_08050E50(temp_r4_4, 0x43);
            var_r1_2 = (GenObj *)((u8 *)arg0 + 0x108);
block_31:
            *var_r1_2 = 2;
block_32:
            func_08008B6C((GenObj *)((u8 *)arg0 + 0xC), 0xC7);
            return;
        }
        temp_r4_5 = (GenObj *)((u8 *)arg0 + 0x80);
        sp0 = temp_r0;
        sp4 = temp_r0;
        sp8 = temp_r0;
        func_08050E30(temp_r4_5, &gUnk_08100420, &gUnk_08100430, &gUnk_08100434);
        func_08050E50(temp_r4_5, 0x43);
        var_r1 = (GenObj *)((u8 *)arg0 + 0x108);
block_34:
        *var_r1 = 1;
        return;
    case 1:
        if ((func_0800F388(arg0->unk100) << 0x18) != 0) {
            temp_r4_6 = (GenObj *)((u8 *)arg0 + 0x80);
            func_08050DC8(temp_r4_6, &gUnk_081003F4, 0, 0);
            func_08050E50(temp_r4_6, 0x43);
            var_r1_2 = (GenObj *)((u8 *)arg0 + 0x108);
            goto block_31;
        }
        sp14 = func_0800F258(arg0->unk100);
        temp_r0_2 = CanBeDiscarded__C7Article() ^ 1;
        if (temp_r0_2 == 0) {
            temp_r4_7 = (GenObj *)((u8 *)arg0 + 0x80);
            sp0 = (s32) temp_r0_2;
            sp4 = (s32) temp_r0_2;
            sp8 = (s32) temp_r0_2;
            func_08050E30(temp_r4_7, &gUnk_08100420, &gUnk_08100430, &gUnk_08100434);
            func_08050E50(temp_r4_7, 0x43);
            arg0->unk108 = temp_r0;
            return;
        }
block_30:
        temp_r4_8 = (GenObj *)((u8 *)arg0 + 0x80);
        func_08050DC8(temp_r4_8, &gUnk_081003F4, 0, 0);
        func_08050E50(temp_r4_8, 0x43);
        var_r1_2 = (GenObj *)((u8 *)arg0 + 0x108);
        goto block_31;
    case 2:
        temp_r4_9 = (GenObj *)((u8 *)arg0 + 0x80);
        func_08050DC8(temp_r4_9, &gUnk_08100438, 0, 0);
        func_08050E50(temp_r4_9, 0x45);
        arg0->unk108 = temp_r0;
        goto block_32;
    }
}
