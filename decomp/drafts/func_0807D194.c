s32 func_080C7F58();                                  /* extern */
extern s32 vtable_unk_080E7C14;

typedef struct GenObj_0807D194 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    u8 unk6A4;
    u8 _pad6A5[99];
    s32 unk708;
    u8 unk70C;
} GenObj_0807D194;

s32 func_0807D194(s32 arg0, s32 arg1) {
    func_080C7F58();
    ((GenObj_0807D194 *)arg0)->unk4 = &vtable_unk_080E7C14;
    ((GenObj_0807D194 *)arg0)->unk6A4 = 0;
    ((GenObj_0807D194 *)arg0)->unk708 = 0;
    ((GenObj_0807D194 *)arg0)->unk70C = 0;
    return arg0;
}
