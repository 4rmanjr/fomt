s32 func_080C7F58();                                  /* extern */
extern s32 vtable_unk_080E7C94;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    s32 unk6A4;
    u8 unk6A8;
    u8 _pad6A9[3];
    u8 unk6AC;
} GenObj;
void *func_080804F8(GenObj *arg0) {
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7C94;
    arg0->unk6A4 = 0;
    arg0->unk6A8 = 0;
    arg0->unk6AC = 0;
    return arg0;
}
