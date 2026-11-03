s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803E6EC {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E6EC;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8556];
    s32 unk2178;
} GenObj;
s32 func_0803E6EC(GenObj *arg0) {
SP0803E6EC sp0;
SP0803E6EC *p_sp;
u8 t1;
u8 t2;
u8 t3;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    if ((t1 == 3) && (t2 == 2) && ((arg0->unk2178 & 0x43000) == 0x2000)) {
        if (((u32) (((u8 *)&arg0->unk2178)[2] << 0x1B) >> 0x1E) != 2) {
            return 7;
        }
        return 0;
    }
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 6;
    }
    if (t3 == 6) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    } else if (t3 == 0) {
        if (arg0->unk8 == 0) {
            return 4;
        }
        return 5;
    }
    return 1;
}
