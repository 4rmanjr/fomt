s8 GetArticle__C12RucksackItem(s32 *);              /* extern */
s8 *GetDesc__C4Food(s32 *);                           /* extern */
s8 *GetDesc__C7Article();                           /* extern */
s32 GetFood__C12RucksackItem(s32 *, s32 *);             /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
s8 *GetName__C4Food(s32 *);                           /* extern */
s8 *GetName__C7Article();                           /* extern */
s32 IsWrapped__C12RucksackItem(s32 *);              /* extern */
s32 memcpy(s8 *, s8 *, u32);                          /* extern */
u32 strlen(s8 *);                                   /* extern */
extern s8 *gUnk_08117AA4;

s8 *func_080CFA38(s8 *arg1, s32 arg2) {
    s32 sp0;
s32 sp4;
    s8 sp8;
    s32 temp_r0;
    s8 *temp_r7;
    s8 *temp_r8;
    s8 *var_r0;
    s8 *var_r0_2;
    s8 *var_sb;
    u32 temp_r0_2;
    u32 temp_r5;
    u32 var_r4;
    u32 var_r4_2;

    sp0 = arg2;
    var_sb = 0;
    *arg1 = 0;
    temp_r0 = GetKind__C12RucksackItem(&sp0);
    switch (temp_r0) {                              /* irregular */
    case 0:
        if ((IsWrapped__C12RucksackItem(&sp0) << 0x18) != 0) {
            GetFood__C12RucksackItem(&sp4, &sp0);
            var_r0 = GetName__C4Food(&sp4);
block_8:
            var_r4 = strlen();
            if (var_r4 > 0x63U) {
                var_r4 = 0x63;
            }
            memcpy(arg1, var_r0, var_r4);
            arg1[var_r4] = 0;
            temp_r8 = gUnk_08117AA4;
            temp_r0_2 = strlen(arg1);
            temp_r7 = &arg1[temp_r0_2];
            temp_r5 = 0x63 - temp_r0_2;
            if (temp_r5 != 0) {
                var_r4_2 = strlen(temp_r8);
                if (var_r4_2 > temp_r5) {
                    var_r4_2 = temp_r5;
                }
                memcpy(temp_r7, temp_r8, var_r4_2);
                temp_r7[var_r4_2] = 0;
            }
            var_sb = arg1;
        } else {
            GetFood__C12RucksackItem(&sp4, &sp0);
            var_r0_2 = GetDesc__C4Food(&sp4);
block_16:
            var_sb = var_r0_2;
        }
        break;
    case 1:
        if ((IsWrapped__C12RucksackItem(&sp0) << 0x18) != 0) {
            sp8 = GetArticle__C12RucksackItem(&sp0);
            var_r0 = GetName__C7Article();
            goto block_8;
        }
        sp0.unk9 = GetArticle__C12RucksackItem(&sp0);
        var_r0_2 = GetDesc__C7Article();
        goto block_16;
    }
    return var_sb;
}
