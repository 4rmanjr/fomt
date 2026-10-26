s32 func_0807A554(void *);                            /* extern */

void func_0807AF78(void *arg0, s32 arg1) {
    s16 temp_r1_2;
    s32 temp_r1;
    s32 var_r0;

    arg0->unk842 = (u16) (0xFFF0 & arg0->unk840);
    temp_r1 = arg0->unk844 + arg1;
    arg0->unk844 = temp_r1;
    if (temp_r1 < 0) {
        var_r0 = 0;
        goto block_3;
    }
    var_r0 = arg0->unk848;
    if (temp_r1 > var_r0) {
block_3:
        arg0->unk844 = var_r0;
    }
    temp_r1_2 = (arg0 + 0x844)->unk2;
    arg0->unk840 = (u16) temp_r1_2;
    if (arg0->unk842 != (temp_r1_2 & 0xFFF0)) {
        func_0807A554(arg0);
    }
}
