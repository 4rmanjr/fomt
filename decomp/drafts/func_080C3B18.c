extern ? gUnk_08107FE0;
extern ? gUnk_08108004;

void func_080C3B18(void *arg0) {
s32 sp0;
    s32 *var_r1;
    s32 var_r0;
    u8 temp_r1_2;
    void *temp_r0;
    void *temp_r1;

    temp_r0 = &gUnk_08108004 + 0xC;
    sp0.unk0 = (s32) gUnk_08108004.unk0;
    sp0.unk4 = (s32) gUnk_08108004.unk4;
    sp0.unk8 = (s32) gUnk_08108004.unk8;
    temp_r1 = &sp0 + 0xC;
    sp0.unkC = (s32) gUnk_08108004.unkC;
    temp_r1->unk4 = (s32) temp_r0->unk4;
    temp_r1->unk8 = (s32) temp_r0->unk8;
    temp_r1->unkC = (s32) temp_r0->unkC;
    arg0->unk984 = (s32) *((arg0->unk980 * 4) + sp);
    temp_r1_2 = arg0->unk988;
    if ((u32) temp_r1_2 <= 2U) {
        var_r1 = arg0 + 0x8B0;
        var_r0 = 0;
    } else if ((u32) (u8) (temp_r1_2 - 3) <= 2U) {
        var_r1 = arg0 + 0x8B0;
        var_r0 = 1;
    } else if ((u32) (u8) (temp_r1_2 - 6) <= 2U) {
        var_r1 = arg0 + 0x8B0;
        var_r0 = 2;
    } else if ((u32) (u8) (temp_r1_2 - 9) <= 1U) {
        var_r1 = arg0 + 0x8B0;
        var_r0 = 3;
    } else if ((u32) (u8) (temp_r1_2 - 0xB) <= 2U) {
        var_r1 = arg0 + 0x8B0;
        var_r0 = 4;
    } else if ((u32) (u8) (temp_r1_2 - 0xE) <= 2U) {
        var_r1 = arg0 + 0x8B0;
        var_r0 = 5;
    } else if ((u32) (u8) (temp_r1_2 - 0x11) <= 2U) {
        var_r1 = arg0 + 0x8B0;
        var_r0 = 6;
    } else {
        var_r1 = arg0 + 0x8B0;
        var_r0 = 7;
    }
    *var_r1 = var_r0;
    arg0->unk97C = (s8) (((arg0->unk8B0 * 4) + &gUnk_08107FE0)->unk1 * 3);
}
