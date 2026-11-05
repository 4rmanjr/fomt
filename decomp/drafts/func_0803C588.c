// DECOMP-MATCHED func_0803C588 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
void func_0803BE50(struct GenObj__func_0803BE50 *arg0, s32 arg1);  /* extern */
void func_0803C7A0(s32 *arg0, s32 arg1);                      /* extern */
extern s32 vtable_unk_080E77E0;

typedef struct GenObj__func_0803C588 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0803C588;
void func_0803C588(GenObj__func_0803C588 *arg0, s32 arg1) {
    arg0->unk4 = &vtable_unk_080E77E0;
    func_0803C7A0((s32 *)((u8 *)arg0 + 8), 2);
    func_0803BE50((struct GenObj__func_0803BE50 *)arg0, arg1);
}
