s32 GetFridge__9FarmHouse(s32);                     /* extern */
s32 func_080CE19C();                                  /* extern */
extern s32 vtable_unk_080E7D4C;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
    s32 unk8;
    u8 _padC[140];
    s32 unk98;
    u8 _pad9C[96];
    s32 unkFC;
    s32 unk100;
    s32 unk104;
    s32 unk108;
} GenObj;
void *func_080882AC(GenObj *arg0) {
    s32 temp_r0;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7D4C;
    arg0->unk98 = 0;
    temp_r0 = arg0->unk8;
    arg0->unkFC = (s32) (temp_r0 + 0x1C2C);
    arg0->unk100 = (s32) (temp_r0 + 0x1C38);
    arg0->unk104 = GetFridge__9FarmHouse(temp_r0 + 0x1F4);
    arg0->unk108 = 0;
    return arg0;
}
