s32 rand();                                         /* extern */

u32 func_080AB788(s32 arg0) {
    return (u32) ((0xFFFF & rand()) * arg0) >> 0x10;
}
