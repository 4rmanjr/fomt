s32 __as__6AnimalRC6Animal();                         /* extern */

void *func_080D67C8(void *arg0, void *arg1) {
    u8 temp_r3;

    __as__6AnimalRC6Animal();
    arg0->unk1C = (u8) arg1->unk1C;
    temp_r3 = arg1->unk1D;
    arg0->unk1D = (u8) ((((-2 & arg0->unk1D) | ((u32) (temp_r3 << 0x1F) >> 0x1F)) & ~2) | (2 & temp_r3));
    arg0->unk20 = (s32) arg1->unk20;
    arg0->unk24 = (s32) arg1->unk24;
    arg0->unk28 = (s32) arg1->unk28;
    arg0->unk2C = (u16) ((0xFFFFFC00 & arg0->unk2C) | ((u32) (arg1->unk2C << 0x16) >> 0x16));
    arg0->unk2D = (u8) ((-0x1D & arg0->unk2D) | (0x1C & arg1->unk2D));
    arg0->unk2C = (s32) (((s32) arg0->unk2C & 0xFFE01FFF) | ((s32) arg1->unk2C & 0x1FE000));
    return arg0;
}
