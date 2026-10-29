#include "prelude.h"

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[60];
    u8 unk3C;
} GenObj;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_0803205C (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0803205C(GenObj *arg0) {
    i32 var_r1;
    u8 temp_r0;

    var_r1 = 0;
    temp_r0 = arg0->unk3C;
    if ((temp_r0 == 7) || (temp_r0 == 0x2D)) {
        var_r1 = 1;
    }
    return var_r1;
}
}
// ekor tak-bermarker dari code_entities.s (verbatim, jangan diubah)
asm(
".L08032074:\n"
"    .byte 0xC0, 0x30, 0x00, 0x78, 0x70, 0x47, 0x00, 0x00, 0xCB, 0x1F, 0x03, 0x80\n"
"    .byte 0x13, 0x1C, 0x09, 0x3B, 0x43, 0x80, 0x07, 0x31, 0x81, 0x80, 0x05, 0x32, 0xC2, 0x80, 0x70, 0x47\n"
);

// DECOMP-MATCHED func_08032090 (dari code_entities.s; cek manusia sebelum ke src/)
extern "C" {
typedef struct { u16 unk0; u16 unk2; } EItem;
typedef struct { EItem *ptr; u16 count; } EPair;
typedef struct { u8 _00[12]; void (*unkC)(EPair *, void **, i32); } ETab;
i32 func_08032090(void **arg0, i32 arg1) {
    EPair tmp;
    EPair tmp2;
    register EPair *pp __asm__("r2");
    register EPair *pt0 __asm__("r0");
    register u32 sum __asm__("r4");
    register u32 i __asm__("r3");
    register u32 count __asm__("r1");
    register u32 lim __asm__("r2");
    EItem *p;
    EItem *q;
    register ETab *t __asm__("r1");
    register void **a4 __asm__("r4") = arg0;
    register i32 a2 __asm__("r2") = arg1;
    t = (ETab *)*a4;
    pt0 = &tmp;
    t->unkC(pt0, a4, a2);
    tmp2 = tmp;
    pp = &tmp2;
    sum = 0;
    i = 0;
    p = tmp2.ptr;
    count = 0;
    if (p != 0)
        count = pp->count;
    lim = count;
    if (sum < lim) {
        q = p;
        do {
            sum += q->unk2;
            q++;
            i++;
        } while (i < lim);
    }
    return sum;
}
}
