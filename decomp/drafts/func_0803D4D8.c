s32 func_0803BEB0(void *, s32, s32, s32);           /* extern */
s32 func_0803C7C8(void *, s32, s32, s32, s32);          /* extern */

s32 func_0803D4D8(void *arg0, ? arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_0803BEB0(arg0, arg2, arg3, arg4);
    if (temp_r0 == 3) {
        temp_r4 = arg0->unk4->unk1C(arg0);
        func_0803C7C8(arg0 + 8, temp_r4, arg0->unk4->unk20(arg0), arg1, arg3);
    }
    return temp_r0;
}
