s32 func_08076E0C(void *, s32);                       /* extern */

void func_080E1C18(void *arg0, s32 arg1) {
    s32 temp_r1;
    void *temp_r1_2;
    void *var_r0;
    void *var_r0_2;

    temp_r1 = arg0 + 0x1638 + ((arg0->unk1638 * 0x10) + 4);
    var_r0 = arg0 + 0x163C;
    if (var_r0 != temp_r1) {
        do {
            var_r0 += 0x10;
        } while (var_r0 != temp_r1);
    }
    temp_r1_2 = arg0 + 0x1264 + ((arg0->unk1264 * 0x10) + 4);
    var_r0_2 = arg0 + 0x1268;
    if (var_r0_2 != temp_r1_2) {
        do {
            var_r0_2 += 0x10;
        } while (var_r0_2 != temp_r1_2);
    }
    func_08076E0C(arg0, arg1);
}
