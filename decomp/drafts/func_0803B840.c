s32 CpuFastSet(s32 *, s32, s32);                      /* extern */
s32 func_08051320(s32, s32, s32, s32, s32, u32, u32); /* extern */
extern s32 *gUnk_080F9F78;

typedef struct GenObj {
    u8 _pad0[12];
    s32 unkC;
    u8 _pad10[4];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
} GenObj;
s32 func_0803B840(GenObj *arg0) {
    s32 spC;
    s32 temp_r2;

    temp_r2 = ((((u32) (arg0->unk1C << 0x11) >> 0x16) + 3) & 0x3FF) | (((u32) ((s32) arg0->unk1C << 0xD) >> 0x1C) << 0xC);
    spC = temp_r2 | (temp_r2 << 0x10);
    CpuFastSet(&spC, (u16) ((u8) arg0->unk1C << 0xB) + 0x06000000, 0x010000A0);
    func_08051320((u16) ((u8) arg0->unk1C << 0xB) + 0x06000000, arg0->unkC, 0, arg0->unk14, arg0->unk18, (u32) (arg0->unk1C << 0x11) >> 0x16, (u32) ((s32) arg0->unk1C << 0xD) >> 0x1C);
    CpuFastSet(gUnk_080F9F78, (((u32) ((s32) arg0->unk1C << 0xD) >> 0x1C) << 5) + 0x05000000, 8);
    return 0;
}
