#include "prelude.h"

union Unk_hardware_ent_080D6D98
{
    Unk_hardware_ent_080D6D98 * next_free;

    struct
    {
        u16 unk_00;
        u16 unk_02;
    } params;
};

EC Unk_hardware_ent_080D6D98 * func_080D6D98(Unk_hardware_ent_080D6D98 * self, int num, int val);

struct Unk_hardware_03000404
{
    Unk_hardware_03000404()
    {
        unk_00 = func_080D6D98(unk_04, 0x10, 0);
        unk_44 = 0;
        unk_48 = 0;
        unk_4C = 0;
        unk_50 = 0;
        unk_51 = 0;
        unk_44 = 0;
    }

    bool inl_pred_0(unsigned int idx) const { return idx < 0x10 && (unk_44 & (1 << (idx % 0x20u))) != 0; }

    void inl_func_0(unsigned int idx)
    {
        if (idx < 0x10)
            unk_44 &= ~(1 << (idx % 0x20u));
    }

    void inl_func_1(unsigned int idx)
    {
        if (idx < 0x10)
            unk_44 |= (1 << (idx % 0x20u));
    }

    Unk_hardware_ent_080D6D98 & GetEntry(unsigned int idx) { return unk_04[idx]; }

    unsigned int IndexOf(Unk_hardware_ent_080D6D98 const * ent) const { return ent - unk_04; }

    void FreeEntry(Unk_hardware_ent_080D6D98 * ent)
    {
        ent->next_free = unk_00;
        unk_00 = ent;
    }

    Unk_hardware_ent_080D6D98 * AllocEntry(Unk_hardware_ent_080D6D98 * ent)
    {
        Unk_hardware_ent_080D6D98 * prev = unk_00;

        if (ent != nullptr)
            unk_00 = ent->next_free;

        return prev;
    }

    /* +00 */ Unk_hardware_ent_080D6D98 * unk_00;
    /* +04 */ Unk_hardware_ent_080D6D98 unk_04[0x10];
    /* +44 */ u32 unk_44;
    /* +48 */ u16 unk_48;
    /* +4A */ u16 unk_4A;
    /* +4C */ u32 unk_4C;
    /* +50 */ u8 unk_50;
    /* +51 */ u8 unk_51;
};

extern Unk_hardware_03000404 * gUnk_03000404;

struct Unk_hardware_H
{
    ~Unk_hardware_H();
};

EC Unk_hardware_H * func_08007128(Unk_hardware_H * self)
{
    if (gUnk_03000404 == nullptr)
    {
        gUnk_03000404 = new Unk_hardware_03000404;
    }

    gUnk_03000404->unk_4C++;

    return self;
}

EC Unk_hardware_H * func_08007174(Unk_hardware_H * self, Unk_hardware_H const & other)
{
    gUnk_03000404->unk_4C++;

    return self;
}

Unk_hardware_H::~Unk_hardware_H()
{
    gUnk_03000404->unk_4C--;

    if (gUnk_03000404->unk_4C == 0)
    {
        if (gUnk_03000404 != nullptr)
            delete gUnk_03000404;

        gUnk_03000404 = nullptr;
    }
}

EC void func_08007184(Unk_hardware_H * self) ALIAS(_._14Unk_hardware_H);

