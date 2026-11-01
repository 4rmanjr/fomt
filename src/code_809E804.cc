#include "prelude.h"
#include <string.h> // memcpy

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0x25]; u8 v; } S_AD8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0x26]; u8 v; } S_AE0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0x26]; u8 v; } S_AEC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0x14]; u8 v; } S_B68;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[20];
    i32 unk14;
} GenObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809EB8C {
    u8 _pad0[20];
    u8 unk14;
} GenObj__func_0809EB8C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809EC48 {
    u8 _pad0[21];
    u8 unk15;
} GenObj__func_0809EC48;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0x14]; u8 v; } S_CD8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809EE20 {
    u8 _pad0[20];
    u8 unk14;
} GenObj__func_0809EE20;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809EE8C {
    u8 _pad0[20];
    u16 unk14;
    u8 unk16;
} GenObj__func_0809EE8C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[3]; u8 v; } S_39C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A03A4 {
    u8 _pad0[3];
    u8 unk3;
} GenObj__func_080A03A4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A3744 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_080A3744;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A5A9C {
    u8 _pad0[140];
    i32 unk8C;
} GenObj__func_080A5A9C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0x58]; u8 v; } S_601C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A6138 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A6138;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A6194 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A6194;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A61F0 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A61F0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A6234 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A6234;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A6278 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A6278;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A62BC {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A62BC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A6300 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A6300;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A635C {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A635C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A63B8 {
    u8 _pad0[4];
    i32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj__func_080A63B8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080AA89C {
    u8 _pad0[41];
    u8 unk29;
} GenObj__func_080AA89C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080AA8BC {
    u8 _pad0[41];
    u8 unk29;
} GenObj__func_080AA8BC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080AA8DC {
    i32 unk0;
    u8 _pad4[148];
    u8 unk98;
} GenObj__func_080AA8DC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080ABBA0 {
    i32 unk0;
    u8 _pad4[32];
    i32 unk24;
} GenObj__func_080ABBA0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080AD970 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080AD970;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080AD97C {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080AD97C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080ADB54 {
    u8 _pad0[8];
    i32 unk8;
    u8 _padC[8];
    struct GenObj__func_080ADB54 *unk14;
} GenObj__func_080ADB54;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080ADB9C {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080ADB9C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080ADBA8 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080ADBA8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080ADD44 {
    i32 unk0;
    u16 unk4;
    u16 unk6;
    i32 unk8;
    i32 unkC;
    i32 unk10;
    u8 unk14;
} GenObj__func_080ADD44;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080ADD5C {
    i32 unk0;
    u8 _pad4[2];
    u16 unk6;
    i32 unk8;
    i32 unkC;
    i32 unk10;
    u8 unk14;
} GenObj__func_080ADD5C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080B3A10 {
    u8 _pad0[2356];
    i32 unk934;
} GenObj__func_080B3A10;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080B3BA8 {
    u8 _pad0[2108];
    i32 unk83C;
} GenObj__func_080B3BA8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080B3BE4 {
    void *unk0;
    i32 unk4;
} GenObj__func_080B3BE4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080B3C0C {
    void *unk0;
    struct GenObj__func_080B3C0C *unk4;
    struct GenObj__func_080B3C0C *unk8;
} GenObj__func_080B3C0C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A5DB8 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_080A5DB8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A0384 GenObj__func_080A0384;
typedef struct GenObj__func_080A0384 {
    u8 _pad0[3];
    u8 unk3;
} GenObj__func_080A0384;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080A0A04 GenObj__func_080A0A04;
typedef struct GenObj__func_080A0A04 {
    u8 _pad0[3];
    u8 unk3;
} GenObj__func_080A0A04;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080B3C90 {
    u8 _pad0[16];
    u8 unk10;
    u8 unk11;
} GenObj__func_080B3C90;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080C7ED0 {
    void *unk0;
    struct GenObj__func_080C7ED0 *unk4;
    struct GenObj__func_080C7ED0 *unk8;
} GenObj__func_080C7ED0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080C7F00 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_080C7F00;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080CAC70 {
    i32 unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_080CAC70;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080CADA8 {
    i32 unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_080CADA8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080CADB4 {
    i32 unk0;
    struct GenObj__func_080CADB4 *unk4;
    u8 _pad8[520];
    void *unk210;
} GenObj__func_080CADB4;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_0809E988 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.0809E988")))
void func_0809E988(i32 arg0, i32 arg1, i32 *arg2) {
    arg1 = (arg1 << 3) + arg0;
    __asm__ volatile ("ldm %0!, {r0, r3}\n\tstm %1!, {r0, r3}" : "+l" (arg2), "+l" (arg1) : : "r0", "r3", "memory");
}
}

// DECOMP-MATCHED func_0809E994 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.0809E994")))
void func_0809E994(i32 arg0, i32 arg1) {
    u8 buf[8];
    u32 *b = (u32 *)buf;
    arg1 <<= 3;
    /* buf[0] &= ~0x10 (hand-asm: ldrb/movs/negs/ands/strb) */
    __asm__ volatile (
        "mov r4, sp\n\tldrb r3, [r4]\n\tmov r2, #0x10\n\tneg r2, r2\n\tand r2, r3\n\tstrb r2, [r4]"
        : : : "r2", "r3", "r4", "memory");
    arg1 += arg0;
    __asm__ volatile ("ldm %0!, {r2, r3}\n\tstm %1!, {r2, r3}" : "+l" (b), "+l" (arg1) : : "r2", "r3", "memory");
}
}

// DECOMP-MATCHED func_0809EACC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.0809EACC")))
i32 func_0809EACC(i32 arg0) {
    return arg0 + 0x14;
}
}

// DECOMP-MATCHED func_0809EAD0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809EAD0")))
u8 func_0809EAD0(S_AD0 *arg0) {
    return arg0->v;
}
}

// DECOMP-MATCHED func_0809EAD8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809EAD8")))
u8 func_0809EAD8(S_AD8 *arg0) {
    return arg0->v;
}
}

// DECOMP-MATCHED func_0809EAE0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809EAE0")))
u32 func_0809EAE0(S_AE0 *arg0) {
    u32 x = arg0->v;
    return (x << 31) >> 31;
}
}

// DECOMP-MATCHED func_0809EAEC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809EAEC")))
void func_0809EAEC(S_AEC *arg0) { u32 x = arg0->v; arg0->v = x | 1; }
}

// DECOMP-MATCHED func_0809EB20 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.0809EB20")))
void func_0809EB20(i32 arg0, i32 arg1) {
    i32 temp_r6;
    u32 var_r4;

    temp_r6 = arg0 + 0x14;
    var_r4 = strlen((const char *)(arg1));
    if (var_r4 > 0xCU) {
        var_r4 = 0xC;
    }
    memcpy((void *)(temp_r6), (const void *)(arg1), var_r4);
    *((u8 *)temp_r6 + var_r4) = 0;
}
}

// DECOMP-MATCHED func_0809EB68 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809EB68")))
u32 func_0809EB68(S_B68 *arg0) { return (u32)(arg0->v << 28) >> 28; }
}

// DECOMP-MATCHED func_0809EB70 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809EB70")))
i32 func_0809EB70(GenObj *arg0) {
    i32 var_r2;
    u8 temp_r1;

    var_r2 = 0;
    temp_r1 = arg0->unk14;
    if ((temp_r1 << 0x1C) != 0) {
        i32 temp_r0 = 0x70;
        temp_r0 &= temp_r1;
        if (temp_r0 == 0) {
            var_r2 = 1;
        }
    }
    return var_r2;
}
}

// DECOMP-MATCHED func_0809EB8C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809EB8C")))
u32 func_0809EB8C(GenObj__func_0809EB8C *arg0) {
    u32 var_r2;
    u8 temp_r1;

    var_r2 = 0;
    temp_r1 = arg0->unk14;
    if ((temp_r1 << 0x1C) == 0) {
        goto end;
    }
    if ((0x70 & temp_r1) == 0) {
        goto end;
    }
    var_r2 = temp_r1 >> 7;
end:
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk14 u8; goto-chain (bukan &&); lsrs dst r2. */
}

