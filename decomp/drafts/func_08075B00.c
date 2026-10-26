? *func_080D3BC0(s32);                              /* extern */
? *malloc(s32);                                     /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */
s32 memset(s32 *, s32, ? *);                            /* extern */
extern ? vtable_unk_080E7B68;

void *func_08075B00(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
s32 sp4;
    ? *var_r0;
    ? *var_r4;
    s16 temp_sl;
    s32 temp_r4;
    s32 var_r5;
    s32 var_r8;
    void *temp_r0;
    void *temp_r7;

    var_r5 = arg1;
    arg0->unk0 = arg2;
    arg0->unk14 = arg3;
    temp_r7 = arg0 + 0x18;
    arg0->unk18 = 0;
    temp_r7->unk4 = 0;
    (arg0 + 0x20)->unk4 = 0;
    if (var_r5 != 0) {
        temp_r4 = var_r5 << 6;
        var_r0 = malloc(temp_r4);
        var_r8 = temp_r4;
        if (var_r0 == 0) {
            var_r0 = func_080D3BC0(var_r8);
        }
    } else {
        var_r0 = 0;
        var_r8 = 0;
    }
    arg0->unk18 = var_r0;
    temp_r7->unk4 = var_r0;
    temp_r7->unkC = (void *) (var_r0 + var_r8);
    memset(&sp4, 0, (s32 *)0x40);
    var_r4 = arg0->unk18;
    temp_r0 = arg0 + 0x28;
    temp_sl = var_r5 * 8;
    if (var_r5 != 0) {
        do {
            if (var_r4 != 0) {
                memcpy(var_r4, &sp4, 0x40);
            }
            var_r5 -= 1;
            var_r4 += 0x40;
        } while (var_r5 != 0);
    }
    temp_r7->unk4 = var_r4;
    arg0->unk28 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = &vtable_unk_080E7B68;
    memset(arg0->unk18, 0xFF, (s32 *) var_r8);
    arg0->unk4 = temp_sl;
    arg0->unk6 = 0xFFFF;
    arg0->unk8 = 0;
    arg0->unkA = -1;
    arg0->unkC = 0;
    arg0->unkE = 0xA0;
    arg0->unk10 = arg4;
    return arg0;
}
