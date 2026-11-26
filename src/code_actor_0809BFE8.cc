#include "prelude.h"
#include <string.h> // memcpy
// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Cell_9D8D4 {
    u8 _pad0[4];
    u8 f : 4;
    u8 g : 4;
} Cell_9D8D4;
// === END MIGRATED TYPES ===


#include "actor.hh"

struct Unk_Actor_0809BFE8 : Actor
{
    Unk_Actor_0809BFE8();

    u32 unk_08_0 : 7;
    u32 unk_0C;
};

Unk_Actor_0809BFE8::Unk_Actor_0809BFE8()
    : Actor(ActorLocation(Location(MAP_NONE, 0, 0), 0)), unk_08_0(100), unk_0C(0)
{
}

EC Unk_Actor_0809BFE8 * func_0809BFE8() ALIAS(__18Unk_Actor_0809BFE8);

EC unsigned int func_0809C060(Unk_Actor_0809BFE8 const & self)
{
    return self.unk_08_0;
}

EC void func_0809C068(Unk_Actor_0809BFE8 & self, int arg_0)
{
    int val = self.unk_08_0 - arg_0;

    if (val < 0)
        val = 0;
    else if (val > 100)
        val = 100;

    self.unk_08_0 = val;
}

EC void func_0809C098(Unk_Actor_0809BFE8 & self)
{
    self.unk_0C = 0;
}

/* what follows shouldn't be hard except that to do it well I think there needs to be union/placeholder shenanigans */
// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[12];
    i32 unkC;
    i32 unk10;
} GenObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809C0AC {
    i32 unk0;
    i32 unk4;
    u8 _pad8[4];
    i32 unkC;
    i32 unk10;
    i32 unk14;
} GenObj__func_0809C0AC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809C38C {
    u8 _pad0[6];
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
} GenObj__func_0809C38C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809C694 {
    u8 _pad0[12];
    u16 unkC;
} GenObj__func_0809C694;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809C6AC {
    u8 _pad0[12];
    u16 unkC;
} GenObj__func_0809C6AC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809C6B0 {
    u8 _pad0[12];
    u16 unkC;
} GenObj__func_0809C6B0;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_0809C0A0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809C0A0")))
void func_0809C0A0(GenObj *arg0, i32 *arg1) {
    arg0->unk10 = (i32) *arg1;
    arg0->unkC = 1;
}
}
// DECOMP-MATCHED func_0809C0AC (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809C0AC")))
void func_0809C0AC(GenObj__func_0809C0AC *arg0, GenObj__func_0809C0AC *arg1) {
    i32 b = arg1->unk4;
    i32 a = arg1->unk0;
    arg0->unk10 = a;
    arg0->unk14 = b;
    arg0->unkC = 2;
}
}
// DECOMP-MATCHED func_0809C0BC (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809C0BC")))
void func_0809C0BC(GenObj *arg0, i32 *arg1) {
    arg0->unk10 = (i32) *arg1;
    arg0->unkC = 3;
}
}
// DECOMP-MATCHED func_0809C0C8 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809C0C8")))
void func_0809C0C8(GenObj *arg0, i32 *arg1) {
    arg0->unk10 = (i32) *arg1;
    arg0->unkC = 4;
}
}

// DECOMP-MATCHED func_0809C38C (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809C38C")))
u32 func_0809C38C(GenObj__func_0809C38C *arg0) {
    u32 var_r2;

    var_r2 = 0;
    if ((arg0->unk7 != 0) && (arg0->unk6 != 0) && (arg0->unk8 != 0) && (arg0->unk9 != 0) && (arg0->unkA != 0)) {
        var_r2 = (u32) (0 - arg0->unkB) >> 0x1F;
    }
    return var_r2;
}
}

// DECOMP-MATCHED func_0809C444 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0809C22C();                                /* extern */
u8 func_0809C3E0(i32);                              /* extern */

