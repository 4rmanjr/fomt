s32 func_0803D52C(s32 *, s32);                      /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_080A0490(void *);                          /* extern */
u32 func_080A0384(void *);                          /* extern */
s32 func_080A01F8(void *, s32);                     /* extern */
u32 GetRivalEventCount__C12Bachelorette(void *);    /* extern */
u32 GetLove__C12Bachelorette(void);                 /* extern */

typedef struct {
    u8 _pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Buf4;

s32 func_0803E780(u8 *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    u8 v3;
    u8 *p;
    s32 t;
    s32 t2;
    u32 u;
    u32 nz;
    u32 nz2;

    if ((s32) (arg0[0x21CA] << 0x1A) < 0) {
        return 0;
    }
    func_0803D52C((s32 *) &sp0, (s32) (arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    p = arg0 + 0x1CD4;
    t = func_080A0490(p);
    if (t == 0x15) {
        if (v1 == 2) {
            if (v2 == 9) {
                return 0xE;
            }
            if (v2 == 0xD) {
                return 0xF;
            }
        }
        if (((u32) (arg0[0x216C] << 0x1D) >> 0x1E) == 1) {
            return 0x10;
        }
        u = func_080A0384(arg0 + 0x1CD4);
        nz = (0 - u | u) >> 0x1F;
        nz2 = nz;
        if (((func_0803D644(v1, v2) << 0x18) != 0) || (*(s32 *) (arg0 + 8) == 3) || (*(s32 *) (arg0 + 8) == 4)) {
            if (nz2 != 0) {
                return 0xC;
            }
            return 0xD;
        }
        if (v3 == 3) {
            if (nz != 0) {
                return 9;
            }
            return 0xB;
        }
        if (nz != 0) {
            return 8;
        }
        return 0xA;
    }
    if (GetRivalEventCount__C12Bachelorette((void *) (arg0 + 0x1EE4)) > 4U) {
        if ((func_0803D644(v1, v2) << 0x18) != 0) {
            return 7;
        }
        if (v3 == 3) {
            return 4;
        }
        return 3;
    }
    t2 = func_080A01F8(p, 0x15);
    if ((v1 == 3) && (v2 == 0xE) && (t == 0) && (t2 != 0) && (GetLove__C12Bachelorette() > 0x270FU) && (((u32) (arg0[0x21A4] << 0x1C) >> 0x1E) != 2)) {
        return 6;
    }
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 5;
    }
    if (v3 == 3) {
        return 2;
    }
    return 1;
}
