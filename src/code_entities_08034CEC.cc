#include "prelude.h"
#include <string.h> // memcpy

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj {
    u8 _pad0[20];
    void *unk14;
    i32 unk18;
    u8 unk1C;
} GenObj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080361EC {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_080361EC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036AB4 GenObj__func_08036AB4;
typedef struct GenObj__func_08037EB4 {
    u8 _pad0[16];
    i32 unk10;
    u8 _pad14[4];
    i32 unk18;
} GenObj__func_08037EB4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08039F50 {
    u8 _pad0[8];
    struct GenObj__func_08039F50 *unk8;
    u8 _padC[24];
    struct GenObj__func_08039F50 *unk24;
    u8 _pad28[32];
    i32 unk48;
    void *unk4C;
} GenObj__func_08039F50;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035AE0 {
    u8 _pad0[4];
    u16 unk4;
    u8 _pad6[8];
    i16 unkE;
} GenObj__func_08035AE0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035AFC {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035AFC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035B38 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035B64 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035B64;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035B9C { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035BC8 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035BC8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035D04 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035D04;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035D40 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035D70 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035D70;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035DAC { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035DD8 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035DD8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035E14 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035E40 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035E40;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035E7C { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035EAC {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035EAC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035EE4 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035F10 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035F10;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035F48 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035F74 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035F74;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08035FB0 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08035FE0 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08035FE0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_0803601C { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036048 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036048;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036184 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036184;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_080361C0 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036228 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036258 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036258;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036290 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080362C0 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_080362C0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_080362FC { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036328 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036328;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036364 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036390 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036390;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_080363CC { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080363F8 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_080363F8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036530 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036530;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036564 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036590 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036590;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080366CC {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_080366CC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036704 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036730 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036730;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080367F8 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_080367F8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036834 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036860 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036860;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036898 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080368C4 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_080368C4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036A10 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036A10;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036A4C { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036A78 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036A78;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036B4C {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036B4C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036B80 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036AB4 {
    u8 _pad0[4];
    u16 unk4;
} GenObj__func_08036AB4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036B1C { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036C48 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036C48;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036C80 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036CAC {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036CAC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036CDC { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036D0C {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036D0C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036D3C { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036D68 {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036D68;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_08036D98 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08036E2C {
    u8 _pad0[20];
    void *unk14;
} GenObj__func_08036E2C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08037430 {
    u8 _pad0[60];
    i32 unk3C;
} GenObj__func_08037430;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0803745C {
    u8 _pad0[64];
    u8 unk40;
} GenObj__func_0803745C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct S3E { u8 _pb[2]; u16 unk3E; } S3E;
typedef union U3C { i32 unk3C; S3E s; } U3C;
typedef struct GenObj__func_08037434 {
    u8 _pad0[20];
    struct GenObj__func_08037434 *unk14;
    u8 _pad18[36];
    U3C u;
    u8 unk40;
} GenObj__func_08037434;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_0803753C { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_080376E4 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_0803788C { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_080379D8 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08037E18 {
    u8 _pad0[20];
    void *unk14;
    i32 unk18;
} GenObj__func_08037E18;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08037E48 {
    u8 _pad0[4];
    struct GenObj__func_08037E48 *unk4;
    struct GenObj__func_08037E48 *unk8;
    u8 _padC[4];
    i32 unk10;
    void *unk14;
    i32 unk18;
} GenObj__func_08037E48;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08038098 {
    u8 _pad0[4];
    struct GenObj__func_08038098 *unk4;
    struct GenObj__func_08038098 *unk8;
    u8 _padC[4];
    i32 unk10;
    void *unk14;
    i32 unk18;
} GenObj__func_08038098;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080380EC {
    u8 _pad0[28];
    i32 unk1C;
    i32 unk20;
    u8 unk24;
    u8 unk25;
} GenObj__func_080380EC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08038108 {
    u8 _pad0[37];
    u8 unk25;
} GenObj__func_08038108;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0803836C {
    u8 _pad0[30];
    i16 unk1E;
} GenObj__func_0803836C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080387B8 {
    u8 _pad0[16];
    i32 unk10;
} GenObj__func_080387B8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080387C8 {
    u8 _pad0[16];
    i32 unk10;
} GenObj__func_080387C8;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_08035AE0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities_08034CEC.08035AE0")))
i32 func_08035AE0(GenObj__func_08035AE0 *arg0) {
    i32 var_r2;

    var_r2 = 0;
    if ((arg0->unk4 == 0x1D) && ((i32) arg0->unkE <= 0x37)) {
        var_r2 = 1;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk4 u16 (ldrh), unkE i16 (ldrsh). */
}
// DECOMP-MATCHED func_08035AFC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F280C;
extern i32 vtable_unk_080E7198;

__attribute__((section(".text.code_entities_08034CEC.08035AFC")))
void *func_08035AFC(GenObj__func_08035AFC *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F280C, 0x25F, 0x263, 0x3E2);
    arg0->unk14 = &vtable_unk_080E7198;
    return arg0;
}
}
// DECOMP-MATCHED func_08035B38 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035B38")))
i32 func_08035B38(i32 arg0) {
    i32 t;
    struct Params_func_08035B38 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08035B64 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 ScheduleInfo_Unk_080F1A80;
extern i32 vtable_unk_080E7158;

__attribute__((section(".text.code_entities_08034CEC.08035B64")))
void *func_08035B64(GenObj__func_08035B64 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &ScheduleInfo_Unk_080F1A80, 0x213, 0x217, (0xF8 << 2));
    arg0->unk14 = &vtable_unk_080E7158;
    return arg0;
}
}
// DECOMP-MATCHED func_08035B9C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035B9C")))
i32 func_08035B9C(i32 arg0) {
    i32 t;
    struct Params_func_08035B9C w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08035BC8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F1FC0;
extern i32 vtable_unk_080E7118;

__attribute__((section(".text.code_entities_08034CEC.08035BC8")))
void *func_08035BC8(GenObj__func_08035BC8 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F1FC0, 0x22F, 0x233, 0x3E1);
    arg0->unk14 = &vtable_unk_080E7118;
    return arg0;
}
}

// DECOMP-MATCHED func_08035CB8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08035C04(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035CB8")))
void func_08035CB8(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08035C04(arg0);
    }
}
}

// DECOMP-MATCHED func_08035D04 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F8678;
extern i32 vtable_unk_080E70D8;

__attribute__((section(".text.code_entities_08034CEC.08035D04")))
void *func_08035D04(GenObj__func_08035D04 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F8678, 0x9EF, 0x9F3, 0x406);
    arg0->unk14 = &vtable_unk_080E70D8;
    return arg0;
}
}
// DECOMP-MATCHED func_08035D40 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035D40")))
i32 func_08035D40(i32 arg0) {
    i32 t;
    struct Params_func_08035D40 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 3; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1B);
}
}
// DECOMP-MATCHED func_08035D70 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F81BC;
extern i32 vtable_unk_080E7098;

__attribute__((section(".text.code_entities_08034CEC.08035D70")))
void *func_08035D70(GenObj__func_08035D70 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F81BC, 0x9E7, 0x9EB, 0x405);
    arg0->unk14 = &vtable_unk_080E7098;
    return arg0;
}
}
// DECOMP-MATCHED func_08035DAC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035DAC")))
i32 func_08035DAC(i32 arg0) {
    i32 t;
    struct Params_func_08035DAC w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 1; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08035DD8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F77FC;
extern i32 vtable_unk_080E7058;

__attribute__((section(".text.code_entities_08034CEC.08035DD8")))
void *func_08035DD8(GenObj__func_08035DD8 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F77FC, 0x9A1, 0x9A5, 0x403);
    arg0->unk14 = &vtable_unk_080E7058;
    return arg0;
}
}
// DECOMP-MATCHED func_08035E14 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035E14")))
i32 func_08035E14(i32 arg0) {
    i32 t;
    struct Params_func_08035E14 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08035E40 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F7294;
extern i32 vtable_unk_080E7018;

__attribute__((section(".text.code_entities_08034CEC.08035E40")))
void *func_08035E40(GenObj__func_08035E40 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F7294, 0x989, 0x98D, 0x402);
    arg0->unk14 = &vtable_unk_080E7018;
    return arg0;
}
}
// DECOMP-MATCHED func_08035E7C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035E7C")))
i32 func_08035E7C(i32 arg0) {
    i32 t;
    struct Params_func_08035E7C w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 2; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1B);
}
}
// DECOMP-MATCHED func_08035EAC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F6370;
extern i32 vtable_unk_080E6FD8;

__attribute__((section(".text.code_entities_08034CEC.08035EAC")))
void *func_08035EAC(GenObj__func_08035EAC *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6370, (0x8C << 4), (0x8C << 4) + 4, (0xFF << 2));
    arg0->unk14 = &vtable_unk_080E6FD8;
    return arg0;
}
}
// DECOMP-MATCHED func_08035EE4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035EE4")))
i32 func_08035EE4(i32 arg0) {
    i32 t;
    struct Params_func_08035EE4 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08035F10 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F66C4;
extern i32 vtable_unk_080E6F98;

__attribute__((section(".text.code_entities_08034CEC.08035F10")))
void *func_08035F10(GenObj__func_08035F10 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F66C4, (0x8D << 4), (0x8D << 4) + 4, 0x3FD);
    arg0->unk14 = &vtable_unk_080E6F98;
    return arg0;
}
}
// DECOMP-MATCHED func_08035F48 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035F48")))
i32 func_08035F48(i32 arg0) {
    i32 t;
    struct Params_func_08035F48 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08035F74 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F49C0;
extern i32 vtable_unk_080E6F58;

__attribute__((section(".text.code_entities_08034CEC.08035F74")))
void *func_08035F74(GenObj__func_08035F74 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F49C0, 0x80B, 0x80F, 0x3F5);
    arg0->unk14 = &vtable_unk_080E6F58;
    return arg0;
}
}
// DECOMP-MATCHED func_08035FB0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_entities_08034CEC.08035FB0")))
i32 func_08035FB0(i32 arg0) {
    i32 t;
    struct Params_func_08035FB0 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 2; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1B);
}
}
// DECOMP-MATCHED func_08035FE0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F5540;
extern i32 vtable_unk_080E6F18;

