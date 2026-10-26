s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_0800745C(void *, s32);                     /* extern */
s32 func_08007510(void *, s32);                     /* extern */

void *func_08007770(void *arg0, void **arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r1;
    void *temp_r5;
    void *temp_sb;
    void *var_r4;

    temp_r1 = *arg1;
    if (temp_r1 != 0) {
        temp_r0 = temp_r1->unk4;
        var_r4 = temp_r1->unk10;
        if (var_r4 != temp_r0) {
            temp_sb = var_r4;
loop_3:
            temp_r5 = var_r4;
            var_r4 += 8;
            if (var_r4 == temp_r0) {
                var_r4 = temp_r1->unk0;
            }
            if (func_08007510(temp_r5, temp_r5->unk4) != 1) {
                if (var_r4 != temp_sb) {
                    goto loop_3;
                }
            } else {
                temp_r1->unk10 = var_r4;
                var_r4 = temp_r5;
            }
        }
        func_08007128(arg0);
        var_r0 = func_0800745C(arg0, var_r4->unk4);
    } else {
        func_08007128(arg0);
        var_r0 = func_0800736C(arg0);
    }
    arg0->unk4 = var_r0;
    return arg0;
}
