s32 CanBeDiscarded__C7Article();                    /* extern */
s8 GetArticle__C12RucksackItem(s32 *);              /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_08050DC8(void *, s32, s32, s32);             /* extern */
s32 func_08050E30(void *, s32, ? *, ? *);             /* extern */
void *func_080CB2E8(s32, s32);                      /* extern */
void *func_080CC70C(s32, s32);                      /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
extern ? gUnk_08100084;
extern ? gUnk_08100088;
extern s32 gUnk_08117ABC;
extern s32 gUnk_08117ADC;

void func_0808A2F4(void *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s8 sp10;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 var_r2;
    s32 var_r2_2;
    void *temp_r0_2;
    void *temp_r0_3;
    void *var_r0;

    if (arg1 == 0) {
        if ((func_0800F190(arg0->unkFC) << 0x18) != 0) {
            return;
        }
        temp_r0 = func_0800F204(arg0->unkFC);
        switch (temp_r0) {                          /* irregular */
        case 0:
            var_r0 = arg0 + 0x80;
            sp0 = arg1;
            sp4 = arg1;
            sp8 = arg1;
            goto block_25;
        case 1:
            sp10 = func_0800F258(arg0->unkFC);
            if (((CanBeDiscarded__C7Article() ^ 1) << 0x18) == 0) {
                var_r0 = arg0 + 0x80;
                sp0 = arg1;
                sp4 = arg1;
                sp8 = arg1;
                goto block_25;
            }
            goto block_17;
        }
    } else {
        if (arg1 <= 8) {
            temp_r4 = arg0->unk78;
            temp_r0_2 = func_080CB2E8(temp_r4, func_080CE184(arg0, arg1, 0));
            var_r2 = 0;
            if ((temp_r0_2->unk4 == 0) || (temp_r0_2->unk8 == 0)) {
                var_r2 = 1;
            }
            if (var_r2 != 0) {
                return;
            }
            temp_r4_2 = arg0->unk100;
            spC = *GetItemAt__8RucksackUi(temp_r4_2, func_080CE184(arg0, arg1, 0));
            if (GetKind__C12RucksackItem(&spC) == 1) {
                sp0.unk11 = GetArticle__C12RucksackItem(&spC);
                if (((CanBeDiscarded__C7Article() ^ 1) << 0x18) != 0) {
block_17:
                    func_08050DC8(arg0 + 0x80, gUnk_08117ADC, 0, 0);
                    arg0->unk108 = 4;
                    func_08008B6C(arg0 + 0xC, 0xC7);
                    return;
                }
                var_r0 = arg0 + 0x80;
                sp0 = var_r2;
                sp4 = var_r2;
                sp8 = var_r2;
                goto block_25;
            }
            var_r0 = arg0 + 0x80;
            sp0 = var_r2;
            sp4 = var_r2;
            sp8 = var_r2;
            goto block_25;
        }
        temp_r4_3 = arg0->unk7C;
        temp_r0_3 = func_080CC70C(temp_r4_3, func_080CE184(arg0, arg1, 0));
        var_r2_2 = 0;
        if ((temp_r0_3->unk4 == 0) || (temp_r0_3->unk8 == 0)) {
            var_r2_2 = 1;
        }
        if (var_r2_2 == 0) {
            var_r0 = arg0 + 0x80;
            sp0 = var_r2_2;
            sp4 = var_r2_2;
            sp8 = var_r2_2;
block_25:
            func_08050E30(var_r0, gUnk_08117ABC, &gUnk_08100084, &gUnk_08100088);
            arg0->unk108 = 3;
        }
    }
}
