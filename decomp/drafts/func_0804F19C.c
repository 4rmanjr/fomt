s32 CpuFastSet(s32 *, s32, s32);                      /* extern */
s32 func_08051320(s32, s32, s32, s32, s32, u32, u32); /* extern */
s32 func_0805E6CC(s32 **, ? *);                         /* extern */
s32 func_0805E790(s32 *, ? **, s32);                    /* extern */
extern s32 *gUnk_080F9F78;
extern ? gUnk_08728208;
extern ? vtable_unk_080E5A28;

s32 func_0804F19C(void *arg0) {
    s32 spC;
s32 sp10;
    ? *sp30;
    s32 temp_r2;

    temp_r2 = ((((u32) (arg0->unkC << 0x11) >> 0x16) + 3) & 0x3FF) | (((u32) ((s32) arg0->unkC << 0xD) >> 0x1C) << 0xC);
    spC = temp_r2 | (temp_r2 << 0x10);
    CpuFastSet(&spC, (u16) ((u8) arg0->unkC << 0xB) + 0x06000000, 0x010000A0);
    func_08051320((u16) ((u8) arg0->unkC << 0xB) + 0x06000000, 0x10, 0, 0xE, 3, (u32) (arg0->unkC << 0x11) >> 0x16, (u32) ((s32) arg0->unkC << 0xD) >> 0x1C);
    func_08051320((u16) ((u8) arg0->unkC << 0xB) + 0x06000000, 0, 3, 0x1E, 7, (u32) (arg0->unkC << 0x11) >> 0x16, (u32) ((s32) arg0->unkC << 0xD) >> 0x1C);
    CpuFastSet(gUnk_080F9F78, (((u32) ((s32) arg0->unkC << 0xD) >> 0x1C) << 5) + 0x05000000, 8);
    func_0805E6CC(&sp30, &gUnk_08728208);
    func_0805E790(&sp10, &sp30, 0);
    CpuFastSet(sp20, (((u32) (arg0->unkE << 0x19) >> 0x1C) << 5) + 0x05000200, 8);
    sp30 = &vtable_unk_080E5A28;
    return 0;
}