// DECOMP-MATCHED func_0809EC48 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetLocation__C3Npc(u16 *, void *);                /* extern */

__attribute__((section(".text.code_809E804.0809EC48")))
void func_0809EC48(GenObj__func_0809EC48 *arg0) {
    struct { u16 v; u8 _f[6]; } loc;
    i32 a;
    i32 b;
    register i32 v asm("r0");
    register i32 w asm("r1");

    GetLocation__C3Npc(&loc.v, arg0);
    a = (i32)(((u32)loc.v << 0x16) >> 0x16);
    b = a;
    if (a == 0x11) {
        goto set;
    }
    if (a > 0x11) {
        goto big;
    }
    if (a == 7) {
        goto set;
    }
    goto clear;
big:
    if (b == 0x1D) {
        goto set;
    }
    if (b == 0x25) {
        goto set;
    }
clear:
    w = arg0->unk15;
    v = (0 - 2) & w;
    goto store;
set:
    v = arg0->unk15 | 1;
store:
    arg0->unk15 = v;
}

/* ATTEMPT-NOTE worker-ec48: MATCH-candidate; struct 8B paksa sub sp,#8; mask unsigned (lsr); a/b pisah utk copy adds r1,r0; v/w dipin r0/r1 utk regalloc clear/set. */
}

// DECOMP-MATCHED func_0809ECD8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809ECD8")))
u32 func_0809ECD8(S_CD8 *arg0) { return (u32)(arg0->v << 26) >> 26; }
}

// DECOMP-MATCHED func_0809EE20 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.0809EE20")))
void func_0809EE20(GenObj__func_0809EE20 *arg0, i32 arg1, i32 arg2) {
    i32 neg;
    register u8 t __asm__("r4");
    u16 h;
    u32 mask;
    register i32 c3f __asm__("r3");
    register i32 c7 __asm__("r1");

    c3f = 0x3F;
    arg1 &= c3f;
    t = arg0->unk14;
    __asm__ volatile("" : : : "r3");
    neg = 0x40;
    neg = 0 - neg;
    neg &= t;
    arg0->unk14 = neg | arg1;
    c7 = 7;
    arg2 &= c7;
    arg2 = arg2 * 64;
    h = *(u16 *)((u8 *)arg0 + 0x14);
    mask = 0xFFFFFE3F;
    mask &= h;
    *(u16 *)((u8 *)arg0 + 0x14) = mask | arg2;
}

/* ATTEMPT-NOTE opencode: struktur+urutan pas (push r4/lr, movs/lsl/ands/orrs/strb, half-part); sisa dst-and (ands r3,r1 vs ref ands r1,r3; ands r1,r2+orrs r1,r3 vs ref ands r2,r1... wait ref ands r2,r1+orrs r1,r2). 6+ varian (swap/maskvar/reuse/no-t) dicoba, compiler kukuh dst=r3. */
}

// DECOMP-MATCHED func_0809EE8C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 __3NpcRC13ActorLocation();                        /* extern */

__attribute__((section(".text.code_809E804.0809EE8C")))
void *func_0809EE8C(GenObj__func_0809EE8C *arg0) {
    __3NpcRC13ActorLocation();
    arg0->unk14 = 0;
    arg0->unk16 = 0;
    return arg0;
}

/* ATTEMPT-NOTE opencode: unk14 u16 (strh), unk16 u8 (strb). */
}

// DECOMP-MATCHED func_0809FE3C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
// NOTE 2026-11-01: `i32 *func_0809EACC(i32)` di bawah SALAH-TANDA
// warisan m2c (definisi benar i32(i32) di blok func_0809EACC).
// Rewrite otomatis ke tanda definisi src sudah diuji (via fallback
// .c). JANGAN edit manual — migrasi menanganinya sendiri.
i32 func_0809EACC(i32 arg0);                             /* extern */
extern i32 gUnk_08104108;
extern i32 gUnk_08104258;

__attribute__((section(".text.code_809E804.0809FE3C")))
i32 *func_0809FE3C(i32 arg0, u32 arg1) {
    i32 var_r2;

    var_r2 = 0;
    if (arg1 <= 0x2AU) {
        var_r2 = 1;
    }
    if (var_r2 == 0) {
        return &gUnk_08104108;
    }
    switch (arg1) {                                 /* irregular */
    case 35:
        return (i32 *)(func_0809EACC(arg0 + 4));
    case 0:
        /* fallthrough */
    default:
        {
            u8 *p = (u8 *)&gUnk_08104258;
            arg1 = (u32)(p + (arg1 << 3));
            return (i32 *)(*(i32 *)arg1);
        }
    }
}
}

// DECOMP-MATCHED func_080A0030 (dari code_809E804.s; cek manusia sebelum ke src/)
// PENYATUAN-MANUAL 2026-11-01: case34 meneruskan arg0 (pointer sbg i32) ke 0384
// (GenObj__0384*); cast no-op (ref: adds r0,r2; bl). Return (i32) dari void* no-op.
extern "C" {
void* func_080A0384(GenObj__func_080A0384 *arg0);                             /* extern */
__attribute__((section(".text.code_809E804.080A0030")))
i32 func_080A0030(i32 arg0, i32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 1;
    switch (temp_r0) {
    default:
        return 0;
    case 34:
        return (i32)func_080A0384((GenObj__func_080A0384 *)arg0);
    case 0:
        return arg0 + 0x70;
    case 1:
        return arg0 + 0x84;
    case 2:
        return arg0 + 0x98;
    case 3:
        return arg0 + 0xB0;
    case 4:
        return arg0 + 0xC4;
    case 5:
        return arg0 + 0xD8;
    case 6:
        return arg0 + 0xF0;
    case 7:
        return arg0 + 0x104;
    case 8:
        return arg0 + 0x118;
    case 9:
        return arg0 + 0x12C;
    case 10:
        return arg0 + 0x140;
    case 11:
        return arg0 + 0x154;
    case 12:
        return arg0 + 0x16C;
    case 13:
        return arg0 + 0x180;
    case 14:
        return arg0 + 0x194;
    case 15:
        return arg0 + 0x1A8;
    case 16:
        return arg0 + 0x1BC;
    case 17:
        return arg0 + 0x1D0;
    case 18:
        return arg0 + 0x1E4;
    case 19:
        return arg0 + 0x1FC;
    case 20:
        return arg0 + 0x210;
    case 21:
        return arg0 + 0x228;
    case 22:
        return arg0 + 0x23C;
    case 23:
        return arg0 + 0x250;
    case 24:
        return arg0 + 0x264;
    case 25:
        return arg0 + 0x27C;
    case 26:
        return arg0 + 0x290;
    case 27:
        return arg0 + 0x2A8;
    case 28:
        return arg0 + 0x2BC;
    case 29:
        return arg0 + 0x2D0;
    case 30:
        return arg0 + 0x2E4;
    case 31:
        return arg0 + 0x2FC;
    case 32:
        return arg0 + 0x310;
    case 33:
        return arg0 + 0x328;
    case 35:
        return arg0 + 0x33C;
    case 36:
        return arg0 + 0x360;
    case 37:
        return arg0 + 0x384;
    case 38:
        return arg0 + 0x3A8;
    case 39:
        return arg0 + 0x3CC;
    case 40:
        return arg0 + 0x3F0;
    case 41:
        return arg0 + 0x414;
    }
}
}

