s32 func_08050DC8(void *, s32 *, s32, s32);             /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
extern s32 gUnk_08100558;

typedef struct GenObj {
    u8 _pad0[984];
    s32 unk3D8;
    s32 unk3DC;
} GenObj;
void func_080E3678(GenObj *arg0) {
    void *temp_r4;

    arg0->unk3D8 = 0;
    arg0->unk3DC = 0;
    temp_r4 = arg0 + 0x1C8;
    func_08050DC8(temp_r4, &gUnk_08100558, 0, 0);
    func_08050E50(temp_r4, 0x3A);
}
