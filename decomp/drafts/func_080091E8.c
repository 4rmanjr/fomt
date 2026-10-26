s32 func_0800917C();                                  /* extern */

void *func_080091E8(void *arg0) {
    s16 *var_r0;
    void *temp_r1;

    func_0800917C();
    arg0->unk8 = (u16) arg0->unk4;
    arg0->unkA = 0x1E;
    arg0->unkC = 4;
    var_r0 = arg0 + 0xE;
    temp_r1 = arg0 + 0x22;
    if (var_r0 != temp_r1) {
        do {
            *var_r0 = 0;
            var_r0 += 2;
        } while (var_r0 != temp_r1);
    }
    return arg0;
}
