s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern s32 vtable_unk_080E76F8;

typedef struct GenObj {
    u8 _pad0[16];
    s32 unk10;
    u8 _pad14[25620];
    void *unk6428;
} GenObj;
void func_080E19F8(GenObj *arg0, s32 arg1) {
    s32 temp_r0;

    arg0->unk6428 = &vtable_unk_080E76F8;
    temp_r0 = arg0->unk10;
    if (temp_r0 != 0) {
        func_08050D0C(temp_r0, 3);
    }
    func_080086BC(arg0, arg1);
}