// DECOMP-MATCHED gData_code_809E804_080A02B0.data.080A02B0
extern "C" {
// data tak-dirujuk di 0x080A02B0 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_809E804_080A02B0[108] __attribute__((section(".text.code_809E804.080A02B0"))) = {0x00, 0xB5, 0x02, 0x1C, 0x08, 0x1C, 0x24, 0x38, 0x06, 0x28, 0x15, 0xD8, 0x80, 0x00, 0x02, 0x49, 0x40, 0x18, 0x00, 0x68, 0x87, 0x46, 0x00, 0x00, 0xCC, 0x02, 0x0A, 0x08, 0xEC, 0x02, 0x0A, 0x08, 0xF2, 0x02, 0x0A, 0x08, 0xF8, 0x02, 0x0A, 0x08, 0xFE, 0x02, 0x0A, 0x08, 0x04, 0x03, 0x0A, 0x08, 0x0A, 0x03, 0x0A, 0x08, 0x10, 0x03, 0x0A, 0x08, 0x00, 0x20, 0x13, 0xE0, 0xCF, 0x21, 0x89, 0x00, 0x0F, 0xE0, 0xD8, 0x21, 0x89, 0x00, 0x0C, 0xE0, 0xE1, 0x21, 0x89, 0x00, 0x09, 0xE0, 0xEA, 0x21, 0x89, 0x00, 0x06, 0xE0, 0xF3, 0x21, 0x89, 0x00, 0x03, 0xE0, 0xFC, 0x21, 0x89, 0x00, 0x00, 0xE0, 0x01, 0x49, 0x50, 0x18, 0x02, 0xBC, 0x08, 0x47, 0x14, 0x04, 0x00, 0x00};
}

// DECOMP-MATCHED func_080A031C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A031C")))
i32 func_080A031C(i32 arg0, u32 arg1) {
    switch (arg1) {
    default:
        return 0;
    case 0:
        return arg0 + 0x33C;
    case 1:
        return arg0 + 0x360;
    case 2:
        return arg0 + 0x384;
    case 3:
        return arg0 + 0x3A8;
    case 4:
        return arg0 + 0x3CC;
    case 5:
        return arg0 + 0x3F0;
    case 6:
        return arg0 + 0x414;
    }
}
}

// DECOMP-MATCHED func_080A0384 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080A0384")))
void *func_080A0384(GenObj__func_080A0384 *arg0) {
    GenObj__func_080A0384 *t = arg0;
    void *var_r2;
    i32 sh = t->unk3 << 0x1E;
    var_r2 = 0;
    if (sh >= 0) {
    } else {
        var_r2 = (u8 *)t + 4;
    }
    return var_r2;
}
/* ATTEMPT-NOTE opencode: copy arg0 ke t + sh-var agar movs r2 di posisi 4 (setelah lsls); unk3 u8. */
}

// DECOMP-MATCHED func_080A039C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080A039C")))
u32 func_080A039C(S_39C *arg0) { u32 x = arg0->v; return (x << 27) >> 29; }
}

// DECOMP-MATCHED func_080A03A4 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080A03A4")))
void func_080A03A4(GenObj__func_080A03A4 *arg0, i32 arg1) {
    u8 temp_r3;
    register i32 var_r2 __asm__("r2");
    i32 var_mask;

    var_r2 = 7;
    arg1 &= var_r2;
    arg1 *= 4;
    temp_r3 = arg0->unk3;
    __asm__ volatile("" : : : "r2");
    var_mask = 0x1D;
    var_mask = 0 - var_mask;
    var_mask &= temp_r3;
    arg0->unk3 = var_mask | arg1;
}

/* ATTEMPT-NOTE opencode: andeq/muleq + mask-var (pola 11498); unk3 u8. */
}

// DECOMP-MATCHED func_080A041C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
u32 GetPlayerEventCount__C12Bachelorette(i32);      /* extern */

__attribute__((section(".text.code_809E804.080A041C")))
i32 func_080A041C(i32 arg0) {
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x98) > 4U) {
        return 3;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x154) > 4U) {
        return 0xC;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x1E4) > 4U) {
        return 0x13;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x210) > 4U) {
        return 0x15;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x264) > 4U) {
        return 0x19;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x2E4) > 4U) {
        return 0x1F;
    }
    return 0;
}

/* ATTEMPT-NOTE hermes3: ekor dibalik (bhi, bukan bls): if (>) return 0x1F; return 0. */
}

// DECOMP-MATCHED func_080A0490 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
u32 GetPlayerEventCount__C12Bachelorette(i32);      /* extern */

__attribute__((section(".text.code_809E804.080A0490")))
i32 func_080A0490(i32 arg0) {
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x98) > 5U) {
        return 3;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x154) > 5U) {
        return 0xC;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x1E4) > 5U) {
        return 0x13;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x210) > 5U) {
        return 0x15;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x264) > 5U) {
        return 0x19;
    }
    if (GetPlayerEventCount__C12Bachelorette(arg0 + 0x2E4) > 5U) {
        return 0x1F;
    }
    return 0;
}

/* ATTEMPT-NOTE hermes3: ekor dibalik (bhi, bukan bls): if (>) return 0x1F; return 0. */
}

// DECOMP-MATCHED func_080A0518 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
u32 GetFriendship__C3Npc();                         /* extern */
i32 func_080A0030(i32, i32);                        /* extern */

__attribute__((section(".text.code_809E804.080A0518")))
i32 func_080A0518(i32 arg0) {
    i32 var_r5;
    u32 temp_r0;
    u32 var_r4;

    var_r5 = 1;
    var_r4 = 1;
    do {
        temp_r0 = var_r4 - 0x17;
        switch (temp_r0) {
        case 0:
        case 3:
        case 7:
        case 9:
        case 12:
            break;
        default:
        case 1:
        case 2:
        case 4:
        case 5:
        case 6:
        case 8:
        case 10:
        case 11:
            if ((func_080A0030(arg0, var_r4) != 0) && (GetFriendship__C3Npc() <= 0xF9U)) {
                var_r5 = 0;
            }
            break;
        }
        var_r4 += 1;
    } while (var_r4 <= 0x2AU);
    return var_r5;
}
}

// DECOMP-MATCHED func_080A06B0 (dari code_809E804.s; cek manusia sebelum ke src/)
// PENYATUAN-MANUAL 2026-11-01 (pola A0030/A0384: case34 meneruskan pointer sbg i32
// ke A0A04 (GenObj__A0A04*); cast no-op codegen, verify MATCH + compare HIJAU).
extern "C" {
void* func_080A0A04(GenObj__func_080A0A04 *arg0);                             /* extern */
__attribute__((section(".text.code_809E804.080A06B0")))
i32 func_080A06B0(i32 arg0, i32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 1;
    switch (temp_r0) {
    default:
        return 0;
    case 34:
        return (i32)func_080A0A04((GenObj__func_080A0A04 *)arg0);
    case 0:
        return arg0 + 0x70;
    case 1:
        return arg0 + 0x84;
    case 2:
        return arg0 + 0x98;
    case 3:
        return arg0 + 0xB0;
    case 4:
        return arg0 + 0xC4;
    case 5:
        return arg0 + 0xD8;
    case 6:
        return arg0 + 0xF0;
    case 7:
        return arg0 + 0x104;
    case 8:
        return arg0 + 0x118;
    case 9:
        return arg0 + 0x12C;
    case 10:
        return arg0 + 0x140;
    case 11:
        return arg0 + 0x154;
    case 12:
        return arg0 + 0x16C;
    case 13:
        return arg0 + 0x180;
    case 14:
        return arg0 + 0x194;
    case 15:
        return arg0 + 0x1A8;
    case 16:
        return arg0 + 0x1BC;
    case 17:
        return arg0 + 0x1D0;
    case 18:
        return arg0 + 0x1E4;
    case 19:
        return arg0 + 0x1FC;
    case 20:
        return arg0 + 0x210;
    case 21:
        return arg0 + 0x228;
    case 22:
        return arg0 + 0x23C;
    case 23:
        return arg0 + 0x250;
    case 24:
        return arg0 + 0x264;
    case 25:
        return arg0 + 0x27C;
    case 26:
        return arg0 + 0x290;
    case 27:
        return arg0 + 0x2A8;
    case 28:
        return arg0 + 0x2BC;
    case 29:
        return arg0 + 0x2D0;
    case 30:
        return arg0 + 0x2E4;
    case 31:
        return arg0 + 0x2FC;
    case 32:
        return arg0 + 0x310;
    case 33:
        return arg0 + 0x328;
    case 35:
        return arg0 + 0x33C;
    case 36:
        return arg0 + 0x360;
    case 37:
        return arg0 + 0x384;
    case 38:
        return arg0 + 0x3A8;
    case 39:
        return arg0 + 0x3CC;
    case 40:
        return arg0 + 0x3F0;
    case 41:
        return arg0 + 0x414;
    }
}
}

