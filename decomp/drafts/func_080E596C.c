s32 func_080086BC(void *, s32);                       /* extern */
s32 func_08050D0C(s32, s32);                          /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[4];
    void *unk10;
    u8 _pad14[100];
    s32 unk78;
    s32 unk7C;
    u8 _pad80[400];
    struct GenObj *unk210;
} GenObj;
void func_080E596C(GenObj *arg0, s32 arg1) {
    GenObj *temp_r1;
    GenObj *temp_r1_2;

    func_08050D0C((GenObj *)((u8 *)arg0 + 0x80), 2);
    temp_r1 = arg0->unk7C;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk210->unk8))(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk78;
    if (temp_r1_2 != 0) {
        ((void (*)(void *,...))(temp_r1_2->unk210->unk8))(temp_r1_2, 3);
    }
    arg0->unk10 = &vtable_unk_080E5A28;
    func_080086BC(arg0, arg1);
}
