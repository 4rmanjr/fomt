#include "prelude.h"

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[12];
    i32 unkC;
    i32 unk10;
} GenObj;
typedef struct GenObj__func_080099B0 {
    u8 _pad0[12];
    void *unkC;
    void *unk10;
} GenObj__func_080099B0;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_080099B0 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_080099B0(GenObj__func_080099B0 *arg0, GenObj__func_080099B0 *arg1) {
    void **temp_r2;
    void **temp_r2_2;
    u8 *temp_r0;
    u8 *temp_r1;

    temp_r2 = (void **)arg0->unk10;
    *temp_r2 = arg1->unkC;
    *(void **)arg1->unkC = (void *)temp_r2;
    temp_r2_2 = (void **)arg1->unk10;
    temp_r1 = (u8 *)arg0 + 0x10;
    *temp_r2_2 = (void *)temp_r1;
    arg0->unk10 = (void *)temp_r2_2;
    temp_r0 = (u8 *)arg1 + 0x10;
    arg1->unkC = (void *)temp_r0;
    temp_r0 -= 4;
    arg1->unk10 = (void *)temp_r0;
}
}

// DECOMP-MATCHED func_080099D4 (dari hardware.s; cek manusia sebelum ke src/)
extern "C" {

void func_080099D4(GenObj *arg0, GenObj *arg1) {
    i32 *temp_r1;
    i32 *temp_r2;
    i32 temp_r3;
    i32 temp_r3_2;

    temp_r3 = arg0->unkC;
    arg0->unkC = (i32) arg1->unkC;
    arg1->unkC = temp_r3;
    temp_r2 = (i32 *)arg0->unk10;
    temp_r1 = (i32 *)arg1->unk10;
    temp_r3_2 = *temp_r2;
    *temp_r2 = *temp_r1;
    *temp_r1 = temp_r3_2;
}
}
// ekor tak-bermarker dari hardware.s (verbatim, jangan diubah)
asm(
"    .align 2, 0\n"
".L080099EC:\n"
"    .byte 0x00, 0xB5, 0x00, 0x22\n"
"    .byte 0x01, 0x1C, 0x10, 0x31, 0xC0, 0x68, 0x88, 0x42, 0x00, 0xD1, 0x01, 0x22, 0x10, 0x1C, 0x02, 0xBC\n"
"    .byte 0x08, 0x47, 0x00, 0x00, 0x00, 0x23, 0x03, 0x60, 0x43, 0x60, 0x06, 0x49, 0x81, 0x60, 0x02, 0x1C\n"
"    .byte 0x10, 0x32, 0xC2, 0x60, 0x53, 0x60, 0x04, 0x49, 0x91, 0x60, 0x01, 0x1C, 0x0C, 0x31, 0x01, 0x61\n"
"    .byte 0x42, 0x61, 0x70, 0x47, 0xB4, 0x5B, 0x0E, 0x08, 0xD8, 0x5B, 0x0E, 0x08, 0x01, 0x68, 0x48, 0x42\n"
"    .byte 0x08, 0x43, 0xC0, 0x0F, 0x70, 0x47, 0x00, 0x00, 0x02, 0x49, 0x81, 0x60, 0x00, 0x21, 0x01, 0x60\n"
"    .byte 0x41, 0x60, 0x70, 0x47, 0xE8, 0x5B, 0x0E, 0x08\n"
);
