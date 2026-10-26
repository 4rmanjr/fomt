s32 memcpy(void *, void *, s32);                      /* extern */
extern ? gUnk_0875A440;

void func_0803D080(void **arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 var_r2;
    void *temp_r7;

    temp_r7 = *arg0;
    switch (arg1) {                                 /* irregular */
    default:
        sp0 = 0xB;
        var_r2 = 0xC;
        break;
    case 1:
        sp0 = 0xD;
        var_r2 = 0xE;
        break;
    case 2:
        sp0 = 0xF;
        var_r2 = 0x10;
        break;
    case 3:
        sp0 = 0x11;
        var_r2 = 0x12;
        break;
    }
    sp4 = var_r2;
    memcpy(temp_r7 + 0x84, (sp0 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk18C = 1;
    memcpy(temp_r7 + 0xA4, (var_r2 << 5) + &gUnk_0875A440, 0x20);
    temp_r7->unk18C = 1;
}
