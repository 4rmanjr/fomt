void *GetName__C4Food(s32 *);                         /* extern */
void *GetName__C7Article(s32 *);                      /* extern */
s32 __4FoodUi(s32 *, s32);                              /* extern */
s32 __7ArticleUi(s32 *, s32);                           /* extern */
s32 memcpy(s8 *, void *, u32);                        /* extern */
s32 strcpy(void *, s8 *);                             /* extern */
u32 strlen(void *);                                 /* extern */
extern ? gUnk_08100AD2;
extern ? gUnk_08100BD7;

s8 *func_080E3B80(s8 *arg0, void *arg1, s32 arg2) {
    s8 sp0;
s32 sp20;
s32 sp24;
    u16 temp_r0;
    u32 var_r4;
    void *var_r0;
    void *var_r5;

    switch (arg2) {                                 /* irregular */
    case 0xF0:
        var_r5 = (arg1->unk6 * 0x1D) + &gUnk_08100AD2;
        var_r0 = var_r5;
block_12:
        var_r4 = strlen(var_r0);
        if (var_r4 > 0x1FU) {
            var_r4 = 0x1F;
        }
        memcpy(&sp0, var_r5, var_r4);
        (&sp0)[var_r4] = 0;
        *arg0 = 1;
        strcpy(arg0 + 4, &sp0);
        break;
    case 0xF1:
        var_r5 = (arg1->unk7 * 0x1D) + &gUnk_08100BD7;
        var_r0 = var_r5;
        goto block_12;
    case 0xFF:
        temp_r0 = arg1->unk4;
        if ((u32) temp_r0 <= 0xABU) {
            __4FoodUi(&sp20, temp_r0 - 1);
            var_r0 = GetName__C4Food(&sp20);
        } else {
            __7ArticleUi(&sp24, arg1->unk4 - 0xAC);
            var_r0 = GetName__C7Article(&sp24);
        }
        var_r5 = var_r0;
        goto block_12;
    default:
        sp0 = 0;
        *arg0 = 0;
        strcpy(arg0 + 4);
        break;
    }
    return arg0;
}
