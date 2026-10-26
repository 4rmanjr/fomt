extern void *gUnk_03000420;

s32 func_080D0678(void) {
    return gUnk_03000420->unk2C | (gUnk_03000420->unk2D << 8) | (gUnk_03000420->unk2E << 0x10) | (gUnk_03000420->unk2F << 0x18);
}