__attribute__((section(".text.code_entities_08034CEC.08035FE0")))
void *func_08035FE0(GenObj__func_08035FE0 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F5540, 0x84B, 0x84F, 0x3F7);
    arg0->unk14 = &vtable_unk_080E6F18;
    return arg0;
}
}
// DECOMP-MATCHED func_0803601C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.0803601C")))
i32 func_0803601C(i32 arg0) {
    i32 t;
    struct Params_func_0803601C w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036048 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F4D74;
extern i32 vtable_unk_080E6ED8;

__attribute__((section(".text.code_entities_08034CEC.08036048")))
void *func_08036048(GenObj__func_08036048 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F4D74, 0x813, 0x817, 0x3F6);
    arg0->unk14 = &vtable_unk_080E6ED8;
    return arg0;
}
}

// DECOMP-MATCHED func_08036138 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08036084(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036138")))
void func_08036138(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036084(arg0);
    }
}
}

// DECOMP-MATCHED func_08036184 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F59CC;
extern i32 vtable_unk_080E6E98;

__attribute__((section(".text.code_entities_08034CEC.08036184")))
void *func_08036184(GenObj__func_08036184 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F59CC, 0x85F, 0x863, 0x3F9);
    arg0->unk14 = &vtable_unk_080E6E98;
    return arg0;
}
}

