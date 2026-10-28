s32 DayUpdate__3NpcUi(void *, s32);                   /* extern */
s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    u8 unk14;
    u8 unk15;
} GenObj;
void func_0809EBEC(GenObj *arg0) {
    u8 temp_r1;
    u8 temp_r2;
    s32 neg;

    DayUpdate__3NpcUi(arg0, rand() % 100);
    temp_r2 = arg0->unk14;
    if ((temp_r2 >> 7) != 0) {
        neg = 0x7F;
        neg &= temp_r2;
        arg0->unk14 = neg;
        return;
    }
    temp_r1 = arg0->unk15;
    if ((temp_r1 << 0x1F) != 0) {
        neg = 2;
        neg = 0 - neg;
        arg0->unk15 = neg & temp_r1;
        if (0x70 & arg0->unk14) {
            neg = 0x71;
            neg = 0 - neg;
            neg &= arg0->unk14;
            arg0->unk14 = neg | (((((u32) (arg0->unk14 << 0x19) >> 0x1D) - 1) & 7) * 0x10);
        }
    }
}

/* ATTEMPT-NOTE opencode: unk14/15 u8; neg-var utk movs+rsbs (anti-fold 0xFE/0x8F); sisa alokasi temp (r1 vs r2) + dst-and. ~7 varian dicoba. */
