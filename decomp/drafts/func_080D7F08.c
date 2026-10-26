void func_080D7F08(void *arg0) {
    u32 var_r4;
    void **temp_r0;
    void *temp_r0_2;

    var_r4 = 1;
    do {
        temp_r0 = arg0->unkA8;
        temp_r0_2 = (*temp_r0)->unk40(temp_r0, var_r4);
        if (temp_r0_2 != 0) {
            temp_r0_2->unk14->unk3C(temp_r0_2, 3);
        }
        var_r4 += 1;
    } while (var_r4 <= 0x23U);
}