EC void func_080071BC(Unk_hardware_H * self, unsigned int from, unsigned int count)
{
    // https://decomp.me/scratch/e4deE (solved, but messy)

    (void)self;

    Unk_hardware_03000404 * h = gUnk_03000404;

    if (h->unk_51 != 0)
    {
        for (unsigned int i = h->unk_50, end = h->unk_50 + h->unk_51; i < end; i++)
        {
            if (h->inl_pred_0(i))
            {
                h->FreeEntry(&h->GetEntry(i));
                h->inl_func_0(i);
            }
        }

        h->unk_51 = 0;
    }

    if (count != 0)
    {
        unsigned int to = count + from;

        for (unsigned int i = 0; i < 0x10; i++)
        {
            if (h->inl_pred_0(i))
            {
                if (from <= i && i < to)
                {
                    h->GetEntry(i).params.unk_02 = 0;
                    h->FreeEntry(&h->GetEntry(i));
                    h->inl_func_0(i);
                    h->unk_48--;
                }
            }
        }

        unsigned int alloc_mask = 0;
        unsigned int target_mask = ((1 << count) - 1u) << from;

        for (;;)
        {
            Unk_hardware_ent_080D6D98 * ent = h->AllocEntry(h->unk_00);

            if (ent == nullptr)
                goto alloc_loop; /* break doesn't match D= */

            h->inl_func_1(h->IndexOf(ent));
            alloc_mask |= 1u << h->IndexOf(ent);

            if ((alloc_mask & target_mask) == target_mask)
                break;
        }

    alloc_loop:
        for (unsigned int i = 0; (alloc_mask & ~target_mask) != 0 && i < 0x10; i++)
        {
            unsigned int bit = 1u << i;

            if (alloc_mask & bit & ~target_mask)
            {
                h->FreeEntry(&h->GetEntry(i));
                h->inl_func_0(i);

                alloc_mask &= ~bit;
            }
        }

        h->unk_50 = from;
        h->unk_51 = count;
    }
}
// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 unk0;
    u8 unk1;
} GenObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08007714 {
    i32 unk0;
    struct GenObj__func_08007714 *unk4;
} GenObj__func_08007714;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct HwObj07EE8 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    u8 unk4;
    u8 _pad5[123];
    u8 unk80;
} HwObj07EE8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct HwObj08020 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    u8 unk4;
    u8 _pad5[0x7B];
    u8 unk80;
} HwObj08020;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08007770 {
    i32 unk0;
    struct GenObj__func_08007770 *unk4;
    u8 _pad8[8];
    i32 unk10;
} GenObj__func_08007770;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08008724 {
    u8 _pad0[8];
    struct GenObj__func_08008724 *unk8;
    u8 _padC[4];
    i32 unk10;
    u8 _pad14[32];
    u16 unk34;
} GenObj__func_08008724;
typedef struct S_08008724Arg {
    i32 unk0;   /* 0x0 */
    i32 unk4;   /* 0x4 */
    u8 *unk8;   /* 0x8 */
    u8 *unkC;   /* 0xC */
} S_08008724Arg;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED gData_hardware_08007564.data.08007564
extern "C" {
// data tak-dirujuk di 0x08007564 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_hardware_08007564[424] __attribute__((section(".text.hardware.08007564"))) = {0x02, 0x48, 0x00, 0x68, 0x48, 0x30, 0x00, 0x88, 0x70, 0x47, 0x00, 0x00, 0x04, 0x04, 0x00, 0x03, 0x10, 0x20, 0x70, 0x47, 0xF0, 0xB5, 0x57, 0x46, 0x4E, 0x46, 0x45, 0x46, 0xE0, 0xB4, 0x88, 0xB0, 0x05, 0x90, 0x0C, 0x1C, 0x14, 0x20, 0xF9, 0xF7, 0x23, 0xF8, 0x07, 0x1C, 0x00, 0x20, 0x38, 0x60, 0x78, 0x60, 0x39, 0x1C, 0x08, 0x31, 0x48, 0x60, 0x26, 0x78, 0x38, 0x1C, 0x31, 0x1C, 0xCF, 0xF0, 0x09, 0xFC, 0x70, 0x1E, 0x00, 0x06, 0x06, 0x0E, 0xFF, 0x2E, 0x00, 0xD1, 0x9F, 0xE0, 0x01, 0xA8, 0x81, 0x46, 0x48, 0x46, 0xFF, 0xF7, 0xB6, 0xFD, 0x48, 0x46, 0xFF, 0xF7, 0xD5, 0xFE, 0x02, 0x90, 0x7C, 0x68, 0xF8, 0x68, 0x84, 0x42, 0x10, 0xD0, 0x00, 0x2C, 0x08, 0xD0, 0x20, 0x1C, 0xFF, 0xF7, 0xA9, 0xFD, 0x4A, 0x46, 0x51, 0x68, 0x20, 0x1C, 0xFF, 0xF7, 0x3E, 0xFF, 0x60, 0x60, 0x78, 0x68, 0x08, 0x30, 0x78, 0x60, 0x01, 0x3E, 0x07, 0x96, 0x73, 0xE0, 0xA0, 0x46, 0x01, 0x20, 0x04, 0x90, 0x39, 0x68, 0x60, 0x1A, 0xC4, 0x10, 0x03, 0x94, 0x04, 0xAA, 0x03, 0xA8, 0x01, 0x2C, 0x00, 0xD2, 0x10, 0x1C, 0x00, 0x68, 0x20, 0x18, 0x00, 0x28, 0x0B, 0xD0, 0xC4, 0x00, 0x20, 0x1C, 0xC8, 0xF0, 0xF1, 0xFD, 0x06, 0x94, 0x00, 0x28, 0x02, 0xD1, 0x20, 0x1C, 0xCC, 0xF0, 0xCF, 0xFA, 0x39, 0x68, 0x02, 0xE0, 0x00, 0x20, 0x00, 0x22, 0x06, 0x92, 0x05, 0x1C, 0xAA, 0x46, 0x0D, 0x1C, 0x54, 0x46, 0x01, 0x3E, 0x07, 0x96, 0x45, 0x45, 0x0D, 0xD0, 0x00, 0x2C, 0x07, 0xD0, 0x20, 0x1C, 0xFF, 0xF7, 0x71, 0xFD, 0x69, 0x68, 0x20, 0x1C, 0xFF, 0xF7, 0x07, 0xFF, 0x60, 0x60, 0x08, 0x35, 0x08, 0x34, 0x45, 0x45, 0xF1, 0xD1, 0x25, 0x1C, 0x04, 0x98, 0x01, 0x28, 0x0C, 0xD1, 0x00, 0x2D, 0x08, 0xD0, 0x28, 0x1C, 0xFF, 0xF7, 0x5F, 0xFD, 0x48, 0x46, 0x41, 0x68, 0x28, 0x1C, 0xFF, 0xF7, 0xF4, 0xFE, 0x68, 0x60, 0x08, 0x35, 0x13, 0xE0, 0x06, 0x1C, 0x2C, 0x1C, 0x00, 0x2E, 0x0E, 0xD0, 0x00, 0x2C, 0x08, 0xD0, 0x20, 0x1C, 0xFF, 0xF7, 0x4E, 0xFD, 0x4A, 0x46, 0x51, 0x68, 0x20, 0x1C, 0xFF, 0xF7, 0xE3, 0xFE, 0x60, 0x60, 0x01, 0x3E, 0x08, 0x34, 0x00, 0x2E, 0xF0, 0xD1, 0x25, 0x1C, 0x7E, 0x68, 0x3C, 0x68, 0xB4, 0x42, 0x0A, 0xD0, 0x61, 0x68, 0x20, 0x1C, 0xFF, 0xF7, 0x97, 0xFE, 0x20, 0x1C, 0x02, 0x21, 0xFF, 0xF7, 0x65, 0xFD, 0x08, 0x34, 0xB4, 0x42, 0xF4, 0xD1, 0x38, 0x68, 0x00, 0x28, 0x01, 0xD0, 0xC8, 0xF0, 0xCB, 0xFD, 0x06, 0x98, 0x50, 0x44, 0x51, 0x46, 0x39, 0x60, 0x7D, 0x60, 0xF8, 0x60, 0x02, 0x99, 0x48, 0x46, 0xFF, 0xF7, 0x81, 0xFE, 0x48, 0x46, 0x02, 0x21, 0xFF, 0xF7, 0x4F, 0xFD, 0x07, 0x9A, 0x10, 0x06, 0x06, 0x0E, 0xFF, 0x2E, 0x00, 0xD0, 0x61, 0xE7, 0x38, 0x68, 0x38, 0x61, 0x05, 0x98, 0x07, 0x60, 0x08, 0xB0, 0x38, 0xBC, 0x98, 0x46, 0xA1, 0x46, 0xAA, 0x46, 0xF0, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00};
}