// DECOMP-MATCHED func_080361C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.080361C0")))
i32 func_080361C0(i32 arg0) {
    i32 t;
    struct Params_func_080361C0 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}

// DECOMP-MATCHED func_080361EC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F6B4C;
extern i32 vtable_unk_080E6E58;

__attribute__((section(".text.code_entities_08034CEC.080361EC")))
void *func_080361EC(GenObj__func_080361EC *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6B4C, 0x8E4, 0x8E8, 0x3FF);
    arg0->unk14 = &vtable_unk_080E6E58;
    return arg0;
}
}
// DECOMP-MATCHED func_08036228 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036228")))
i32 func_08036228(i32 arg0) {
    i32 t;
    struct Params_func_08036228 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 2; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1B);
}
}
// DECOMP-MATCHED func_08036258 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F33B8;
extern i32 vtable_unk_080E6E18;

__attribute__((section(".text.code_entities_08034CEC.08036258")))
void *func_08036258(GenObj__func_08036258 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F33B8, 0x685, 0x685, 0x3EE);
    arg0->unk14 = &vtable_unk_080E6E18;
    return arg0;
}
}
// DECOMP-MATCHED func_08036290 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036290")))
i32 func_08036290(i32 arg0) {
    i32 t;
    struct Params_func_08036290 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 2; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1B);
}
}
// DECOMP-MATCHED func_080362C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F61FC;
extern i32 vtable_unk_080E6DD8;

__attribute__((section(".text.code_entities_08034CEC.080362C0")))
void *func_080362C0(GenObj__func_080362C0 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F61FC, 0x8B8, 0x8BC, 0x3FB);
    arg0->unk14 = &vtable_unk_080E6DD8;
    return arg0;
}
}
// DECOMP-MATCHED func_080362FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.080362FC")))
i32 func_080362FC(i32 arg0) {
    i32 t;
    struct Params_func_080362FC w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 1; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036328 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F3408;
extern i32 vtable_unk_080E6D98;

__attribute__((section(".text.code_entities_08034CEC.08036328")))
void *func_08036328(GenObj__func_08036328 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F3408, 0x689, 0x68D, 0x3EF);
    arg0->unk14 = &vtable_unk_080E6D98;
    return arg0;
}
}
// DECOMP-MATCHED func_08036364 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036364")))
i32 func_08036364(i32 arg0) {
    i32 t;
    struct Params_func_08036364 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036390 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F3FD8;
extern i32 vtable_unk_080E6D58;

__attribute__((section(".text.code_entities_08034CEC.08036390")))
void *func_08036390(GenObj__func_08036390 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F3FD8, 0x6C5, 0x6C9, 0x3F1);
    arg0->unk14 = &vtable_unk_080E6D58;
    return arg0;
}
}
// DECOMP-MATCHED func_080363CC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.080363CC")))
i32 func_080363CC(i32 arg0) {
    i32 t;
    struct Params_func_080363CC w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_080363F8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F35E4;
extern i32 vtable_unk_080E6D18;

__attribute__((section(".text.code_entities_08034CEC.080363F8")))
void *func_080363F8(GenObj__func_080363F8 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F35E4, 0x691, 0x695, (0xFC << 2));
    arg0->unk14 = &vtable_unk_080E6D18;
    return arg0;
}
}

// DECOMP-MATCHED func_080364E4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08036430(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.080364E4")))
void func_080364E4(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036430(arg0);
    }
}
}

// DECOMP-MATCHED func_08036530 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F3010;
extern i32 vtable_unk_080E6CD8;

__attribute__((section(".text.code_entities_08034CEC.08036530")))
void *func_08036530(GenObj__func_08036530 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F3010, (0xC8 << 2), (0xC8 << 2) + 4, 0x3E6);
    arg0->unk14 = &vtable_unk_080E6CD8;
    return arg0;
}
}
// DECOMP-MATCHED func_08036564 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036564")))
i32 func_08036564(i32 arg0) {
    i32 t;
    struct Params_func_08036564 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036590 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F5D94;
extern i32 vtable_unk_080E6C98;

__attribute__((section(".text.code_entities_08034CEC.08036590")))
void *func_08036590(GenObj__func_08036590 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F5D94, 0x884, 0x888, 0x3FA);
    arg0->unk14 = &vtable_unk_080E6C98;
    return arg0;
}
}

// DECOMP-MATCHED func_08036680 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_080365CC(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036680")))
void func_08036680(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_080365CC(arg0);
    }
}
}

