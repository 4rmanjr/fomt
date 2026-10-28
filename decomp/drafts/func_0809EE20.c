typedef struct GenObj {
    u8 _pad0[20];
    u8 unk14;
} GenObj;
void func_0809EE20(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 neg;
    register u8 t __asm__("r4");
    u16 h;
    u32 mask;
    register s32 c3f __asm__("r3");
    register s32 c7 __asm__("r1");

    c3f = 0x3F;
    arg1 &= c3f;
    t = arg0->unk14;
    __asm__ volatile("" : : : "r3");
    neg = 0x40;
    neg = 0 - neg;
    neg &= t;
    arg0->unk14 = neg | arg1;
    c7 = 7;
    arg2 &= c7;
    arg2 = arg2 * 64;
    h = *(u16 *)((u8 *)arg0 + 0x14);
    mask = 0xFFFFFE3F;
    mask &= h;
    *(u16 *)((u8 *)arg0 + 0x14) = mask | arg2;
}

/* ATTEMPT-NOTE opencode: struktur+urutan pas (push r4/lr, movs/lsl/ands/orrs/strb, half-part); sisa dst-and (ands r3,r1 vs ref ands r1,r3; ands r1,r2+orrs r1,r3 vs ref ands r2,r1... wait ref ands r2,r1+orrs r1,r2). 6+ varian (swap/maskvar/reuse/no-t) dicoba, compiler kukuh dst=r3. */
