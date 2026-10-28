s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                          /* extern */

typedef struct GenObj {
    u8 _pad0[8];
    s32 unk8;
    u8 _padC[0x215A - 0xC];
    u8 unk215A;
    u8 _pad215B[0x21A2 - 0x215B];
    u8 unk21A2;
} GenObj;
typedef struct {
    u8 pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Buf4;

s32 func_0803EDCC(GenObj *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    u8 v3;

    func_0803D52C((s32 *)&sp0, (s32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 5;
    }
    if ((v1 == 2) && (v2 == 0x1E) && ((((u32)(arg0->unk21A2 << 0x1A)) >> 0x1E) != 2)) {
        return 6;
    }
    if (((s32)(arg0->unk215A << 0x1C)) < 0) {
        return 0;
    }
    if (arg0->unk8 == 0) {
        if (v3 == 1) {
            return 1;
        }
        if (v3 == 3) {
            return 2;
        }
        return 3;
    } else {
        return 4;
    }
}
