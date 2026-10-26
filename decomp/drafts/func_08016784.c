s32 func_08008BF8(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */

s32 func_08016784(void *arg0) {
    s32 temp_r4;

    temp_r4 = arg0->unk4 + 0xBC;
    if ((func_08008CD0(temp_r4) << 0x18) != 0) {
        func_08008BF8(temp_r4, 5);
        return 1;
    }
    return 0;
}
