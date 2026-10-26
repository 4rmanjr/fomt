s32 __builtin_new(s32);                             /* extern */
s32 func_080324BC(s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_08035C04();                                  /* extern */

void func_08035CD4(s32 arg0) {
    s8 spC;
    s32 temp_r0;

    func_08035C04();
    temp_r0 = __builtin_new(0x8C);
    spC = 0;
    func_080324BC(temp_r0, arg0, 5, 0x1B, 1, 0, 0);
}
