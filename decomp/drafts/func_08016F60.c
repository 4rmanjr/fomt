void func_08016F60(void *arg0) {
    u32 var_r5;
    void ***temp_r6;
    void **temp_r0;
    void *temp_r0_2;

    var_r5 = 0x2E;
    temp_r6 = arg0->unk4 + 0xA8;
    do {
        temp_r0 = *temp_r6;
        temp_r0_2 = (*temp_r0)->unk40(temp_r0, var_r5);
        if ((temp_r0_2 != 0) && ((temp_r0_2->unk14->unk5C(temp_r0_2) << 0x18) != 0)) {
            temp_r0_2->unk14->unk7C(temp_r0_2);
        }
        var_r5 += 1;
    } while (var_r5 <= 0x45U);
}
