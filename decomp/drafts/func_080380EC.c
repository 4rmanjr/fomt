typedef struct GenObj {
    u8 _pad0[28];
    s32 unk1C;
    s32 unk20;
    u8 unk24;
    u8 unk25;
} GenObj;
void func_080380EC(GenObj *arg0, s8 arg1) {
    arg0->unk24 = arg1;
    arg0->unk1C = 0xA8 << 0xD;
    arg0->unk20 = 0xC0 << 0xA;
    arg0->unk25 = 1;
}

/* ATTEMPT-NOTE opencode: unk24/unk25 u8 (strb); konstanta via shift (movs+lsl) bukan imm. */