// DECOMP-MATCHED func_080A0878 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A0878")))
i32 func_080A0878(i32 arg0, i32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 3;
    switch (temp_r0) {
    default:
        return 0;
    case 0:
        return arg0 + 0x98;
    case 9:
        return arg0 + 0x154;
    case 16:
        return arg0 + 0x1E4;
    case 18:
        return arg0 + 0x210;
    case 22:
        return arg0 + 0x264;
    case 28:
        return arg0 + 0x2E4;
    }
}
}

// DECOMP-MATCHED func_080A0930 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A0930")))
i32 func_080A0930(i32 arg0, i32 arg1) {
    u32 temp_r0;

    temp_r0 = arg1 - 0x24;
    switch (temp_r0) {
    default:
        return 0;
    case 0:
        return arg0 + 0x33C;
    case 1:
        return arg0 + 0x360;
    case 2:
        return arg0 + 0x384;
    case 3:
        return arg0 + 0x3A8;
    case 4:
        return arg0 + 0x3CC;
    case 5:
        return arg0 + 0x3F0;
    case 6:
        return arg0 + 0x414;
    }
}
}

// DECOMP-MATCHED func_080A099C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A099C")))
i32 func_080A099C(i32 arg0, u32 arg1) {
    switch (arg1) {
    default:
        return 0;
    case 0:
        return arg0 + 0x33C;
    case 1:
        return arg0 + 0x360;
    case 2:
        return arg0 + 0x384;
    case 3:
        return arg0 + 0x3A8;
    case 4:
        return arg0 + 0x3CC;
    case 5:
        return arg0 + 0x3F0;
    case 6:
        return arg0 + 0x414;
    }
}
}
// DECOMP-MATCHED func_080A0A04 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080A0A04")))
void *func_080A0A04(GenObj__func_080A0A04 *arg0) {
    GenObj__func_080A0A04 *t = arg0;
    void *var_r2;
    i32 sh = t->unk3 << 0x1E;
    var_r2 = 0;
    if (sh >= 0) {
    } else {
        var_r2 = (u8 *)t + 4;
    }
    return var_r2;
}
/* ATTEMPT-NOTE opencode: sama A0384. */
}

// DECOMP-MATCHED func_080A0AD8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A0AD8")))
i32 func_080A0AD8(i32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
    default:
        return arg0 + 0x30;
    case 1:
        return arg0 + 0x38;
    case 2:
        return arg0 + 0x40;
    }
}

/* ATTEMPT-NOTE hermes2: switch dgn case 0 eksplisit gabung default. */
}

// DECOMP-MATCHED func_080A0AF4 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A0AF4")))
i32 func_080A0AF4(i32 arg0, u32 arg1) {
    switch (arg1) {
    case 0:
    default:
        return arg0 + 0x48;
    case 1:
        return arg0 + 0x50;
    case 2:
        return arg0 + 0x58;
    }
}

/* ATTEMPT-NOTE hermes2: switch dgn case 0 eksplisit gabung default (sama A0AD8). */
}

// DECOMP-MATCHED func_080A0B10 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A0B10")))
i32 func_080A0B10(i32 arg0) { return arg0 + 0x60; }
}

// DECOMP-MATCHED func_080A0B14 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A0B14")))
i32 func_080A0B14(i32 arg0) { return arg0 + 0x68; }
}

// DECOMP-MATCHED func_080A1478 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A1478")))
void func_080A1478(i32 *arg0, i32 *arg1) { arg0[0x2C / 4] = arg1[0]; }
}

// DECOMP-MATCHED func_080A1480 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A1480")))
i32 func_080A1480(i32 arg0) { return arg0 + 0x2C; }
}

// DECOMP-MATCHED func_080A1A48 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A1A48")))
void func_080A1A48(void) {}
}

// DECOMP-MATCHED func_080A1EA8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080A1EA8")))
u32 func_080A1EA8(i32 dummy, u32 arg1, i32 arg2) {
    u32 var_r0;

    var_r0 = arg1;
    if (var_r0 <= 0x5FU) {
        if (arg2 == 1) {
            goto c1;
        }
        if (arg2 <= 1) {
            goto end;
        }
        if (arg2 == 2) {
            goto c2;
        }
        if (arg2 == 3) {
            goto c3;
        }
        goto end;
    c1:
        var_r0 -= 0x1A;
        goto end;
    c2:
        var_r0 -= 0x3A;
        goto end;
    c3:
        var_r0 -= 0x5E;
        goto end;
    end:;
    } else {
        var_r0 -= 0x3C;
    }
    return var_r0;
}

/* ATTEMPT-NOTE opencode: goto-chain agar compare-di-depan + body-di-belakang (switch/if-else digabung compiler). */
}

// DECOMP-MATCHED func_080A3744 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_080A220C(i32, i32);                        /* extern */
extern i32 vtable_unk_080E8278;

__attribute__((section(".text.code_809E804.080A3744")))
void *func_080A3744(GenObj__func_080A3744 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E8278;
    arg0->unk4 = func_080A220C(__builtin_new(0x228), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED GetMapData (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08105EDC;

__attribute__((section(".text.code_809E804.080A4698")))
void *GetMapData(i32 arg0) {
    i32 x = (arg0 << 2) + arg0;
    return (i8 *)&gUnk_08105EDC + (x << 3);
}
}

// DECOMP-MATCHED func_080A5A9C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080A5A9C")))
i32 func_080A5A9C(GenObj__func_080A5A9C *arg0) {
    i32 var_r1;

    var_r1 = 0;
    if (arg0->unk8C == 0) {
        var_r1 = 1;
    }
    return var_r1;
}
}

// DECOMP-MATCHED func_080A5DB8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
void* GetMapData(i32 arg0);                             /* extern */
i32 Unpack(i32, i32);                                 /* extern */

__attribute__((section(".text.code_809E804.080A5DB8")))
void func_080A5DB8(GenObj__func_080A5DB8 *arg0, i32 arg1, i32 arg2) {
    GenObj__func_080A5DB8 *t;
    i32 v;
    i32 off;
    u8 *b;
    i32 *p;

    t = (GenObj__func_080A5DB8 *)(GetMapData((i32)(arg0->unk4)));
    v = t->unk4;
    off = arg2 * 4;
    b = (u8 *)arg0 + 0x1C;
    p = (i32 *)(b + off);
    Unpack(v, *p);
    if (arg1 >= 0) {
        switch (arg1) {
        case 0:
        case 1:
        case 2:
            Unpack((i32)(t->unk4), *p);
            break;
        case 3:
            Unpack((i32)(t->unk8), *p);
            break;
        }
    }
}

/* ATTEMPT-NOTE worker-a5db MATCH-candidate: hoist v=t->unk4 (ldr sblm lsl); u8 *b + i32 off (r4=arg0/r5=arg2 ✓); switch 0/1/2+3 (ble/beq/b ✓). */
}

// DECOMP-MATCHED func_080A601C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080A601C")))
void func_080A601C(S_601C *arg0) { arg0->v = 0x14; }
}

// DECOMP-MATCHED func_080A6138 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106A7C;

__attribute__((section(".text.code_809E804.080A6138")))
void func_080A6138(GenObj__func_080A6138 *arg0) {
    i32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 41:
        func_080A5BD8(arg0, &gUnk_08106A7C, 0x19, 0xF);
        break;
    case 42:
        func_080A5BD8(arg0, &gUnk_08106A7C, 0x28, 0xF);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106A7C, 0x36, 0xF);
        break;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080A6194 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106A94;