// DECOMP-MATCHED func_0800770C (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.hardware.0800770C")))
void func_0800770C(i32 *arg0) {
    *arg0 = 0;
}
}
// DECOMP-MATCHED func_08007714 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void * __builtin_delete(void *);
i32 free();                                           /* extern */
i32 func_080073E0(i32 *, i32);                          /* extern */

__attribute__((section(".text.hardware.08007714")))
void func_08007714(i32 *arg0, i32 arg1) {
    GenObj__func_08007714 *temp_r0;
    GenObj__func_08007714 *var_r4;
    GenObj__func_08007714 *temp_r5;

    if (*(GenObj__func_08007714 **)arg0 == 0) {
        goto tail;
    }
    temp_r0 = *(GenObj__func_08007714 **)arg0;
    temp_r5 = (GenObj__func_08007714 *) temp_r0->unk4;
    var_r4 = (GenObj__func_08007714 *) temp_r0->unk0;
    if (var_r4 != temp_r5) {
        do {
            func_080073E0((i32 *) var_r4, (i32) var_r4->unk4);
            ((void (*)(void *, i32)) func_08007184)(var_r4, 2);
            var_r4 += 1;
        } while (var_r4 != temp_r5);
    }
    if (temp_r0->unk0 != 0) {
        free();
    }
    __builtin_delete(temp_r0);
tail:
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}
// DECOMP-MATCHED func_08007770 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800736C(void *);                          /* extern */
i32 func_0800745C(void *, i32);                     /* extern */
i32 func_08007510(void *, i32);                     /* extern */

