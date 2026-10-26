extern s32 gUnk_080E89B6;

typedef struct GenObj {
    u8 _pad0[17920];
    s32 unk4600;
    s32 unk4604;
    s32 unk4605;
    u8 _pad4609[7];
    s32 unk4610;
} GenObj;
void func_08006B90(GenObj *arg0) {
    u8 sp0;
    u8 *temp_r3;
    u8 temp_r1;
    u8 temp_r4;
    u8 var_r0;

    temp_r1 = *((arg0->unk4604 * 2) + (arg0->unk4605 * 0x1F) + (arg0->unk4600 * 0xBA) + &gUnk_080E89B6);
    sp0 = temp_r1;
    temp_r4 = arg0->unk4610;
    temp_r3 = arg0 + 0x461C + temp_r4;
    if (*temp_r3 == temp_r1) {
        var_r0 = temp_r4 + 1;
    } else {
        *temp_r3 = temp_r1;
        var_r0 = arg0->unk4610 + 1;
    }
    arg0->unk4610 = var_r0;
    if ((u32) arg0->unk4610 > 0xBU) {
        arg0->unk4604 = 0xC;
        arg0->unk4605 = 6;
        arg0->unk4610 = 0xBU;
    }
}
