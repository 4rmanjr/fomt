s32 func_08057F64(void *, s32);                         /* extern */
s32 rand();                                         /* extern */

void func_08057E90(void *arg0, u8 arg1, ? arg2) {
    s32 var_r1;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r4;
    u8 *temp_r1;
    u8 *temp_r6;
    void *temp_r3;

    temp_r3 = arg0 + 0x2C;
    arg0->unk2C = (u8) (-4 & arg0->unk2C);
    temp_r3->unk2 = (u8) ((-0x21 & temp_r3->unk2) | ((arg1 & 1) << 5));
    var_r2 = 0;
    do {
        temp_r1 = arg0 + var_r2;
        *temp_r1 |= 0xFF;
        var_r2 += 1;
    } while (var_r2 <= 0xB);
    var_r4 = 0;
    do {
        temp_r6 = arg0 + var_r4;
loop_4:
        *temp_r6 = (u8) ((s32) (rand() >> 8) % 40);
        var_r2_2 = 0;
        var_r1 = 0;
loop_5:
        if ((var_r4 != var_r1) && (*(arg0 + var_r1) == *temp_r6)) {
            var_r2_2 = 1;
        }
        var_r1 += 1;
        if (var_r1 <= 0xB) {
            goto loop_5;
        }
        if (var_r2_2 != 0) {
            goto loop_4;
        }
        var_r4 += 1;
    } while (var_r4 <= 0xB);
    func_08057F64(arg0, arg2);
}
