s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct SP0803DF50 {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 _pad3;
} SP0803DF50;
typedef struct GenObj {
    u8 _pad0[8650];
    u8 unk21CA;
} GenObj;
s32 func_0803DF50(GenObj *arg0) {
SP0803DF50 sp0;
SP0803DF50 *p_sp;
    if ((s32) (arg0->unk21CA << 0x1A) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    if ((func_0803D644(p_sp->unk1, p_sp->unk2) << 0x18) != 0) {
        return 2;
    }
    return 1;
}
