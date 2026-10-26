s32 func_08050D8C(void *, s32 *);                       /* extern */
s32 func_08050E50(void *, s32);                       /* extern */
extern s32 gUnk_081005EC;

typedef struct GenObj {
    u8 _pad0[468];
    s32 unk1D4;
    u8 _pad1D8[512];
    s32 unk3D8;
    s32 unk3DC;
} GenObj;
void func_080E379C(GenObj *arg0) {
    void *temp_r4;

    arg0->unk3D8 = 0;
    arg0->unk3DC = 0;
    temp_r4 = arg0 + 0x1C8;
    func_08050D8C(temp_r4, &gUnk_081005EC);
    func_08050E50(temp_r4, 0x3A);
    arg0->unk1D4 = 4;
}
