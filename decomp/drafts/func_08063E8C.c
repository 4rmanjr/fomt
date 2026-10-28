s32 IsSick__C9Livestock();                          /* extern */
s32 IsUnhappy__C9Livestock(s32);                    /* extern */

s32 func_08063E8C(s32 arg0) {
    if ((IsSick__C9Livestock() << 0x18) != 0) {
        return 0x58;
    }
    if ((IsUnhappy__C9Livestock(arg0) << 0x18) != 0) {
        return 0x48;
    }
    return 0x38;
}
