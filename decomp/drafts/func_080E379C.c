s32 func_08050D8C(void *, ? *);                       /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
extern ? gUnk_081005EC;

void func_080E379C(void *arg0) {
    void *temp_r4;

    arg0->unk3D8 = 0;
    arg0->unk3DC = 0;
    temp_r4 = arg0 + 0x1C8;
    func_08050D8C(temp_r4, &gUnk_081005EC);
    func_08050E50(temp_r4, 0x3A);
    arg0->unk1D4 = 4;
}
