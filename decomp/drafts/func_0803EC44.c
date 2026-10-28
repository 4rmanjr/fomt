s32 func_0803D52C(s32 *, s32);                        /* extern */
s32 func_0803D644(u8, u8);                          /* extern */
s32 func_0809ECD8(void *);                          /* extern */
s32 func_0809ECE0(void *);                          /* extern */

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

s32 func_0803EC44(GenObj *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    u8 v3;
    void *p4;

    if ((s32)(((u8 *)arg0)[0x21CA] << 0x1B) < 0) {
        return 0;
    }
    func_0803D52C((s32 *)&sp0, (s32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 4;
    }
    p4 = (void *)((u8 *)arg0 + 0x1DAC);
    if ((func_0809ECD8(p4) != 0) && ((func_0809ECE0(p4) << 0x18) == 0)) {
        return 5;
    }
    if (v3 == 4) {
        if (arg0->unk8 == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}