__attribute__((section(".text.hardware.08007770")))
void *func_08007770(GenObj__func_08007770 *arg0, void **arg1) {
    GenObj__func_08007770 *temp_r0;
    i32 var_r0;
    GenObj__func_08007770 *temp_r1;
    GenObj__func_08007770 *var_r6;
    GenObj__func_08007770 *temp_r5;
    void *temp_sb;
    GenObj__func_08007770 *var_r4;

    temp_r1 = (GenObj__func_08007770 *)(*arg1);
    if (temp_r1 == 0) {
        goto block_BE;
    }
    var_r6 = temp_r1;
    temp_r0 = (GenObj__func_08007770 *)(var_r6->unk4);
    var_r4 = (GenObj__func_08007770 *)(var_r6->unk10);
    if (var_r4 == temp_r0) {
        goto block_A8;
    }
    temp_sb = var_r4;
loop_3:
    temp_r5 = var_r4;
    var_r4 = (GenObj__func_08007770 *)((u8 *)var_r4 + 8);
    if (var_r4 == temp_r0) {
        var_r4 = (GenObj__func_08007770 *) var_r6->unk0;
    }
    if (func_08007510(temp_r5, (i32) temp_r5->unk4) == 1) {
        goto block_B8;
    }
    if (var_r4 != temp_sb) {
        goto loop_3;
    }
block_A8:
    (void) func_08007128((Unk_hardware_H *) arg0);
    var_r0 = func_0800745C(arg0, (i32) var_r4->unk4);
    goto block_CA;
block_B8:
    var_r6->unk10 = (i32)(var_r4);
    var_r4 = temp_r5;
    goto block_A8;
block_BE:
    (void) func_08007128((Unk_hardware_H *) arg0);
    var_r0 = func_0800736C(arg0);
block_CA:
    arg0->unk4 = (GenObj__func_08007770 *) var_r0;
    return arg0;
}
}

// DECOMP-MATCHED func_080077DC (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.hardware.080077DC")))
i32 func_080077DC(i32 *arg0, u32 arg1) {
    i32 temp_r3;
    i32 var_r0;
    i32 var_r1;
    i32 temp_r2;
    i32 var_r1_2;
    i32 var_r4;

    var_r1 = 0;
    temp_r3 = *arg0;
    if ((temp_r3 + 1) == 0) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        goto block_ret20;
    }
    var_r0 = 0;
    if (temp_r3 == 0) {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        goto block_loop_setup;
    }
    *arg0 = temp_r3 | ((1 << (1 << arg1)) - 1);
    return 0;
block_store:
    *arg0 |= var_r1_2;
    return var_r4;
block_loop_setup:
    if (arg1 > 4U) {
        goto block_ret20;
    }
    temp_r2 = 1 << arg1;
    var_r4 = 0;
    var_r1_2 = (1 << temp_r2) - 1;
