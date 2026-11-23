typedef struct {
    u8 _pad0[4];
    u8 unk4;
    u8 _pad5[3];
} SongEntry;

s32 func_08008B54(s32 *, u8);                         /* extern */
extern SongEntry gSongTable[];

s32 func_08008D3C(u16 arg0) {
    s32 sp0;

    func_08008B54(&sp0, gSongTable[arg0].unk4);
    return sp0;
}