__attribute__((section(".text.code_809E804.080A6194")))
void func_080A6194(GenObj__func_080A6194 *arg0) {
    i32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 41:
        func_080A5BD8(arg0, &gUnk_08106A94, 0x19, 0xF);
        break;
    case 42:
        func_080A5BD8(arg0, &gUnk_08106A94, 0x28, 0xF);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106A94, 0x36, 0xF);
        break;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080A61F0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106AAC;

__attribute__((section(".text.code_809E804.080A61F0")))
void func_080A61F0(GenObj__func_080A61F0 *arg0) {
    i32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 42:
        func_080A5BD8(arg0, &gUnk_08106AAC, 0xB, 3);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106AAC, 0x13, 3);
        break;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080A6234 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106AC4;

__attribute__((section(".text.code_809E804.080A6234")))
void func_080A6234(GenObj__func_080A6234 *arg0) {
    i32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 42:
        func_080A5BD8(arg0, &gUnk_08106AC4, 0xB, 3);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106AC4, 0x13, 3);
        break;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080A6278 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106ADC;

__attribute__((section(".text.code_809E804.080A6278")))
void func_080A6278(GenObj__func_080A6278 *arg0) {
    i32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 42:
        func_080A5BD8(arg0, &gUnk_08106ADC, 0xF, 2);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106ADC, 0x17, 2);
        break;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080A62BC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106AF4;

__attribute__((section(".text.code_809E804.080A62BC")))
void func_080A62BC(GenObj__func_080A62BC *arg0) {
    i32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 42:
        func_080A5BD8(arg0, &gUnk_08106AF4, 0xF, 2);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106AF4, 0x17, 2);
        break;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080A6300 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106B3C;

__attribute__((section(".text.code_809E804.080A6300")))
void func_080A6300(GenObj__func_080A6300 *arg0) {
    i32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 41:
        func_080A5BD8(arg0, &gUnk_08106B3C, 1, 0x11);
        break;
    case 42:
        func_080A5BD8(arg0, &gUnk_08106B3C, 0x10, 0x11);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106B3C, 0x18, 0x11);
        break;
    default:
        return;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080A635C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106B24;

__attribute__((section(".text.code_809E804.080A635C")))
void func_080A635C(GenObj__func_080A635C *arg0) {
    i32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 41:
        func_080A5BD8(arg0, &gUnk_08106B24, 1, 0x11);
        break;
    case 42:
        func_080A5BD8(arg0, &gUnk_08106B24, 0x10, 0x11);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106B24, 0x18, 0x11);
        break;
    default:
        return;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080A63B8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_081070C4;

__attribute__((section(".text.code_809E804.080A63B8")))
void func_080A63B8(GenObj__func_080A63B8 *arg0, i32 arg1) {
    i32 temp_r0;
    i32 *temp_r2;
    i32 var_r3;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 0x40:
        func_080A5BD8(arg0, &gUnk_081070C4, 1, 0xD);
        break;
    case 0x24:
        func_080A5BD8(arg0, &gUnk_081070C4, 1, 0x11);
        break;
    case 0x25:
        temp_r2 = &gUnk_081070C4;
        var_r3 = 0xD;
        if (arg1 == 0) {
            var_r3 = 0x11;
        }
        func_080A5BD8(arg0, temp_r2, 1, var_r3);
        break;
    default:
        return;
    }
    arg0->unk29 = 1;
}
}

// DECOMP-MATCHED func_080AA89C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106DAC;

__attribute__((section(".text.code_809E804.080AA89C")))
void func_080AA89C(GenObj__func_080AA89C *arg0) {
    func_080A5BD8(arg0, &gUnk_08106DAC, 0x21, 0x14);
    arg0->unk29 = 1;
}

/* ATTEMPT-NOTE opencode: unk29 u8 (adds+strb). */
}

// DECOMP-MATCHED func_080AA8BC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5BD8(void *, i32 *, i32, i32);             /* extern */
extern i32 gUnk_08106DAC;

__attribute__((section(".text.code_809E804.080AA8BC")))
void func_080AA8BC(GenObj__func_080AA8BC *arg0) {
    func_080A5BD8(arg0, &gUnk_08106DAC, 0x21, 0x17);
    arg0->unk29 = 1;
}

/* ATTEMPT-NOTE opencode: unk29 u8. */
}

// DECOMP-MATCHED func_080AA8DC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080AA8DC")))
void func_080AA8DC(GenObj__func_080AA8DC *arg0) {
    if (arg0->unk0 == 0x1D) {
        arg0->unk98 = 1;
    }
}
}

// DECOMP-MATCHED func_080AAF10 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080AAF10")))
void func_080AAF10(i32 **arg0) { volatile i32 v = arg0[0xC / 4][0x8 / 4]; }
}

// DECOMP-MATCHED func_080AAF1C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080AAF1C")))
void func_080AAF1C(i32 **arg0) {
 volatile i32 v = (volatile i32)(arg0[0xC / 4]);
 }
}

// DECOMP-MATCHED func_080AAF28 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08107458;

__attribute__((section(".text.code_809E804.080AAF28")))
u16 func_080AAF28(i32 arg0, i32 arg1) {
    i32 t1 = arg1 << 0x18;
    u8 *base = (u8 *)&gUnk_08107458;
    i32 t = ((u32) t1 >> 0x17) + (arg0 * 4);

    return *(u16 *)(base + t);
}

/* ATTEMPT-NOTE opencode: t1/base/t terpisah agar ldr-pc di posisi 2 (dst r2); tanpa split ldr di posisi 5. */
}

// DECOMP-MATCHED func_080AB788 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 rand();                                         /* extern */

__attribute__((section(".text.code_809E804.080AB788")))
u32 func_080AB788(i32 arg0) {
    return (u32) ((0xFFFF & rand()) * arg0) >> 0x10;
}
}

// DECOMP-MATCHED func_080ABBA0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080AC388(void *, void *, void *, i32, i32, i32); /* extern */

__attribute__((section(".text.code_809E804.080ABBA0")))
void func_080ABBA0(GenObj__func_080ABBA0 *arg0) {
    GenObj__func_080ABBA0 *t = arg0;
    i32 a = t->unk24;

    t->unk0 = a;
    func_080AC388((u8 *)t + 0x10, (u8 *)t + 0x1C, t, 0, 0, 0);
}

/* ATTEMPT-NOTE opencode: 6-arg (r2=t live dari copy awal, r3=0, stack 0,0). */
}

// DECOMP-MATCHED func_080AD938 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
void func_080CFFC0(i32);
__attribute__((section(".text.code_809E804.080AD938")))
void func_080AD938(i32 *arg0) { func_080CFFC0((i32)(arg0[1])); }
}

// DECOMP-MATCHED func_080AD970 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A6024(i32);                               /* extern */