// DECOMP-MATCHED func_080366CC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F6DE8;
extern i32 vtable_unk_080E6C58;

__attribute__((section(".text.code_entities_08034CEC.080366CC")))
void *func_080366CC(GenObj__func_080366CC *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6DE8, 0x8EC, 0x8F0, (0x80 << 3));
    arg0->unk14 = &vtable_unk_080E6C58;
    return arg0;
}
}
// DECOMP-MATCHED func_08036704 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036704")))
i32 func_08036704(i32 arg0) {
    i32 t;
    struct Params_func_08036704 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036730 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F2AF8;
extern i32 vtable_unk_080E6C18;

__attribute__((section(".text.code_entities_08034CEC.08036730")))
void *func_08036730(GenObj__func_08036730 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F2AF8, 0x27B, 0x27F, (0xF9 << 2));
    arg0->unk14 = &vtable_unk_080E6C18;
    return arg0;
}
}

// DECOMP-MATCHED func_080367AC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08036768(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.080367AC")))
void func_080367AC(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036768(arg0);
    }
}
}

// DECOMP-MATCHED func_080367F8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F42F0;
extern i32 vtable_unk_080E6BD8;

__attribute__((section(".text.code_entities_08034CEC.080367F8")))
void *func_080367F8(GenObj__func_080367F8 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F42F0, 0x7B2, 0x7B6, 0x3F2);
    arg0->unk14 = &vtable_unk_080E6BD8;
    return arg0;
}
}
// DECOMP-MATCHED func_08036834 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036834")))
i32 func_08036834(i32 arg0) {
    i32 t;
    struct Params_func_08036834 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036860 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F4974;
extern i32 vtable_unk_080E6B98;

__attribute__((section(".text.code_entities_08034CEC.08036860")))
void *func_08036860(GenObj__func_08036860 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F4974, 0x7F2, 0x7F6, (0xFD << 2));
    arg0->unk14 = &vtable_unk_080E6B98;
    return arg0;
}
}
// DECOMP-MATCHED func_08036898 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036898")))
i32 func_08036898(i32 arg0) {
    i32 t;
    struct Params_func_08036898 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_080368C4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F43DC;
extern i32 vtable_unk_080E6B58;

__attribute__((section(".text.code_entities_08034CEC.080368C4")))
void *func_080368C4(GenObj__func_080368C4 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F43DC, 0x7BE, 0x7C2, 0x3F3);
    arg0->unk14 = &vtable_unk_080E6B58;
    return arg0;
}
}

// DECOMP-MATCHED func_080369C4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08034F00();                                  /* extern */
i32 func_08036900(i32);                               /* extern */

__attribute__((section(".text.code_entities_08034CEC.080369C4")))
void func_080369C4(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036900(arg0);
    }
}
}

// DECOMP-MATCHED func_08036A10 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F6FF8;
extern i32 vtable_unk_080E6B18;

__attribute__((section(".text.code_entities_08034CEC.08036A10")))
void *func_08036A10(GenObj__func_08036A10 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F6FF8, 0x902, 0x906, 0x401);
    arg0->unk14 = &vtable_unk_080E6B18;
    return arg0;
}
}
// DECOMP-MATCHED func_08036A4C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036A4C")))
i32 func_08036A4C(i32 arg0) {
    i32 t;
    struct Params_func_08036A4C w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036A78 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F7B40;
extern i32 vtable_unk_080E6AD8;

__attribute__((section(".text.code_entities_08034CEC.08036A78")))
void *func_08036A78(GenObj__func_08036A78 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F7B40, 0x9D3, 0x9D7, 0x404);
    arg0->unk14 = &vtable_unk_080E6AD8;
    return arg0;
}
}
// DECOMP-MATCHED func_08036AB4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08035908(void *, i32);                       /* extern */
i32 func_08035940(void *, i32);                       /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036AB4")))
void func_08036AB4(GenObj__func_08036AB4 *arg0) {
    i32 var_r1;
    i32 var_r5;
    u16 t;
    i32 s;
    var_r1 = 0x9D3;
    var_r5 = 0x9D7;
    t = arg0->unk4;
    s = t;
    if (s != 0x11) {
        if (s <= 0x11) {
            if (s != 7) {

            } else {
                goto block_6;
            }
        } else if ((t == 0x1D) || (t == 0x25)) {
            goto block_6;
        }
    } else {
block_6:
        var_r1 = 0x9DF;
        var_r5 = 0x9E3;
    }
    func_08035908(arg0, var_r1);
    func_08035940(arg0, var_r5);
}
}

// DECOMP-MATCHED func_08036B00 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
// PENYATUAN-MANUAL 2026-11-01 (pola A0030/A0384: arg0 pointer-sbg-i32 diteruskan ke
// 36AB4 (GenObj__36AB4*); ref: adds r0,r5; bl; cast no-op, verify MATCH + HIJAU).
extern "C" {
i32 func_08034F00();                                  /* extern */
void func_08036AB4(GenObj__func_08036AB4 *arg0);                             /* extern */
__attribute__((section(".text.code_entities_08034CEC.08036B00")))
void func_08036B00(i32 arg0, i32 arg1) {
    func_08034F00();
    if (arg1 > 1) {
        func_08036AB4((GenObj__func_08036AB4 *)arg0);
    }
}
}
// DECOMP-MATCHED func_08036B1C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */
void func_08036AB4(GenObj__func_08036AB4 *arg0);                             /* extern */
__attribute__((section(".text.code_entities_08034CEC.08036B1C")))
i32 func_08036B1C(i32 arg0) {
    i32 t;
    struct Params_func_08036B1C w;
    volatile u8 flag;

    func_08036AB4((GenObj__func_08036AB4 *)arg0);
    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 5, 0x1B);
}
}

