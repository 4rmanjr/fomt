void *GetMapData(s32);                              /* extern */
s32 Unpack(s32, s32);                                 /* extern */
s32 func_08008EB8(s32, s32, s32);                     /* extern */

void func_080A5CC0(void *arg0) {
    s32 *var_r4;
    s32 temp_r0;
    u32 var_r6;
    void *temp_r5;

    temp_r5 = GetMapData(arg0->unk4);
    var_r6 = 0;
    var_r4 = arg0 + 0x10;
    do {
        temp_r0 = *(temp_r5 + 0xC + (var_r6 * 4));
        if (temp_r0 != 0) {
            Unpack(temp_r0, *var_r4);
        } else {
            func_08008EB8(0x03FF03FF, *var_r4, temp_r5->unk22 * 2 * temp_r5->unk20);
        }
        var_r4 += 4;
        var_r6 += 1;
    } while (var_r6 <= 2U);
    arg0->unk29 = 1;
}
