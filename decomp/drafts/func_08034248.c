extern s32 gUnk_080F1450;

typedef struct GenObj {
    u16 unk0;
    u8 _pad2[2];
    struct GenObj *unk4;
    u8 _pad8[2];
    u16 unkA;
    u8 _padC[0x24];
    u8 unk30;
    u8 _pad31[0x10];
    u8 unk41;
    u8 _pad42[0x86];
    u8 unkC8;
    u8 _padC9;
    u8 unkCA;
    u8 unkCB;
    s16 unkCC;
    s16 unkCE;
    s16 unkD0;
} GenObj;
u16 func_08034248(GenObj *arg0, s32 arg1) {
    u8 *base = (u8 *)&gUnk_080F1450;
    s32 t = arg0->unk30;

    return *(u16 *)(base + ((t * 5 + arg1) * 2));
}

/* ATTEMPT-NOTE opencode: unk30 u8; base (u8*) di var agar ldr-pc dulu + byte-arith (lsl#1) bukan s32-scale (lsl#3). */
