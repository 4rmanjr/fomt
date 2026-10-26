s32 func_08050E30(s32, s32, s32, s32, s32, s32, s32); /* extern */

void func_08012860(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r1;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r1 = temp_r4->unkAC;
    if ((temp_r1 != 0) && (arg2 != 0) && (arg3 != 0)) {
        if (arg4 == 0) {
            var_r0 = (temp_r4 + 0xAC)->unk4;
            goto block_7;
        }
        if (arg5 == 0) {
            var_r0 = temp_r4->unkB0;
block_7:
            func_08050E30(temp_r1, arg1, arg2, arg3, var_r0);
        } else {
            func_08050E30(temp_r1, arg1, arg2, arg3, arg4, arg5, temp_r4->unkB0);
        }
        temp_r4->unk9C = 0x14;
    }
}
