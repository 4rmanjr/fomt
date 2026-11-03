s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803E448 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} SP0803E448;
typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[8638];
    u8 unk21CA;
} GenObj;
s32 func_0803E448(GenObj *arg0) {
SP0803E448 sp0;
SP0803E448 *p_sp;
u8 t1;
u8 t2;
u8 t3;
    if ((s32) (arg0->unk21CA << 0x1B) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    t3 = p_sp->unk3;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 4;
    }
    if (t3 == 1) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}
