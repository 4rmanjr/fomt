s32 memcpy(void *, ? *, u32);                         /* extern */
u32 strlen(s32 *);                                    /* extern */
extern ? gUnk_081078BC;

void *func_080B3C90(void *arg0) {
    u32 var_r4;

    var_r4 = strlen(&gUnk_081078BC);
    if (var_r4 > 0xCU) {
        var_r4 = 0xC;
    }
    memcpy(arg0, &gUnk_081078BC, var_r4);
    *(arg0 + var_r4) = 0;
    arg0->unk10 = 0;
    arg0->unk11 = 0;
    return arg0;
}
