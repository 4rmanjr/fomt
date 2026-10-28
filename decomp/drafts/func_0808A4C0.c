s32 ExtractItemAt__8RucksackUi(s32 *, s32, s32);      /* extern */
s32 *GetFoodStackAt__6FridgeUi(s32, s32);            /* extern */
s32 __9FoodStack(s32 *);                              /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_080CBA60(s32, s32);                          /* extern */
s32 func_080CC0B4(s32);                               /* extern */
s32 func_080CCDEC(s32, s32);                          /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */

typedef struct GenObj {
    u8 _pad0[120];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[20];
    s32 unk94;
    u8 _pad98[36];
    s32 unkBC;
    u8 _padC0[60];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
} GenObj;
void func_0808A4C0(GenObj *arg0, s32 arg1) {
    s32 sp0;
    s32 *temp_r4_3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_4;
    s32 temp_ce;

    if (arg1 == 0) {
        func_0800F390(arg0->unkFC);
        func_080CC0B4(arg0->unk78);
        return;
    }
    if (arg1 <= 8) {
        temp_r4 = arg0->unk100;
        ExtractItemAt__8RucksackUi(&sp0, temp_r4, func_080CE184(arg0, arg1, 0));
        temp_r4_2 = arg0->unk78;
        func_080CBA60(temp_r4_2, func_080CE184(arg0, arg1, 0));
        return;
    }
    temp_ce = func_080CE184(arg0, arg1, *(s32 *) (arg0->unk94 + 0xBC));
    temp_r4_3 = GetFoodStackAt__6FridgeUi(arg0->unk104, temp_ce);
    __9FoodStack(&sp0);
    *temp_r4_3 = sp0;
    temp_r4_4 = arg0->unk7C;
    func_080CCDEC(temp_r4_4, func_080CE184(arg0, arg1, 0));
}

/* ATTEMPT-NOTE pi: len 156 vs ref 154 (+2); dekat; bandingkan tail: kandidat bl func_0800F390 pakai ldr langsung? cek objdump. */
