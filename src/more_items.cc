#include "prelude.h"
#include <string.h> // memcpy

// DECOMP-MATCHED func_0800FF8C (dari more_items.s; cek manusia sebelum ke src/)
extern "C" {
typedef struct GenObj {
    i32 unk0;
    u8 _pad4[32];
    u16 unk24;
    u8 _pad26[2];
    u32 unk28;
} GenObj;
GenObj *func_0800FF8C(GenObj *arg0) {
    register u8 *p asm("r4");
    register u32 mask asm("r3");
    register u16 t asm("r2");
    u32 v;

    arg0->unk0 = 0;
    p = (u8 *)arg0;
    p += 0x24;
    v = (0x8D << 2);
    t = arg0->unk24;
    mask = 0xFFFFFC00;
    arg0->unk24 = (t & mask) | v;
    *(p + 1) &= 3;
    *(u16 *)(p + 2) &= mask;
    *(p + 3) &= 3;
    *(u16 *)(p + 4) &= mask;
    return arg0;
}
}

// DECOMP-MATCHED func_0800FFD0 (promoted from asm/more_items.s; human review before src/)
extern "C" {
i32 func_0800FFD0(i32 *arg0) {
    return *arg0;
}
}

// DECOMP-MATCHED func_0800FFD4 (promoted from asm/more_items.s; human review before src/)
extern "C" {
i32 func_0800FFD4(i32 arg0) {
    return arg0 + 4;
}
}

// DECOMP-MATCHED func_0800FFD8 (dari more_items.s; cek manusia sebelum ke src/)
extern "C" {
void *func_0800FFD8(i32 *arg0) {
    return (u8 *)arg0 + (*arg0 + 4);
}

/* ATTEMPT-NOTE opencode: pointer arithmetic byte ((u8 *)arg0 + N); draf m2c (GenObj* + N) mengalikan sizeof. */
}

// DECOMP-MATCHED func_0800FFE0 (dari more_items.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800FFE0(i32 arg0, i32 arg1) {
    memcpy((void *)(arg0), (const void *)(arg1 + 0x24), 6);
    return arg0;
}
}

// DECOMP-MATCHED func_0800FFF4 (dari more_items.s; cek manusia sebelum ke src/)
extern "C" {
void func_0800FFF4(u32 *arg0, i32 arg1) {
    u8 *temp_r0_2;
    u32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 <= 0x1DU) {
        temp_r0_2 = (u8 *)arg0 + (temp_r0 + 4);
        if (temp_r0_2 != 0) {
            *temp_r0_2 = arg1;
        }
        *arg0 += 1;
    }
}
}

// DECOMP-MATCHED func_08010014 (dari more_items.s; cek manusia sebelum ke src/)
extern "C" {
void func_08010014(i32 arg0, i32 arg1) {
    memcpy((void *)(arg0 + 0x24), (const void *)(arg1), 6);
}
}

// DECOMP-MATCHED func_08010024 (dari more_items.s; cek manusia sebelum ke src/)
extern "C" {
void func_08010024(i32 *arg0) {
    register i32 *a asm("r3") = arg0;
    register u8 *start asm("r5") = (u8 *)a + 4;
    register u8 *end asm("r0") = (u8 *)a + (*a + 4);
    register u8 *limit asm("r2") = end;
    register u8 *p asm("r1") = start;
    register i32 val asm("r4") = *(volatile i32 *)a;
    i32 diff;

    while (p != limit) {
        p += 1;
    }
    diff = end - start;
    diff = val - diff;
    *a = diff;
}
}
