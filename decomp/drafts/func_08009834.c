void func_08009834(void *arg0) {
    u8 temp_r3;
    u8 temp_r4;
    void *var_r1;

    temp_r4 = arg0->unk0;
    temp_r3 = arg0->unk1;
    if ((u32) temp_r4 > (u32) temp_r3) {
        var_r1 = arg0 + ((temp_r3 * 8) + 4);
        do {
            var_r1->unk1 = 2;
            var_r1 += 8;
        } while (var_r1 != (arg0 + ((temp_r4 * 8) + 4)));
    }
    arg0->unk0 = temp_r3;
    arg0->unk2 = (u8) arg0->unk3;
}
