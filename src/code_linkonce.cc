#include "prelude.h"

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[8];
    struct GenObj *unk8;
    u8 _padC[4];
    void *unk10;
    u8 _pad14[100];
    struct GenObj *unk78;
    struct GenObj *unk7C;
    u8 _pad80[400];
    struct GenObj *unk210;
} GenObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct {
    i32 unk0;
    i32 unk4;
} E8;
typedef struct {
    u8 _00[0x210];
    void *unk210;
    i32 unk214;
} Obj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080E586C {
    struct GenObj__func_080E586C *unk0;
    struct GenObj__func_080E586C *unk4;
} GenObj__func_080E586C;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_080E586C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 free();                                           /* extern */

void func_080E586C(GenObj__func_080E586C *arg0) {
    GenObj__func_080E586C *temp_r0;
    GenObj__func_080E586C *temp_r0_2;
    GenObj__func_080E586C *temp_r0_3;
    GenObj__func_080E586C *var_r4;

    temp_r0 = (GenObj__func_080E586C *)(arg0->unk4);
    var_r4 = (GenObj__func_080E586C *)(temp_r0->unk0);
    if (var_r4 != temp_r0) {
        do {
            temp_r0_2 = var_r4;
            var_r4 = (GenObj__func_080E586C *)(var_r4->unk0);
            if (temp_r0_2 != (GenObj__func_080E586C *)0) {
                free();
            }
        } while (var_r4 != arg0->unk4);
    }
    temp_r0_3 = (GenObj__func_080E586C *)(arg0->unk4);
    temp_r0_3->unk0 = temp_r0_3;
    temp_r0_3->unk4 = temp_r0_3;
}
}

// DECOMP-MATCHED func_080E5898 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08007184(void *, i32);                       /* extern */
i32 func_080073E0(void *, i32);                       /* extern */
i32 func_080079E8(void *, i32);                       /* extern */
i32 func_08007C28(void *, i32);                       /* extern */
i32 func_080CADF0(void *, i32);                       /* extern */
extern i32 vtable_unk_080E85AC;

void func_080E5898(Obj *arg0, i32 arg1) {
    u8 *t0;
    u8 *t1;
    u8 *tail;
    E8 *end;
    E8 *end2;
    E8 *e1;
    E8 *e2;
    u8 *p;
    u8 *e;
    i32 c;

    arg0->unk210 = &vtable_unk_080E85AC;
    t0 = (u8 *)arg0 + 0x2EC;
    if (t0 != 0) {
        end = (E8 *)((u8 *)arg0 + 0x32C);
        if (t0 != (u8 *)end) {
            do {
                end--;
                func_080073E0(end, (i32)(end->unk4));
                func_08007184(end, 2);
            } while ((u8 *)arg0 + 0x2EC != (u8 *)end);
        }
    }
    t1 = (u8 *)arg0 + 0x2AC;
    tail = (u8 *)arg0 + 0x218;
    if (t1 != 0) {
        end2 = (E8 *)((u8 *)arg0 + 0x2EC);
        if (t1 != (u8 *)end2) {
            do {
                end2--;
                func_08007C28(end2, (i32)(end2->unk4));
                func_080079E8(end2, 2);
            } while ((u8 *)arg0 + 0x2AC != (u8 *)end2);
        }
    }
    e1 = (E8 *)((u8 *)arg0 + 0x2A4);
    func_080073E0(e1, (i32)(e1->unk4));
    func_08007184(e1, 2);
    e2 = (E8 *)((u8 *)arg0 + 0x29C);
    func_08007C28(e2, (i32)(e2->unk4));
    func_080079E8(e2, 2);
    e = (u8 *)arg0 + 0x214;
    c = *(i32 *)e;
    e = e + (c * 0xC + 4);
    p = tail;
    if (p != e) {
        do {
            p += 0xC;
        } while (p != e);
    }
    func_080CADF0(arg0, arg1);
}
}

// DECOMP-MATCHED func_080E596C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080086BC(void *, i32);                       /* extern */
i32 func_08050D0C(void *, i32);                          /* extern */
extern i32 vtable_unk_080E5A28;

void func_080E596C(GenObj *arg0, i32 arg1) {
    GenObj *temp_r1;
    GenObj *temp_r1_2;

    func_08050D0C((GenObj *)((u8 *)arg0 + 0x80), 2);
    temp_r1 = arg0->unk7C;
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk210->unk8))(temp_r1, 3);
    }
    temp_r1_2 = arg0->unk78;
    if (temp_r1_2 != 0) {
        ((void (*)(void *,...))(temp_r1_2->unk210->unk8))(temp_r1_2, 3);
    }
    arg0->unk10 = &vtable_unk_080E5A28;
    func_080086BC(arg0, arg1);
}
}

// DECOMP-MATCHED func_080E59C0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A4B6C();                                  /* extern */

void func_080E59C0(void) {
    func_080A4B6C();
}
}
