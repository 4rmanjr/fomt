#include "prelude.h"

typedef struct GenObj {
    u8 _pad0[8];
    i32 unk8;
    u8 _padC[0x215A - 0xC];
    u8 unk215A;
    u8 _pad215B[0x21A2 - 0x215B];
    u8 unk21A2;
} GenObj;

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct {
    u8 pad0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Buf4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0803EC44 {
    u8 _pad0[8];
    i32 unk8;
} GenObj__func_0803EC44;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_0803EC44 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0803D52C(i32 *, i32);                        /* extern */
i32 func_0803D644(u8, u8);                          /* extern */
i32 func_0809ECD8(void *);                          /* extern */
i32 func_0809ECE0(void *);                          /* extern */

i32 func_0803EC44(GenObj__func_0803EC44 *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    u8 v3;
    void *p4;

    if ((i32)(((u8 *)arg0)[0x21CA] << 0x1B) < 0) {
        return 0;
    }
    func_0803D52C((i32 *)&sp0, (i32)((u8 *)arg0 + 0x10));
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
}

// DECOMP-MATCHED func_0803ECC0 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0803D52C(i32 *, i32);                          /* extern */
i32 func_0803D644(u8, u8);                              /* extern */
u32 func_0809EB68(void *);                              /* extern */
i32 func_0809EB70(void *);                              /* extern */
u32 func_0809EB8C(void *);                              /* extern */
i32 GetUpgradeLevel__C9FarmHouse(i32);                  /* extern */

i32 func_0803ECC0(GenObj *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    i32 v3;
    i32 v8;
    void *p4;
    u32 t;

    func_0803D52C((i32 *)&sp0, (i32)((u8 *)arg0 + 0x10));
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
            switch ((u32)GetUpgradeLevel__C9FarmHouse((i32)((u8 *)arg0 + (0xFA << 1)))) {
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
}

// DECOMP-MATCHED func_0803EDCC (dari code_0803A8A4.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0803D52C(i32 *, i32);                          /* extern */
i32 func_0803D644(u8, u8);                          /* extern */

i32 func_0803EDCC(GenObj *arg0) {
    Buf4 sp0;
    u8 v1;
    u8 v2;
    u8 v3;

    func_0803D52C((i32 *)&sp0, (i32)((u8 *)arg0 + 0x10));
    v1 = sp0.unk1;
    v2 = sp0.unk2;
    v3 = sp0.unk3;
    if ((func_0803D644(v1, v2) << 0x18) != 0) {
        return 5;
    }
    if ((v1 == 2) && (v2 == 0x1E) && ((((u32)(arg0->unk21A2 << 0x1A)) >> 0x1E) != 2)) {
        return 6;
    }
    if (((i32)(arg0->unk215A << 0x1C)) < 0) {
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
}

// DECOMP-MATCHED func_0803EE50 (dari code_0803A8A4.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0803D52C(i32 *, i32);                          /* extern */
i32 func_0803D644(u8, u8);                              /* extern */

i32 func_0803EE50(u8 *arg0) {
    u8 sp0[4];
    u8 *bp = sp0;
    u8 a1, a2;

    func_0803D52C((i32 *)sp0, (i32)(arg0 + 0x10));
    a1 = bp[1];
    a2 = bp[2];
    bp = (u8 *)bp[3];
    if ((func_0803D644(a1, a2) << 0x18) != 0) {
        return 4;
    }
    if ((u32)bp == 1) {
        if (*(i32 *)(arg0 + 8) == 0) {
            return 2;
        }
        return 3;
    }
    return 1;
}
}
