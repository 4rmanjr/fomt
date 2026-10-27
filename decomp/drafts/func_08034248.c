extern s32 gUnk_080F1450;

typedef struct GenObj {
    u8 _pad0[48];
    u8 unk30;
} GenObj;
u16 func_08034248(GenObj *arg0, s32 arg1) {
    u8 *base = (u8 *)&gUnk_080F1450;
    s32 t = arg0->unk30;

    return *(u16 *)(base + ((t * 5 + arg1) * 2));
}

/* ATTEMPT-NOTE opencode: unk30 u8; base (u8*) di var agar ldr-pc dulu + byte-arith (lsl#1) bukan s32-scale (lsl#3). */
