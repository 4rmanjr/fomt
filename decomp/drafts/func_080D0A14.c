extern void *gUnk_0300041C;
extern void *gUnk_03000420;

void func_080D0A14(void) {
    if ((gUnk_0300041C->unk0 == 1) && ((u32) gUnk_0300041C->unk4 <= 2U)) {
        (void *)0x04000154->unk0 = (s32) gUnk_03000420->unk4;
        (void *)0x04000154->unk4 = 0x20;
        gUnk_0300041C->unk4 = (u32) (gUnk_0300041C->unk4 + 1);
    }
}
