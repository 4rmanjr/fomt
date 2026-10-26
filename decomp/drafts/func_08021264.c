u8 func_08021264(void *arg0) {
    u32 temp_r0;
    u8 var_r1;

    temp_r0 = arg0->unk34->unk20;
    switch (temp_r0) {
    default:
        return 3U;
    case 0:
        return arg0->unk34->unk26;
    case 1:
    case 2:
    case 3:
    case 5:
        return 2U;
    case 6:
        var_r1 = 2;
        if (arg0->unk34->unk26 != 0) {
            var_r1 = 0xB;
        }
        return var_r1;
    }
}