__attribute__((section(".text.code_actor_0809BFE8.0809C444")))
u8 func_0809C444(i32 arg0) {
    i32 temp_r0;
    u8 var_r5;

    var_r5 = 0;
    temp_r0 = func_0809C22C();
    if ((*((u8 *)arg0 + temp_r0) != 0) && ((temp_r0 == 0) || (temp_r0 == 3))) {
        var_r5 = func_0809C3E0(arg0);
    }
    return var_r5;
}
}

// DECOMP-MATCHED func_0809C4B4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0809C22C();                                /* extern */
u8 func_0809C3E0(i32);                              /* extern */

__attribute__((section(".text.code_actor_0809BFE8.0809C4B4")))
u8 func_0809C4B4(i32 arg0) {
    i32 temp_r0;
    u8 var_r2;

    temp_r0 = func_0809C22C();
    var_r2 = 0;
    if ((*((u8 *)arg0 + temp_r0) != 0) && ((temp_r0 == 5) || (temp_r0 == 2))) {
        var_r2 = func_0809C3E0(arg0);
    }
    return var_r2;
}
}

// DECOMP-MATCHED func_0809C5B4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809C5B4")))
void func_0809C5B4(i32 *arg0, u32 arg1) {
    if (arg1 <= 0xDU) {
        *arg0 |= 1 << (0x1F & arg1);
    }
}
}
// DECOMP-MATCHED func_0809C5D0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809C5D0")))
void func_0809C5D0(i32 *arg0, u32 arg1) {
    if (arg1 <= 0xDU) {
        *arg0 &= ~(1 << (0x1F & arg1));
    }
}
}
// DECOMP-MATCHED func_0809C5EC (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809C5EC")))
void func_0809C5EC(i32 *arg0) {
    *arg0 = 0;
}
}
// DECOMP-MATCHED func_0809C5F4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809C5F4")))
u32 func_0809C5F4(i32 *arg0) {
    i32 temp_r1;

    temp_r1 = *arg0;
    return (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
}
}

// DECOMP-MATCHED func_0809C644 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E3E28(i32, void *, i16 *);              /* extern */
__attribute__((section(".text.code_actor_0809BFE8.0809C644")))
void func_0809C644(i32 *arg0, i16 arg1) {
    i16 sp0;
    void *temp_r4;
    i32 temp_r3;
    i32 temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;

    u8 *a4;

    sp0 = arg1;
    a4 = (u8 *)arg0 + 4;
    temp_r4 = (u8 *)arg0 + ((*arg0 * 2) + 4);
    temp_r3 = func_080E3E28((i32)a4, temp_r4, &sp0);
    if (temp_r3 != (i32)temp_r4) {
        temp_r0_2 = *arg0;
        if (temp_r0_2 != 0) {
            temp_r0_3 = (u8 *)arg0 + ((temp_r0_2 * 2) + 4);
            temp_r1 = (u8 *)temp_r3 + 2;
            if (temp_r1 != temp_r0_3) {
                if (temp_r0_3 != temp_r1) {
                    memmove((void *)(temp_r3), (const void *)((i32)temp_r1), (i32)temp_r0_3 - (i32)temp_r1);
                }
            }
            *arg0 -= 1;
        }
    }
}

/* ATTEMPT-NOTE opencode: pointer byte-arith via (u8*); sp0 stack-u16. */

/* ATTEMPT-NOTE opencode: nested-if (bukan &&) agar dua compare terpisah; a4-var utk urutan adds; byte-arith (u8*). */
}
// DECOMP-MATCHED func_0809C694 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809C694")))
i32 func_0809C694(GenObj__func_0809C694 *arg0, u16 arg1) {
    i32 var_r2;

    var_r2 = 0;
    if (arg0->unkC == arg1) {
        var_r2 = 1;
    }
    return var_r2;
}
}
// DECOMP-MATCHED func_0809C6AC (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809C6AC")))
void func_0809C6AC(GenObj__func_0809C6AC *arg0, i16 arg1) {
    arg0->unkC = arg1;
}

