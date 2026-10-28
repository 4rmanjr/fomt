s32 m4aMPlayStart(s32, s32);                          /* extern */
extern s32 gSongTable;

void func_08008B6C(s32 *arg0, s32 arg1) {
    u32 t = (u32)(arg1 << 0x10);
    s32 a0 = *arg0;
    u32 base = (u32)&gSongTable;
    m4aMPlayStart(a0, *(s32 *)(base + (t >> 0xD)));
}
