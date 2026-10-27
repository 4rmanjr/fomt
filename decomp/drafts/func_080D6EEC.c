s32 func_080D6ECC(s32);                               /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
} GenObj;
void func_080D6EEC(GenObj *arg0) {
    func_080D6ECC((u8 *)arg0 + 4);
    func_080D6ECC((u8 *)arg0 + 0x40);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}

/* ATTEMPT-NOTE opencode: pola 07EA8. */
