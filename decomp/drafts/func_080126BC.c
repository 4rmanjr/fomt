s32 func_08050DC8(s32, s32, s32, s32);                  /* extern */

void func_080126BC(void *arg0, ? arg1) {
    s32 temp_r2;
    void *temp_r4;

    temp_r4 = arg0->unk4;
    temp_r2 = temp_r4->unkAC;
    if (temp_r2 != 0) {
        func_08050DC8(temp_r2, arg1, 0x40, (temp_r4 + 0xAC)->unk4);
        temp_r4->unk9C = 0x11;
    }
}
