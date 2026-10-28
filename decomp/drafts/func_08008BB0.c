s32 m4aMPlayContinue(void *);                         /* extern */
s32 m4aMPlayStart(void *);                            /* extern */
extern s32 gSongTable;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
} GenObj;
void func_08008BB0(void **arg0, s32 arg1) {
    u32 t = (u32)(arg1 << 0x10);
    u32 base = (u32)&gSongTable;
    s32 song = *(s32 *)(base + (t >> 0xD));
    GenObj *temp_r2 = *arg0;

    if (temp_r2->unk0 != song) {
        m4aMPlayStart(temp_r2);
        return;
    }
    if ((s32) temp_r2->unk4 < 0) {
        m4aMPlayContinue(temp_r2);
    }
}
