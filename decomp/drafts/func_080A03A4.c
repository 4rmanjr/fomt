typedef struct GenObj {
    u8 _pad0[3];
    u8 unk3;
} GenObj;
void func_080A03A4(GenObj *arg0, s32 arg1) {
    u8 temp_r3;
    register s32 var_r2 __asm__("r2");
    s32 var_mask;

    var_r2 = 7;
    arg1 &= var_r2;
    arg1 *= 4;
    temp_r3 = arg0->unk3;
    __asm__ volatile("" : : : "r2");
    var_mask = 0x1D;
    var_mask = 0 - var_mask;
    var_mask &= temp_r3;
    arg0->unk3 = var_mask | arg1;
}

/* ATTEMPT-NOTE opencode: andeq/muleq + mask-var (pola 11498); unk3 u8. */
