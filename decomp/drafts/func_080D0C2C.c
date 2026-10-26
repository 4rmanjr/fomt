extern void *gUnk_0300041C;
extern void *gUnk_03000420;

void func_080D0C2C(void) {
    u32 temp_r0;
    u32 temp_r0_2;

    temp_r0 = (u32) (gUnk_03000420->unk34 + 1) % 10U;
    gUnk_03000420->unk38 = temp_r0;
    *(gUnk_03000420 + 0x3C + (temp_r0 << 5)) = 0;
    temp_r0_2 = gUnk_03000420->unk38;
    gUnk_03000420->unk34 = temp_r0_2;
    gUnk_0300041C = gUnk_03000420 + ((temp_r0_2 << 5) + 0x3C);
}
