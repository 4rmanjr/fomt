s32 func_08007184(void *, s32);                       /* extern */
s32 func_080073E0(void *, s32);                       /* extern */
s32 func_080079E8(void *, s32);                       /* extern */
s32 func_08007C28(void *, s32);                       /* extern */
s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(void *, s32);                       /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
    u8 _pad10[12];
    void *unk1C;
} GenObj;
void func_080D406C(GenObj *arg0, s32 arg1) {
    void **temp_r1;
    GenObj *temp_r4;
    void *temp_r4_2;

    temp_r4 = (GenObj *)((u8 *)arg0 + 0x54);
    func_080073E0(temp_r4, temp_r4->unk4);
    func_08007184(temp_r4, 2);
    temp_r4_2 = temp_r4 - 8;
    func_08007C28(temp_r4_2, temp_r4_2->unk4);
    func_080079E8(temp_r4_2, 2);
    arg0->unk1C = &vtable_unk_080E5A28;
    func_08050D0C((GenObj *)((u8 *)arg0 + 0x10), 2);
    temp_r1 = arg0->unkC;
    if (temp_r1 != 0) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    func_080086BC(arg0, arg1);
}
