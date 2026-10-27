s32 func_080D6EEC(s32);                               /* extern */

typedef struct GenObj {
    u8 unk0;
    u8 unk1;
} GenObj;
void func_08007EA8(GenObj *arg0) {
    func_080D6EEC((u8 *)arg0 + 4);
    func_080D6EEC((u8 *)arg0 + 0x80);
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}

/* ATTEMPT-NOTE opencode: unk0/unk1 u8 (strb); byte-arith (u8*)+N. */