block_loop:
    if ((temp_r3 & var_r1_2) == 0) {
        goto block_store;
    }
    var_r4 += temp_r2;
    var_r1_2 <<= temp_r2;
    if (var_r1_2 != 0) {
        goto block_loop;
    }
block_ret20:
    return 0x20;
}
}

// DECOMP-MATCHED func_08007844 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.hardware.08007844")))
void func_08007844(i32 *arg0, i32 arg1, u32 arg2) {
    if (arg2 <= 4U) {
        *arg0 &= ~(((1 << (1 << arg2)) - 1) << (0x1F & arg1));
    } else if (arg2 == 5) {
        *arg0 = 0;
    }
}
}

// DECOMP-MATCHED gData_hardware_080079D0.data.080079D0
extern "C" {
// data tak-dirujuk di 0x080079D0 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_hardware_080079D0[24] __attribute__((section(".text.hardware.080079D0"))) = {0x03, 0x49, 0x0A, 0x68, 0x03, 0x49, 0x52, 0x18, 0x11, 0x68, 0x01, 0x31, 0x11, 0x60, 0x70, 0x47, 0x08, 0x04, 0x00, 0x03, 0x24, 0x09, 0x00, 0x00};
}

// DECOMP-MATCHED func_080079E8 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void * __builtin_delete(void *);
extern u32 gUnk_03000408;

__attribute__((section(".text.hardware.080079E8")))
void func_080079E8(void *arg0, i32 arg1) {
    u32 p;
    i32 *cnt;
    i32 v;

    p = gUnk_03000408;
    cnt = (i32 *) (p + 0x924);
    v = *cnt - 1;
    *cnt = v;
    if (v == 0) {
        if (p != 0) {
            __builtin_delete((void *) p);
        }
        gUnk_03000408 = 0;
    }
    if (arg1 & 1) {
        __builtin_delete(arg0);
    }
}
}

// DECOMP-MATCHED func_08007EA8 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D6EEC(i32);                               /* extern */

__attribute__((section(".text.hardware.08007EA8")))
void func_08007EA8(GenObj *arg0) {
    func_080D6EEC((i32)((u8 *)arg0 + 4));
    func_080D6EEC((i32)((u8 *)arg0 + 0x80));
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}

/* ATTEMPT-NOTE opencode: unk0/unk1 u8 (strb); byte-arith (u8*)+N. */
}

// DECOMP-MATCHED func_08007EC8 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void func_080D6F5C(u8 *);                             /* extern */

__attribute__((section(".text.hardware.08007EC8")))
void func_08007EC8(u8 *arg0) {
    func_080D6F5C(arg0 + 0x80);
    func_080D6F5C(arg0 + 4);
    arg0[0] = 0;
    arg0[1] = 1;
}
}
// DECOMP-MATCHED func_08007EE8 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
/* MATCHED worker-07ee: prolog=str r2 dulu (volatile store) + mov r0 via
   empty-asm matching-constraint "0" (tahan PRE-hoist). Blok1: temp pin r0,
   pb=&sp4 (hoist add r3), hoist v (ldr r2 dulu). L36: s0 pin r0, c3 pin r3,
   lim2 (urutan ldr/mov), -= bertahap (subs,subs dulu). */
void func_08007EA8(GenObj *arg0);                             /* extern */
i32 func_080D7118(void *, u32, u32);                  /* extern */

