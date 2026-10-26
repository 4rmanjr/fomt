s32 func_080E3874(void *arg0) {
    s32 var_r1;

    if (arg0->unk1B8 != 0) {
        if (arg0->unk1BB != 0) {
            return 0;
        }
        return 1;
    }
    var_r1 = 0;
    if (arg0->unk0->unk4C(arg0) == 0) {
        var_r1 = 1;
    }
    return var_r1;
}
