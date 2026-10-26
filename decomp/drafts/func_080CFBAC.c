s32 func_080A5CC0();                                  /* extern */
s32 func_080CFEA8(void *, s32, s32, void *, s32);     /* extern */
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(void *, void *, void *); /* extern */

void func_080CFBAC(void *arg0) {
    void *sp4;
    s32 sp8;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r4;
    s32 var_sl;
    void *temp_r6;
    void *temp_r7;
    void *var_r1;
    void *var_r2;

    sp4 = arg0;
    func_080A5CC0();
    if (sp4->unk4 == 0x3E) {
        var_sl = 0;
        temp_r7 = sp4 + 0x94;
        do {
            var_r4 = 0;
            temp_r0 = var_sl + 1;
            sp8 = var_sl - 1;
loop_3:
            temp_r6 = temp_r7 + ((var_r4 + (var_sl * 0xC)) * 4);
            var_r0 = 0;
            if ((var_r4 >= 0) && (temp_r0 >= 0) && (var_r4 <= 0xB) && (temp_r0 <= 6)) {
                var_r0 = 1;
            }
            if (var_r0 != 0) {
                var_r1 = temp_r7 + ((var_r4 + (temp_r0 * 0xC)) * 4);
            } else {
                var_r1 = 0;
            }
            var_r0_2 = 0;
            if ((var_r4 >= 0) && (sp8 >= 0) && (var_r4 <= 0xB) && (sp8 <= 6)) {
                var_r0_2 = 1;
            }
            if (var_r0_2 != 0) {
                var_r2 = temp_r7 + ((var_r4 + (sp8 * 0xC)) * 4);
            } else {
                var_r2 = 0;
            }
            func_080CFEA8(sp4, var_r4 * 2, (var_sl * 2) + 7, temp_r6, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r6, var_r1, var_r2));
            var_r4 += 1;
            if ((u32) var_r4 <= 0xBU) {
                goto loop_3;
            }
            var_sl = temp_r0;
        } while ((u32) var_sl <= 6U);
    }
}
