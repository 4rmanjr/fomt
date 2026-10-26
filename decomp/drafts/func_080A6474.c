s32 func_080A4A94();                                  /* extern */
s32 func_080E43FC(void *);                            /* extern */
extern s32 vtable_unk_080E831C;

typedef struct GenObj {
    u8 _pad0[1];
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk4;
    u8 _pad8[136];
    void *unk90;
    s32 unk94;
    u8 _pad98[28];
    s32 unkB4;
} GenObj;
void *func_080A6474(GenObj *arg0, s32 arg1) {
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    void *temp_r0_3;

    func_080A4A94();
    arg0->unk90 = &vtable_unk_080E831C;
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x94);
    arg0->unk94 = arg1;
    temp_r0->unk4 = 0;
    func_080E43FC((GenObj *)((u8 *)temp_r0 + 4) + 4);
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0xB4);
    arg0->unkB4 = 0;
    temp_r0_2->unk1 = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_3 = (GenObj *)((u8 *)temp_r0_2 + 4);
    temp_r0_2->unk4 = 0;
    temp_r0_3->unk1 = 0;
    temp_r0_3->unk2 = 0;
    return arg0;
}
