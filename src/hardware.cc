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
void __builtin_delete(void *);                             /* extern */
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

// DECOMP-MATCHED func_0800835C (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.hardware.0800835C")))
void func_0800835C(i32 *arg0) {
    *arg0 = 0;
}
}