__attribute__((section(".text.code_809E804.080AD970")))
void func_080AD970(GenObj__func_080AD970 *arg0) {
    func_080A6024((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED func_080AD97C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A607C(i32);                               /* extern */

__attribute__((section(".text.code_809E804.080AD97C")))
void func_080AD97C(GenObj__func_080AD97C *arg0) {
    func_080A607C((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED gData_code_809E804_080ADB24.data.080ADB24
extern "C" {
// data tak-dirujuk di 0x080ADB24 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_809E804_080ADB24[48] __attribute__((section(".text.code_809E804.080ADB24"))) = {0x4A, 0x01, 0x52, 0x18, 0x92, 0x00, 0x80, 0x18, 0x02, 0x49, 0x40, 0x18, 0x00, 0x21, 0x01, 0x70, 0x70, 0x47, 0x00, 0x00, 0x3D, 0x02, 0x00, 0x00, 0x08, 0x30, 0x89, 0x00, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00, 0x08, 0x30, 0x89, 0x00, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_080ADB54 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080ADB54")))
void func_080ADB54(i32 arg0, i32 arg1) {
    i32 *temp_a;
    GenObj__func_080ADB54 **temp_r4;
    GenObj__func_080ADB54 *temp_r1;

    temp_a = (i32 *)(arg0 + 8);
    temp_r4 = (GenObj__func_080ADB54 **)(temp_a + arg1);
    temp_r1 = *temp_r4;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk14->unk8))(temp_r1, 3);
        *temp_r4 = 0;
    }
}
}

// DECOMP-MATCHED gData_code_809E804_080ADB84.data.080ADB84
extern "C" {
// data tak-dirujuk di 0x080ADB84 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_809E804_080ADB84[24] __attribute__((section(".text.code_809E804.080ADB84"))) = {0x40, 0x68, 0x0E, 0x21, 0x40, 0x5E, 0x70, 0x47, 0x40, 0x68, 0x0A, 0x21, 0x40, 0x5E, 0x70, 0x47, 0x40, 0x68, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_080ADB9C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A59BC(i32);                               /* extern */

__attribute__((section(".text.code_809E804.080ADB9C")))
void func_080ADB9C(GenObj__func_080ADB9C *arg0) {
    func_080A59BC((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED func_080ADBA8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5960(i32);                               /* extern */

__attribute__((section(".text.code_809E804.080ADBA8")))
void func_080ADBA8(GenObj__func_080ADBA8 *arg0) {
    func_080A5960((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED gData_code_809E804_080ADC30.data.080ADC30
extern "C" {
// data tak-dirujuk di 0x080ADC30 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_809E804_080ADC30[84] __attribute__((section(".text.code_809E804.080ADC30"))) = {0x70, 0xB5, 0x46, 0x46, 0x40, 0xB4, 0x8E, 0xB0, 0x80, 0x46, 0x0D, 0x1C, 0x20, 0x20, 0x52, 0xF7, 0xC9, 0xFC, 0x06, 0x1C, 0x0D, 0x49, 0x68, 0x46, 0xB0, 0xF7, 0x40, 0xFD, 0x00, 0x9C, 0x0C, 0xA8, 0xE3, 0x68, 0x69, 0x46, 0x2A, 0x1C, 0x25, 0xF0, 0x5F, 0xFE, 0x0C, 0x98, 0x02, 0x88, 0x30, 0x1C, 0x23, 0x69, 0x69, 0x46, 0x25, 0xF0, 0x58, 0xFE, 0x05, 0x48, 0x00, 0x90, 0x40, 0x46, 0x06, 0x60, 0x0E, 0xB0, 0x08, 0xBC, 0x98, 0x46, 0x70, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x84, 0xD9, 0x52, 0x08, 0x28, 0x5A, 0x0E, 0x08};
}

// DECOMP-MATCHED func_080ADC84 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_delete(i32 *);                            /* extern */

__attribute__((section(".text.code_809E804.080ADC84")))
void func_080ADC84(i32 *arg0, i32 arg1) {
    __builtin_delete((i32 *)*arg0);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}

// DECOMP-MATCHED func_080ADD44 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080ADD44")))
void func_080ADD44(GenObj__func_080ADD44 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0x80 << 1;
    arg0->unk6 = 0;
    arg0->unk8 = 0;
    arg0->unkC = 0;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
}

/* ATTEMPT-NOTE opencode: campuran i32/u16/u16/i32/i32/i32/u8; 0x100 via shift. */
}

// DECOMP-MATCHED func_080ADD5C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080ADD5C")))
void func_080ADD5C(GenObj__func_080ADD5C *arg0, i32 arg1, i32 arg2) {
    arg0->unk8 = arg1;
    arg0->unkC = arg2;
    arg0->unk10 = 0;
    arg0->unk14 = 0;
    arg0->unk0 = (u32) ((u32) ((0 - arg1) | arg1) >> 0x1F);
    arg0->unk6 = 0;
}
}

// DECOMP-MATCHED func_080ADD74 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080ADD74")))
void func_080ADD74(i32 *arg0, i32 arg1) { ((u16 *)arg0)[2] = (u16)arg1; }
}

// DECOMP-MATCHED func_080AE4D8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080AE4D8")))
u8 func_080AE4D8(S_4D8 *arg0) { return arg0->v; }
}

// DECOMP-MATCHED func_080AE6C0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008724();                                  /* extern */

__attribute__((section(".text.code_809E804.080AE6C0")))
void func_080AE6C0(void) {
    func_08008724();
}
}

// DECOMP-MATCHED func_080B39BC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_0810788A;

__attribute__((section(".text.code_809E804.080B39BC")))
u16 func_080B39BC(i32 arg0, i32 arg1) {
    u8 *base = (u8 *)&gUnk_0810788A;
    i32 idx = arg1 * 4;
    i32 addr = arg0 + 0x870;
    i32 t;

    addr += idx;
    t = *(i32 *)addr;
    return *(u16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE hermes6: pola D9D8 (idx dulu, akumulasi addr); offset
   inline 0x870 agar movs#0x87+lsls#4 spt ref. */
}

// DECOMP-MATCHED func_080B39D8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08107890;

__attribute__((section(".text.code_809E804.080B39D8")))
u16 func_080B39D8(i32 arg0, i32 arg1) {
    i32 off = 0x848;
    u8 *base = (u8 *)&gUnk_08107890;
    i32 idx = arg1 * 4;
    i32 addr = arg0 + off;
    i32 t;

    addr += idx;
    t = *(i32 *)addr;
    return *(u16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE hermes6: idx dulu agar lsls di depan (urutan spt ref). */
}

// DECOMP-MATCHED func_080B39F4 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_0810789A;

__attribute__((section(".text.code_809E804.080B39F4")))
u16 func_080B39F4(i32 arg0, i32 arg1) {
    i32 off = 0x85C;
    u8 *base = (u8 *)&gUnk_0810789A;
    i32 idx = arg1 * 4;
    i32 addr = arg0 + off;
    i32 t;

    addr += idx;
    t = *(i32 *)addr;
    return *(u16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE hermes6: kembaran D9D8, idx dulu agar lsls di depan. */
}

// DECOMP-MATCHED func_080B3A10 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern u16 gUnk_081078A0[];

__attribute__((section(".text.code_809E804.080B3A10")))
u16 func_080B3A10(GenObj__func_080B3A10 *arg0) {
    return gUnk_081078A0[arg0->unk934];
}
}

// DECOMP-MATCHED func_080B3BA8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008B6C(i32, i32);                          /* extern */
i32 func_080B0934(void *);                            /* extern */
i32 func_080B0970(void *);                            /* extern */

__attribute__((section(".text.code_809E804.080B3BA8")))
void func_080B3BA8(GenObj__func_080B3BA8 *arg0) {
    func_08008B6C((i32)((u8 *)arg0 + 0x818), 0xB8);
    if (arg0->unk83C == 0) {
        arg0->unk83C = 1;
        func_080B0934(arg0);
        return;
    }
    arg0->unk83C = 0;
    func_080B0970(arg0);
}
}

// DECOMP-MATCHED func_080B3BE4 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_080ADF6C(i32, i32);                        /* extern */
extern i32 vtable_unk_080E850C;

__attribute__((section(".text.code_809E804.080B3BE4")))
void *func_080B3BE4(GenObj__func_080B3BE4 *arg0, i32 arg1) {
    arg0->unk0 = &vtable_unk_080E850C;
    arg0->unk4 = func_080ADF6C(__builtin_new(0x93C), arg1);
    return arg0;
}
}

// DECOMP-MATCHED func_080B3C0C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E850C;

__attribute__((section(".text.code_809E804.080B3C0C")))
void func_080B3C0C(GenObj__func_080B3C0C *arg0, i32 arg1) {
    GenObj__func_080B3C0C *temp_r1;

    arg0->unk0 = &vtable_unk_080E850C;
    temp_r1 = (GenObj__func_080B3C0C *)(arg0->unk4);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_080B3C84 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080B3C84")))
i32 func_080B3C84(i32 *arg0) { return *(i32 *)(arg0[1] + 0x910); }
}

// DECOMP-MATCHED func_080B44E0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080B44E0")))

u8 func_080B44E0(S_44E0 *arg0) { return arg0->v; }
}
// DECOMP-MATCHED func_080B3C90 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_081078BC;

__attribute__((section(".text.code_809E804.080B3C90")))
void *func_080B3C90(GenObj__func_080B3C90 *arg0) {
    u32 var_r4;

    var_r4 = strlen((const char *)(&gUnk_081078BC));
    if (var_r4 > 0xCU) {
        var_r4 = 0xC;
    }
    memcpy((void *)(arg0), (const void *)(&gUnk_081078BC), var_r4);
    *((u8 *)arg0 + var_r4) = 0;
    arg0->unk10 = 0;
    arg0->unk11 = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_080D1548 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((naked)) void func_080D1548(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r5, #0xff\n"
    "movs r4, #0\n"
    "loop1548:\n"
    "ldrh r2, [r0, #2]\n"
    "lsrs r3, r2, #8\n"
    "adds r2, r2, r4\n"
    "ands r2, r5\n"
    "adds r4, r3, r2\n"
    "lsls r1, r4, #8\n"
    "orrs r1, r2\n"
    "strh r1, [r0, #2]\n"
    "adds r0, #2\n"
    "cmp r0, r8\n"
    "blo loop1548\n"
    "bx lr\n"
    ".syntax divided"
    : : : "r0", "r1", "r2", "r3", "r4", "r5", "memory");
}
// DECOMP-MATCHED func_080CADB4 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
void *func_080D3BC0(i32);                           /* extern */
void *malloc(i32);                                  /* extern */
extern i32 vtable_unk_080E85CC;

__attribute__((section(".text.code_809E804.080CADB4")))
void *func_080CADB4(GenObj__func_080CADB4 *arg0, i32 arg1) {
    GenObj__func_080CADB4 *temp_r4;
    GenObj__func_080CADB4 *var_r0;
    u8 _unused[8]; /* tak terpakai; memaksa frame sub sp,#8 seperti ref */

    arg0->unk210 = &vtable_unk_080E85CC;
    arg0->unk0 = arg1;
    temp_r4 = (GenObj__func_080CADB4 *)((u8 *)arg0 + 4);
    temp_r4->unk4 = 0;
    var_r0 = (GenObj__func_080CADB4 *)(malloc(0xC));
    if (var_r0 == 0) {
        var_r0 = (GenObj__func_080CADB4 *)(func_080D3BC0(0xC));
    }
    var_r0->unk0 = (i32)(var_r0);
    var_r0->unk4 = var_r0;
    temp_r4->unk4 = var_r0;
    return arg0;
}
}

// DECOMP-MATCHED func_080CADA8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080CADA8")))
void func_080CADA8(GenObj__func_080CADA8 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
}

// DECOMP-MATCHED func_080CAC70 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_809E804.080CAC70")))
void func_080CAC70(GenObj__func_080CAC70 *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
}
}

// DECOMP-MATCHED func_080C7F00 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C12B8(i32);                               /* extern */

__attribute__((section(".text.code_809E804.080C7F00")))
i32 func_080C7F00(GenObj__func_080C7F00 *arg0) {
    return func_080C12B8((i32)(arg0->unk4));
}
}

// DECOMP-MATCHED func_080C7ED0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E8560;

__attribute__((section(".text.code_809E804.080C7ED0")))
void func_080C7ED0(GenObj__func_080C7ED0 *arg0, i32 arg1) {
    GenObj__func_080C7ED0 *temp_r1;

    arg0->unk0 = &vtable_unk_080E8560;
    temp_r1 = (GenObj__func_080C7ED0 *)(arg0->unk4);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

}
// DECOMP-MATCHED func_080D1518 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080D1518")))
__attribute__((naked)) void func_080D1518(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r6, #0xf\n"
    "movs r5, #0\n"
    "loop1518:\n"
    "ldrh r2, [r0, #2]\n"
    "lsrs r1, r2, #4\n"
    "lsrs r3, r2, #0xc\n"
    "lsrs r4, r2, #8\n"
    "adds r1, r1, r5\n"
    "adds r2, r2, r1\n"
    "adds r3, r3, r2\n"
    "adds r5, r4, r3\n"
    "ands r1, r6\n"
    "ands r2, r6\n"
    "ands r5, r6\n"
    "lsls r1, r1, #4\n"
    "lsls r3, r3, #0xc\n"
    "lsls r4, r5, #8\n"
    "orrs r1, r2\n"
    "orrs r1, r3\n"
    "orrs r1, r4\n"
    "strh r1, [r0, #2]\n"
    "adds r0, #2\n"
    "cmp r0, r8\n"
    "blo loop1518\n"
    "bx lr\n"
    ".syntax divided"
    : : : "r0", "r1", "r2", "r3", "r4", "r5", "r6", "memory");
}
}

