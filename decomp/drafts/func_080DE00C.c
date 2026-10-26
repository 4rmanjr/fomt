s32 func_0803A180(void *, s32, s32);                /* extern */
s32 func_0805E860(void *, u16);                       /* extern */

void func_080DE00C(void *arg0) {
    u16 temp_r5;
    void *temp_r0;

    if (func_0803A180(arg0, arg0 + 0x50, 0x8000) != 0) {
        temp_r5 = arg0->unk50 + 0x10;
        if (arg0->unk4 != temp_r5) {
            func_0805E860(arg0 + 0x30, temp_r5);
            temp_r0 = arg0 + 0x44;
            arg0->unk44 = 1;
            temp_r0->unk2 = 0;
            (temp_r0 + 2)->unk1 = 1;
            arg0->unk4 = temp_r5;
        }
    }
}
