s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08050DC8(void *, s32, s32, s32);             /* extern */
s32 func_080CAC70(s32 *);                               /* extern */
void *func_080CB2E8(s32, s32);                      /* extern */
void *func_080CB2FC(s32);                           /* extern */
void *func_080CC70C(s32, s32);                      /* extern */
s32 func_080CE184(void *, s32, s32);                /* extern */
extern s32 gUnk_08117ADC;

void func_080908CC(void *arg0, s32 arg1) {
s32 sp0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r1;
    void *var_r0;

    func_080CAC70(&sp0);
    if (arg1 == 0) {
        var_r0 = func_080CB2FC(arg0->unk78);
    } else if (arg1 <= 8) {
        temp_r4 = arg0->unk78;
        var_r0 = func_080CB2E8(temp_r4, func_080CE184(arg0, arg1, 0));
    } else {
        temp_r4_2 = arg0->unk7C;
        var_r0 = func_080CC70C(temp_r4_2, func_080CE184(arg0, arg1, 0));
    }
    sp0.unk0 = (s32) var_r0->unk0;
    sp0.unk4 = (s32) var_r0->unk4;
    sp0.unk8 = (s32) var_r0->unk8;
    var_r1 = 0;
    if ((sp4 == 0) || (sp8 == 0)) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        func_08050DC8(arg0 + 0x80, gUnk_08117ADC, 0, 0);
        arg0->unk108 = 1;
        func_08008B6C(arg0 + 0xC, 0xC7);
    }
}
