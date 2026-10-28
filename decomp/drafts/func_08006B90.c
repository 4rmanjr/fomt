extern s32 gUnk_080E89B6;

typedef struct GenObj {
    u8 _pad0[17920];
    s32 unk4600;
    s8 unk4604;
    s8 unk4605;
    u8 _pad4607[9];
    u8 unk4610;
} GenObj;
void func_08006B90(GenObj *arg0) {
    u8 sp0;
    s8 temp_r1s;
    s8 temp_r2s;
    s32 temp_r0;
    u8 *temp_r3;
    u8 temp_r1;
    u8 temp_r4;
    u8 var_r0;

    temp_r1s = *(s8 *)((u8 *)arg0 + 0x4604);
    temp_r2s = *(s8 *)((u8 *)arg0 + 0x4605);
    temp_r0 = ((s32)temp_r1s << 1) + (((s32)temp_r2s << 5) - (s32)temp_r2s) + (arg0->unk4600 * 0xBA);
    temp_r1 = *(s8 *)((u8 *)&gUnk_080E89B6 + temp_r0);
    sp0 = temp_r1;
    temp_r4 = *(u8 *)((u8 *)arg0 + 0x4610);
    temp_r3 = (u8 *)arg0 + 0x461C + temp_r4;
    if (*temp_r3 == sp0) {
        var_r0 = temp_r4 + 1;
    } else {
        *temp_r3 = sp0;
        var_r0 = *(u8 *)((u8 *)arg0 + 0x4610) + 1;
    }
    *(u8 *)((u8 *)arg0 + 0x4610) = var_r0;
    if ((u32) *(u8 *)((u8 *)arg0 + 0x4610) > 0xBU) {
        *(u8 *)((u8 *)arg0 + 0x4604) = 0xC;
        *(u8 *)((u8 *)arg0 + 0x4605) = 6;
        *(u8 *)((u8 *)arg0 + 0x4610) = 0xBU;
    }
}