__attribute__((section(".text.hardware.08007EE8")))
void func_08007EE8(HwObj07EE8 *arg0, u32 arg1, u32 arg2) {
    u32 sp0;
    u32 sp4;
    u32 *var_r2;
    u32 *pb;
    u32 v;
    register u32 temp_r0 asm("r0");
    register u32 temp_r2 asm("r2");
    register u32 var_r1 asm("r1");
    register u32 s0 asm("r0");
    register u32 c3 asm("r3");
    u32 lim2;
    u32 s;
    u32 var_r1_2;
    register u32 t asm("r0");

    *(volatile u32 *)&sp0 = arg2;
    if (arg1 > 0x3FFU) {
        return;
    }
    __asm__ ("" : "=r" (t) : "0" (arg2));
    if (t == 0) {
        return;
    }
    if ((arg1 == 0) && (t > 0x3FFU)) {
        func_08007EA8((GenObj *) arg0);
        return;
    }
    if (arg1 <= 0x1FFU) {
        temp_r0 = (0x1FF + 1) - arg1;
        sp4 = temp_r0;
        pb = &sp4;
        s = sp0;
        var_r2 = &sp0;
        if (s > temp_r0) {
            var_r2 = pb;
        }
        v = *var_r2;
        func_080D7118((void *)((u8 *)arg0 + 4), arg1, v);
    }
    s0 = sp0;
    temp_r2 = arg1 + s0;
    c3 = 0x200U;
    if (temp_r2 > c3) {
        lim2 = 0x1FFU;
        var_r1 = 0;
        if (arg1 > lim2) {
            var_r1 = arg1 + 0xFFFFFE00;
        }
        temp_r2 -= c3;
        temp_r2 -= var_r1;
        func_080D7118((void *)((u8 *)arg0 + 0x80), var_r1, temp_r2);
    }
    var_r1_2 = 0;
    if (arg0->unk4 != 0) {
        var_r1_2 = (u32) (0 - arg0->unk80) >> 0x1F;
    }
    arg0->unk0 = var_r1_2;
    arg0->unk1 = 0;
}
}

// DECOMP-MATCHED func_08008020 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void func_08007EA8(GenObj *arg0);                             /* extern */
u32 func_080D7568(u8 *, u32);

__attribute__((section(".text.hardware.08008020")))
i32 func_08008020(HwObj08020 *arg0, u32 arg1)
{
    register u8 b __asm__("r5");
    i32 i;
    u8 *p;
    u32 r;
    i32 flag;
    u32 v;

    if (arg1 <= 9U) {
        i = 0;
        p = (u8 *) arg0 + 4;
        do {
            b = *p;
            if (b == 0) {
                r = func_080D7568(p, arg1);
                flag = 0;
                if (r <= 0x1FFU) {
                    flag = 1;
                }
                if (flag != 0) {
                    arg0->unk1 = b;
                    v = 0;
                    if (arg0->unk4 != 0) {
                        v = (u32) (0 - arg0->unk80) >> 0x1F;
                    }
                    arg0->unk0 = (u8) v;
                    return (i << 9) | r;
                }
            }
            p += 0x7C;
            i += 1;
        } while (i <= 1);
    } else if (arg1 == 0xA) {
        if (arg0->unk1 != 0) {
            func_08007EA8((GenObj *) arg0);
            return 0;
        }
    }
    return 0x400;
}
}

// DECOMP-MATCHED func_0800835C (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.hardware.0800835C")))
void func_0800835C(i32 *arg0) {
    *arg0 = 0;
}
}

// DECOMP-MATCHED func_08008724 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
void *func_08008AE0(void *);                        /* extern */
i32 func_08008AF0(void *);                            /* extern */
i32 func_080098AC(i32 *, i32);                        /* extern */
extern i32 vtable_unk_080E5AF0;

__attribute__((section(".text.hardware.08008724")))
void func_08008724(void **arg0) {
    S_08008724Arg buf;
    GenObj__func_08008724 *temp_r4;
    void *base;
    u8 *p34;
    i32 zero;
    GenObj__func_08008724 *temp_r0;

    temp_r4 = (GenObj__func_08008724 *)(*arg0);
    p34 = (u8 *) temp_r4;
    p34 += 0x34;
    zero = 0;
    *(u16 *) p34 |= 0x80;
    buf.unk0 = zero;
    buf.unk4 = zero;
    buf.unk8 = (u8 *) &vtable_unk_080E5AF0;
    buf.unkC = p34;
    base = (u8 *) temp_r4 + 0x490;
    temp_r0 = (GenObj__func_08008724 *)(func_08008AE0(base));
    ((void (*)(void *, S_08008724Arg *)) temp_r0->unk8->unk10)(temp_r0, &buf);
    func_08008AF0(base);
    func_080098AC((i32 *) &buf, 2);
}
}

