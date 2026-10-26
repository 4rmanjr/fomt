void *func_0809CE8C(void *arg0) {
    u32 var_r0;
    u32 var_r3;
    void *var_r2;

    arg0->unk0 = 0;
    arg0->unk624 = 0;
    arg0->unk625 = 0;
    arg0->unk626 = (u8) (-2 & arg0->unk626 & ~2 & ~4 & ~8 & ~0x10 & ~0x20);
    var_r0 = 0;
    do {
        var_r3 = 0;
        var_r2 = (var_r0 * 0x38) + (arg0 + 4);
loop_2:
        var_r2->unk0 = (u8) (-0x10 & var_r2->unk0);
        var_r2->unk0 = (s16) (0xFFFFFC0F & (u16) var_r2->unk0);
        var_r2->unk1 = (u8) (3 & var_r2->unk1);
        var_r2 += 2;
        var_r3 += 1;
        if (var_r3 <= 0x1BU) {
            goto loop_2;
        }
        var_r0 += 1;
    } while (var_r0 <= 0x1BU);
    return arg0;
}
