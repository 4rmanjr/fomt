s32 func_08008B54(s32 *, u8);                         /* extern */
extern s32 gSongTable;

s32 func_08008D3C(s32 arg0) {
    s32 sp0;

    func_08008B54(&sp0, (((u32) (arg0 << 0x10) >> 0xD) + &gSongTable)->unk4);
    return sp0;
}
