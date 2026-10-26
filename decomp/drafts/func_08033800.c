void *func_08033800(void *arg0, void **arg1, s32 arg2) {
    s16 temp_r0;
    void *var_r1;

    var_r1 = (*arg1)->unk44(arg1, arg2);
    if (var_r1 != 0) {
        temp_r0 = var_r1->unkA;
        var_r1 = (void *) var_r1->unkE;
        arg0->unk0 = temp_r0;
    } else {
        arg0->unk0 = (s16) var_r1;
    }
    arg0->unk2 = (s16) var_r1;
    return arg0;
}
