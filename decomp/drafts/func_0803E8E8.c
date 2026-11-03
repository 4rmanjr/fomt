s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8);                              /* extern */

typedef struct SP0803E8E8 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E8E8;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8526];
    u8 unk215A;
    u8 _pad215B[71];
    u8 unk21A2;
    u8 _pad21A3[39];
    u8 unk21CA;
} GenObj;
s32 func_0803E8E8(GenObj *arg0) {
SP0803E8E8 sp0;
SP0803E8E8 *p_sp;
u8 t1;
u8 t2;
u8 t6;
    if ((s32) (arg0->unk21CA << 0x1A) >= 0) {
        p_sp = &sp0;
        func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
        t1 = p_sp->unk1;
        t2 = p_sp->unk2;
        t6 = p_sp->unk3;
        if ((t1 == 2) && (t2 == 0x1E) && (((u8) arg0->unk21A2 >> 6) != 2)) {
            return 5;
        }
        if ((func_0803D644(t1) << 0x18) != 0) {
            return 4;
        }
        if ((s32) (arg0->unk215A << 0x1C) < 0) {
            goto block_8;
        }
        if ((t6 == 1) || (t6 == 3)) {
            return 3;
        }
        if (arg0->unk8 == 0) {
            return 1;
        }
        return 2;
    }
block_8:
    return 0;
}
