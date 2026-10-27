s32 func_080D6EAC(s32);                               /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
} GenObj;
void func_080D6ECC(GenObj *arg0) {
    func_080D6EAC((u8 *)arg0 + 4);
    func_080D6EAC((u8 *)arg0 + 0x20);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}

/* ATTEMPT-NOTE opencode: pola 07EA8 (byte-arith + u8 member). */
