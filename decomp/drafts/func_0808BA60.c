s32 CanBeDiscarded__C7Article();                    /* extern */
s8 GetArticle__C12RucksackItem(s32 *);              /* extern */
s32 *GetItemAt__8RucksackUi(s32, s32);              /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_08050DC8(void *, s32, s32, s32);             /* extern */
s32 func_08050E30(void *, s32, s32 *, s32 *);             /* extern */
void *func_080CB2E8(s32, s32);                      /* extern */
void *func_080CB2FC(s32);                           /* extern */
void *func_080CC70C(s32, s32);                      /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
extern s32 gUnk_081000A8;
extern s32 gUnk_081000AC;
extern s32 gUnk_08117ABC;
extern s32 gUnk_08117ADC;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    u8 _padC[5];
    s32 unk11;
    u8 _pad15[99];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[128];
    s32 unk100;
    s32 unk104;
    s32 unk108;
} GenObj;
void func_0808BA60(GenObj *arg0, s32 arg1) {
    GenObj *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s8 sp10;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r6;
    u8 temp_r4_2;
    GenObj *temp_r0;
    GenObj *var_r0;

    if (arg1 <= 8) {
        if (arg1 == 0) {
            var_r0 = func_080CB2FC(arg0->unk78);
        } else {
            temp_r4 = arg0->unk78;
            var_r0 = func_080CB2E8(temp_r4, func_080CE184(arg0, arg1, 0));
        }
        var_r2 = 0;
        if ((var_r0->unk4 == 0) || (var_r0->unk8 == 0)) {
            var_r2 = 1;
        }
        if (var_r2 != 0) {
            return;
        }
        goto block_24;
    }
    if (arg1 == 9) {
        if ((func_0800F190(arg0->unk100) << 0x18) != 0) {
            return;
        }
        var_r6 = func_0800F204(arg0->unk100);
        if (var_r6 == 0) {
            goto block_26;
        }
        if (var_r6 == 1) {
            sp10 = func_0800F258(arg0->unk100);
            temp_r4_2 = CanBeDiscarded__C7Article() ^ 1;
            if (temp_r4_2 == 0) {
                sp0 = (s32) temp_r4_2;
                sp4 = (s32) temp_r4_2;
                sp8 = (s32) temp_r4_2;
                func_08050E30((GenObj *)((u8 *)arg0 + 0x80), gUnk_08117ABC, &gUnk_081000A8, &gUnk_081000AC);
                arg0->unk108 = var_r6;
                return;
            }
        }
        goto block_24;
    }
    temp_r4_3 = arg0->unk7C;
    temp_r0 = func_080CC70C(temp_r4_3, func_080CE184(arg0, arg1, 0));
    var_r2_2 = 0;
    if ((temp_r0->unk4 == 0) || (temp_r0->unk8 == 0)) {
        var_r2_2 = 1;
    }
    var_r6 = var_r2_2;
    if (var_r6 == 0) {
        temp_r4_4 = arg0->unk104;
        spC = *GetItemAt__8RucksackUi(temp_r4_4, func_080CE184(arg0, arg1, 0));
        temp_r0_2 = GetKind__C12RucksackItem(&spC);
        if (temp_r0_2 == 1) {
            sp0.unk11 = GetArticle__C12RucksackItem(&spC);
            if (((CanBeDiscarded__C7Article() ^ 1) << 0x18) != 0) {
block_24:
                func_08050DC8((GenObj *)((u8 *)arg0 + 0x80), gUnk_08117ADC, 0, 0);
                arg0->unk108 = 2;
                func_08008B6C((GenObj *)((u8 *)arg0 + 0xC), 0xC7);
                return;
            }
            sp0 = var_r6;
            sp4 = var_r6;
            sp8 = var_r6;
            func_08050E30((GenObj *)((u8 *)arg0 + 0x80), gUnk_08117ABC, &gUnk_081000A8, &gUnk_081000AC);
            arg0->unk108 = temp_r0_2;
            return;
        }
block_26:
        sp0 = var_r6;
        sp4 = var_r6;
        sp8 = var_r6;
        func_08050E30((GenObj *)((u8 *)arg0 + 0x80), gUnk_08117ABC, &gUnk_081000A8, &gUnk_081000AC);
        arg0->unk108 = 1;
    }
}