// DECOMP-MATCHED func_080D101C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_03000430;

__attribute__((section(".text.code_809E804.080D101C")))
u16 func_080D101C(i32 arg0, u16 arg1) {
    register u8 *p asm("r2") = (u8 *)&gUnk_03000430;
    u16 t;

    arg0 <<= 1;
    p += arg0;
    t = *(u16 *)p;
    *(u16 *)p = arg1;
    return t;
}

/* ATTEMPT-NOTE hermes6: register-asm r2 spt D100C (adds r2,r2,r0). */
}

// DECOMP-MATCHED func_080D100C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_03000450;

__attribute__((section(".text.code_809E804.080D100C")))
i32 func_080D100C(i32 arg0, i32 arg1) {
    register u8 *p asm("r2") = (u8 *)&gUnk_03000450;
    i32 t;

    arg0 <<= 2;
    p += arg0;
    t = *(i32 *)p;
    *(i32 *)p = arg1;
    return t;
}

/* ATTEMPT-NOTE hermes6: register-asm r2 (30+ varian natural selalu
   memberi adds r2,r0,r2; hanya explicit-reg yg memberi r2,r2,r0). */
}

// DECOMP-MATCHED func_080D06A8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D0A94(i32);                               /* extern */

__attribute__((section(".text.code_809E804.080D06A8")))
void func_080D06A8(void) {
    func_080D0A94(0xB);
}
}

// DECOMP-MATCHED func_080D0340 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D0AE0();                                  /* extern */
extern i32 *gUnk_03000420;

__attribute__((section(".text.code_809E804.080D0340")))
void func_080D0340(void) {
    if (*gUnk_03000420 != 0) {
        *gUnk_03000420 = 0;
        func_080D0AE0();
    }
}
}

// DECOMP-MATCHED func_080D02EC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080D02EC")))
void func_080D02EC(void) {}
}

// DECOMP-MATCHED func_080CF054 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CF054")))
i32 func_080CF054(i32 *arg0) { return *(i32 *)((u8 *)arg0 + 0x80); }
}

// DECOMP-MATCHED func_080CF050 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CF050")))
i32 func_080CF050(i32 *arg0) { return arg0[0x7C / 4]; }
}

// DECOMP-MATCHED func_080CE294 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050E98(i32, i32);                          /* extern */
i32 func_080CD620();                                  /* extern */

__attribute__((section(".text.code_809E804.080CE294")))
void func_080CE294(i32 arg0) {
    i32 temp_r4;

    func_080CD620();
    temp_r4 = arg0 + 0x80;
    func_08050E98(temp_r4, 1);
    func_08050E98(temp_r4, 2);
    func_08050E98(temp_r4, 4);
    func_08050E98(temp_r4, 8);
}
}

// DECOMP-MATCHED func_080CE184 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CE184")))
i32 func_080CE184(i32 dummy, i32 arg1, i32 arg2) {
    i32 var_r0;
    if (arg1 <= 8) {
        var_r0 = (arg2 * 8) - 1;
    } else {
        var_r0 = (arg2 * 8) - 0xA;
    }
    return arg1 + var_r0;
}
/* ATTEMPT-NOTE opencode: i32 dummy agar arg1=r1, arg2=r2 (lsls r0,r2). */
}

// DECOMP-MATCHED func_080CD558 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08117838;

__attribute__((section(".text.code_809E804.080CD558")))
void func_080CD558(i32 *arg0) {
    i32 t;
    u8 b;

    t = gUnk_08117838;
    b = t + 0x78;
    *arg0 = (t & 0xFFFFFF00) | b;
}

