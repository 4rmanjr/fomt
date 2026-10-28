s32 func_0803D52C(s32 *, s32);                          /* extern */
s32 func_0803D644(u8, u8);                              /* extern */
u32 func_0809EB68(void *);                              /* extern */
s32 func_0809EB70(void *);                              /* extern */
u32 func_0809EB8C(void *);                              /* extern */
s32 GetUpgradeLevel__C9FarmHouse(s32);                  /* extern */

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

s32 func_0803ECC0(GenObj *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    s32 v3;
    s32 v8;
    void *p4;
    u32 t;

    func_0803D52C((s32 *)&sp0, (s32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 5;
    }
    v8 = arg0->unk8;
    p4 = (u8 *)arg0 + 0x1F64;
    if ((func_0809EB68(p4) != 0) && ((func_0809EB70(p4) << 0x18) == 0) && ((func_0809EB8C(p4) << 0x18) == 0) && ((u32)(v8 - 3) > 1u)) {
        t = func_0809EB68(p4);
        switch (t) {
        case 1:
            switch ((u32)GetUpgradeLevel__C9FarmHouse((s32)((u8 *)arg0 + (0xFA << 1)))) {
            case 0:
                return 6;
            case 1:
                return 7;
            case 2:
                return 0xD;
            default:
                break;
            }
            break;
        case 2:
            return 8;
        case 3:
            return 9;
        case 4:
            return 0xE;
        case 5:
        case 6:
        case 7:
            return 0xA;
        case 8:
        case 9:
        case 10:
            return 0xB;
        case 11:
        case 12:
        case 13:
            return 0xC;
        case 0:
        default:
            break;
        }
    }
    switch (v3) {
    default:
        return 1;
    case 4:
    case 5:
        return 2;
    case 6:
        return 3;
    case 0:
        return 4;
    }
}
