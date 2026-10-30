#include "prelude.h"

typedef struct Vtbl1FAB8 {
    u8 _pad0[0x44];
    i32 (*unk44)(void *, i32);
} Vtbl1FAB8;
typedef struct GenObj {
    Vtbl1FAB8 *unk0;
    i32 *unk4;
    i32 unk8;
    u8 _padC[8];
    struct GenObj *unk14;
    u8 _pad18[0x1064];
    i32 unk107C;
} GenObj;
struct Fb7cV {
    void *f0;
    void *f4;
    i32 f8;
};
struct Fb7cObj {
    Fb7cV *vtab;
};

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Fb7cV Fb7cV;
typedef struct Fb7cObj Fb7cObj;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_0801FAB8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {


i32 func_0801FAB8(GenObj *arg0, i32 arg1) {
    return arg0->unk0->unk44(arg0, arg1);
}
}

// DECOMP-MATCHED func_0801FAC8 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
void *__builtin_new(i32);                             /* extern */
i32 func_0803AEA0(i32, void *, i32, i32, i32);      /* extern */
i32 func_0803B0A8(i32, i32);                          /* extern */

void func_0801FAC8(GenObj *arg0, i32 arg1) {
    i32 temp_r5;
    i32 var_r7;
    void *var_r8;
    u32 var_r3;
    void **var_r1;
    GenObj *temp_r0;
    void **temp_r2;
    i32 res;
    i32 nv;
    i32 *slot;

    var_r8 = 0;
    if (arg1 != 0) {
        if (arg1 == 1) {
            var_r8 = (void *)((u8 *)arg0 + 0xED4);
        }
    } else {
        var_r8 = (void *)((u8 *)arg0 + 0xEA4);
    }
    if (var_r8 != 0) {
        var_r7 = 0x20;
        temp_r5 = *arg0->unk4;
        if (temp_r5 == 2) {
            var_r3 = 0;
            var_r1 = (void **)((u8 *)arg0 + 8);
            temp_r2 = (void **)((u8 *)arg0 + 0x198);
            if (var_r1 != temp_r2) {
                do {
                    temp_r0 = (GenObj *)*var_r1;
                    if ((temp_r0 != 0) && (*(u16 *)((u8 *)temp_r0 + 4) == temp_r5)) {
                        var_r3 += 1;
                    }
                    var_r1 += 1;
                } while (var_r1 != temp_r2);
            }
            if ((u32) (var_r3 + 0xA) > 0xAU) {
                if (var_r3 <= 0x15U) {
                    var_r7 = 0x20 - var_r3;
                } else {
                    var_r7 = 0xA;
                }
            }
        }
        /* res menahan hasil call di r0 melewati hitung-alamat slot;
           salinan nv = res yg memaksa urutan emisi ldr/adds/adds */
        res = func_0803AEA0((i32)__builtin_new(0x46C), arg0, (i32)var_r8, arg1, var_r7);
        slot = &arg0->unk107C;
        nv = res;
        if ((nv != *slot) && (*slot != 0)) {
            func_0803B0A8(*slot, 3);
        }
        *slot = nv;
    }
}
}

// DECOMP-MATCHED func_0801FB7C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

void *__builtin_new(i32);                        /* extern */
i32 func_080A6474(void *, i32);                  /* extern */
/* NOTE: actual callee takes 5 args (u8 arg4); the 5th outgoing stack slot
 * aliases fr.s0 below, so the call is declared with 4 (value already in place). */
Fb7cObj *func_080175B4(void *, i32, i32, i32 *);  /* extern */

