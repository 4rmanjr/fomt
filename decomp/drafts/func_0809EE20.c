typedef struct GenObj {
    u8 _pad0[20];
    u8 unk14;
} GenObj;
void func_0809EE20(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 neg;
    u8 t;
    u16 h;
    u32 mask;
    s32 c40 = 0x40;

    arg1 = 0x3F & arg1;
    t = arg0->unk14;
    neg = c40;
    neg = 0 - neg;
    neg &= t;
    arg0->unk14 = arg1 | neg;
    arg2 = 7 & arg2;
    arg2 = arg2 * 64;
    h = *(u16 *)((u8 *)arg0 + 0x14);
    mask = 0xFFFFFE3F;
    mask &= h;
    *(u16 *)((u8 *)arg0 + 0x14) = mask | arg2;
}

/* ATTEMPT-NOTE opencode: struktur+urutan pas (push r4/lr, movs/lsl/ands/orrs/strb, half-part); sisa dst-and (ands r3,r1 vs ref ands r1,r3; ands r1,r2+orrs r1,r3 vs ref ands r2,r1... wait ref ands r2,r1+orrs r1,r2). 6+ varian (swap/maskvar/reuse/no-t) dicoba, compiler kukuh dst=r3. */
