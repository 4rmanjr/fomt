s32 func_080323E0(s32, s32);                          /* extern */

void func_080122BC(void *arg0, s32 arg2) {
    s32 temp_r0;

    temp_r0 = (*arg0->unk4->unkA8)->unk40();
    if (temp_r0 != 0) {
        func_080323E0(temp_r0, arg2);
    }
}
