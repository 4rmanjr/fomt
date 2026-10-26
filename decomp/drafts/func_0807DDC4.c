s32 func_080C7F58();                                  /* extern */
extern s32 vtable_unk_080E7C08;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    s32 unk6A4;
    s32 unk6A8;
    u8 _pad6AC[96];
    s32 unk70C;
} GenObj;
void *func_0807DDC4(GenObj *arg0, s32 arg2) {
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7C08;
    arg0->unk6A4 = arg2;
    arg0->unk6A8 = 0;
    arg0->unk70C = 0;
    return arg0;
}
