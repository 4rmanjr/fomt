s32 func_08010F54(s32);                               /* extern */
s32 func_0801FB7C(void ***, s32, s32, s32);           /* extern */
extern void *gUnk_0300040C;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[12];
    struct GenObj *unk14;
    u8 _pad18[76];
    s32 unk64;
    u8 _pad68[32];
    struct GenObj *unk88;
    struct GenObj *unk8C;
    u8 _pad90[24];
    struct GenObj *unkA8;
} GenObj;
void func_08014AF8(GenObj *arg0) {
    void **sp0;
    void ***sp4;
    void **sp8;
    s32 temp_r2;
    s32 var_r0;
    u32 temp_r1_4;
    void **temp_r0;
    void **temp_r1;
    void **temp_r1_2;
    void **temp_r1_3;
    void *temp_r4;
    GenObj *temp_r5;

    temp_r5 = arg0->unk4;
    temp_r1 = temp_r5->unkA8;
    if ((temp_r1 != 0) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r5->unkA8 = 0;
    func_08010F54(temp_r5->unk8C);
    func_0801FB7C(&sp0, temp_r5->unk8C, temp_r5->unk88, 0);
    temp_r1_2 = sp0;
    sp4 = &sp0;
    sp8 = temp_r1_2;
    sp0 = 0;
    temp_r1_3 = temp_r5->unkA8;
    if ((temp_r1_2 != temp_r1_3) && (temp_r1_3 != 0)) {
        (*temp_r1_3)->unk8(temp_r1_3, 3);
    }
    temp_r5->unkA8 = temp_r1_2;
    if (sp0 != 0) {
        (*sp0)->unk8(sp0, 3);
    }
    (*temp_r5->unkA8)->unk138();
    temp_r0 = temp_r5->unkA8;
    temp_r4 = (*temp_r0)->unk40(temp_r0, 0);
    if (gUnk_0300040C->unk36C != 0) {
        temp_r1_4 = (u32) (gUnk_0300040C->unk374 << 0x1B) >> 0x1B;
        if (temp_r1_4 <= 5U) {
            var_r0 = 6;
        } else {
            var_r0 = 0x1E;
        }
        temp_r2 = var_r0 - temp_r1_4;
        ((void (*)(void *,...))(temp_r4->unk14->unk64))(temp_r4, temp_r2 * 7, 0 - (temp_r2 * 2));
    }
}