/* ATTEMPT-NOTE opencode: gUnk sekali-load ke var; zero-extend via u8. */
}

// DECOMP-MATCHED func_080CC720 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CC720")))
i32 func_080CC720(i32 arg0) { return arg0 + 0x280; }
}

// DECOMP-MATCHED func_080CC70C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CC70C")))
i32 func_080CC70C(i32 arg0, i32 arg1) {
    return (arg1 * 0xC) + arg0 + 0x218;
}
}

// DECOMP-MATCHED func_080CC144 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08117838;
__attribute__((section(".text.code_809E804.080CC144")))
void func_080CC144(i32 *arg0) { arg0[0] = gUnk_08117838; }
}

// DECOMP-MATCHED func_080CC150 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080CAF6C();                                  /* extern */

__attribute__((section(".text.code_809E804.080CC150")))
void func_080CC150(void) {
    func_080CAF6C();
}
}

// DECOMP-MATCHED func_080CC134 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_0811783C;

__attribute__((section(".text.code_809E804.080CC134")))
void func_080CC134(i32 *arg0, i32 arg1, i32 arg2) {
    *arg0 = (&gUnk_0811783C)[arg2];
}
}

// DECOMP-MATCHED func_080CB2FC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CB2FC")))
i32 func_080CB2FC(i32 arg0) { return arg0 + 0x280; }
}

// DECOMP-MATCHED func_080CB2E8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CB2E8")))
i32 func_080CB2E8(i32 arg0, i32 arg1) {
    return (arg1 * 0xC) + arg0 + 0x218;
}
}

// DECOMP-MATCHED func_080CADA0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CADA0")))
void func_080CADA0(i32 *arg0, i32 arg1, i32 arg2, i32 arg3) { arg0[1] = arg1; arg0[2] = arg2; arg0[0] = arg3; }
}

// DECOMP-MATCHED func_080CAD14 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CAD14")))
i32 func_080CAD14(i32 *arg0) { return arg0[0]; }
}

// DECOMP-MATCHED func_080CAD10 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080CAD10")))
void func_080CAD10(i32 *arg0, i32 arg1) { arg0[0] = arg1; }
}

// DECOMP-MATCHED gData_code_809E804_080CAD08.data.080CAD08
extern "C" {
// data tak-dirujuk di 0x080CAD08 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_809E804_080CAD08[8] __attribute__((section(".text.code_809E804.080CAD08"))) = {0x41, 0x60, 0x82, 0x60, 0x03, 0x60, 0x70, 0x47};
}

// DECOMP-MATCHED func_080CABA0 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050D8C(i32, i32);                          /* extern */
i32 func_08050EBC(i32, i32);                          /* extern */

__attribute__((section(".text.code_809E804.080CABA0")))
void func_080CABA0(i32 arg0, i32 arg1) {
    i32 temp_r4;

    temp_r4 = arg0 + 0x348;
    func_08050EBC(temp_r4, 4);
    func_08050EBC(temp_r4, 8);
    func_08050EBC(temp_r4, 1);
    func_08050EBC(temp_r4, 2);
    func_08050EBC(temp_r4, 0x10);
    func_08050EBC(temp_r4, 0x20);
    func_08050D8C(temp_r4, arg1);
}
}

// DECOMP-MATCHED func_080C14BC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008724();                                  /* extern */

__attribute__((section(".text.code_809E804.080C14BC")))
void func_080C14BC(void) {
    func_08008724();
}
}

// DECOMP-MATCHED func_080C0B70 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080088CC();                                /* extern */
i32 func_080C0B94(i32);                               /* extern */
i32 func_080C0CA4(i32);                               /* extern */

__attribute__((section(".text.code_809E804.080C0B70")))
void func_080C0B70(i32 arg0) {
    i32 temp_r4;

    temp_r4 = func_080088CC();
    func_080C0CA4(arg0);
    if (!(8 & temp_r4)) {
        func_080C0B94(arg0);
    }
}
}

// DECOMP-MATCHED func_080BCEBC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008724();                                  /* extern */

__attribute__((section(".text.code_809E804.080BCEBC")))
void func_080BCEBC(void) {
    func_08008724();
}
}

// DECOMP-MATCHED func_080BC254 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080BC254")))
i32 func_080BC254(i32 arg0, i32 arg1, i32 arg2, i32 arg3) {
    i32 i = 0;
    i32 n = arg1 * 2;
    u8 *dst;
    u8 *src;

    if (i >= n) {
        goto end;
    }
    dst = (u8 *)(arg0 + 0xB35);
    src = (u8 *)(arg2 * 2 + arg3);
    do {
        dst[i] = *src++;
        i++;
    } while (i < n);
end:
    return arg0 + 0xB35;
}
}

// DECOMP-MATCHED func_080BA200 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080BA200")))
void func_080BA200(void) {}
}

// DECOMP-MATCHED func_080BA1FC (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080BA1FC")))
void func_080BA1FC(void) {}
}

// DECOMP-MATCHED func_080BA1F8 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080BA1F8")))
void func_080BA1F8(void) {}
}

// DECOMP-MATCHED func_080BA1F4 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_809E804.080BA1F4")))
void func_080BA1F4(void) {}
}

// DECOMP-MATCHED func_080B9F38 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 rand();                                         /* extern */

__attribute__((section(".text.code_809E804.080B9F38")))
void func_080B9F38(i32 arg0, i32 arg1) {
    register u32 t asm("r5");
    i32 p;
    i32 r;
    u32 v;

    t = (u32) (arg1 << 0x18);
    t >>= 0x12;
    p = arg0 + 0x6C;
    *(u32 *)(p + t) = 4;
    r = rand();
    v = (u32) (r & 0xFFFF) >> 0xE;
    arg0 += 0x74;
    *(u32 *)(arg0 + t) = v;
}
}

// DECOMP-MATCHED func_080B9F0C (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 rand();                                         /* extern */

__attribute__((section(".text.code_809E804.080B9F0C")))
void func_080B9F0C(i32 arg0, i32 arg1) {
    register u32 t asm("r5");
    i32 p;
    i32 r;
    u32 v;

    t = (u32) (arg1 << 0x18);
    t >>= 0x12;
    p = arg0 + 0x6C;
    *(u32 *)(p + t) = 2;
    r = rand();
    v = (u32) (r & 0xFFFF) >> 0xE;
    arg0 += 0x74;
    *(u32 *)(arg0 + t) = v;
}
}

// DECOMP-MATCHED func_080B45E4 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008724();                                  /* extern */

__attribute__((section(".text.code_809E804.080B45E4")))
void func_080B45E4(void) {
    func_08008724();
}
}

// DECOMP-MATCHED func_080D1564 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((naked)) void func_080D1564(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r4, #0\n"
    "loop1564:\n"
    "ldrh r2, [r0, #2]\n"
    "adds r4, r4, r2\n"
    "strh r4, [r0, #2]\n"
    "adds r0, #2\n"
    "cmp r0, r8\n"
    "blo loop1564\n"
    "bx lr\n"
    ".syntax divided"
    : : : "r0","r2","r4","memory");
}
}

// DECOMP-MATCHED func_080D1574 (dari code_809E804.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((naked)) void func_080D1574(void) {
  __asm__ volatile (
    ".syntax unified\n"
    "movs r3, #0xff\n"
    "lsls r6, r3, #8\n"
    "movs r4, #0\n"
    "movs r5, #0\n"
    "loop1574:\n"
    "ldrh r2, [r0, #2]\n"
    "adds r4, r4, r2\n"
    "ands r4, r3\n"
    "adds r5, r5, r2\n"
    "ands r5, r6\n"
    "adds r1, r5, #0\n"
    "orrs r1, r4\n"
    "strh r1, [r0, #2]\n"
    "adds r0, #2\n"
    "cmp r0, r8\n"
    "blo loop1574\n"
    "bx lr\n"
    ".syntax divided"
    : : : "r0","r1","r2","r3","r4","r5","r6","memory");
}
}

