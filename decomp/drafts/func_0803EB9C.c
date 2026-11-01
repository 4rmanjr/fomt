s32 func_0803D52C(s32 *, s32);                        /* extern */
s32 func_0803D644(s32, s32);                        /* extern */
u32 GetRivalEventCount__C12Bachelorette(s32);       /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
} GenObj;
typedef struct {
    u8 pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Buf4;

s32 func_0803EB9C(GenObj *arg0) {
    Buf4 sp0;
    register u32 v1 asm("r6");
    u8 v2;
    u8 v3;
    u32 t;

    if ((s32)(((u8 *)arg0)[0x21CA] << 0x1B) < 0) {
        return 0;
    }
    func_0803D52C((s32 *)&sp0, (s32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    t = GetRivalEventCount__C12Bachelorette((s32)((u8 *)arg0 + 0x1E28));
    if (t > 4U) {
        if ((func_0803D644(v1, v2) << 0x18) != 0) {
            return 9;
        }
        if (v3 == 4) {
            if (arg0->unk8 == 0) {
                return 6;
            }
            return 7;
        }
        return 5;
    }
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 8;
    }
    if (t != 0) {
        if (v3 == 1) {
            return 3;
        }
        if (v3 == 4) {
            return 4;
        }
        return 2;
    } else {
        return 1;
    }
}