// DECOMP-MATCHED func_08036B4C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F2DC0;
extern i32 vtable_unk_080E6A98;

__attribute__((section(".text.code_entities_08034CEC.08036B4C")))
void *func_08036B4C(GenObj__func_08036B4C *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F2DC0, (0xC6 << 2), (0xC6 << 2) + 4, 0x3E5);
    arg0->unk14 = &vtable_unk_080E6A98;
    return arg0;
}
}
// DECOMP-MATCHED func_08036B80 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036B80")))
i32 func_08036B80(i32 arg0) {
    i32 t;
    struct Params_func_08036B80 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 2; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1B);
}
}

// DECOMP-MATCHED func_08036C48 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F597C;
extern i32 vtable_unk_080E6A58;

__attribute__((section(".text.code_entities_08034CEC.08036C48")))
void *func_08036C48(GenObj__func_08036C48 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F597C, 0x857, 0x85B, (0xFE << 2));
    arg0->unk14 = &vtable_unk_080E6A58;
    return arg0;
}
}
// DECOMP-MATCHED func_08036C80 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036C80")))
i32 func_08036C80(i32 arg0) {
    i32 t;
    struct Params_func_08036C80 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036CAC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 vtable_unk_080E6A18;

__attribute__((section(".text.code_entities_08034CEC.08036CAC")))
void *func_08036CAC(GenObj__func_08036CAC *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, 0, 0x679, 0x67D, 0);
    arg0->unk14 = &vtable_unk_080E6A18;
    return arg0;
}
}
// DECOMP-MATCHED func_08036CDC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036CDC")))
i32 func_08036CDC(i32 arg0) {
    i32 t;
    struct Params_func_08036CDC w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 2; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1B);
}
}
// DECOMP-MATCHED func_08036D0C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 vtable_unk_080E69D8;

__attribute__((section(".text.code_entities_08034CEC.08036D0C")))
void *func_08036D0C(GenObj__func_08036D0C *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, 0, 0x669, 0x66D, 0);
    arg0->unk14 = &vtable_unk_080E69D8;
    return arg0;
}
}
// DECOMP-MATCHED func_08036D3C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036D3C")))
i32 func_08036D3C(i32 arg0) {
    i32 t;
    struct Params_func_08036D3C w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}
// DECOMP-MATCHED func_08036D68 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 vtable_unk_080E6998;

__attribute__((section(".text.code_entities_08034CEC.08036D68")))
void *func_08036D68(GenObj__func_08036D68 *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, 0, 0x7FE, 0x7FE, 0);
    arg0->unk14 = &vtable_unk_080E6998;
    return arg0;
}
}
// DECOMP-MATCHED func_08036D98 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.08036D98")))
i32 func_08036D98(i32 arg0) {
    i32 t;
    struct Params_func_08036D98 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0x1b);
}
}

// DECOMP-MATCHED gData_code_entities_08034CEC_08036E00.data.08036E00
extern "C" {
// data tak-dirujuk di 0x08036E00 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_entities_08034CEC_08036E00[44] __attribute__((section(".text.code_entities_08034CEC.08036E00"))) = {0x10, 0xB5, 0x84, 0xB0, 0x04, 0x1C, 0x8C, 0x20, 0xC9, 0xF7, 0xE4, 0xFB, 0x01, 0x21, 0x00, 0x91, 0x00, 0x21, 0x01, 0x91, 0x02, 0x91, 0x03, 0xAA, 0x11, 0x70, 0x21, 0x1C, 0x04, 0x22, 0x1B, 0x23, 0xFB, 0xF7, 0x4C, 0xFB, 0x04, 0xB0, 0x10, 0xBC, 0x02, 0xBC, 0x08, 0x47};
}

// DECOMP-MATCHED func_08036E2C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(void *, void *, void *, u32, i32 *, i32, i32, i32); /* extern */
extern i32 gUnk_080F29C0;
extern i32 vtable_unk_080E6918;

__attribute__((section(".text.code_entities_08034CEC.08036E2C")))
void *func_08036E2C(GenObj__func_08036E2C *arg0, void *a, void *b, u32 c) {
    __10ANpcEntityP10GameObjectP3NpcUiPCvUiUiUi(arg0, a, b, c, &gUnk_080F29C0, 0x267, 0x26F, 0x3E3);
    arg0->unk14 = &vtable_unk_080E6918;
    ((u16 *)arg0)[0x24] = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_08037430 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities_08034CEC.08037430")))
u16 func_08037430(GenObj__func_08037430 *arg0) {
    return arg0->unk3C;
}
}
// DECOMP-MATCHED func_08037434 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 vfunc_10__7AEntity(void *);                       /* extern */

__attribute__((section(".text.code_entities_08034CEC.08037434")))
void func_08037434(GenObj__func_08037434 *arg0) {
    if (arg0->unk40 == 0) {
        ((void (*)(void *))(arg0->unk14->u.unk3C))(arg0);
    }
    arg0->u.s.unk3E = 0;
    vfunc_10__7AEntity(arg0);
}