/* ATTEMPT-NOTE opencode: unkC u16 (strh). */
}
// DECOMP-MATCHED func_0809C6B0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809C6B0")))
void func_0809C6B0(GenObj__func_0809C6B0 *arg0) {
    arg0->unkC = 0xFFFF;
}
}

// DECOMP-MATCHED func_0809CD98 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809CD98")))
i32 func_0809CD98(i32 arg0, i32 arg1, u32 arg2) {
    u32 *temp_r1;
    u32 *temp_r1_2;
    u32 temp_r3;
    i32 var_r6;
    i32 temp_a;

    var_r6 = 0;
    temp_r1 = (u32 *)(arg0 + arg1 * 8);
    temp_r3 = *temp_r1;
    if (temp_r3 <= 0x3B9AC9FFU) {
        *temp_r1 = temp_r3 + 1;
    }
    temp_a = arg0 + 4;
    temp_r1_2 = (u32 *)(temp_a + arg1 * 8);
    if (arg2 > *temp_r1_2) {
        *temp_r1_2 = arg2;
        var_r6 = 1;
    }
    return var_r6;
}
}

// DECOMP-MATCHED func_0809CE1C (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809CE1C")))
i32 func_0809CE1C(i32 arg0, i32 arg1) {
    arg0 += arg1 * 8;
    return *(i32 *)arg0;
}
}
// DECOMP-MATCHED func_0809CE24 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809CE24")))
i32 func_0809CE24(i32 arg0, i32 arg1) {
    i32 off = arg1 * 8;
    arg0 += 4;
    return *(i32 *)(arg0 + off);
}

/* ATTEMPT-NOTE opencode: off terpisah agar urutan lsls/adds-r0/adds/ldr-[r0,#0]; lipat +4 ke offset load salah urutan. */
}
// DECOMP-MATCHED func_0809CE30 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809CE30")))
i32 func_0809CE30(i32 arg0, i32 arg1) {
    switch (arg1 - 0x35) {
    default:
        return 0xFC;
    case 0:
        return 0xFC;
    case 1:
        return 0xF9;
    case 2:
        return 0xFE;
    case 3:
        return 0xFD;
    case 4:
        return 0xFA;
    case 5:
        return 0xFB;
    }
}
}
// DECOMP-MATCHED func_0809CE7C (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08103A18;

__attribute__((section(".text.code_actor_0809BFE8.0809CE7C")))
i32 func_0809CE7C(i32 arg0, i32 arg1) {
    i32 *temp_r0 = &gUnk_08103A18;

    return temp_r0[arg1];
}
}

// DECOMP-MATCHED func_0809D8A0 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809D8A0")))
i32 func_0809D8A0(i32 *arg0) {
    return *arg0;
}
}
// DECOMP-MATCHED func_0809D8A4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809D8A4")))
i32 func_0809D8A4(i32 *arg0) {
    i32 var_r1;

    var_r1 = 0xD;
    if (*arg0 == 1) {
        var_r1 = 0x1C;
    }
    return var_r1;
}
}
// DECOMP-MATCHED func_0809D8B8 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_actor_0809BFE8.0809D8B8")))
i32 func_0809D8B8(i32 *arg0) {
    i32 temp_r0;
    i32 var_r1;

    var_r1 = 6;
    temp_r0 = *arg0;
    if (temp_r0 == 1) {
        var_r1 = 0x1C;
    } else if (temp_r0 == 2) {
        var_r1 = 0xE;
    }
    return var_r1;
}
}


// DECOMP-MATCHED func_0809D8D4 (dari code_actor_0809BFE8.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_actor_0809BFE8.0809D8D4")))
u32 func_0809D8D4(u8 *arg0, i32 arg1, i32 arg2) {
    i32 off;

    off = arg1 * 2 + arg2 * 0x38;
    return ((Cell_9D8D4 *) (arg0 + off))->f;
}
}

