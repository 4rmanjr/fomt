void *func_08008F60(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r1;
    s32 var_r1;
    s32 var_r3;

    if (arg2 != 0) {
        if ((arg3 != 0) && (temp_r1 = arg2 | arg3, ((1 & temp_r1) == 0))) {
            if (!(temp_r1 & 3)) {
                var_r3 = ((u32) (arg3 << 0xE) >> 0x10) | 0x84000000;
            } else {
                var_r3 = ((u32) (arg3 << 0xF) >> 0x10) | 0x80000000;
            }
        } else {
            var_r3 = 0;
        }
        var_r1 = 0x01000000 | var_r3;
    } else {
        var_r1 = 0;
    }
    arg0->unk0 = 1;
    arg0->unk4 = arg1;
    arg0->unk8 = arg2;
    arg0->unkC = var_r1;
    return arg0;
}