/* ATTEMPT-NOTE opencode: named union U3C/S3E (agbcc29 tolak anon); unk40 u8@0x40, unk3E u16@0x3E, unk3C funcptr@0x3C. */
}

// DECOMP-MATCHED func_0803745C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 vfunc_14__7AEntity();                             /* extern */

__attribute__((section(".text.code_entities_08034CEC.0803745C")))
void func_0803745C(GenObj__func_0803745C *arg0) {
    vfunc_14__7AEntity();
    arg0->unk40 = 0;
}

/* ATTEMPT-NOTE opencode: unk40 u8 (adds+strb). */
}

// DECOMP-MATCHED func_0803753C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.0803753C")))
i32 func_0803753C(i32 arg0) {
    i32 t;
    struct Params_func_0803753C w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 0; w.b = 7; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 2, 9);
}
}

// DECOMP-MATCHED func_08037618 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F1560;

__attribute__((section(".text.code_entities_08034CEC.08037618")))
u16 func_08037618(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F1560;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}
// DECOMP-MATCHED func_08037628 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.08037628")))
i32 func_08037628(i32 arg0, i32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}
}

// DECOMP-MATCHED func_080376E4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_entities_08034CEC.080376E4")))
i32 func_080376E4(i32 arg0) {
    i32 t;
    struct Params_func_080376E4 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 2; w.b = 0xC; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 4, 0xC);
}
}

// DECOMP-MATCHED func_080377C4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F15A4;

__attribute__((section(".text.code_entities_08034CEC.080377C4")))
u16 func_080377C4(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F15A4;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}
// DECOMP-MATCHED func_080377D4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.080377D4")))
i32 func_080377D4(i32 arg0, i32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}
}

// DECOMP-MATCHED func_0803788C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.0803788C")))
i32 func_0803788C(i32 arg0) {
    i32 t;
    struct Params_func_0803788C w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 0; w.b = 8; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 2, 0x1b);
}
}

// DECOMP-MATCHED func_080378EC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F161C;

__attribute__((section(".text.code_entities_08034CEC.080378EC")))
u16 func_080378EC(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F161C;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}
// DECOMP-MATCHED func_080378FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.080378FC")))
i32 func_080378FC(i32 arg0, u32 arg1) {
    switch (arg1) {
    default:
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
        return 0;
    case 1:
        return 0x8000;
    case 2:
    case 11:
        return 0x10000;
    }
}
}

// DECOMP-MATCHED func_080379D8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_entities_08034CEC.080379D8")))
i32 func_080379D8(i32 arg0) {
    i32 t;
    struct Params_func_080379D8 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 0; w.b = 8; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 2, 0x1b);
}
}

// DECOMP-MATCHED func_08037A38 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F1644;

__attribute__((section(".text.code_entities_08034CEC.08037A38")))
u16 func_08037A38(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F1644;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}
// DECOMP-MATCHED func_08037A48 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.08037A48")))
i32 func_08037A48(i32 arg0, i32 arg1) {
    if (arg1 == 1) {
        return 0x8000;
    }
    return 0;
}
}

// DECOMP-MATCHED gData_code_entities_08034CEC_08037CDC.data.08037CDC
extern "C" {
// data tak-dirujuk di 0x08037CDC (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_entities_08034CEC_08037CDC[20] __attribute__((section(".text.code_entities_08034CEC.08037CDC"))) = {0x0A, 0x23, 0xCA, 0x5E, 0x0E, 0x23, 0xC9, 0x5E, 0x02, 0x80, 0x01, 0x31, 0x41, 0x80, 0x82, 0x80, 0xC1, 0x80, 0x70, 0x47};
}

// DECOMP-MATCHED func_08037CF0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_08037D08(i32, i32);                          /* extern */

__attribute__((section(".text.code_entities_08034CEC.08037CF0")))
i32 func_08037CF0(i32 arg0) {
    return func_08037D08((i32)(__builtin_new(0x54)), arg0);
}
}

// DECOMP-MATCHED func_08037E18 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __7AEntityP10GameObjectRC8Location(void *, i32, i32 *); /* extern */
i32 func_0800FFE0(i32 *, i32);                          /* extern */
extern i32 vtable_unk_080E73FC;

__attribute__((section(".text.code_entities_08034CEC.08037E18")))
void *func_08037E18(GenObj__func_08037E18 *arg0, i32 arg1, i32 arg2) {
i32 sp0[2];

    func_0800FFE0((i32 *)(sp0), arg2);
    __7AEntityP10GameObjectRC8Location(arg0, arg1, (i32 *)(sp0));
    arg0->unk14 = &vtable_unk_080E73FC;
    arg0->unk18 = arg2;
    return arg0;
}
}
// DECOMP-MATCHED func_08037E48 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetLocation__C7AEntity(i32 *, void *);              /* extern */
void __builtin_delete(void *);                             /* extern */
i32 func_08010014(i32, i32 *);                          /* extern */
extern i32 __vt_7AEntity;
extern i32 vtable_unk_080E73FC;

__attribute__((section(".text.code_entities_08034CEC.08037E48")))
void func_08037E48(GenObj__func_08037E48 *arg0, i32 arg1) {
u8 sp0[8];
    i32 temp_r4;
    GenObj__func_08037E48 *temp_r1;

    arg0->unk14 = &vtable_unk_080E73FC;
    temp_r4 = arg0->unk18;
    GetLocation__C7AEntity((i32 *)(&sp0), arg0);
    func_08010014(temp_r4, (i32 *)(&sp0));
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = (GenObj__func_08037E48 *)(arg0->unk10);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}

