typedef struct SP0803EA5C {
    u8 _pad0[3];
    u8 unk3;
} SP0803EA5C;
typedef struct GenObj {
    u8 _pad0[0x2186];
    u8 unk2186;
} GenObj;
s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803EA5C(GenObj *arg0) {
SP0803EA5C sp0;
SP0803EA5C *p_sp;
u32 c1;
u8 c2;
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    c2 = *(u8 *)((u8 *)p_sp + 3);
    c1 = ((u32) (arg0->unk2186 << 0x19) >> 0x1E);
    if (c1 == 2 && c2 == 3) {
        return 1;
    }
    return 0;
}
