s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_080A0490(void *);                          /* extern */

typedef struct SP0803E1FC {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 _pad3;
} SP0803E1FC;
typedef struct GenObj {
    u8 _pad0[8650];
    u8 unk21CA;
} GenObj;
s32 func_0803E1FC(GenObj *arg0) {
SP0803E1FC sp0;
SP0803E1FC *p_sp;
s32 temp_r0;
u8 t1;
u8 t2;
    if ((s32) (arg0->unk21CA << 0x19) < 0) {
        return 0;
    }
    p_sp = &sp0;
    func_0803D52C((s32 *)p_sp, (s32)((u8 *)arg0 + 0x10));
    t1 = p_sp->unk1;
    t2 = p_sp->unk2;
    if ((func_0803D644(t1, t2) << 0x18) != 0) {
        return 2;
    }
    temp_r0 = func_080A0490((void *)((u8 *)arg0 + 0x1CD4));
    if ((t1 == 2) && (t2 == 5) && (temp_r0 != 0x19)) {
        return 3;
    }
    return 1;
}
