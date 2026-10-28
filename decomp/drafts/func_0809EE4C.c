s32 DayUpdate__3NpcUi(void *, s32);                   /* extern */
s32 rand();                                         /* extern */

typedef struct GenObj {
    u8 _pad0[20];
    u16 unk14;
} GenObj;
void func_0809EE4C(GenObj *arg0) {
    u32 mask;

    DayUpdate__3NpcUi(arg0, rand() % 100);
    if ((0xE0 << 1) & arg0->unk14) {
        u16 t = arg0->unk14;
        mask = 0xFFFFFE3F;
        mask &= t;
        arg0->unk14 = mask | (((((u32) (t << 0x17) >> 0x1D) - 1) & 7) << 6);
    }
}

/* ATTEMPT-NOTE opencode: unk14 u16; 0x1C0 via shift; mask-var andeq dst r1. */

/* ATTEMPT-NOTE opencode: unk14 u16; sisa temp-reg (r1 vs r2) + mask-dst; ~5 varian (s32-temp/rnd-var/reload/u16-mask) dicoba. */
