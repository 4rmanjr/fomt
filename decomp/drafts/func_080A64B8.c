s32 func_080A4BEC();                                  /* extern */
extern s32 gUnk_08107338;
extern s32 gUnk_08107344;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk1;
    struct GenObj *unk2;
    u8 _pad6[142];
    void *unk94;
    u8 _pad98[8456];
    s32 unk21A0;
} GenObj;
void func_080A64B8(GenObj *arg0) {
    u32 temp_r3;
    u8 temp_r0;
    u8 temp_r0_2;
    GenObj *temp_r2;
    GenObj *temp_r2_2;

    func_080A4BEC();
    if (arg0->unk0 == 6) {
        temp_r3 = (u32) (arg0->unk94->unk21A0 << 0x1E) >> 0x1E;
        if (temp_r3 == 1) {
            temp_r2 = (GenObj *)((u8 *)arg0 + 0xB4);
            temp_r0 = temp_r2->unk2 + 1;
            temp_r2->unk2 = temp_r0;
            if ((u32) temp_r0 >= (u32) gUnk_08107338.unk8) {
                temp_r2->unk2 = 0U;
                temp_r2->unk1 = (s8) temp_r3;
            }
            temp_r2_2 = (GenObj *)((u8 *)arg0 + 0xB8);
            temp_r0_2 = temp_r2_2->unk2 + 1;
            temp_r2_2->unk2 = temp_r0_2;
            if ((u32) temp_r0_2 >= (u32) gUnk_08107344.unk8) {
                temp_r2_2->unk2 = 0U;
                temp_r2_2->unk1 = (s8) temp_r3;
            }
        }
    }
}