// DECOMP-MATCHED func_08037E9C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_08037EF0(i32, i32);                          /* extern */

__attribute__((section(".text.code_entities_08034CEC.08037E9C")))
i32 func_08037E9C(i32 arg0) {
    return func_08037EF0((i32)(__builtin_new(0x58)), arg0);
}
}

// DECOMP-MATCHED func_08037EB4 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800FFF4(i32, u8);                           /* extern */
i32 func_08037F74();                                  /* extern */

__attribute__((section(".text.code_entities_08034CEC.08037EB4")))
void func_08037EB4(GenObj__func_08037EB4 *arg0, u8 *arg1) {
    func_0800FFF4((i32)(arg0->unk18), *arg1);
    if (arg0->unk10 != 0) {
        func_08037F74();
    }
}
}

// DECOMP-MATCHED func_08038098 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetLocation__C7AEntity(i32 *, void *);              /* extern */
void __builtin_delete(void *);                             /* extern */
extern i32 __vt_7AEntity;
extern i32 vtable_unk_080E73B4;

__attribute__((section(".text.code_entities_08034CEC.08038098")))
void func_08038098(GenObj__func_08038098 *arg0, i32 arg1) {
u8 sp0[8];
    i32 temp_r4;
    GenObj__func_08038098 *temp_r1;

    arg0->unk14 = &vtable_unk_080E73B4;
    temp_r4 = arg0->unk18;
    GetLocation__C7AEntity((i32 *)(&sp0), arg0);
    memcpy((void *)(temp_r4), (const void *)(&sp0), 6);
    arg0->unk14 = &__vt_7AEntity;
    temp_r1 = (GenObj__func_08038098 *)(arg0->unk10);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}
// DECOMP-MATCHED func_080380EC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities_08034CEC.080380EC")))
void func_080380EC(GenObj__func_080380EC *arg0, i8 arg1) {
    arg0->unk24 = arg1;
    arg0->unk1C = 0xA8 << 0xD;
    arg0->unk20 = 0xC0 << 0xA;
    arg0->unk25 = 1;
}

/* ATTEMPT-NOTE opencode: unk24/unk25 u8 (strb); konstanta via shift (movs+lsl) bukan imm. */
}
// DECOMP-MATCHED func_08038108 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities_08034CEC.08038108")))
u8 func_08038108(GenObj__func_08038108 *arg0) {
    return arg0->unk25;
}

/* ATTEMPT-NOTE opencode: member+return u8 (ldrb, tanpa lsls/lsrs). */
}

// DECOMP-MATCHED func_08038320 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08038110(i32);                               /* extern */
i32 vfunc_2C__7AEntityUi();                           /* extern */

__attribute__((section(".text.code_entities_08034CEC.08038320")))
void func_08038320(i32 arg0) {
    vfunc_2C__7AEntityUi();
    func_08038110(arg0);
}
}
// DECOMP-MATCHED func_08038334 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_0803853C(i32, i32);                          /* extern */

__attribute__((section(".text.code_entities_08034CEC.08038334")))
i32 func_08038334(i32 arg0) {
    return func_0803853C((i32)(__builtin_new(0x48)), arg0);
}
}

// DECOMP-MATCHED func_0803836C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_entities_08034CEC.0803836C")))
i16 func_0803836C(GenObj__func_0803836C *arg0) {
    return arg0->unk1E;
}
}

// DECOMP-MATCHED func_080387A0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_08038820(i32, i32);                          /* extern */

__attribute__((section(".text.code_entities_08034CEC.080387A0")))
i32 func_080387A0(i32 arg0) {
    return func_08038820((i32)(__builtin_new(0x18)), arg0);
}
}
// DECOMP-MATCHED func_080387B8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08038DF0();                                  /* extern */

__attribute__((section(".text.code_entities_08034CEC.080387B8")))
void func_080387B8(GenObj__func_080387B8 *arg0) {
    if (arg0->unk10 != 0) {
        func_08038DF0();
    }
}
}
// DECOMP-MATCHED func_080387C8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08038E90();                                  /* extern */

__attribute__((section(".text.code_entities_08034CEC.080387C8")))
void func_080387C8(GenObj__func_080387C8 *arg0) {
    if (arg0->unk10 != 0) {
        func_08038E90();
    }
}
}


// DECOMP-MATCHED func_080391C0 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.080391C0")))
i32 func_080391C0(i32 arg0, i32 arg1) {
    if (((arg1 <= 0x38) && (arg0 > 0x143) && (arg0 <= 0x164)) || ((arg1 > 0x27F) && (arg0 > 0xF7) && (arg0 <= 0x118))) {
        return 1;
    }
    return 0;
}
}
// DECOMP-MATCHED func_080391FC (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.080391FC")))
void func_080391FC(void) {

}
}
// DECOMP-MATCHED func_08039200 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.08039200")))
i32 func_08039200(void) {
    return 0;
}
}

// DECOMP-MATCHED func_0803930C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.0803930C")))
i32 func_0803930C(void) {
    return 1;
}
}

// DECOMP-MATCHED func_08039A5C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_entities_08034CEC.08039A5C")))
void func_08039A5C(void) {

}
}

// DECOMP-MATCHED func_08039D4C (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F16AE;

