s32 func_0800959C(void *, s32);                       /* extern */
s32 func_080D7944(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5B0C;
extern s32 vtable_unk_080E5B18;

typedef struct GenObj {
    u8 _pad0[8];
    void *unk8;
    u8 _padC[36];
    void *unk30;
} GenObj;
void func_080D79CC(s32 arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = arg0 - 0x1C;
    temp_r4->unk30 = &vtable_unk_080E5B0C;
    temp_r4->unk8 = &vtable_unk_080E5B18;
    func_080D7944(arg0, 0);
    func_0800959C(temp_r4, arg1);
}
