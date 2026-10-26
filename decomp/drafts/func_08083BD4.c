s32 func_080C7F58();                                  /* extern */
s32 memcpy(void *, ? *, u32);                         /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_080FF838;
extern ? vtable_unk_080E7D14;

void *func_08083BD4(void *arg0) {
    s32 var_r0;
    u32 var_r4;
    void *temp_r6;

    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7D14;
    arg0->unk6A4 = 0;
    arg0->unk708 = 0;
    arg0->unk70C = 0;
    arg0->unk710 = 0;
    var_r0 = 0x13;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r6 = arg0 + 0x6170;
    var_r4 = strlen(&gUnk_080FF838);
    if (var_r4 > 0x7FU) {
        var_r4 = 0x7F;
    }
    memcpy(temp_r6, &gUnk_080FF838, var_r4);
    *(temp_r6 + var_r4) = 0;
    arg0->unk61F0 = 0;
    return arg0;
}
