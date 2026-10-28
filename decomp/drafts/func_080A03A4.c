typedef struct GenObj {
    u8 _pad0[3];
    u8 unk3;
} GenObj;
void func_080A03A4(GenObj *arg0, s32 arg1) {
    u8 temp_r3;
    u32 mask;

    arg1 &= 7;
    arg1 *= 4;
    temp_r3 = arg0->unk3;
    mask = 0x1D;
    mask = 0 - mask;
    mask &= temp_r3;
    arg0->unk3 = arg1 | mask;
}

/* ATTEMPT-NOTE opencode: andeq/muleq + mask-var (pola 11498); unk3 u8. */
