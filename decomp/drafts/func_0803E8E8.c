s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8);                              /* extern */

typedef struct SP0803E8E8 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E8E8;
typedef struct GenObjE8E8 {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8526];
    u8 unk215A;
    u8 _pad215B[71];
    u8 unk21A2;
    u8 _pad21A3[39];
    u8 unk21CA;
} GenObjE8E8;
s32 func_0803E8E8(GenObjE8E8 *arg0) {
    SP0803E8E8 sp0;
    SP0803E8E8 *p_sp;
    register GenObjE8E8 *r5 __asm__("r5") = arg0;
    register u32 t1 __asm__("r2");
    register u32 t2 __asm__("r1");
    register u32 t6 __asm__("r4");
    register u32 off21A2 __asm__("r3");
    if ((s32) (r5->unk21CA << 0x1A) < 0) goto ret0;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)r5 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t6 = p_sp->unk3;
    if ((t1 == 2) && (t2 == 0x1E)) {
        register u32 addr __asm__("r0");
        off21A2 = 0x21A2;
        __asm__ volatile("" : "+r"(off21A2));
        addr = (u32)r5 + off21A2;
        if (((*(u8 *)addr) >> 6) != 2) {
            return 5;
        }
    }
    if ((((s32 (*)(u8))func_0803D644)((u8)t1) << 0x18) != 0) {
        return 4;
    }
    if ((s32) (r5->unk215A << 0x1C) >= 0) goto chk_t6;
ret0:
    return 0;
chk_t6:
    if ((t6 == 1) || (t6 == 3)) {
        return 3;
    }
    if (r5->unk8 == 0) {
        return 1;
    }
    return 2;
}
