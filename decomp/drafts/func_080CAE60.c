s32 __builtin_new(s32);                             /* extern */
s32 func_0804EA58(s32, s32, u16, s32, s32, s32, s32);   /* extern */
? *func_080D3BC0(s32);                              /* extern */
? *malloc(s32);                                     /* extern */

void func_080CAE60(void *arg0, ? arg1, u16 arg2, ? arg3, s32 arg4, s32 arg5, s32 arg6) {
    ? *sp10;
    ? *temp_r1;
    ? *var_r2;
    s32 temp_r4;
    void *temp_r0;

    temp_r4 = func_0804EA58(__builtin_new(0x20), arg1, arg2, arg3, arg4, (s32) (u16) arg5, arg6);
    sp10 = arg0->unk8;
    var_r2 = malloc(0xC);
    if (var_r2 == 0) {
        var_r2 = func_080D3BC0(0xC);
    }
    if ((var_r2 + 8) != 0) {
        var_r2->unk8 = temp_r4;
    }
    temp_r1 = sp10->unk4;
    var_r2->unk0 = sp10;
    var_r2->unk4 = temp_r1;
    *temp_r1 = var_r2;
    sp10->unk4 = var_r2;
    temp_r0 = arg0->unk0;
    temp_r0->unk8->unk10(temp_r0, temp_r4, var_r2);
}