void ***func_0801FB7C(void ***arg0, i32 arg1, i32 arg2, u8 arg3) {
    struct FR { u8 s0; Fb7cObj *s4; i32 i8; Fb7cObj **sC; Fb7cObj *s10; } fr;
    Fb7cObj *nn;
    u8 *ps0;
    i32 *p8;
    Fb7cObj *chk2;
    Fb7cObj **qq;
    Fb7cObj **tmp;

    fr.i8 = func_080A6474(__builtin_new(0xBC), arg1);
    nn = (Fb7cObj *)__builtin_new(0x10CC);
    p8 = &fr.i8;
    ps0 = (u8 *)&fr;
    *ps0 = arg3;
    fr.s4 = func_080175B4(nn, arg1, arg2, p8);
    fr.sC = &fr.s4;
    fr.s10 = fr.s4;
    chk2 = fr.s4;
    qq = &fr.s4;
    /* hide &fr.s4 from CSE so the s4-home store and the reload-check survive */
    __asm__ ("" : "+r" (qq));
    /* exact copy/zero/store triple; "memory" keeps the s4 reload-check */
    __asm__ volatile ("add %0, %1, #0\nmovs %1, #0\nstr %1, [%0]" : "=&l" (tmp) : "r" (qq) : "memory");
    *arg0 = (void **)chk2;
    if (fr.s4 != 0) {
        ((void (*)(void *, i32))(fr.s4->vtab->f8))(fr.s4, 3);
    }
    return arg0;
}
}
// ekor tak-bermarker dari game_state.s (verbatim, jangan diubah)
asm(
"    .byte 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0xF4, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0xC4, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x94, 0x0F, 0x00, 0x00\n"
"    .byte 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x64, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0x34, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x04, 0x0F, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xD4, 0x0E, 0x00, 0x00\n"
"    .byte 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xA4, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0x74, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x44, 0x0E, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0x14, 0x0E, 0x00, 0x00\n"
"    .byte 0x01, 0x49, 0x40, 0x18, 0x70, 0x47, 0x00, 0x00, 0xE4, 0x0D, 0x00, 0x00, 0x01, 0x49, 0x40, 0x18\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0xB4, 0x0D, 0x00, 0x00, 0x30, 0xB5, 0x07, 0x49, 0x44, 0x18, 0x00, 0x25\n"
"    .byte 0x20, 0x68, 0x85, 0x42, 0x04, 0xD0, 0x00, 0x28, 0x02, 0xD0, 0x03, 0x21, 0x1B, 0xF0, 0x0C, 0xFA\n"
"    .byte 0x25, 0x60, 0x30, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x7C, 0x10, 0x00, 0x00, 0x40, 0x68, 0x70, 0x47\n"
"    .byte 0x40, 0x68, 0x70, 0x47, 0x02, 0x49, 0x40, 0x18, 0x00, 0x68, 0x08, 0x30, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x38, 0x10, 0x00, 0x00, 0x10, 0xB5, 0xCE, 0x22, 0x52, 0x00, 0x83, 0x18, 0x5C, 0x18, 0x20, 0x78\n"
"    .byte 0x02, 0x1C, 0x10, 0x3A, 0x00, 0x2A, 0x05, 0xDA, 0x18, 0x1C, 0x8C, 0xF0, 0x4F, 0xFE, 0x02, 0x1C\n"
"    .byte 0x10, 0x30, 0x20, 0x70, 0x10, 0x1C, 0x10, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x4A, 0x01, 0x52, 0x18\n"
"    .byte 0x92, 0x00, 0x80, 0x18, 0x02, 0x49, 0x40, 0x18, 0x00, 0x21, 0x01, 0x70, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x3D, 0x02, 0x00, 0x00, 0x08, 0x30, 0x89, 0x00, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00\n"
"    .byte 0x08, 0x30, 0x89, 0x00, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_0801FD0C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {

void func_0801FD0C(i32 arg0, i32 arg1) {
    GenObj **pp;
    GenObj *obj;

    arg0 += 8;
    pp = (GenObj **)(arg0 + arg1 * 4);
    obj = *pp;
    if (obj != 0) {
        ((void (*)(GenObj *, ...))(obj->unk14->unk8))(obj, 3);
        *pp = 0;
    }
}
}
// ekor tak-bermarker dari game_state.s (verbatim, jangan diubah)
asm(
"    .byte 0x01, 0x49, 0x40, 0x18, 0x00, 0x68, 0x70, 0x47, 0x24, 0x10, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_0801FD3C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5A9C(i32);                               /* extern */

i32 func_0801FD3C(GenObj *arg0) {
    return func_080A5A9C((i32)arg0->unk4);
}
}
// ekor tak-bermarker dari game_state.s (verbatim, jangan diubah)
asm(
"    .byte 0x40, 0x68, 0x0E, 0x21, 0x40, 0x5E, 0x70, 0x47\n"
"    .byte 0x40, 0x68, 0x0A, 0x21, 0x40, 0x5E, 0x70, 0x47, 0x40, 0x68, 0x00, 0x68, 0x70, 0x47, 0x00, 0x00\n"
);

// DECOMP-MATCHED func_0801FD60 (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A59BC(i32);                               /* extern */

void func_0801FD60(GenObj *arg0) {
    func_080A59BC((i32)arg0->unk4);
}
}

// DECOMP-MATCHED func_0801FD6C (dari game_state.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080A5960(i32);                               /* extern */

void func_0801FD6C(GenObj *arg0) {
    func_080A5960((i32)arg0->unk4);
}
}
