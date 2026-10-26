s32 m4aMPlayStart(void *);                            /* extern */
extern ? gSongTable;

void func_08008B88(void **arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = *arg0;
    if ((temp_r2->unk0 != *(((u32) (arg1 << 0x10) >> 0xD) + &gSongTable)) || ((s32) temp_r2->unk4 < 0)) {
        m4aMPlayStart(temp_r2);
    }
}
