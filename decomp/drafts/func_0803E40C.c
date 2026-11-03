typedef struct SP0803E40C {
    u8 _pad0[3];
    u8 unk3;
} SP0803E40C;
typedef struct GenObj {
    u8 _pad0[0x2187];
    u8 unk2187;
} GenObj;
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803E40C(GenObj *arg0) {
SP0803E40C sp0;
SP0803E40C *p_sp;
u32 c1;
u8 c2;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    c2 = *(u8 *)((u8 *)p_sp + 3);
    c1 = ((u32) (arg0->unk2187 << 0x1B) >> 0x1E);
    if (c1 == 2 && c2 == 0) {
        return 1;
    }
    return 0;
}
