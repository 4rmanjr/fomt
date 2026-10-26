s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_08007CD8(void *, s32);                     /* extern */
s32 func_08007E24(void *, s32);                     /* extern */

void *func_080083D0(void *arg0, s32 *arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r0;
    void *temp_r5;
    void *temp_r6;
    void *temp_sb;
    void *var_r4;

    temp_r1 = *arg1;
    if (temp_r1 != 0) {
        temp_r6 = (arg2 * 0x14) + temp_r1;
        temp_r0 = temp_r6->unk4;
        var_r4 = temp_r6->unk10;
        if (var_r4 != temp_r0) {
            temp_sb = var_r4;
loop_3:
            temp_r5 = var_r4;
            var_r4 += 8;
            if (var_r4 == temp_r0) {
                var_r4 = temp_r6->unk0;
            }
            if (func_08007E24(temp_r5, temp_r5->unk4) != 1) {
                if (var_r4 != temp_sb) {
                    goto loop_3;
                }
            } else {
                temp_r6->unk10 = var_r4;
                var_r4 = temp_r5;
            }
        }
        func_08007874(arg0);
        var_r0 = func_08007CD8(arg0, var_r4->unk4);
    } else {
        func_08007874(arg0);
        var_r0 = func_08007B54(arg0, arg2);
    }
    arg0->unk4 = var_r0;
    return arg0;
}
