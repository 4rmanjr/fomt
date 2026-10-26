s32 func_08050E98(s32, s32);                          /* extern */
s32 func_080CD620();                                  /* extern */

void func_080CE294(s32 arg0) {
    s32 temp_r4;

    func_080CD620();
    temp_r4 = arg0 + 0x80;
    func_08050E98(temp_r4, 1);
    func_08050E98(temp_r4, 2);
    func_08050E98(temp_r4, 4);
    func_08050E98(temp_r4, 8);
}
