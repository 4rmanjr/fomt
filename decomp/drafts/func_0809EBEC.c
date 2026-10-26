s32 DayUpdate__3NpcUi(void *, s32);                   /* extern */
s32 rand();                                         /* extern */

void func_0809EBEC(void *arg0) {
    u8 temp_r1;
    u8 temp_r2;

    DayUpdate__3NpcUi(arg0, rand() % 100);
    temp_r2 = arg0->unk14;
    if ((temp_r2 >> 7) != 0) {
        arg0->unk14 = (u8) (0x7F & temp_r2);
        return;
    }
    temp_r1 = arg0->unk15;
    if ((temp_r1 << 0x1F) != 0) {
        arg0->unk15 = (u8) (-2 & temp_r1);
        if (0x70 & temp_r2) {
            arg0->unk14 = (u8) ((-0x71 & temp_r2) | (((((u32) (temp_r2 << 0x19) >> 0x1D) - 1) & 7) * 0x10));
        }
    }
}