__attribute__((section(".text.code_entities_08034CEC.08039D4C")))
u16 func_08039D4C(i32 arg0, i32 arg1) {
    u8 *temp_r0 = (u8 *) &gUnk_080F16AE;

    return *(u16 *) (temp_r0 + arg1 * 2);
}
}

// DECOMP-MATCHED func_08039F50 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
void __builtin_delete(void *);                             /* extern */
i32 func_080A47B4(void *, i32);                       /* extern */
extern i32 vtable_unk_080E76BC;

__attribute__((section(".text.code_entities_08034CEC.08039F50")))
void func_08039F50(GenObj__func_08039F50 *arg0, i32 arg1) {
    GenObj__func_08039F50 *temp_r1;

    arg0->unk4C = &vtable_unk_080E76BC;
    temp_r1 = (GenObj__func_08039F50 *)(arg0->unk48);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk24->unk8))(temp_r1, 3);
    }
    func_080A47B4((GenObj__func_08039F50 *)((u8 *)arg0 + 8), 2);
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}

// DECOMP-MATCHED func_0803A320 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F16D2;

__attribute__((section(".text.code_entities_08034CEC.0803A320")))
i16 func_0803A320(i32 arg0, i32 arg1) {
    i8 *temp_r0 = (i8 *) &gUnk_080F16D2;

    return *(i16 *) (temp_r0 + (((i32) (arg1 << 0x10)) >> 0xF));
}
}
// DECOMP-MATCHED func_0803A334 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F16D2;

__attribute__((section(".text.code_entities_08034CEC.0803A334")))
i16 func_0803A334(i32 dummy, i16 arg1) {
    u8 *base = (u8 *)&gUnk_080F16D2;
    i32 t = (arg1 + 0x40) & 0xFF;

    return *(i16 *)(base + (t * 2));
}

/* ATTEMPT-NOTE opencode: arg di r1 (i32 dummy + i16 arg1); & 0xFF imm (movs belakangan, bukan var di awal); base (u8*) di var; ldrsh [r1,r2]. */
}

// DECOMP-MATCHED func_0803A798 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
extern "C" {
i32 __7AEntityP10GameObjectRC8Location(void *, i32, i32 *); /* extern */
void *__builtin_new(i32);                           /* extern */
extern i32 vtable_unk_080E7568;

void *func_0803A798(i32 arg0, i32 arg1) {
    u8 buf[8];
    GenObj *r5;
    u8 *p;
    i32 m;
    register u16 t0 asm("r2");

    r5 = (GenObj *)__builtin_new(0x20);
    p = buf;
    t0 = *(u16 *)p;
    m = 0xFFFFFC00;
    *(u16 *)p = (u16)(m & t0);
    p[1] = (u8)(3 & p[1]);
    *(u16 *)&p[2] = (u16)(m & *(u16 *)&p[2]);
    p[3] = (u8)(3 & p[3]);
    *(u16 *)&p[4] = (u16)(m & *(u16 *)&p[4]);
    __7AEntityP10GameObjectRC8Location(r5, arg0, (i32 *)buf);
    r5->unk14 = &vtable_unk_080E7568;
    r5->unk18 = arg1;
    r5->unk1C = 1;
    return r5;
}
}
// ekor tak-bermarker dari code_entities_08034CEC.s (verbatim, jangan diubah)
asm(
".L0803A804:\n"
"    .byte 0x30, 0x30, 0x10, 0x21, 0x40, 0x5E, 0x70, 0x47, 0x30, 0x30, 0x01, 0x82\n"
"    .byte 0x70, 0x47, 0x00, 0x00, 0x00, 0xB5, 0x30, 0x30, 0x24, 0xF0, 0x3C, 0xF8, 0x02, 0xBC, 0x08, 0x47\n"
"    .byte 0x00, 0xB5, 0x01, 0x1C, 0x30, 0x31, 0x00, 0x22, 0xC8, 0x89, 0x00, 0x28, 0x04, 0xD0, 0x10, 0x20\n"
"    .byte 0x09, 0x5E, 0x48, 0x42, 0x08, 0x43, 0xC2, 0x0F, 0x10, 0x1C, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00\n"
"    .byte 0x10, 0xB5, 0x04, 0x1C, 0x21, 0x1C, 0x47, 0x31, 0x08, 0x78, 0x00, 0x28, 0x0A, 0xD1, 0x20, 0x1C\n"
"    .byte 0x30, 0x30, 0x24, 0xF0, 0x4D, 0xF8, 0x80, 0x07, 0x00, 0x28, 0x05, 0xDA, 0x21, 0x1C, 0x44, 0x31\n"
"    .byte 0x01, 0x20, 0x00, 0xE0, 0x00, 0x20, 0x08, 0x70, 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00\n"
"    .byte 0x30, 0xB5, 0x04, 0x1C, 0x0D, 0x1C, 0xA0, 0x88, 0xA8, 0x42, 0x0D, 0xD0, 0x20, 0x1C, 0x30, 0x30\n"
"    .byte 0x23, 0xF0, 0xEE, 0xFF, 0x20, 0x1C, 0x44, 0x30, 0x00, 0x22, 0x01, 0x21, 0x01, 0x70, 0x02, 0x30\n"
"    .byte 0x02, 0x70, 0x01, 0x30, 0x01, 0x70, 0xA5, 0x80, 0x30, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00\n"
"    .byte 0x00, 0x68, 0x70, 0x47\n"
);
