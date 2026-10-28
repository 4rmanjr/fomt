#include "prelude.h"

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    i32 unk8;
    u8 _padC[240];
    i32 unkFC;
    u8 _pad100[32];
    i32 unk120;
    i32 unk124;
    i32 unk128;
    i32 unk12C;
} GenObj;

// DECOMP-MATCHED func_0809B05C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0809B05C(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 8;
    i32 n = arg0->unk8;
    i32 off = (n - 1) * 8 + 4;
    i32 v;
    i32 lim;
    i32 *q;
    p += off;
    v = arg0->unk120;
    lim = *(i32 *)p;
    q = (i32 *)p;
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk120;
    }
    return *q;
}
}

// DECOMP-MATCHED func_0809B084 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0809B084(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 8;
    i32 n = arg0->unk8;
    i32 off = (n - 1) * 8 + 4;
    i32 v;
    i32 lim;
    i32 *q;
    p += off;
    v = arg0->unk124;
    lim = *(i32 *)(p + 4);
    q = (i32 *)(p + 4);
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk124;
    }
    return *q;
}
}

// DECOMP-MATCHED func_0809B0B0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0809B0B0(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 0xFC;
    i32 n = *(i32 *)p;
    i32 off = (n - 1) * 8 + 4;
    i32 v;
    i32 lim;
    i32 *q;
    p += off;
    v = arg0->unk128;
    lim = *(i32 *)p;
    q = (i32 *)p;
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk128;
    }
    return *q;
}
}

// DECOMP-MATCHED func_0809B0D8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0809B0D8(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 0xFC;
    i32 n = *(i32 *)p;
    i32 off = (n - 1) * 8 + 4;
    i32 v;
    i32 lim;
    i32 *q;
    p += off;
    v = arg0->unk12C;
    lim = *(i32 *)(p + 4);
    q = (i32 *)(p + 4);
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk12C;
    }
    return *q;
}
}
