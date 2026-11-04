#include "prelude.h"
#include <string.h> // memcpy

typedef struct GenObj {
    u8 _pad0[4];
    struct GenObj *unk4;
    i32 unk8;
    u8 _padC[240];
    i32 unkFC;
    u8 _pad100[32];
    i32 unk120;
    i32 unk124;
    i32 unk128;
    i32 unk12C;
} GenObj;

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809B018 {
    u8 _pad0[8];
    u32 unk8;
} GenObj__func_0809B018;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809424C {
    void *unk0;
    i32 unk4;
    i32 unk8;
    u8 _padC[1];
    u8 unkD;
} GenObj__func_0809424C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08045584 {
    u8 _pad0[848];
    i32 unk350;
} GenObj__func_08045584;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804E17C {
    u8 _pad0[848];
    i32 unk350;
} GenObj__func_0804E17C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804E1D4 {
    u8 _pad0[848];
    i32 unk350;
} GenObj__func_0804E1D4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804E22C {
    u8 _pad0[848];
    i32 unk350;
} GenObj__func_0804E22C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804E2C0 {
    u8 _pad0[848];
    i32 unk350;
} GenObj__func_0804E2C0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804E354 {
    u8 _pad0[848];
    i32 unk350;
} GenObj__func_0804E354;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804E3D8 {
    u8 _pad0[848];
    i32 unk350;
} GenObj__func_0804E3D8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804EA80 {
    u8 _pad0[8];
    void *unk8;
} GenObj__func_0804EA80;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804EDA0 {
    u8 _pad0[8];
    void *unk8;
} GenObj__func_0804EDA0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804EE1C {
    u8 _pad0[8];
    void *unk8;
} GenObj__func_0804EE1C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804EE88 {
    u8 _pad0[8];
    void *unk8;
} GenObj__func_0804EE88;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804EEBC {
    u8 _pad0[12];
    i32 unkC;
    i32 unk10;
    u16 unk14;
    u16 unk16;
    i32 unk18;
} GenObj__func_0804EEBC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804EEDC {
    u8 _pad0[12];
    i32 unkC;
    i32 unk10;
    u16 unk14;
    u16 unk16;
    i32 unk18;
} GenObj__func_0804EEDC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804EEFC {
    u8 _pad0[12];
    i32 unkC;
    u16 unk10;
    u16 unk12;
    i32 unk14;
    i32 unk18;
    i32 unk1C;
} GenObj__func_0804EEFC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804F15C {
    u8 _pad0[25];
    u8 unk19;
} GenObj__func_0804F15C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804F178 {
    u8 _pad0[4];
    u8 unk4;
    u8 _pad5[3];
    u8 unk8;
} GenObj__func_0804F178;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080503E4 {
    u8 _pad0[8];
    i32 unk8;
    u8 unkC;
} GenObj__func_080503E4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080503FC {
    u8 _pad0[8];
    i32 unk8;
} GenObj__func_080503FC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08050410 {
    u8 _pad0[8];
    i32 unk8;
} GenObj__func_08050410;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08050B3C {
    u8 _pad0[476];
    u8 unk1DC;
} GenObj__func_08050B3C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08050C18 {
    u8 _pad0[496];
    u8 unk1F0;
} GenObj__func_08050C18;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08050DD8 {
    u8 _pad0[13];
    u8 unkD;
} GenObj__func_08050DD8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08050DE4 {
    u8 _pad0[13];
    u8 unkD;
} GenObj__func_08050DE4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08050DF0 {
    u8 _pad0[8];
    i32 unk8;
    u8 _padC[332];
    i32 unk158;
} GenObj__func_08050DF0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0805218C {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0805218C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08057F4C {
    u8 _pad0[44];
    u8 unk2C;
} GenObj__func_08057F4C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0805E624 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0805E624;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0805FCD0 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0805FCD0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08069E14 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08069E14;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08069E98 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08069E98;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0806D918 {
    void *unk0;
    struct GenObj__func_0806D918 *unk4;
    struct GenObj__func_0806D918 *unk8;
} GenObj__func_0806D918;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0806E9D8 {
    void *unk0;
    i32 unk4;
} GenObj__func_0806E9D8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0806EA00 {
    void *unk0;
    struct GenObj__func_0806EA00 *unk4;
    struct GenObj__func_0806EA00 *unk8;
} GenObj__func_0806EA00;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080709D8 {
    void *unk0;
    struct GenObj__func_080709D8 *unk4;
    struct GenObj__func_080709D8 *unk8;
} GenObj__func_080709D8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08070C88 {
    u8 _pad0[1460];
    void *unk5B4;
} GenObj__func_08070C88;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08075450 {
    u8 _pad0[1420];
    i32 unk58C;
} GenObj__func_08075450;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080755EC {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_080755EC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807565C {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0807565C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080756B0 {
    i32 unk0;
    void *unk4;
} GenObj__func_080756B0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08075DB8 {
    u8 _pad0[6];
    u16 unk6;
    u16 _pad8;
    i16 unkA;
} GenObj__func_08075DB8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08075DD4 {
    u8 _pad0[24];
    i32 unk18;
    i32 unk1C;
} GenObj__func_08075DD4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08076B64 {
    u8 _pad0[8];
    struct GenObj__func_08076B64 *unk8;
    u8 _padC[1448];
    struct GenObj__func_08076B64 *unk5B4;
} GenObj__func_08076B64;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080782C4 {
    u8 _pad0[16];
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
} GenObj__func_080782C4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807D070 {
    void *unk0;
    i32 unk4;
    i32 unk8;
    i32 unkC;
    i32 unk10;
} GenObj__func_0807D070;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807DD38 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0807DD38;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807DDA8 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0807DDA8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807E4B8 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0807E4B8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807E4D4 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    u8 unk6A4;
    u8 _pad6A5[99];
    i32 unk708;
    u8 unk70C;
} GenObj__func_0807E4D4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807E508 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0807E508;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807EE84 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0807EE84;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807EEA0 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    i32 unk6A4;
    u8 unk6A8;
    u8 _pad6A9[3];
    i32 unk6AC;
} GenObj__func_0807EEA0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807EED4 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1700];
    i32 unk6AC;
} GenObj__func_0807EED4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807EF00 {
    u8 _pad0[1708];
    i32 unk6AC;
} GenObj__func_0807EF00;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807F63C {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    u8 unk6A4;
    u8 _pad6A5[99];
    i32 unk708;
    u8 unk70C;
} GenObj__func_0807F63C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807F670 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0807F670;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080804F8 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    i32 unk6A4;
    u8 unk6A8;
    u8 _pad6A9[3];
    u8 unk6AC;
} GenObj__func_080804F8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808052C {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0808052C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08080E04 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08080E04;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08080E20 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    i32 unk6A4;
    u8 unk6A8;
    u8 _pad6A9[3];
    u8 unk6AC;
} GenObj__func_08080E20;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08080E54 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_08080E54;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08081AB0 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08081AB0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08081ACC {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    i32 unk6A4;
    u8 unk6A8;
    u8 _pad6A9[3];
    i32 unk6AC;
} GenObj__func_08081ACC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08081B00 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1700];
    i32 unk6AC;
} GenObj__func_08081B00;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08081B2C {
    u8 _pad0[1708];
    i32 unk6AC;
} GenObj__func_08081B2C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08082250 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_08082250;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08083BD4 {
    u8 _pad0[4];
    void *unk4;
    u8 _pad8[1692];
    u8 unk6A4;
    u8 _pad6A5[99];
    i32 unk708;
    u8 unk70C;
    u8 _pad70D[3];
    i32 unk710;
    u8 _pad714[23260];
    u8 unk61F0;
    u8 _pad61F1[3];
} GenObj__func_08083BD4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08083C50 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_08083C50;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08085568 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08085568;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808562C {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0808562C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08085EEC {
    u8 _pad0[17368];
    i32 unk43D8;
} GenObj__func_08085EEC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08088168 {
    void *unk0;
    i32 unk4;
    i32 unk8;
    i32 unkC;
    i32 unk10;
} GenObj__func_08088168;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl {
    void *unk0;
    void *unk4;
    void (*unk8)(void *, i32);
} Vtbl;
typedef struct Inner {
    i32 unk0;
    Vtbl *unk4;
} Inner;
typedef struct GenObj__func_080881AC {
    void *unk0;
    Inner *unk4;
    struct GenObj__func_080881AC *unk8;
} GenObj__func_080881AC;
typedef struct Obj {
    Vtbl *unk0;
    struct Obj *unk4;
} Obj;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08088304 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_08088304;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080884F4 {
    u8 _pad0[124];
    i32 unk7C;
    u8 _pad80[132];
    i32 unk104;
} GenObj__func_080884F4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808AB38 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0808AB38;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808ABA8 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0808ABA8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808ABC4 {
    u8 _pad0[4];
    void *unk4;
    i32 unk8;
    u8 _padC[140];
    u8 unk98;
    u8 _pad99[99];
    i32 unkFC;
    i32 unk100;
    i32 unk104;
    i32 unk108;
} GenObj__func_0808ABC4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808AC14 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0808AC14;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808C5DC {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0808C5DC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808C650 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0808C650;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808C8BC {
    u8 _pad0[148];
    i32 unk94;
} GenObj__func_0808C8BC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808C8D8 {
    u8 _pad0[148];
    i32 unk94;
} GenObj__func_0808C8D8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808ECD8 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0808ECD8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808ED48 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0808ED48;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808ED64 {
    u8 _pad0[4];
    void *unk4;
    i32 unk8;
    u8 _padC[140];
    u8 unk98;
    u8 _pad99[99];
    i32 unkFC;
    i32 unk100;
    i32 unk104;
    i32 unk108;
} GenObj__func_0808ED64;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808EDB8 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_0808EDB8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808EF30 {
    u8 _pad0[148];
    i32 unk94;
} GenObj__func_0808EF30;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808EF4C {
    u8 _pad0[148];
    i32 unk94;
} GenObj__func_0808EF4C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08090E84 {
    void *unk0;
    Inner *unk4;
    struct GenObj__func_08090E84 *unk8;
} GenObj__func_08090E84;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08090EC4 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08090EC4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08092570 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08092570;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080925C4 {
    void *unk0;
    Inner *unk4;
    struct GenObj__func_080925C4 *unk8;
} GenObj__func_080925C4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08092690 {
    u8 _pad0[4];
    void *unk4;
} GenObj__func_08092690;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080931B0 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_080931B0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08093220 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08093220;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08093A58 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08093A58;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08093AD4 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08093AD4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl20 {
    u8 _pad0[0x20];
    void (*unk20)(void *, i32, i32);
} Vtbl20;
typedef struct GenObj__func_08093DEC {
    Vtbl20 *unk0;
    u8 _pad4[4];
    void *unk8;
    u8 _padC;
    u8 unkD;
    u8 _padE[6];
    i32 unk14;
    i32 unk18;
    i32 unk1C;
    i32 unk20;
    i32 unk24;
} GenObj__func_08093DEC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08093F20 {
    u8 _pad0[13];
    u8 unkD;
} GenObj__func_08093F20;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08093F24 {
    u8 _pad0[16];
    i32 unk10;
} GenObj__func_08093F24;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080940C0 {
    u8 _pad0[8];
    void *unk8;
    u8 unkC;
} GenObj__func_080940C0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl38 {
    u8 _pad0[0x38];
    void (*unk38)(void *, i32, i32);
} Vtbl38;
typedef struct GenObj__func_080940E4 {
    Vtbl38 *unk0;
    u8 _pad4[8];
    u8 unkC;
} GenObj__func_080940E4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080941A8 {
    struct GenObj__func_080941A8 *unk0;
    u8 _pad4[20];
    i32 unk18;
    i32 unk1C;
    i32 unk20;
    i32 unk24;
    u8 _pad28[12];
    i32 unk34;
} GenObj__func_080941A8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094288 {
    Vtbl20 *unk0;
    u8 _pad4[4];
    void *unk8;
    u8 _padC;
    u8 unkD;
    u8 _padE[6];
    i32 unk14;
    u8 _pad18[8];
    i32 unk20;
    i32 unk24;
    i32 unk28;
    i32 unk2C;
} GenObj__func_08094288;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080943BC {
    u8 _pad0[13];
    u8 unkD;
} GenObj__func_080943BC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080943C0 {
    u8 _pad0[16];
    i32 unk10;
} GenObj__func_080943C0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809444C {
    struct GenObj__func_0809444C *unk0;
    u8 _pad4[16];
    i32 unk14;
    u8 _pad18[28];
    i32 unk34;
} GenObj__func_0809444C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094560 {
    u8 _pad0[8];
    void *unk8;
    u8 unkC;
} GenObj__func_08094560;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094584 {
    Vtbl38 *unk0;
    u8 _pad4[8];
    u8 unkC;
} GenObj__func_08094584;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094648 {
    struct GenObj__func_08094648 *unk0;
    u8 _pad4[28];
    i32 unk20;
    i32 unk24;
    i32 unk28;
    i32 unk2C;
    u8 _pad30[4];
    i32 unk34;
} GenObj__func_08094648;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094814 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08094814;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094900 {
    u8 _pad0[4];
    i32 unk4;
} GenObj__func_08094900;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094908 {
    u8 _pad0[8];
    i32 unk8;
} GenObj__func_08094908;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809496C {
    u8 _pad0[8];
    i32 unk8;
} GenObj__func_0809496C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08050C18 GenObj__func_08050C18;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807E4D4 GenObj__func_0807E4D4;
typedef struct GenObj__func_0807EE14 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0807EE14;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807EEA0 GenObj__func_0807EEA0;
typedef struct GenObj__func_0807F580 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0807F580;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807F63C GenObj__func_0807F63C;
typedef struct GenObj__func_0808045C {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0808045C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080804F8 GenObj__func_080804F8;
typedef struct GenObj__func_08080D94 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08080D94;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08080E20 GenObj__func_08080E20;
typedef struct GenObj__func_08081A40 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08081A40;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808ED64 GenObj__func_0808ED64;
typedef struct GenObj__func_08090E54 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08090E54;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080884F4 GenObj__func_080884F4;
typedef struct GenObj__func_08088574 {
    u8 _pad0[148];
    i32 unk94;
} GenObj__func_08088574;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08088590 {
    u8 _pad0[148];
    i32 unk94;
} GenObj__func_08088590;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080854F4 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_080854F4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808C56C {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0808C56C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08082114 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08082114;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804EE9C {
    u8 _pad0[12];
    u32 unkC;
    i16 *unk10;
    u16 unk14;
    u16 unk16;
    u32 unk18;
} GenObj__func_0804EE9C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0804F160 {
    u8 _pad0[4];
    u8 unk4;
} GenObj__func_0804F160;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Inner50D34 { u8 _pad0[8]; i32 unk8; } Inner50D34;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08082184 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08082184;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Inner6EA6C { u8 _pad0[1096]; u8 unk448; } Inner6EA6C;
typedef struct GenObj__func_0806EA6C {
    u8 _pad0[4];
    Inner6EA6C *unk4;
} GenObj__func_0806EA6C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Inner76BE0 { u8 _pad0[1424]; i16 unk590; } Inner76BE0;
typedef struct GenObj__func_08076BE0 {
    u8 _pad0[8];
    Inner76BE0 *unk8;
} GenObj__func_08076BE0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094910 {
    u8 _pad0[20];
    i32 unk14;
} GenObj__func_08094910;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Inner93AC8 { u8 _pad0[452]; i32 unk1C4; } Inner93AC8;
typedef struct GenObj__func_08093AC8 {
    u8 _pad0[4];
    Inner93AC8 *unk4;
} GenObj__func_08093AC8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080522D8 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
} GenObj__func_080522D8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080522E8 {
    u8 unk0;
    u8 _pad1;
    u16 unk2;
} GenObj__func_080522E8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Inner76BEC { u8 _pad0[1424]; i16 unk590; } Inner76BEC;
typedef struct GenObj__func_08076BEC {
    u8 _pad0[8];
    Inner76BEC *unk8;
} GenObj__func_08076BEC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct FTab93F28 { u8 _pad0[40]; void (*unk28)(void *); u8 _pad2C[4]; void (*unk30)(void *); } FTab93F28;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct FTab943C4 { u8 _pad0[40]; void (*unk28)(void *); u8 _pad2C[4]; void (*unk30)(void *); } FTab943C4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl521FC { u8 _pad0[8]; void (*unk8)(void *, i32); } Vtbl521FC;
typedef struct GenObj__func_080521FC {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_080521FC;
typedef struct Obj521FC { Vtbl521FC *unk0; } Obj521FC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl57E5C { u8 _pad0[8]; void (*unk8)(void *, i32); } Vtbl57E5C;
typedef struct GenObj__func_08057E5C {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_08057E5C;
typedef struct Obj57E5C { Vtbl57E5C *unk0; } Obj57E5C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl5CF3C { u8 _pad0[8]; void (*unk8)(void *, i32); } Vtbl5CF3C;
typedef struct GenObj__func_0805CF3C {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0805CF3C;
typedef struct Obj5CF3C { Vtbl5CF3C *unk0; } Obj5CF3C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl0805E698 { u8 _pad0[8]; void (*unk8)(void *, i32); } Vtbl0805E698;
typedef struct GenObj__func_0805E698 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0805E698;
typedef struct Obj0805E698 { Vtbl0805E698 *unk0; } Obj0805E698;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Vtbl0805FD44 { u8 _pad0[8]; void (*unk8)(void *, i32); } Vtbl0805FD44;
typedef struct GenObj__func_0805FD44 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0805FD44;
typedef struct Obj0805FD44 { Vtbl0805FD44 *unk0; } Obj0805FD44;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080908CC {
    i32 unk0;
    i32 unk4;
    i32 unk8;
    u8 _padC[108];
    i32 unk78;
    i32 unk7C;
    u8 _pad80[136];
    i32 unk108;
} GenObj__func_080908CC;
typedef struct { i32 unk0; i32 unk4; i32 unk8; } Sp12;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08057DD8 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08057DD8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0805CEB8 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0805CEB8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08083A7C {
    void *unk0;
    i32 unk4;
    i32 unk8;
    i32 unkC;
    i32 unk10;
    i32 unk14;
    i32 unk18;
    i32 unk1C;
} GenObj__func_08083A7C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809A4D4 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0809A4D4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807B038 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0807B038;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807E438 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_0807E438;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08093F48 {
    struct GenObj__func_08093F48 *unk0;
    u8 _pad4[4];
    i32 unk8;
    u8 _padC[4];
    i32 unk10;
    u8 _pad14[40];
    i32 unk3C;
    i32 unk40;
    i32 unk44;
    i32 unk48;
} GenObj__func_08093F48;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08093FB0 {
    struct GenObj__func_08093FB0 *unk0;
    u8 _pad4[16];
    i32 *unk14;
    u8 _pad18[32];
    i32 unk38;
} GenObj__func_08093FB0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094000 {
    struct GenObj__func_08094000 *unk0;
    u8 _pad4[4];
    i32 unk8;
    u8 _padC[8];
    struct GenObj__func_08094000 *unk14;
    u8 _pad18[32];
    i32 unk38;
    u8 _pad3C[16];
    i32 unk4C;
    i32 unk50;
} GenObj__func_08094000;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080941C8 {
    struct GenObj__func_080941C8 *unk0;
    u8 _pad4[4];
    i32 unk8;
    u8 _padC[4];
    i32 unk10;
    u8 _pad14[44];
    i32 unk40;
    u8 _pad44[4];
    i32 unk48;
} GenObj__func_080941C8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080943E4 {
    struct GenObj__func_080943E4 *unk0;
    u8 _pad4[4];
    i32 unk8;
    u8 _padC[4];
    i32 unk10;
    u8 _pad14[40];
    i32 unk3C;
    i32 unk40;
    i32 unk44;
    i32 unk48;
} GenObj__func_080943E4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080944A8 {
    struct GenObj__func_080944A8 *unk0;
    u8 _pad4[4];
    i32 unk8;
    u8 _padC[8];
    struct GenObj__func_080944A8 *unk14;
    i32 unk18;
    u8 _pad1C[28];
    i32 unk38;
    u8 _pad3C[20];
    i32 unk50;
} GenObj__func_080944A8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094668 {
    struct GenObj__func_08094668 *unk0;
    u8 _pad4[4];
    i32 unk8;
    u8 _padC[4];
    i32 unk10;
    u8 _pad14[44];
    i32 unk40;
    u8 _pad44[4];
    i32 unk48;
} GenObj__func_08094668;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080946A8 {
    struct GenObj__func_080946A8 *unk0;
    u8 _pad4[9];
    u8 unkD;
    u8 _padE[30];
    i32 unk2C;
} GenObj__func_080946A8;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080521BC {
    void *unk0;
    struct GenObj__func_080521BC *unk4;
    struct GenObj__func_080521BC *unk8;
} GenObj__func_080521BC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08057E1C {
    void *unk0;
    struct GenObj__func_08057E1C *unk4;
    struct GenObj__func_08057E1C *unk8;
} GenObj__func_08057E1C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0805CEFC {
    void *unk0;
    struct GenObj__func_0805CEFC *unk4;
    struct GenObj__func_0805CEFC *unk8;
} GenObj__func_0805CEFC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0805E658 {
    void *unk0;
    struct GenObj__func_0805E658 *unk4;
    struct GenObj__func_0805E658 *unk8;
} GenObj__func_0805E658;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0805FD04 {
    void *unk0;
    struct GenObj__func_0805FD04 *unk4;
    struct GenObj__func_0805FD04 *unk8;
} GenObj__func_0805FD04;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08069E58 {
    void *unk0;
    struct GenObj__func_08069E58 *unk4;
    struct GenObj__func_08069E58 *unk8;
} GenObj__func_08069E58;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807561C {
    void *unk0;
    struct GenObj__func_0807561C *unk4;
    struct GenObj__func_0807561C *unk8;
} GenObj__func_0807561C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807DD68 {
    void *unk0;
    struct GenObj__func_0807DD68 *unk4;
    struct GenObj__func_0807DD68 *unk8;
} GenObj__func_0807DD68;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807EE44 {
    void *unk0;
    struct GenObj__func_0807EE44 *unk4;
    struct GenObj__func_0807EE44 *unk8;
} GenObj__func_0807EE44;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0807F5B0 {
    void *unk0;
    struct GenObj__func_0807F5B0 *unk4;
    struct GenObj__func_0807F5B0 *unk8;
} GenObj__func_0807F5B0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808048C {
    void *unk0;
    struct GenObj__func_0808048C *unk4;
    struct GenObj__func_0808048C *unk8;
} GenObj__func_0808048C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08080DC4 {
    void *unk0;
    struct GenObj__func_08080DC4 *unk4;
    struct GenObj__func_08080DC4 *unk8;
} GenObj__func_08080DC4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08081A70 {
    void *unk0;
    struct GenObj__func_08081A70 *unk4;
    struct GenObj__func_08081A70 *unk8;
} GenObj__func_08081A70;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08082144 {
    void *unk0;
    struct GenObj__func_08082144 *unk4;
    struct GenObj__func_08082144 *unk8;
} GenObj__func_08082144;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08083AEC {
    void *unk0;
    struct GenObj__func_08083AEC *unk4;
    struct GenObj__func_08083AEC *unk8;
} GenObj__func_08083AEC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08085528 {
    void *unk0;
    struct GenObj__func_08085528 *unk4;
    struct GenObj__func_08085528 *unk8;
} GenObj__func_08085528;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808AB68 {
    void *unk0;
    struct GenObj__func_0808AB68 *unk4;
    struct GenObj__func_0808AB68 *unk8;
} GenObj__func_0808AB68;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808C59C {
    void *unk0;
    struct GenObj__func_0808C59C *unk4;
    struct GenObj__func_0808C59C *unk8;
} GenObj__func_0808C59C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0808ED08 {
    void *unk0;
    struct GenObj__func_0808ED08 *unk4;
    struct GenObj__func_0808ED08 *unk8;
} GenObj__func_0808ED08;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080931E0 {
    void *unk0;
    struct GenObj__func_080931E0 *unk4;
    struct GenObj__func_080931E0 *unk8;
} GenObj__func_080931E0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08093A88 {
    void *unk0;
    struct GenObj__func_08093A88 *unk4;
    struct GenObj__func_08093A88 *unk8;
} GenObj__func_08093A88;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809A518 {
    void *unk0;
    struct GenObj__func_0809A518 *unk4;
    struct GenObj__func_0809A518 *unk8;
} GenObj__func_0809A518;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08057F24 {
    u8 _pad0[44];
    i32 unk2C;
} GenObj__func_08057F24;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08082C74 {
    u8 _pad0[8];
    i32 unk8;
} GenObj__func_08082C74;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_08094940 {
    u8 _pad0[8];
    i32 unk8;
} GenObj__func_08094940;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_0809494C {
    u8 _pad0[8];
    i32 unk8;
} GenObj__func_0809494C;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED gData_code_0803EE94_08094208.data.08094208
extern "C" {
// data tak-dirujuk di 0x08094208 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_08094208[68] __attribute__((section(".text.code_0803EE94.08094208"))) = {0x00, 0xB5, 0x01, 0x21, 0x41, 0x73, 0x01, 0x68, 0xC9, 0x6A, 0x3F, 0xF0, 0x7D, 0xFB, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0x70, 0x47, 0x00, 0x00, 0x70, 0x47, 0x00, 0x00, 0x00, 0xB5, 0x02, 0x1C, 0x02, 0x29, 0x02, 0xD0, 0x03, 0x29, 0x05, 0xD0, 0x08, 0xE0, 0x01, 0x48, 0x05, 0xE0, 0x00, 0x00, 0xAC, 0x07, 0x10, 0x08, 0x01, 0x20, 0x10, 0x61, 0x01, 0x48, 0x90, 0x60, 0x01, 0xBC, 0x00, 0x47, 0x9C, 0x08, 0x10, 0x08};
}

// DECOMP-MATCHED func_08045584 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetDaysSincePlayerEvent_bugged__C12Bachelorette(i32); /* extern */
i32 GetDaysSinceRivalEvent__C12Bachelorette(i32);   /* extern */
i32 GetPlayerEventCount__C12Bachelorette(i32);      /* extern */
i32 GetRivalEventCount__C12Bachelorette(i32);       /* extern */
i32 func_080A0878(i32, i32);                         /* extern */

__attribute__((section(".text.code_0803EE94.08045584")))
i32 func_08045584(GenObj__func_08045584 *arg0, i32 arg1, u8 arg2) {
    i32 temp_r0;

    temp_r0 = func_080A0878((i32)(arg0->unk350 + 0x1CD4), arg1);
    if (temp_r0 != 0) {
        if (arg2 == 0) {
            __asm__ volatile("" : : : "r0"); /* barrier: paksa reload r4->r0 (quirk agbcc reload inheritance) */
            if (GetPlayerEventCount__C12Bachelorette(temp_r0) == 5) {
                return GetDaysSincePlayerEvent_bugged__C12Bachelorette(temp_r0);
            }
            goto block_6;
        }
        if (GetRivalEventCount__C12Bachelorette(temp_r0) == 4) {
            return GetDaysSinceRivalEvent__C12Bachelorette(temp_r0);
        }
        goto block_6;
    }
block_6:
    return 0;
}
}

// DECOMP-MATCHED func_0804E17C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetAvailableSpaceFor__C6FridgeUi(i32, i32);     /* extern */
i32 GetEmptyItemSlotCount__C8Rucksack(i32);         /* extern */
i32 GetFridge__9FarmHouse(i32);                     /* extern */
i32 func_0800F190(i32);                             /* extern */

__attribute__((section(".text.code_0803EE94.0804E17C")))
i32 func_0804E17C(GenObj__func_0804E17C *arg0, i32 arg1) {
    i32 temp_r0;

    if (((func_0800F190((i32)(arg0->unk350 + 0x1C2C)) << 0x18) != 0) || (GetEmptyItemSlotCount__C8Rucksack((i32)(arg0->unk350 + 0x1C38)) != 0) || ((temp_r0 = GetFridge__9FarmHouse((i32)(arg0->unk350 + 0x1F4)), (temp_r0 != 0)) && (GetAvailableSpaceFor__C6FridgeUi(temp_r0, arg1) != 0))) {
        return 1;
    }
    return 0;
}
}

// DECOMP-MATCHED func_0804E1D4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetAvailableSpaceFor__C5ShelfUi(i32, i32);      /* extern */
i32 GetEmptyItemSlotCount__C8Rucksack(i32);         /* extern */
i32 GetShelf__9FarmHouse(i32);                      /* extern */
i32 func_0800F190(i32);                             /* extern */

__attribute__((section(".text.code_0803EE94.0804E1D4")))
i32 func_0804E1D4(GenObj__func_0804E1D4 *arg0, i32 arg1) {
    i32 temp_r0;

    if (((func_0800F190((i32)(arg0->unk350 + 0x1C2C)) << 0x18) != 0) || (GetEmptyItemSlotCount__C8Rucksack((i32)(arg0->unk350 + 0x1C38)) != 0) || ((temp_r0 = GetShelf__9FarmHouse((i32)(arg0->unk350 + 0x1F4)), (temp_r0 != 0)) && (GetAvailableSpaceFor__C5ShelfUi(temp_r0, arg1) != 0))) {
        return 1;
    }
    return 0;
}
}

// DECOMP-MATCHED func_0804E22C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetFirstSlotWithArticle__C8RucksackUi(i32, i32); /* extern */
i32 GetFirstSlotWith__C5ShelfUi(i32, i32);          /* extern */
i32 GetId__C7Article(i8 *);                         /* extern */
i32 GetShelf__9FarmHouse(i32);                      /* extern */
i32 func_0800F190(i32);                             /* extern */
i32 func_0800F204(i32);                             /* extern */
i8 func_0800F258(i32);                              /* extern */

__attribute__((section(".text.code_0803EE94.0804E22C")))
i32 func_0804E22C(GenObj__func_0804E22C *arg0, i32 arg1) {
    i8 sp0;
    i32 temp_r0;
    i32 temp_r0_2;
    i32 temp_r4;
    i32 var_r1;

    temp_r4 = arg0->unk350 + 0x1C2C;
    if (((func_0800F190(temp_r4) << 0x18) == 0) && (func_0800F204(temp_r4) == 1)) {
        sp0 = func_0800F258(temp_r4);
        var_r1 = (GetId__C7Article(&sp0) == arg1);
        if (var_r1 == 0) {
            goto block_5;
        }
        goto block_8;
    }
block_5:
    temp_r0 = GetFirstSlotWithArticle__C8RucksackUi((i32)(arg0->unk350 + 0x1C38), arg1);
    if ((temp_r0 != -1) || ((temp_r0_2 = GetShelf__9FarmHouse((i32)(arg0->unk350 + 0x1F4)), (temp_r0_2 != 0)) && (GetFirstSlotWith__C5ShelfUi(temp_r0_2, arg1) != temp_r0))) {
block_8:
        return 1;
    }
    return 0;
}
}

// DECOMP-MATCHED func_0804E2C0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetFirstSlotWithFood__C8RucksackUi(i32, i32);   /* extern */
i32 GetFirstSlotWith__C6FridgeUi(i32, i32);         /* extern */
i32 GetFridge__9FarmHouse(i32);                     /* extern */
i32 GetId__C4Food(i32 *);                             /* extern */
i32 func_0800F190(i32);                             /* extern */
i32 func_0800F204(i32);                             /* extern */
i32 func_0800F20C(i32 *, i32);                          /* extern */

__attribute__((section(".text.code_0803EE94.0804E2C0")))
i32 func_0804E2C0(GenObj__func_0804E2C0 *arg0, i32 arg1) {
i32 sp0;
    i32 temp_r0;
    i32 temp_r0_2;
    i32 temp_r4;
    i32 var_r1;

    temp_r4 = arg0->unk350 + 0x1C2C;
    if (((func_0800F190(temp_r4) << 0x18) == 0) && (func_0800F204(temp_r4) == 0)) {
        func_0800F20C(&sp0, temp_r4);
        var_r1 = (GetId__C4Food(&sp0) == arg1);
        if (var_r1 == 0) {
            goto block_5;
        }
        goto block_8;
    }
block_5:
    temp_r0 = GetFirstSlotWithFood__C8RucksackUi((i32)(arg0->unk350 + 0x1C38), arg1);
    if ((temp_r0 != -1) || ((temp_r0_2 = GetFridge__9FarmHouse((i32)(arg0->unk350 + 0x1F4)), (temp_r0_2 != 0)) && (GetFirstSlotWith__C6FridgeUi(temp_r0_2, arg1) != temp_r0))) {
block_8:
        return 1;
    }
    return 0;
}
}

// DECOMP-MATCHED func_0804E354 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetFirstSlotWithTool__C8RucksackUi(i32, i32);
i32 GetFirstSlotWith__C9ToolChestUi(i32, i32);
i32 GetId__C4Tool(i8 *);
i8 GetTool__C9ToolStack(i32);
i32 IsEmpty__C9ToolStack(i32);

__attribute__((section(".text.code_0803EE94.0804E354")))
i32 func_0804E354(GenObj__func_0804E354 *arg0, i32 arg1) {
    i8 sp0;
    i32 temp_r0;
    i32 temp_r2;
    i32 temp_r4;
    i32 var_r1;

    temp_r4 = arg0->unk350 + 0x1C34;
    if ((IsEmpty__C9ToolStack(temp_r4) << 0x18) == 0) {
        sp0 = GetTool__C9ToolStack(temp_r4);
        temp_r2 = GetId__C4Tool(&sp0);
        var_r1 = 0;
        if (temp_r2 == arg1) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            return 1;
        }
    }
    temp_r4 = (i32)arg0 + 0x350;
    temp_r0 = GetFirstSlotWithTool__C8RucksackUi(*(i32 *)temp_r4 + 0x1C38, arg1);
    if ((temp_r0 == -1) && (GetFirstSlotWith__C9ToolChestUi(*(i32 *)temp_r4 + 0x380, arg1) == temp_r0)) {
        return 0;
    }
    return 1;
}
}

// DECOMP-MATCHED func_0804E3D8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetCapacity__C4Barn(i32);                       /* extern */
i32 GetCapacity__C4Coop(i32);                       /* extern */
i32 GetChicken__4CoopUi(i32, i32);                  /* extern */
i32 GetCow__4BarnUi(i32, i32);                      /* extern */
i32 GetHorse__4Farm(i32);                           /* extern */
i32 GetSheep__4BarnUi(i32, i32);                    /* extern */

__attribute__((section(".text.code_0803EE94.0804E3D8")))
i32 func_0804E3D8(GenObj__func_0804E3D8 *arg0, u32 arg1, i32 arg2) {
    i32 var_r6;

    var_r6 = 0;
    switch (arg1) {
    case 0:
        var_r6 = GetHorse__4Farm((i32)(arg0->unk350 + 0x14));
        break;
    case 1:
        if (arg2 < GetCapacity__C4Barn((i32)(arg0->unk350 + 0x5F0))) {
            var_r6 = GetCow__4BarnUi((i32)(arg0->unk350 + 0x5F0), arg2);
        }
        break;
    case 2:
        if (arg2 < GetCapacity__C4Barn((i32)(arg0->unk350 + 0x5F0))) {
            var_r6 = GetSheep__4BarnUi((i32)(arg0->unk350 + 0x5F0), arg2);
        }
        break;
    case 3:
        if (arg2 < GetCapacity__C4Coop((i32)(arg0->unk350 + 0x410))) {
            var_r6 = GetChicken__4CoopUi((i32)(arg0->unk350 + 0x410), arg2);
        }
        break;
    case 4:
        var_r6 = arg0->unk350 + 0x1C70;
        break;
    }
    return var_r6;
}
}

// DECOMP-MATCHED func_0804E7A0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 CpuFastSet(i32 *, i32, i32);                        /* extern */

__attribute__((section(".text.code_0803EE94.0804E7A0")))
void func_0804E7A0(u32 arg0, i32 arg1, i32 arg2) {
    i32 sp0;
    i32 t;
    u32 lo;
    u32 m;

    t = 0xF & arg2;
    t |= t << 4;
    t |= t << 8;
    t |= t << 16;
    lo = (arg0 << 16) >> 16;
    m = ((arg0 >> 16) << 5) * lo;
    sp0 = t;
    CpuFastSet(&sp0, arg1, ((m >> 2) & 0x1FFFFF) | 0x01000000);
}
}

// DECOMP-MATCHED func_0804E9C8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.0804E9C8")))
i32 func_0804E9C8(void) {
    return 0;
}
}

// DECOMP-MATCHED func_0804E9CC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.0804E9CC")))
i32 func_0804E9CC(void) {
    return 0;
}
}

// DECOMP-MATCHED func_0804EA80 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7868;

__attribute__((section(".text.code_0803EE94.0804EA80")))
void func_0804EA80(GenObj__func_0804EA80 *arg0, i32 arg1) {
    arg0->unk8 = &vtable_unk_080E7868;
    func_080098AC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0804EDA0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7858;

__attribute__((section(".text.code_0803EE94.0804EDA0")))
void func_0804EDA0(GenObj__func_0804EDA0 *arg0, i32 arg1) {
    arg0->unk8 = &vtable_unk_080E7858;
    func_080098AC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0804EE1C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7848;

__attribute__((section(".text.code_0803EE94.0804EE1C")))
void func_0804EE1C(GenObj__func_0804EE1C *arg0, i32 arg1) {
    arg0->unk8 = &vtable_unk_080E7848;
    func_080098AC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0804EE30 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.0804EE30")))
void func_0804EE30(u32 arg0, i16 *arg1, u32 arg2, i32 arg3) {
    u32 var_r4;
    u32 var_r7;
    u32 tmp;
    i16 *var_r5;
    u32 var_r6;

    var_r4 = arg0;
    var_r7 = (arg2 << 16) >> 16;
    tmp = (u32) (arg3 << 0x10);
    var_r5 = arg1;
    var_r6 = tmp >> 4;
    do {
        u32 var_q;

        var_q = var_r4 / 10U;
        *var_r5 = (var_r7 + (var_r4 - var_q * 10)) | var_r6;
        var_r4 = var_q;
        var_r5 -= 1;
    } while (var_r4 != 0);
}
}

// DECOMP-MATCHED func_0804EE88 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7838;

__attribute__((section(".text.code_0803EE94.0804EE88")))
void func_0804EE88(GenObj__func_0804EE88 *arg0, i32 arg1) {
    arg0->unk8 = &vtable_unk_080E7838;
    func_080098AC(arg0, arg1);
}
}
// DECOMP-MATCHED func_0804EE9C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.0804EE9C")))
i32 func_0804EE9C(GenObj__func_0804EE9C *arg0) {
    ((void (*)(u32, i16 *, u32, u32, u32))func_0804EE30)(arg0->unkC, arg0->unk10, (u32)arg0->unk14, (u32)arg0->unk16, arg0->unk18);
    return 0;
}
}

// DECOMP-MATCHED func_0804EEBC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0804EDB4(i32, i32, u16, u16, i32);           /* extern */

__attribute__((section(".text.code_0803EE94.0804EEBC")))
i32 func_0804EEBC(GenObj__func_0804EEBC *arg0) {
    func_0804EDB4((i32)(arg0->unkC), (i32)(arg0->unk10), (u16)(arg0->unk14), (u16)(arg0->unk16), (i32)(arg0->unk18));
    return 0;
}
}

// DECOMP-MATCHED func_0804EEDC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0804ED28(i32, i32, u16, u16, i32);           /* extern */

__attribute__((section(".text.code_0803EE94.0804EEDC")))
i32 func_0804EEDC(GenObj__func_0804EEDC *arg0) {
    func_0804ED28((i32)(arg0->unkC), (i32)(arg0->unk10), (u16)(arg0->unk14), (u16)(arg0->unk16), (i32)(arg0->unk18));
    return 0;
}
}

// DECOMP-MATCHED func_0804EEFC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0804E9F4(i32, u16, i32, i32, i32, i32);      /* extern */

__attribute__((section(".text.code_0803EE94.0804EEFC")))
i32 func_0804EEFC(GenObj__func_0804EEFC *arg0) {
    func_0804E9F4((i32)(arg0->unkC), (u16)(arg0->unk12), (i32)(arg0->unk14), (i32)(arg0->unk18), (i32)(arg0->unk10), (i32)(arg0->unk1C));
    return 0;
}
}

// DECOMP-MATCHED func_0804F15C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.0804F15C")))
u8 func_0804F15C(GenObj__func_0804F15C *arg0) {
    return arg0->unk19;
}
}
// DECOMP-MATCHED func_0804F160 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.0804F160")))
u32 func_0804F160(GenObj__func_0804F160 *arg0) {
    u32 temp_r0;
    register u32 var_r1 asm("r1");

    temp_r0 = arg0->unk4;
    var_r1 = temp_r0;
    if (temp_r0 != 0) {
        var_r1 = 1;
    }
    return var_r1;
}

/* ATTEMPT-NOTE manual: u8 field, u32 locals + register r1 (pola MATCH 0804F178); copy adds r1,r0 dipertahankan. */
}

// DECOMP-MATCHED func_0804F174 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.0804F174")))
i32 func_0804F174(void) {
    return 1;
}
}

// DECOMP-MATCHED func_0804F178 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.0804F178")))
i32 func_0804F178(GenObj__func_0804F178 *arg0) {
    i32 var_r2;
    i32 temp_r0;
    register i32 var_r1 asm("r1");

    var_r2 = 0;
    if (arg0->unk8 != 0) {
        temp_r0 = arg0->unk4;
        var_r1 = temp_r0;
        if (temp_r0 != 0) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r2 = 1;
        }
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk4/unk8 u8; sisa adds r1,r0 (copy temp->var dilipat compiler; +0/ifelse/u32temp dicoba, tetap fold). */
}

// DECOMP-MATCHED func_080503E4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0805039C();                                  /* extern */

__attribute__((section(".text.code_0803EE94.080503E4")))
void func_080503E4(GenObj__func_080503E4 *arg0) {
    func_0805039C();
    arg0->unk8 = 3;
    arg0->unkC = 9;
}
}

// DECOMP-MATCHED func_080503FC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080503FC")))
void func_080503FC(GenObj__func_080503FC *arg0) {
    if (arg0->unk8 != 0) {
        arg0->unk8 = 2;
    }
}
}

// DECOMP-MATCHED func_08050410 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08050410")))
void func_08050410(GenObj__func_08050410 *arg0) {
    if (arg0->unk8 != 0) {
        arg0->unk8 = 0;
    }
}
}

// DECOMP-MATCHED func_080507D0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_080F9F3C;

__attribute__((section(".text.code_0803EE94.080507D0")))
u8 func_080507D0(u32 arg0, i32 arg1) {
    i32 var_r1;
    u32 var_r2;

    var_r1 = arg1;
    var_r2 = arg0;
    if (var_r2 > 7U) {
        var_r2 = 0;
    }
    if ((u32) (var_r1 - 1) > 5U) {
        var_r1 = 1;
    }
    return *((u8 *)((var_r2 * 2 + var_r2) * 2 + var_r1 + (u8 *)&gUnk_080F9F3C));
}

/* ATTEMPT-NOTE opencode: *6 via (v*2+v)*2 (lsl/add/lsl); base (u8*) agar byte-arith + ldrb. */
}

// DECOMP-MATCHED func_08050B3C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08050B3C")))
void func_08050B3C(GenObj__func_08050B3C *arg0) {
    register i32 v asm("r2");
    v = (u8)arg0->unk1DC;
    arg0->unk1DC = (u8)(-2 & v);
}
}

// DECOMP-MATCHED func_08050C18 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08050C18")))
void func_08050C18(GenObj__func_08050C18 *arg0) {
    register i32 v asm("r2");
    v = (u8)arg0->unk1F0;
    arg0->unk1F0 = (u8)(-2 & v);
}
}

// DECOMP-MATCHED gData_code_0803EE94_08050C70.data.08050C70
extern "C" {
// data tak-dirujuk di 0x08050C70 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_08050C70[80] __attribute__((section(".text.code_0803EE94.08050C70"))) = {0x10, 0xB5, 0x83, 0xB0, 0x04, 0x1C, 0x02, 0xAA, 0x00, 0x20, 0x10, 0x70, 0x68, 0x46, 0x12, 0x1A, 0x00, 0x21, 0x82, 0xF0, 0xFF, 0xFE, 0x68, 0x46, 0x02, 0x30, 0x01, 0x22, 0x02, 0x70, 0x69, 0x46, 0x03, 0x31, 0x15, 0x20, 0x08, 0x70, 0x68, 0x46, 0x07, 0x30, 0x02, 0x70, 0x21, 0x1C, 0x68, 0x46, 0x0C, 0xC8, 0x0C, 0xC1, 0x20, 0x1C, 0x03, 0xB0, 0x10, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00, 0x03, 0x21, 0x02, 0x48, 0x02, 0x40, 0x0A, 0x43, 0x10, 0x1C, 0x70, 0x47, 0x00, 0xFF, 0xFF, 0xFF};
}

// DECOMP-MATCHED func_08050C64 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.08050C64")))
void func_08050C64(void *arg0) {
    *(u8 *)((u8 *)arg0 + 0x500) = 0;
}
}

// DECOMP-MATCHED func_08050CC0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0804F288(i32, i32, i32, i32, i32, i32, i32);   /* extern */

__attribute__((section(".text.code_0803EE94.08050CC0")))
i32 *func_08050CC0(i32 *arg0, i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6) {
    *arg0 = func_0804F288((i32)(__builtin_new(0x554)), arg1, arg2, arg3, arg4, arg5, arg6);
    return arg0;
}
}

// DECOMP-MATCHED func_08050D34 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08050D34")))
i32 func_08050D34(Inner50D34 **arg0) {
    return (*arg0)->unk8;
}
}

// DECOMP-MATCHED func_08050D3C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0804F7A4(i32, i32, i32, i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_0803EE94.08050D3C")))
i32 func_08050D3C(i32 *arg0, i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6) {
    return func_0804F7A4(*arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
}

// DECOMP-MATCHED func_08050D68 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
void func_080503E4(GenObj__func_080503E4 *arg0);                             /* extern */
__attribute__((section(".text.code_0803EE94.08050D68")))
void func_08050D68(i32 *arg0) {
    func_080503E4((GenObj__func_080503E4 *)(*arg0));
}
}
// DECOMP-MATCHED func_08050D74 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
void func_080503FC(GenObj__func_080503FC *arg0);                             /* extern */
__attribute__((section(".text.code_0803EE94.08050D74")))
void func_08050D74(i32 *arg0) {
    func_080503FC((GenObj__func_080503FC *)(*arg0));
}
}
// DECOMP-MATCHED func_08050D80 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
void func_08050410(GenObj__func_08050410 *arg0);                             /* extern */
__attribute__((section(".text.code_0803EE94.08050D80")))
void func_08050D80(i32 *arg0) {
    func_08050410((GenObj__func_08050410 *)(*arg0));
}
}
// DECOMP-MATCHED func_08050D8C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050424(i32, i32, u16, i32);                  /* extern */

__attribute__((section(".text.code_0803EE94.08050D8C")))
void func_08050D8C(i32 *arg0, i32 arg1) {
    func_08050424(*arg0, arg1, 0x100, 0);
}
}
// DECOMP-MATCHED func_08050DA0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050424(i32, i32, u16, i32);                  /* extern */

__attribute__((section(".text.code_0803EE94.08050DA0")))
void func_08050DA0(i32 *arg0, i32 arg1, i32 arg2) {
    func_08050424(*arg0, arg1, 0x100, arg2);
}
}
// DECOMP-MATCHED func_08050DB4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050424(i32, i32, u16, i32);                  /* extern */

__attribute__((section(".text.code_0803EE94.08050DB4")))
void func_08050DB4(i32 *arg0, i32 arg1, u16 arg2) {
    func_08050424(*arg0, arg1, arg2, 0);
}
}

// DECOMP-MATCHED func_08050DC8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050424(i32, i32, u16, i32);                       /* extern */

__attribute__((section(".text.code_0803EE94.08050DC8")))
void func_08050DC8(i32 *arg0, i32 arg1, u16 arg2, i32 arg3) {
    func_08050424(*arg0, arg1, arg2, arg3);
}
}

// DECOMP-MATCHED func_08050DD8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08050DD8")))
u8 func_08050DD8(GenObj__func_08050DD8 **arg0) {
    u8 temp_r0;
    GenObj__func_08050DD8 *temp_r2;

    temp_r2 = *arg0;
    temp_r0 = temp_r2->unkD;
    temp_r2->unkD = 0U;
    return temp_r0;
}
}

// DECOMP-MATCHED func_08050DE4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08050DE4")))
u8 func_08050DE4(GenObj__func_08050DE4 **arg0) {
    u8 temp_r0;
    GenObj__func_08050DE4 *temp_r2;

    temp_r2 = *arg0;
    temp_r0 = temp_r2->unkD;
    temp_r2->unkD = 1U;
    return temp_r0;
}
}

// DECOMP-MATCHED func_08050DF0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08050DF0")))
i32 func_08050DF0(void **arg0) {
    GenObj__func_08050DF0 *temp_r1;

    temp_r1 = (GenObj__func_08050DF0 *)(*arg0);
    if (temp_r1->unk8 == 6) {
        return 0;
    }
    return temp_r1->unk158;
}
}
// DECOMP-MATCHED func_08050E0C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050478(i32, i32, i32, i32, i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_0803EE94.08050E0C")))
void func_08050E0C(i32 *arg0, i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7) {
    func_08050478(*arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
}

// DECOMP-MATCHED func_08050E30 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050664(i32, i32, i32, i32, i32, i32, i32); /* extern */

__attribute__((section(".text.code_0803EE94.08050E30")))
void func_08050E30(i32 *arg0, i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6) {
    func_08050664(*arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}
}

// DECOMP-MATCHED func_08050E50 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050AD8(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08050E50")))
void func_08050E50(i32 *arg0) {
    func_08050AD8(*arg0);
}
}

// DECOMP-MATCHED func_08050E5C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
void func_08050B3C(GenObj__func_08050B3C *arg0);                             /* extern */
__attribute__((section(".text.code_0803EE94.08050E5C")))
void func_08050E5C(i32 *arg0) {
    func_08050B3C((GenObj__func_08050B3C *)(*arg0));
}
}

// DECOMP-MATCHED func_08050E68 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050B50(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08050E68")))
void func_08050E68(i32 *arg0) {
    func_08050B50(*arg0);
}
}

// DECOMP-MATCHED func_08050E74 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01: callee 50C18 terima pointer (ref: adds r0,0x1F0; ldrb/strb);
// 50E74 meneruskan pointer yg di-load dari *arg0 (ref: ldr r0,[r0]; bl). Cast no-op (pola 1DB44).
void func_08050C18(GenObj__func_08050C18 *arg0);                             /* extern */
__attribute__((section(".text.code_0803EE94.08050E74")))
void func_08050E74(i32 *arg0) {
    func_08050C18((GenObj__func_08050C18 *)*arg0);
}
}

// DECOMP-MATCHED func_08050E80 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050C2C(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08050E80")))
void func_08050E80(i32 *arg0) {
    func_08050C2C(*arg0);
}
}

// DECOMP-MATCHED func_08050E8C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
void func_08050C64(void *arg0);                             /* extern */
__attribute__((section(".text.code_0803EE94.08050E8C")))
void func_08050E8C(i32 *arg0) {
    func_08050C64((void *)*arg0);
}
}

// DECOMP-MATCHED func_0805218C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0805143C(i32, i32);                        /* extern */
extern i32 vtable_unk_080E7934;

__attribute__((section(".text.code_0803EE94.0805218C")))
void *func_0805218C(GenObj__func_0805218C *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7934;
    arg0->unk4 = func_0805143C(__builtin_new(0x8C0), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_080521BC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7934;

__attribute__((section(".text.code_0803EE94.080521BC")))
void func_080521BC(GenObj__func_080521BC *arg0, i32 arg1) {
    GenObj__func_080521BC *t1;
    GenObj__func_080521BC *t2;

    arg0->unk0 = &vtable_unk_080E7934;
    t1 = (GenObj__func_080521BC *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_080521BC *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_080521BC *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_080521FC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08051504(void ***, i32);                     /* extern */

__attribute__((section(".text.code_0803EE94.080521FC")))
i32 *func_080521FC(i32 *arg0, GenObj__func_080521FC *arg1) {
    Obj521FC *sp0;
    i32 temp_r1;

    func_08051504((void ***)&sp0, (i32)(arg1->unk4));
    if (sp0 != 0) {
        ((void (*)(void *,...))(sp0->unk0->unk8))(sp0, 3);
    }
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_080522D8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080522D8")))
void func_080522D8(i32 arg0, GenObj__func_080522D8 *arg1, i32 arg2) {
    u8 *temp_r0;

    temp_r0 = (u8 *)arg0 + (arg2 * 4);
    arg1->unk0 = (u8) temp_r0[0];
    arg1->unk2 = (u16) *(u16 *)(temp_r0 + 2);
}
}
// DECOMP-MATCHED func_080522E8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080522E8")))
void func_080522E8(i32 arg0, GenObj__func_080522E8 *arg1, i32 arg2) {
    u8 *temp_r0;

    temp_r0 = (u8 *)arg0 + (arg2 * 4);
    temp_r0[0] = (u8) arg1->unk0;
    *(u16 *)(temp_r0 + 2) = (u16) arg1->unk2;
}
}

// DECOMP-MATCHED func_08057DD8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_080522F8(i32, i32, u8);                    /* extern */
extern i32 vtable_unk_080E7960;

__attribute__((section(".text.code_0803EE94.08057DD8")))
void *func_08057DD8(GenObj__func_08057DD8 *arg0, i32 *arg1, i32 arg2, u8 arg3) {
    i32 tmp;
    arg0->unk0 = &vtable_unk_080E7960;
    arg0->unk4 = func_080522F8((i32)(__builtin_new(0x23A8)), arg2, arg3);
    tmp = *arg1;
    *arg1 = 0;
    arg0->unk8 = tmp;
    return arg0;
}
}

// DECOMP-MATCHED func_08057E1C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7960;

__attribute__((section(".text.code_0803EE94.08057E1C")))
void func_08057E1C(GenObj__func_08057E1C *arg0, i32 arg1) {
    GenObj__func_08057E1C *t1;
    GenObj__func_08057E1C *t2;

    arg0->unk0 = &vtable_unk_080E7960;
    t1 = (GenObj__func_08057E1C *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_08057E1C *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_08057E1C *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08057E5C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08052984(void ***, i32);                     /* extern */

__attribute__((section(".text.code_0803EE94.08057E5C")))
i32 *func_08057E5C(i32 *arg0, GenObj__func_08057E5C *arg1) {
    Obj57E5C *sp0;
    i32 temp_r1;

    func_08052984((void ***)&sp0, (i32)(arg1->unk4));
    if (sp0 != 0) {
        ((void (*)(void *,...))(sp0->unk0->unk8))(sp0, 3);
    }
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08057F24 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08057F64();                                  /* extern */

__attribute__((section(".text.code_0803EE94.08057F24")))
void func_08057F24(GenObj__func_08057F24 *arg0) {
register u8 *p __asm__("r5");
register u8 v __asm__("r4");
register u32 f __asm__("r3");
register i32 n __asm__("r2");
    p = (u8 *)&arg0->unk2C;
    v = *p;
    f = (u32)v << 30;
    f >>= 30;
    f += 1;
    n = 3;
    f &= n;
    n = 4;
    __asm__ volatile ("" : "+r" (n));
    n = -n;
    *p = (n & v) | f;
    func_08057F64();
}
}

// DECOMP-MATCHED func_08057F4C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08057F4C")))
i32 func_08057F4C(GenObj__func_08057F4C *arg0) {
    i32 var_r2;

    var_r2 = 0;
    if ((3 & arg0->unk2C) == 3) {
        var_r2 = 1;
    }
    return var_r2;
}

/* ATTEMPT-NOTE opencode: unk2C u8 (ldrb + adds#2c); movs+ands+cmp+bne. */
}

// DECOMP-MATCHED func_0805CEB8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0805806C(i32, i32, u8);                    /* extern */
extern i32 vtable_unk_080E798C;

__attribute__((section(".text.code_0803EE94.0805CEB8")))
void *func_0805CEB8(GenObj__func_0805CEB8 *arg0, i32 *arg1, i32 arg2, u8 arg3) {
    i32 tmp;
    arg0->unk0 = &vtable_unk_080E798C;
    arg0->unk4 = func_0805806C((i32)(__builtin_new(0x14FC)), arg2, arg3);
    tmp = *arg1;
    *arg1 = 0;
    arg0->unk8 = tmp;
    return arg0;
}
}

// DECOMP-MATCHED func_0805CEFC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E798C;

__attribute__((section(".text.code_0803EE94.0805CEFC")))
void func_0805CEFC(GenObj__func_0805CEFC *arg0, i32 arg1) {
    GenObj__func_0805CEFC *t1;
    GenObj__func_0805CEFC *t2;

    arg0->unk0 = &vtable_unk_080E798C;
    t1 = (GenObj__func_0805CEFC *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0805CEFC *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0805CEFC *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0805CF3C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080588AC(void ***, i32);                     /* extern */

__attribute__((section(".text.code_0803EE94.0805CF3C")))
i32 *func_0805CF3C(i32 *arg0, GenObj__func_0805CF3C *arg1) {
    Obj5CF3C *sp0;
    i32 temp_r1;

    func_080588AC((void ***)&sp0, (i32)(arg1->unk4));
    if (sp0 != 0) {
        ((void (*)(void *,...))(sp0->unk0->unk8))(sp0, 3);
    }
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0805E624 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0805CF70(i32, i32);                        /* extern */
extern i32 vtable_unk_080E79B8;

__attribute__((section(".text.code_0803EE94.0805E624")))
void *func_0805E624(GenObj__func_0805E624 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E79B8;
    arg0->unk4 = func_0805CF70(__builtin_new(0xAF4), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0805E658 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E79B8;

__attribute__((section(".text.code_0803EE94.0805E658")))
void func_0805E658(GenObj__func_0805E658 *arg0, i32 arg1) {
    GenObj__func_0805E658 *t1;
    GenObj__func_0805E658 *t2;

    arg0->unk0 = &vtable_unk_080E79B8;
    t1 = (GenObj__func_0805E658 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0805E658 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0805E658 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0805E698 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0805D170(void ***, i32);                     /* extern */

__attribute__((section(".text.code_0803EE94.0805E698")))
i32 *func_0805E698(i32 *arg0, GenObj__func_0805E698 *arg1) {
    Obj0805E698 *sp0;
    i32 temp_r1;

    func_0805D170((void ***)&sp0, (i32)(arg1->unk4));
    if (sp0 != 0) {
        ((void (*)(void *,...))(sp0->unk0->unk8))(sp0, 3);
    }
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0805E850 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0805E860(i32 *, i32);                        /* extern */

__attribute__((section(".text.code_0803EE94.0805E850")))
void func_0805E850(i32 *arg0, i32 arg1, i32 arg2) {
    *arg0 = arg1;
    func_0805E860(arg0, arg2);
}
}

// DECOMP-MATCHED func_0805FCD0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0805ED4C(i32, i32);                        /* extern */
extern i32 vtable_unk_080E79F8;

__attribute__((section(".text.code_0803EE94.0805FCD0")))
void *func_0805FCD0(GenObj__func_0805FCD0 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E79F8;
    arg0->unk4 = func_0805ED4C(__builtin_new(0x6430), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0805FD04 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E79F8;

__attribute__((section(".text.code_0803EE94.0805FD04")))
void func_0805FD04(GenObj__func_0805FD04 *arg0, i32 arg1) {
    GenObj__func_0805FD04 *t1;
    GenObj__func_0805FD04 *t2;

    arg0->unk0 = &vtable_unk_080E79F8;
    t1 = (GenObj__func_0805FD04 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0805FD04 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0805FD04 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0805FD44 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0805EE44(void ***, i32);                     /* extern */

__attribute__((section(".text.code_0803EE94.0805FD44")))
i32 *func_0805FD44(i32 *arg0, GenObj__func_0805FD44 *arg1) {
    Obj0805FD44 *sp0;
    i32 temp_r1;

    func_0805EE44((void ***)&sp0, (i32)(arg1->unk4));
    if (sp0 != 0) {
        ((void (*)(void *,...))(sp0->unk0->unk8))(sp0, 3);
    }
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08063E58 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08076EA8();                                  /* extern */

__attribute__((section(".text.code_0803EE94.08063E58")))
i32 func_08063E58(void) {
    func_08076EA8();
    return 1;
}
}

// DECOMP-MATCHED func_08063E64 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
u32 GetAffection__C6Animal(void *);
__attribute__((section(".text.code_0803EE94.08063E64")))
u32 func_08063E64(void *arg0) {
    u32 st[2];
    u32 *pq;
    u32 *p;
    u32 t;
    st[0] = 10;
    st[1] = GetAffection__C6Animal(arg0) / 25;
    pq = &st[1];
    t = st[0];
    p = &st[0];
    if (t > st[1]) {
        p = pq;
    }
    return *p;
}
}

// DECOMP-MATCHED func_08063E8C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 IsSick__C9Livestock();                          /* extern */
i32 IsUnhappy__C9Livestock(i32);                    /* extern */

__attribute__((section(".text.code_0803EE94.08063E8C")))
i32 func_08063E8C(i32 arg0) {
    if ((IsSick__C9Livestock() << 0x18) != 0) {
        return 0x58;
    }
    if ((IsUnhappy__C9Livestock(arg0) << 0x18) != 0) {
        return 0x48;
    }
    return 0x38;
}
}

// DECOMP-MATCHED func_08069E14 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0805FD78(i32, i32, u8);                    /* extern */
extern i32 vtable_unk_080E7A98;

__attribute__((section(".text.code_0803EE94.08069E14")))
void *func_08069E14(GenObj__func_08069E14 *arg0, i32 *arg1, i32 arg2, u8 arg3) {
    i32 tmp;
    arg0->unk0 = &vtable_unk_080E7A98;
    arg0->unk4 = func_0805FD78(__builtin_new(0x164), arg2, arg3);
    tmp = *arg1;
    *arg1 = 0;
    arg0->unk8 = tmp;
    return arg0;
}
}

// DECOMP-MATCHED func_08069E58 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7A98;

__attribute__((section(".text.code_0803EE94.08069E58")))
void func_08069E58(GenObj__func_08069E58 *arg0, i32 arg1) {
    GenObj__func_08069E58 *t1;
    GenObj__func_08069E58 *t2;

    arg0->unk0 = &vtable_unk_080E7A98;
    t1 = (GenObj__func_08069E58 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_08069E58 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_08069E58 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08069E98 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080769A0(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08069E98")))
i32 *func_08069E98(i32 *arg0, GenObj__func_08069E98 *arg1) {
    i32 temp_r1;

    func_080769A0((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0806D918 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7AB4;

__attribute__((section(".text.code_0803EE94.0806D918")))
void func_0806D918(GenObj__func_0806D918 *arg0, i32 arg1) {
    GenObj__func_0806D918 *temp_r1;

    arg0->unk0 = &vtable_unk_080E7AB4;
    temp_r1 = (GenObj__func_0806D918 *)(arg0->unk4);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0806E9D8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0806D990(i32, i32);                        /* extern */
extern i32 vtable_unk_080E7AD0;

__attribute__((section(".text.code_0803EE94.0806E9D8")))
void *func_0806E9D8(GenObj__func_0806E9D8 *arg0, i32 arg1) {
    arg0->unk0 = &vtable_unk_080E7AD0;
    arg0->unk4 = func_0806D990(__builtin_new(0x454), arg1);
    return arg0;
}
}

// DECOMP-MATCHED func_0806EA00 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7AD0;

__attribute__((section(".text.code_0803EE94.0806EA00")))
void func_0806EA00(GenObj__func_0806EA00 *arg0, i32 arg1) {
    GenObj__func_0806EA00 *temp_r1;

    arg0->unk0 = &vtable_unk_080E7AD0;
    temp_r1 = (GenObj__func_0806EA00 *)(arg0->unk4);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0806EA6C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.0806EA6C")))
u8 func_0806EA6C(GenObj__func_0806EA6C *arg0) {
    return arg0->unk4->unk448;
}
}

// DECOMP-MATCHED func_080709D8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7AEC;

__attribute__((section(".text.code_0803EE94.080709D8")))
void func_080709D8(GenObj__func_080709D8 *arg0, i32 arg1) {
    GenObj__func_080709D8 *temp_r1;

    arg0->unk0 = &vtable_unk_080E7AEC;
    temp_r1 = (GenObj__func_080709D8 *)(arg0->unk4);
    if (temp_r1 != 0) {
        ((void (*)(void *,...))(temp_r1->unk4->unk8))(temp_r1, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08070C88 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08076E0C(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7B2C;

__attribute__((section(".text.code_0803EE94.08070C88")))
void func_08070C88(GenObj__func_08070C88 *arg0, i32 arg1) {
    arg0->unk5B4 = &vtable_unk_080E7B2C;
    func_08076E0C(arg0, arg1);
}
}

// DECOMP-MATCHED func_080713AC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08070CA4();                                  /* extern */

__attribute__((section(".text.code_0803EE94.080713AC")))
i32 func_080713AC(void) {
    func_08070CA4();
    return 1;
}
}

// DECOMP-MATCHED func_080722D0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08070CA4();                                  /* extern */

__attribute__((section(".text.code_0803EE94.080722D0")))
i32 func_080722D0(void) {
    func_08070CA4();
    return 1;
}
}

// DECOMP-MATCHED func_08075328 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08070CA4();                                  /* extern */

__attribute__((section(".text.code_0803EE94.08075328")))
i32 func_08075328(void) {
    func_08070CA4();
    return 1;
}
}

// DECOMP-MATCHED func_08075450 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
u32 GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(i32, i32); /* extern */
i32 func_080A031C(i32, i32);                        /* extern */

__attribute__((section(".text.code_0803EE94.08075450")))
i32 func_08075450(GenObj__func_08075450 *arg0, i32 arg1) {
    i32 temp_r0;
    i32 var_r4;
    i32 var_r6;
    u32 temp_r0_2;
    u32 var_r5;

    var_r5 = 0;
    var_r6 = 0;
    var_r4 = 0;
    do {
        temp_r0 = func_080A031C((i32)(arg0->unk58C + 0x1CD4), var_r4);
        if (temp_r0 != 0) {
            temp_r0_2 = GetMinigameExp__C13HarvestSpriteQ213HarvestSprite4Task(temp_r0, arg1);
            if (var_r5 < temp_r0_2) {
                var_r6 = var_r4;
                var_r5 = temp_r0_2;
            }
        }
        var_r4 += 1;
    } while (var_r4 <= 6);
    return var_r6;
}
}

// DECOMP-MATCHED func_080755EC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_08070B70(i32, i32);                        /* extern */
extern i32 vtable_unk_080E7B4C;

__attribute__((section(".text.code_0803EE94.080755EC")))
void *func_080755EC(GenObj__func_080755EC *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7B4C;
    arg0->unk4 = func_08070B70(__builtin_new(0x17C), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0807561C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7B4C;

__attribute__((section(".text.code_0803EE94.0807561C")))
void func_0807561C(GenObj__func_0807561C *arg0, i32 arg1) {
    GenObj__func_0807561C *t1;
    GenObj__func_0807561C *t2;

    arg0->unk0 = &vtable_unk_080E7B4C;
    t1 = (GenObj__func_0807561C *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0807561C *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0807561C *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0807565C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080769A0(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.0807565C")))
i32 *func_0807565C(i32 *arg0, GenObj__func_0807565C *arg1) {
    i32 temp_r1;

    func_080769A0((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED gData_code_0803EE94_08075678.data.08075678
extern "C" {
// data tak-dirujuk di 0x08075678 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_08075678[56] __attribute__((section(".text.code_0803EE94.08075678"))) = {0x10, 0xB5, 0x81, 0xB0, 0x9C, 0x68, 0x1B, 0x69, 0x00, 0x93, 0x23, 0x1C, 0xFF, 0xF7, 0x56, 0xFE, 0x01, 0xB0, 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x10, 0xB5, 0x81, 0xB0, 0xDC, 0x00, 0x05, 0x4B, 0xE4, 0x18, 0x23, 0x68, 0x64, 0x68, 0x00, 0x94, 0xFF, 0xF7, 0x48, 0xFE, 0x01, 0xB0, 0x10, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x24, 0xC0, 0x0F, 0x08};
}

// DECOMP-MATCHED func_080756B0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                               /* extern */
i32 func_080E2DC8();                                /* extern */
extern i32 vtable_unk_080E7B5C;

__attribute__((section(".text.code_0803EE94.080756B0")))
void *func_080756B0(GenObj__func_080756B0 *arg0) {
    arg0->unk4 = &vtable_unk_080E7B5C;
    __builtin_new(0x28);
    arg0->unk0 = func_080E2DC8();
    return arg0;
}
}

// DECOMP-MATCHED gData_code_0803EE94_08075A14.data.08075A14
extern "C" {
// data tak-dirujuk di 0x08075A14 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_08075A14[212] __attribute__((section(".text.code_0803EE94.08075A14"))) = {0xF0, 0xB5, 0x81, 0xB0, 0x05, 0x68, 0x00, 0x91, 0x2E, 0x1D, 0x6F, 0x46, 0x74, 0x68, 0x62, 0x68, 0x00, 0x2A, 0x0B, 0xD0, 0x00, 0x23, 0x10, 0x69, 0x88, 0x42, 0x00, 0xD2, 0x01, 0x23, 0x00, 0x2B, 0x02, 0xD1, 0x14, 0x1C, 0xA2, 0x68, 0xF3, 0xE7, 0xD2, 0x68, 0xF1, 0xE7, 0x73, 0x68, 0x9C, 0x42, 0x07, 0xD0, 0x00, 0x22, 0x39, 0x68, 0x20, 0x69, 0x81, 0x42, 0x00, 0xD2, 0x01, 0x22, 0x00, 0x2A, 0x00, 0xD0, 0x1C, 0x1C, 0xA9, 0x68, 0x61, 0x40, 0x48, 0x42, 0x08, 0x43, 0x00, 0x28, 0x04, 0xDA, 0x61, 0x69, 0x28, 0x1C, 0x92, 0xF7, 0x70, 0xF9, 0x01, 0xE0, 0x01, 0x20, 0x40, 0x42, 0x01, 0xB0, 0xF0, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00, 0xF0, 0xB5, 0x81, 0xB0, 0x05, 0x68, 0x00, 0x91, 0x2E, 0x1C, 0x18, 0x36, 0x6F, 0x46, 0x74, 0x68, 0x62, 0x68, 0x00, 0x2A, 0x0B, 0xD0, 0x00, 0x23, 0x10, 0x69, 0x88, 0x42, 0x00, 0xD2, 0x01, 0x23, 0x00, 0x2B, 0x02, 0xD1, 0x14, 0x1C, 0xA2, 0x68, 0xF3, 0xE7, 0xD2, 0x68, 0xF1, 0xE7, 0x73, 0x68, 0x9C, 0x42, 0x07, 0xD0, 0x00, 0x22, 0x39, 0x68, 0x20, 0x69, 0x81, 0x42, 0x00, 0xD2, 0x01, 0x22, 0x00, 0x2A, 0x00, 0xD0, 0x1C, 0x1C, 0xE9, 0x69, 0x61, 0x40, 0x48, 0x42, 0x08, 0x43, 0x00, 0x28, 0x05, 0xDA, 0x28, 0x1C, 0x14, 0x30, 0x61, 0x69, 0x91, 0xF7, 0xF4, 0xFC, 0x01, 0xE0, 0x01, 0x20, 0x40, 0x42, 0x01, 0xB0, 0xF0, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_08075AE8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E2BB4(i32, i32, i32, i32, i32);
__attribute__((section(".text.code_0803EE94.08075AE8")))
void func_08075AE8(i32 *arg0, i32 arg1, i32 arg2, i32 arg3, i32 arg4) {
    func_080E2BB4(*arg0, arg1, arg2, arg3, arg4);
}
}

// DECOMP-MATCHED func_08075DB8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08075C88(void *, i16);                       /* extern */

__attribute__((section(".text.code_0803EE94.08075DB8")))
void func_08075DB8(GenObj__func_08075DB8 *arg0, i16 arg1) {
    arg0->unk6 = 0xFFFF;
    arg0->unkA = -1;
    func_08075C88(arg0, arg1);
}
}

// DECOMP-MATCHED func_08075DD4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08075DD4")))
void func_08075DD4(GenObj__func_08075DD4 *arg0) {
    i32 temp_r1;

    temp_r1 = arg0->unk18;
    memset((void *)(temp_r1), 0xFF, ((i32) (arg0->unk1C - temp_r1) >> 6) << 6);
}
}

// DECOMP-MATCHED func_08076B64 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08076B64")))
void func_08076B64(GenObj__func_08076B64 *arg0) {
    u8 *p = (u8 *)arg0 + 8;
    GenObj__func_08076B64 *nil = 0;
    GenObj__func_08076B64 *tmp = arg0->unk8;

    if ((nil != tmp) && (tmp != 0)) {
        ((void (*)(void *,...))(tmp->unk5B4->unk8))(tmp, 3);
    }
    *(GenObj__func_08076B64 **)p = nil;
}
}

// DECOMP-MATCHED func_08076BE0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08076BE0")))
void func_08076BE0(GenObj__func_08076BE0 *arg0, i16 arg1) {
    arg0->unk8->unk590 = arg1;
}
}
// DECOMP-MATCHED func_08076BEC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08076BEC")))
i16 func_08076BEC(GenObj__func_08076BEC *arg0) {
    return arg0->unk8->unk590;
}
}

// DECOMP-MATCHED func_08077E34 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.08077E34")))
void func_08077E34(i32 arg0, i32 arg1, u16 *arg2) {
    u16 *src;
    u16 *dst;
    u32 base;
    u32 ofs;
    u32 x;
    u32 y;
    u32 y_next;

    y = 0;
    src = arg2;
    base = arg1 << 11;
    do {
        x = 0;
        ofs = y << 6;
        y_next = y + 1;
        ofs += 0x06000000;
        dst = (u16 *)(base + ofs);
loop:
        *dst = *src;
        src += 1;
        dst += 1;
        x += 1;
        if (x <= 0x1DU) {
            goto loop;
        }
        y = y_next;
    } while (y <= 0xCU);
}
}

// DECOMP-MATCHED func_080782C4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080782C4")))
i32 func_080782C4(i32 dummy, u32 arg1, u32 arg2, GenObj__func_080782C4 *arg3) {
    i32 var_r4;

    var_r4 = 0;
    if (((u32) arg3->unk10 <= arg1) && (arg1 <= (u32) arg3->unk12) && ((u32) arg3->unk11 <= arg2) && (arg2 <= (u32) arg3->unk13)) {
        var_r4 = 1;
    }
    return var_r4;
}

/* ATTEMPT-NOTE opencode: struct di r3 via i32 dummy (arg1=r1, arg2=r2); 4 member u8. */
}

// DECOMP-MATCHED func_0807B038 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_08078E40(i32, i32, i32);                   /* extern */
extern i32 vtable_unk_080E7BDC;

__attribute__((section(".text.code_0803EE94.0807B038")))
void *func_0807B038(GenObj__func_0807B038 *arg0, i32 *arg1, i32 arg2, i32 arg3) {
    i32 tmp;
    arg0->unk0 = &vtable_unk_080E7BDC;
    arg0->unk4 = func_08078E40((i32)(__builtin_new(0xA74)), arg2, arg3);
    tmp = *arg1;
    *arg1 = 0;
    arg0->unk8 = tmp;
    return arg0;
}
}

// DECOMP-MATCHED func_0807B8F4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
u32 GetAffection__C6Animal(void *);                 /* extern */

__attribute__((section(".text.code_0803EE94.0807B8F4")))
u32 func_0807B8F4(i32 arg0, void *arg1) {
    u32 st[2];
    u32 *pq;
    u32 *p;
    u32 t;
    st[0] = 10;
    st[1] = GetAffection__C6Animal(arg1) / 25;
    pq = &st[1];
    t = st[0];
    p = &st[0];
    if (t > st[1]) {
        p = pq;
    }
    return *p;
}
}

// DECOMP-MATCHED func_0807D070 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0807B0F0(i32, i32, i32);                   /* extern */
extern i32 vtable_unk_080E7BF8;

__attribute__((section(".text.code_0803EE94.0807D070")))
void *func_0807D070(GenObj__func_0807D070 *arg0, i32 *arg1, i32 arg2, i32 arg3) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7BF8;
    arg0->unk4 = func_0807B0F0(__builtin_new(0x231C), arg2, arg3);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    arg0->unkC = arg3;
    arg0->unk10 = arg2;
    return arg0;
}
}

// DECOMP-MATCHED func_0807DD38 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0807D194(i32, i32);                        /* extern */
extern i32 vtable_unk_080E7C30;

__attribute__((section(".text.code_0803EE94.0807DD38")))
void *func_0807DD38(GenObj__func_0807DD38 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7C30;
    arg0->unk4 = func_0807D194(__builtin_new(0x710), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0807DD68 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7C30;

__attribute__((section(".text.code_0803EE94.0807DD68")))
void func_0807DD68(GenObj__func_0807DD68 *arg0, i32 arg1) {
    GenObj__func_0807DD68 *t1;
    GenObj__func_0807DD68 *t2;

    arg0->unk0 = &vtable_unk_080E7C30;
    t1 = (GenObj__func_0807DD68 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0807DD68 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0807DD68 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0807DDA8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0807D218(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.0807DDA8")))
i32 *func_0807DDA8(i32 *arg0, GenObj__func_0807DDA8 *arg1) {
    i32 temp_r1;

    func_0807D218((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED gData_code_0803EE94_0807E478.data.0807E478
extern "C" {
// data tak-dirujuk di 0x0807E478 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_0807E478[64] __attribute__((section(".text.code_0803EE94.0807E478"))) = {0x30, 0xB5, 0x04, 0x1C, 0x0D, 0x1C, 0x0D, 0x48, 0x20, 0x60, 0xA1, 0x68, 0x00, 0x29, 0x05, 0xD0, 0x08, 0x68, 0x82, 0x68, 0x08, 0x1C, 0x03, 0x21, 0x55, 0xF0, 0x40, 0xFA, 0x61, 0x68, 0x00, 0x29, 0x05, 0xD0, 0x48, 0x68, 0x82, 0x68, 0x08, 0x1C, 0x03, 0x21, 0x55, 0xF0, 0x37, 0xFA, 0x20, 0x1C, 0x29, 0x1C, 0x82, 0xF7, 0x9F, 0xF9, 0x30, 0xBC, 0x01, 0xBC, 0x00, 0x47, 0x20, 0x7C, 0x0E, 0x08};
}

// DECOMP-MATCHED func_0807E438 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0807DDC4(i32, i32, i32);                   /* extern */
extern i32 vtable_unk_080E7C20;

__attribute__((section(".text.code_0803EE94.0807E438")))
void *func_0807E438(GenObj__func_0807E438 *arg0, i32 *arg1, i32 arg2, i32 arg3) {
    i32 tmp;
    arg0->unk0 = &vtable_unk_080E7C20;
    arg0->unk4 = func_0807DDC4((i32)(__builtin_new(0x710)), arg2, arg3);
    tmp = *arg1;
    *arg1 = 0;
    arg0->unk8 = tmp;
    return arg0;
}
}

// DECOMP-MATCHED func_0807E4B8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0807DE3C(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.0807E4B8")))
i32 *func_0807E4B8(i32 *arg0, GenObj__func_0807E4B8 *arg1) {
    i32 temp_r1;

    func_0807DE3C((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0807E4D4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C7F58();                                  /* extern */
extern i32 vtable_unk_080E7C40;

// PARAM-UNUSED 2026-11-01: caller (7EE14 dkk) menyiapkan r1=arg2 (ref: adds r1,r5; bl);
__attribute__((section(".text.code_0803EE94.0807E4D4")))
void *func_0807E4D4(GenObj__func_0807E4D4 *arg0, i32 arg1) {
    (void)arg1;
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7C40;
    arg0->unk6A4 = 0;
    arg0->unk708 = 0;
    arg0->unk70C = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_0807E508 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C8360(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7C40;

__attribute__((section(".text.code_0803EE94.0807E508")))
void func_0807E508(GenObj__func_0807E508 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7C40;
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED func_0807EE14 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01: callee E4D4 terima (ptr, unused-i32) — src E4D4 ditambah
// param unused (ref caller: adds r1,r5; bl; callee abaikan r1; codegen callee identik,
// probe agbcc). Cast call-site no-op (probe: codegen identik ref).

i32 __builtin_new(i32);                             /* extern */
void* func_0807E4D4(GenObj__func_0807E4D4 *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7C4C;

__attribute__((section(".text.code_0803EE94.0807EE14")))
void *func_0807EE14(GenObj__func_0807EE14 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7C4C;
    arg0->unk4 = (i32)func_0807E4D4((GenObj__func_0807E4D4 *)__builtin_new(0x710), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0807EE44 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7C4C;

__attribute__((section(".text.code_0803EE94.0807EE44")))
void func_0807EE44(GenObj__func_0807EE44 *arg0, i32 arg1) {
    GenObj__func_0807EE44 *t1;
    GenObj__func_0807EE44 *t2;

    arg0->unk0 = &vtable_unk_080E7C4C;
    t1 = (GenObj__func_0807EE44 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0807EE44 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0807EE44 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0807EE84 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0807E558(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.0807EE84")))
i32 *func_0807EE84(i32 *arg0, GenObj__func_0807EE84 *arg1) {
    i32 temp_r1;

    func_0807E558((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0807EEA0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
// PARAM-UNUSED 2026-11-01 (pola 7EE14: caller 7F580 menyiapkan r1=arg2; callee abaikan r1;
// codegen callee identik 1-vs-2-param, probe agbcc; verify tetap MATCH).
extern "C" {
i32 func_080C7F58();                                  /* extern */
extern i32 vtable_unk_080E7C5C;

__attribute__((section(".text.code_0803EE94.0807EEA0")))
void *func_0807EEA0(GenObj__func_0807EEA0 *arg0, i32 arg1) {
    (void)arg1;
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7C5C;
    arg0->unk6A4 = 0;
    arg0->unk6A8 = 0;
    arg0->unk6AC = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_0807EED4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_delete(i32);                            /* extern */
i32 func_080C8360(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7C5C;

__attribute__((section(".text.code_0803EE94.0807EED4")))
void func_0807EED4(GenObj__func_0807EED4 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7C5C;
    __builtin_delete((i32)(arg0->unk6AC));
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED func_0807EF00 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.0807EF00")))
void func_0807EF00(i32 *arg0, GenObj__func_0807EF00 *arg1) {
    i32 temp_r3;

    temp_r3 = arg1->unk6AC;
    arg1->unk6AC = 0;
    *arg0 = temp_r3;
}
}

// DECOMP-MATCHED gData_code_0803EE94_0807F60C.data.0807F60C
extern "C" {
// data tak-dirujuk di 0x0807F60C (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_0807F60C[48] __attribute__((section(".text.code_0803EE94.0807F60C"))) = {0x10, 0xB5, 0x83, 0xB0, 0x04, 0x1C, 0x49, 0x68, 0x68, 0x46, 0xFF, 0xF7, 0x73, 0xFC, 0x00, 0x9A, 0x68, 0x46, 0x01, 0x90, 0x02, 0x92, 0x01, 0x1C, 0x00, 0x20, 0x08, 0x60, 0x22, 0x60, 0x00, 0x98, 0x80, 0xF7, 0xEC, 0xFF, 0x20, 0x1C, 0x03, 0xB0, 0x10, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_0807F580 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01 (pola 7EE14: callee EEA0-(ptr,unused) + caller-cast;
// ref: adds r1,r5; bl EEA0; callee abaikan r1. Cast no-op, probe 7EE14.)

i32 __builtin_new(i32);                             /* extern */
void* func_0807EEA0(GenObj__func_0807EEA0 *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7C68;

__attribute__((section(".text.code_0803EE94.0807F580")))
void *func_0807F580(GenObj__func_0807F580 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7C68;
    arg0->unk4 = (i32)func_0807EEA0((GenObj__func_0807EEA0 *)__builtin_new(0x6B0), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0807F5B0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7C68;

__attribute__((section(".text.code_0803EE94.0807F5B0")))
void func_0807F5B0(GenObj__func_0807F5B0 *arg0, i32 arg1) {
    GenObj__func_0807F5B0 *t1;
    GenObj__func_0807F5B0 *t2;

    arg0->unk0 = &vtable_unk_080E7C68;
    t1 = (GenObj__func_0807F5B0 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0807F5B0 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0807F5B0 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0807F63C (dari code_0803EE94.s; cek manusia sebelum ke src/)
// PARAM-UNUSED 2026-11-01 (pola 7EE14: caller 8045C menyiapkan r1=arg2; callee abaikan r1;
// codegen callee identik 1-vs-2-param, probe agbcc; verify tetap MATCH).
extern "C" {
i32 func_080C7F58();                                  /* extern */
extern i32 vtable_unk_080E7C78;

__attribute__((section(".text.code_0803EE94.0807F63C")))
void *func_0807F63C(GenObj__func_0807F63C *arg0, i32 arg1) {
    (void)arg1;
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7C78;
    arg0->unk6A4 = 0;
    arg0->unk708 = 0;
    arg0->unk70C = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_0807F670 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C8360(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7C78;

__attribute__((section(".text.code_0803EE94.0807F670")))
void func_0807F670(GenObj__func_0807F670 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7C78;
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED gData_code_0803EE94_080804E8.data.080804E8
extern "C" {
// data tak-dirujuk di 0x080804E8 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_080804E8[16] __attribute__((section(".text.code_0803EE94.080804E8"))) = {0x00, 0xB5, 0x00, 0x20, 0x02, 0x29, 0x00, 0xDC, 0x01, 0x20, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_0808045C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01 (pola 7EE14: callee F63C-(ptr,unused) + caller-cast;
// ref: adds r1,r5; bl F63C; callee abaikan r1. Cast no-op, probe 7EE14.)

i32 __builtin_new(i32);                             /* extern */
void* func_0807F63C(GenObj__func_0807F63C *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7C84;

__attribute__((section(".text.code_0803EE94.0808045C")))
void *func_0808045C(GenObj__func_0808045C *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7C84;
    arg0->unk4 = (i32)func_0807F63C((GenObj__func_0807F63C *)__builtin_new(0x710), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0808048C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7C84;

__attribute__((section(".text.code_0803EE94.0808048C")))
void func_0808048C(GenObj__func_0808048C *arg0, i32 arg1) {
    GenObj__func_0808048C *t1;
    GenObj__func_0808048C *t2;

    arg0->unk0 = &vtable_unk_080E7C84;
    t1 = (GenObj__func_0808048C *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0808048C *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0808048C *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_080804F8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
// PARAM-UNUSED 2026-11-01 (pola 7EE14: caller 80D94 menyiapkan r1=arg2; callee abaikan r1;
// codegen callee identik 1-vs-2-param, probe agbcc; verify tetap MATCH).
extern "C" {
i32 func_080C7F58();                                  /* extern */
extern i32 vtable_unk_080E7C94;

__attribute__((section(".text.code_0803EE94.080804F8")))
void *func_080804F8(GenObj__func_080804F8 *arg0, i32 arg1) {
    (void)arg1;
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7C94;
    arg0->unk6A4 = 0;
    arg0->unk6A8 = 0;
    arg0->unk6AC = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_0808052C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C8360(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7C94;

__attribute__((section(".text.code_0803EE94.0808052C")))
void func_0808052C(GenObj__func_0808052C *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7C94;
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED func_08080D94 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01 (pola 7EE14: callee 804F8-(ptr,unused) + caller-cast;
// ref: adds r1,r5; bl 804F8; callee abaikan r1. Cast no-op, probe 7EE14.)

i32 __builtin_new(i32);                             /* extern */
void* func_080804F8(GenObj__func_080804F8 *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7CA0;

__attribute__((section(".text.code_0803EE94.08080D94")))
void *func_08080D94(GenObj__func_08080D94 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7CA0;
    arg0->unk4 = (i32)func_080804F8((GenObj__func_080804F8 *)__builtin_new(0x710), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_08080DC4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7CA0;

__attribute__((section(".text.code_0803EE94.08080DC4")))
void func_08080DC4(GenObj__func_08080DC4 *arg0, i32 arg1) {
    GenObj__func_08080DC4 *t1;
    GenObj__func_08080DC4 *t2;

    arg0->unk0 = &vtable_unk_080E7CA0;
    t1 = (GenObj__func_08080DC4 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_08080DC4 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_08080DC4 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08080E04 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08080540(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08080E04")))
i32 *func_08080E04(i32 *arg0, GenObj__func_08080E04 *arg1) {
    i32 temp_r1;

    func_08080540((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08080E20 (dari code_0803EE94.s; cek manusia sebelum ke src/)
// PARAM-UNUSED 2026-11-01 (pola 7EE14: caller 81A40 menyiapkan r1=arg2; callee abaikan r1;
// codegen callee identik 1-vs-2-param, probe agbcc; verify tetap MATCH).
extern "C" {
i32 func_080C7F58();                                  /* extern */
extern i32 vtable_unk_080E7CB0;

__attribute__((section(".text.code_0803EE94.08080E20")))
void *func_08080E20(GenObj__func_08080E20 *arg0, i32 arg1) {
    (void)arg1;
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7CB0;
    arg0->unk6A4 = 0;
    arg0->unk6A8 = 0;
    arg0->unk6AC = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_08080E54 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C8360(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7CB0;

__attribute__((section(".text.code_0803EE94.08080E54")))
void func_08080E54(GenObj__func_08080E54 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7CB0;
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED func_08081A40 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01 (pola 7EE14: callee 80E20-(ptr,unused) + caller-cast;
// ref: adds r1,r5; bl 80E20; callee abaikan r1. Cast no-op, probe 7EE14.)

i32 __builtin_new(i32);                             /* extern */
void* func_08080E20(GenObj__func_08080E20 *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7CBC;

__attribute__((section(".text.code_0803EE94.08081A40")))
void *func_08081A40(GenObj__func_08081A40 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7CBC;
    arg0->unk4 = (i32)func_08080E20((GenObj__func_08080E20 *)__builtin_new(0x710), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_08081A70 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7CBC;

__attribute__((section(".text.code_0803EE94.08081A70")))
void func_08081A70(GenObj__func_08081A70 *arg0, i32 arg1) {
    GenObj__func_08081A70 *t1;
    GenObj__func_08081A70 *t2;

    arg0->unk0 = &vtable_unk_080E7CBC;
    t1 = (GenObj__func_08081A70 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_08081A70 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_08081A70 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08081AB0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0808114C(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08081AB0")))
i32 *func_08081AB0(i32 *arg0, GenObj__func_08081AB0 *arg1) {
    i32 temp_r1;

    func_0808114C((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08081ACC (dari code_0803EE94.s; cek manusia sebelum ke src/)
// PARAM-UNUSED 2026-11-01 (pola 7EE14: caller 08082114 menyiapkan r1=arg2; callee abaikan r1).
extern "C" {
i32 func_080C7F58();                                  /* extern */
extern i32 vtable_unk_080E7CCC;

__attribute__((section(".text.code_0803EE94.08081ACC")))
void *func_08081ACC(GenObj__func_08081ACC *arg0, i32 arg1) {
    (void)arg1;
    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7CCC;
    arg0->unk6A4 = 0;
    arg0->unk6A8 = 0;
    arg0->unk6AC = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_08081B00 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_delete(i32);                            /* extern */
i32 func_080C8360(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7CCC;

__attribute__((section(".text.code_0803EE94.08081B00")))
void func_08081B00(GenObj__func_08081B00 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7CCC;
    __builtin_delete((i32)(arg0->unk6AC));
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED func_08081B2C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08081B2C")))
void func_08081B2C(i32 *arg0, GenObj__func_08081B2C *arg1) {
    i32 temp_r3;

    temp_r3 = arg1->unk6AC;
    arg1->unk6AC = 0;
    *arg0 = temp_r3;
}
}

// DECOMP-MATCHED func_08082114 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
void* func_08081ACC(GenObj__func_08081ACC *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7CD8;

__attribute__((section(".text.code_0803EE94.08082114")))
void *func_08082114(GenObj__func_08082114 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7CD8;
    arg0->unk4 = (i32)(func_08081ACC((GenObj__func_08081ACC *)(__builtin_new(0x6B0)), arg2));
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_08082144 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7CD8;

__attribute__((section(".text.code_0803EE94.08082144")))
void func_08082144(GenObj__func_08082144 *arg0, i32 arg1) {
    GenObj__func_08082144 *t1;
    GenObj__func_08082144 *t2;

    arg0->unk0 = &vtable_unk_080E7CD8;
    t1 = (GenObj__func_08082144 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_08082144 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_08082144 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08082184 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08081BBC(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08082184")))
i32 *func_08082184(i32 *arg0, GenObj__func_08082184 *arg1) {
    i32 temp_r1;

    func_08081BBC((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08082250 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C8360(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7CE8;

__attribute__((section(".text.code_0803EE94.08082250")))
void func_08082250(GenObj__func_08082250 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7CE8;
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED func_08082C74 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetFirstSlotWithTool__C8RucksackUi(i32, i32);   /* extern */
i32 GetFirstSlotWith__C9ToolChestUi(i32, i32);      /* extern */
i32 GetId__C4Tool(i8 *);                            /* extern */
i8 GetTool__C9ToolStack(i32);                       /* extern */
i32 IsEmpty__C9ToolStack(i32);                      /* extern */

__attribute__((section(".text.code_0803EE94.08082C74")))
i32 func_08082C74(GenObj__func_08082C74 *arg0, i32 arg1) {
    i8 sp0;
    i32 temp_r0;
    i32 id_r0;
    register i32 var_r1 __asm__("r1");
    i32 var_r7;

    var_r7 = 1;
    temp_r0 = GetFirstSlotWith__C9ToolChestUi((i32)(arg0->unk8 + 0x380), arg1);
    if ((temp_r0 != -1) || (GetFirstSlotWithTool__C8RucksackUi((i32)(arg0->unk8 + 0x1C38), arg1) != temp_r0)) {
        var_r7 = 0;
    }
    if ((IsEmpty__C9ToolStack((i32)(arg0->unk8 + 0x1C34)) << 0x18) == 0) {
        sp0 = GetTool__C9ToolStack((i32)(arg0->unk8 + 0x1C34));
        id_r0 = GetId__C4Tool(&sp0);
        var_r1 = 0;
        if (id_r0 == arg1) {
            var_r1 = 1;
        }
        if (var_r1 != 0) {
            var_r7 = 0;
        }
    }
    return var_r7;
}
}

// DECOMP-MATCHED func_08083A7C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_080821D0(i32, i32, u8, i32, i32, i32, i32); /* extern */
extern i32 vtable_unk_080E7D04;

__attribute__((section(".text.code_0803EE94.08083A7C")))
void *func_08083A7C(GenObj__func_08083A7C *arg0, i32 *arg1, i32 arg2, u8 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7) {
    i32 tmp;
    arg0->unk0 = &vtable_unk_080E7D04;
    arg0->unk4 = func_080821D0((i32)(__builtin_new(0x48E8)), arg2, arg3, arg4, arg5, arg6, arg7);
    tmp = *arg1;
    *arg1 = 0;
    arg0->unk8 = tmp;
    arg0->unkC = arg4;
    arg0->unk10 = arg5;
    arg0->unk14 = arg6;
    arg0->unk18 = arg7;
    arg0->unk1C = arg2;
    return arg0;
}
}
// DECOMP-MATCHED func_08083AEC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D04;

__attribute__((section(".text.code_0803EE94.08083AEC")))
void func_08083AEC(GenObj__func_08083AEC *arg0, i32 arg1) {
    GenObj__func_08083AEC *t1;
    GenObj__func_08083AEC *t2;

    arg0->unk0 = &vtable_unk_080E7D04;
    t1 = (GenObj__func_08083AEC *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_08083AEC *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_08083AEC *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08083BD4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
// PARAM-UNUSED 2026-11-01 (pola 7EE14: caller 080854F4 menyiapkan r1=arg2; callee abaikan r1).
extern "C" {
i32 func_080C7F58();                                  /* extern */
extern i32 gUnk_080FF838;
extern i32 vtable_unk_080E7D14;

__attribute__((section(".text.code_0803EE94.08083BD4")))
void *func_08083BD4(GenObj__func_08083BD4 *arg0, i32 arg1) {
    (void)arg1;
    i32 var_r0;
    u32 var_r4;
    void *temp_r6;

    func_080C7F58();
    arg0->unk4 = &vtable_unk_080E7D14;
    arg0->unk6A4 = 0;
    arg0->unk708 = 0;
    arg0->unk70C = 0;
    arg0->unk710 = 0;
    var_r0 = 0x13;
    do {
        var_r0 -= 1;
    } while (var_r0 != -1);
    temp_r6 = (void *)((u8 *)arg0 + 0x6170);
    var_r4 = strlen((const char *)(&gUnk_080FF838));
    if (var_r4 > 0x7FU) {
        var_r4 = 0x7F;
    }
    memcpy((void *)(temp_r6), (const void *)(&gUnk_080FF838), var_r4);
    *((u8 *)temp_r6 + var_r4) = 0;
    arg0->unk61F0 = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_08083C50 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C8360(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7D14;

__attribute__((section(".text.code_0803EE94.08083C50")))
void func_08083C50(GenObj__func_08083C50 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7D14;
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED func_080854F4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
void* func_08083BD4(GenObj__func_08083BD4 *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7D20;

__attribute__((section(".text.code_0803EE94.080854F4")))
void *func_080854F4(GenObj__func_080854F4 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7D20;
    arg0->unk4 = (i32)(func_08083BD4((GenObj__func_08083BD4 *)(__builtin_new(0x61F4)), arg2));
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_08085528 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D20;

__attribute__((section(".text.code_0803EE94.08085528")))
void func_08085528(GenObj__func_08085528 *arg0, i32 arg1) {
    GenObj__func_08085528 *t1;
    GenObj__func_08085528 *t2;

    arg0->unk0 = &vtable_unk_080E7D20;
    t1 = (GenObj__func_08085528 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_08085528 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_08085528 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08085568 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08084228(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08085568")))
i32 *func_08085568(i32 *arg0, GenObj__func_08085568 *arg1) {
    i32 temp_r1;

    func_08084228((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0808562C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080C8360(void *, i32);                  /* extern */
extern i32 vtable_unk_080E7D30;

__attribute__((section(".text.code_0803EE94.0808562C")))
void func_0808562C(GenObj__func_0808562C *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7D30;
    func_080C8360(arg0, arg1);
}
}

// DECOMP-MATCHED func_08085EC4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.08085EC4")))
u32 func_08085EC4(i32 arg0, u32 arg1) {
    u32 st[2];
    u32 *q;
    u32 *p;
    u32 ten;
    ten = 10;
    st[0] = ten;
    st[1] = arg1 / 25U;
    q = &st[1];
    p = &st[0];
    if (ten > st[1]) {
        p = q;
    }
    return *p;
}
}

// DECOMP-MATCHED func_08085EEC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08085EEC")))
u32 func_08085EEC(GenObj__func_08085EEC *arg0) {
    u32 var_r0;

    var_r0 = arg0->unk43D8;
    if (var_r0 > 1U) {
        var_r0 = 0x3E7;
    }
    return var_r0;
}
}

// DECOMP-MATCHED func_08088168 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_08085584(i32, i32, i32);                   /* extern */
extern i32 vtable_unk_080E7D3C;

__attribute__((section(".text.code_0803EE94.08088168")))
void *func_08088168(GenObj__func_08088168 *arg0, i32 *arg1, i32 arg2, i32 arg3) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7D3C;
    arg0->unk4 = func_08085584(__builtin_new(0x43E0), arg2, arg3);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    arg0->unkC = arg3;
    arg0->unk10 = arg2;
    return arg0;
}
}

// DECOMP-MATCHED func_080881AC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D3C;

__attribute__((section(".text.code_0803EE94.080881AC")))
void func_080881AC(GenObj__func_080881AC *arg0, i32 arg1) {
    Obj *temp_r1;
    Inner *temp_r1_2;
    Vtbl *v;

    arg0->unk0 = &vtable_unk_080E7D3C;
    temp_r1 = (Obj *) arg0->unk8;
    if (temp_r1 != 0) {
        temp_r1->unk0->unk8(temp_r1, 3);
    }
    temp_r1_2 = (Inner *)(arg0->unk4);
    if (temp_r1_2 != 0) {
        v = (Vtbl *)(temp_r1_2->unk4);
        v->unk8(temp_r1_2, 3);
    }
    func_080007EC(arg0, arg1);
}

/* ATTEMPT-NOTE cline: blok-2 single-deref (Inner.unk4=Vtbl*); via lokal v agar agbcc tidak menghapus null-check (langsung temp->unk4->unk8 menghilangkan cmp/beq). */

/* ATTEMPT-NOTE pi: len 62 vs ref 60 (+2: mov/bl tambahan?); vtable double-call; kandidat simpan arg1 ke r5 (adds r5,r1) sedang ref langsung pakai r1 — coba hindari copy arg1. */
}

// DECOMP-MATCHED func_08088304 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E3504(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D4C;

__attribute__((section(".text.code_0803EE94.08088304")))
void func_08088304(GenObj__func_08088304 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7D4C;
    func_080E3504(arg0, arg1);
}

/* STRUCT-CHECK: byte-DIFF +0x3: str memakai r2 vs ref r1 — urutan alokasi reg vtable; coba void arg / u32 vtable, atau sisip temp */

/* ATTEMPT-NOTE pi: byte +0x3: 0x49 vs ref 0x4a (str memakai r1 vs r2); urutan alokasi reg vtable; coba variasi tipe arg / temp void*. */

/* ATTEMPT-NOTE cline: ref memakai ldr r2 (arg1 hidup) -> forward (arg0,arg1) ke func_080E3504; pola sama dgn func_08090F58. */
}

// DECOMP-MATCHED func_080884F4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 GetAmount__C9FoodStack(i32 *);                  /* extern */
i32 *GetFoodStackAt__6FridgeUi(i32, i32);           /* extern */
i32 GetFood__C9FoodStack(i32 *, i32 *);                 /* extern */
u16 GetIconId__C4Food(i32 *);                         /* extern */
i32 IsEmpty__C9FoodStack(i32 *);                    /* extern */
i32 func_080CC728(i32, u32, i32 *, u16, i32);           /* extern */
i32 func_080CCDEC(i32, u32);                          /* extern */
extern i32 gUnk_086678A0;

__attribute__((section(".text.code_0803EE94.080884F4")))
void func_080884F4(GenObj__func_080884F4 *arg0, i32 arg1) {
    i32 sp4;
i32 sp8;
    u16 temp_r4;
    u32 var_r5;

    var_r5 = 0;
    do {
        sp4 = *GetFoodStackAt__6FridgeUi((i32)(arg0->unk104), (i32)((arg1 * 8) + var_r5));
        if ((IsEmpty__C9FoodStack(&sp4) << 0x18) == 0) {
            GetFood__C9FoodStack(&sp8, &sp4);
            temp_r4 = GetIconId__C4Food(&sp8);
            func_080CC728((i32)(arg0->unk7C), var_r5, &gUnk_086678A0, temp_r4, GetAmount__C9FoodStack(&sp4));
        } else {
            func_080CCDEC((i32)(arg0->unk7C), var_r5);
        }
        var_r5 += 1;
    } while (var_r5 <= 7U);
}
}
// DECOMP-MATCHED func_08088574 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01: arg0 (GenObj__88574*) diteruskan ke callee 884F4
// (GenObj__884F4*); pointer reinterpret no-op codegen (ref: r0=r4 diteruskan utuh).
// Cast eksplisit karena C++ tak konversi antar struct* beda.
void func_080884F4(GenObj__func_080884F4 *arg0, i32 arg1);                             /* extern */
i32 func_080CEB80(i32);                             /* extern */

__attribute__((section(".text.code_0803EE94.08088574")))
void func_08088574(GenObj__func_08088574 *arg0) {
    func_080884F4((GenObj__func_080884F4 *)arg0, func_080CEB80((i32)(arg0->unk94)));
}
}
// DECOMP-MATCHED func_08088590 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01 (pola 88574: arg0 direinterpret ke GenObj__884F4*;
// ref: r0=r4 diteruskan utuh; no-op codegen.)
void func_080884F4(GenObj__func_080884F4 *arg0, i32 arg1);                             /* extern */
i32 func_080CEBC0(i32);                             /* extern */

__attribute__((section(".text.code_0803EE94.08088590")))
void func_08088590(GenObj__func_08088590 *arg0) {
    func_080884F4((GenObj__func_080884F4 *)arg0, func_080CEBC0((i32)(arg0->unk94)));
}
}

// DECOMP-MATCHED func_0808AB38 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_080882AC(i32, i32);                        /* extern */
extern i32 vtable_unk_080E7D58;

__attribute__((section(".text.code_0803EE94.0808AB38")))
void *func_0808AB38(GenObj__func_0808AB38 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7D58;
    arg0->unk4 = func_080882AC(__builtin_new(0x10C), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0808AB68 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D58;

__attribute__((section(".text.code_0803EE94.0808AB68")))
void func_0808AB68(GenObj__func_0808AB68 *arg0, i32 arg1) {
    GenObj__func_0808AB68 *t1;
    GenObj__func_0808AB68 *t2;

    arg0->unk0 = &vtable_unk_080E7D58;
    t1 = (GenObj__func_0808AB68 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0808AB68 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0808AB68 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0808ABA8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0808A55C(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.0808ABA8")))
i32 *func_0808ABA8(i32 *arg0, GenObj__func_0808ABA8 *arg1) {
    i32 temp_r1;

    func_0808A55C((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0808ABC4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
// PARAM-UNUSED 2026-11-01 (pola 7EE14: caller 0808C56C menyiapkan r1=arg2; callee abaikan r1).
extern "C" {
i32 func_080CE19C();                                  /* extern */
extern i32 vtable_unk_080E7D68;

__attribute__((section(".text.code_0803EE94.0808ABC4")))
void *func_0808ABC4(GenObj__func_0808ABC4 *arg0, i32 arg1) {
    (void)arg1;
    i32 temp_r1;
    i32 *temp_r2;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7D68;
    arg0->unk98 = 0;
    temp_r2 = &arg0->unkFC;
    temp_r1 = arg0->unk8;
    *temp_r2 = temp_r1 + 0x1C34;
    arg0->unk100 = (i32) (temp_r1 + 0x1C2C);
    arg0->unk104 = (i32) (temp_r1 + 0x1C38);
    arg0->unk108 = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_0808AC14 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E3504(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D68;

__attribute__((section(".text.code_0803EE94.0808AC14")))
void func_0808AC14(GenObj__func_0808AC14 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7D68;
    func_080E3504(arg0, arg1);
}
/* ATTEMPT-NOTE cline: forward (arg0,arg1) ke func_080E3504 agar literal memakai r2 spt ref (saudara 88304/92690). */
}

// DECOMP-MATCHED func_0808C56C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
void* func_0808ABC4(GenObj__func_0808ABC4 *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7D74;

__attribute__((section(".text.code_0803EE94.0808C56C")))
void *func_0808C56C(GenObj__func_0808C56C *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7D74;
    arg0->unk4 = (i32)(func_0808ABC4((GenObj__func_0808ABC4 *)(__builtin_new(0x10C)), arg2));
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0808C59C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D74;

__attribute__((section(".text.code_0803EE94.0808C59C")))
void func_0808C59C(GenObj__func_0808C59C *arg0, i32 arg1) {
    GenObj__func_0808C59C *t1;
    GenObj__func_0808C59C *t2;

    arg0->unk0 = &vtable_unk_080E7D74;
    t1 = (GenObj__func_0808C59C *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0808C59C *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0808C59C *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0808C5DC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0808C0BC(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.0808C5DC")))
i32 *func_0808C5DC(i32 *arg0, GenObj__func_0808C5DC *arg1) {
    i32 temp_r1;

    func_0808C0BC((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0808C650 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E3504(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D84;

__attribute__((section(".text.code_0803EE94.0808C650")))
void func_0808C650(GenObj__func_0808C650 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7D84;
    func_080E3504(arg0, arg1);
}
/* ATTEMPT-NOTE cline: forward (arg0,arg1) ke func_080E3504 agar literal memakai r2 spt ref (saudara 88304/92690). */
}

// DECOMP-MATCHED func_0808C8BC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0808C840(void *, i32);                       /* extern */
i32 func_080CEB80(i32);                             /* extern */

__attribute__((section(".text.code_0803EE94.0808C8BC")))
void func_0808C8BC(GenObj__func_0808C8BC *arg0) {
    func_0808C840(arg0, func_080CEB80((i32)(arg0->unk94)));
}
}

// DECOMP-MATCHED func_0808C8D8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0808C840(void *, i32);                       /* extern */
i32 func_080CEBC0(i32);                             /* extern */

__attribute__((section(".text.code_0803EE94.0808C8D8")))
void func_0808C8D8(GenObj__func_0808C8D8 *arg0) {
    func_0808C840(arg0, func_080CEBC0((i32)(arg0->unk94)));
}
}

// DECOMP-MATCHED func_0808ECD8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0808C5F8(i32, i32);                        /* extern */
extern i32 vtable_unk_080E7D90;

__attribute__((section(".text.code_0803EE94.0808ECD8")))
void *func_0808ECD8(GenObj__func_0808ECD8 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7D90;
    arg0->unk4 = func_0808C5F8(__builtin_new(0x10C), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_0808ED08 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7D90;

__attribute__((section(".text.code_0803EE94.0808ED08")))
void func_0808ED08(GenObj__func_0808ED08 *arg0, i32 arg1) {
    GenObj__func_0808ED08 *t1;
    GenObj__func_0808ED08 *t2;

    arg0->unk0 = &vtable_unk_080E7D90;
    t1 = (GenObj__func_0808ED08 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0808ED08 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0808ED08 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0808ED48 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0808E6FC(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.0808ED48")))
i32 *func_0808ED48(i32 *arg0, GenObj__func_0808ED48 *arg1) {
    i32 temp_r1;

    func_0808E6FC((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_0808ED64 (dari code_0803EE94.s; cek manusia sebelum ke src/)
// PARAM-UNUSED 2026-11-01 (pola 7EE14: caller 08090E54 menyiapkan r1=arg2; callee abaikan r1).
extern "C" {
i32 func_080CE19C();                                  /* extern */
extern i32 vtable_unk_080E7DA0;

__attribute__((section(".text.code_0803EE94.0808ED64")))
void *func_0808ED64(GenObj__func_0808ED64 *arg0, i32 arg1) {
    (void)arg1;
    i32 temp_r1;
    i32 *temp_r2;

    func_080CE19C();
    arg0->unk4 = &vtable_unk_080E7DA0;
    arg0->unk98 = 0;
    temp_r2 = &arg0->unkFC;
    temp_r1 = arg0->unk8;
    *temp_r2 = temp_r1 + 0x1C34;
    arg0->unk100 = (i32) (temp_r1 + 0x1C38);
    arg0->unk104 = (i32) (temp_r1 + 0x380);
    arg0->unk108 = 0;
    return arg0;
}
}

// DECOMP-MATCHED func_0808EDB8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E3504(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7DA0;

__attribute__((section(".text.code_0803EE94.0808EDB8")))
void func_0808EDB8(GenObj__func_0808EDB8 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7DA0;
    func_080E3504(arg0, arg1);
}
/* ATTEMPT-NOTE cline: forward (arg0,arg1) ke func_080E3504 agar literal memakai r2 spt ref (saudara 88304/92690). */
}

// DECOMP-MATCHED func_0808EF30 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0808EE9C(void *, i32);                       /* extern */
i32 func_080CEB80(i32);                             /* extern */

__attribute__((section(".text.code_0803EE94.0808EF30")))
void func_0808EF30(GenObj__func_0808EF30 *arg0) {
    func_0808EE9C(arg0, func_080CEB80((i32)(arg0->unk94)));
}
}

// DECOMP-MATCHED func_0808EF4C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0808EE9C(void *, i32);                       /* extern */
i32 func_080CEBC0(i32);                             /* extern */

__attribute__((section(".text.code_0803EE94.0808EF4C")))
void func_0808EF4C(GenObj__func_0808EF4C *arg0) {
    func_0808EE9C(arg0, func_080CEBC0((i32)(arg0->unk94)));
}
}

// DECOMP-MATCHED func_080908CC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008B6C(void *, i32);                       /* extern */
void func_08050DC8(i32 *arg0, i32 arg1, u16 arg2, i32 arg3);                             /* extern */
i32 func_080CAC70(i32 *);                               /* extern */
void *func_080CB2E8(i32, i32);                      /* extern */
void *func_080CB2FC(i32);                           /* extern */
void *func_080CC70C(i32, i32);                      /* extern */
i32 func_080CE184(void *, i32, i32);                /* extern */
extern i32 gUnk_08117ADC;

/* ref: arg0->r6, arg1->r5; ldm/stm untuk Sp12; tail via (arg0+0x80)/(arg0+0xC). */
__attribute__((section(".text.code_0803EE94.080908CC")))
void func_080908CC(GenObj__func_080908CC *arg0, i32 arg1) {
    Sp12 sp0;
    i32 temp_r4;
    i32 temp_r4_2;
    i32 var_r1;
    register void *var_r0 __asm__("r0");

    func_080CAC70((i32 *)&sp0);
    if (arg1 == 0) {
        var_r0 = func_080CB2FC((i32)(arg0->unk78));
    } else if (arg1 <= 8) {
        temp_r4 = arg0->unk78;
        var_r0 = func_080CB2E8(temp_r4, func_080CE184(arg0, arg1, 0));
    } else {
        temp_r4_2 = arg0->unk7C;
        var_r0 = func_080CC70C(temp_r4_2, func_080CE184(arg0, arg1, 0));
    }
    sp0 = *(Sp12 *)var_r0;
    var_r1 = 0;
    if ((sp0.unk4 == 0) || (sp0.unk8 == 0)) {
        var_r1 = 1;
    }
    if (var_r1 == 0) {
        func_08050DC8((i32 *)((u8 *)arg0 + 0x80), gUnk_08117ADC, 0, 0);
        arg0->unk108 = 1;
        func_08008B6C((GenObj__func_080908CC *)((u8 *)arg0 + 0xC), 0xC7);
    }
}
}

// DECOMP-MATCHED func_08090E54 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
// PENYATUAN-MANUAL 2026-11-01 (pola 7EE14: callee 8ED64-(ptr,unused) + caller-cast;
// ref: adds r1,r5; bl 8ED64; callee abaikan r1. Cast no-op, probe 7EE14.)

i32 __builtin_new(i32);                             /* extern */
void* func_0808ED64(GenObj__func_0808ED64 *arg0, i32 arg1);                             /* extern */
extern i32 vtable_unk_080E7DAC;

__attribute__((section(".text.code_0803EE94.08090E54")))
void *func_08090E54(GenObj__func_08090E54 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7DAC;
    arg0->unk4 = (i32)func_0808ED64((GenObj__func_0808ED64 *)__builtin_new(0x10C), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08090E84 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7DAC;

__attribute__((section(".text.code_0803EE94.08090E84")))
void func_08090E84(GenObj__func_08090E84 *arg0, i32 arg1) {
    Obj *temp_r1;
    Inner *temp_r1_2;
    Vtbl *v;

    arg0->unk0 = &vtable_unk_080E7DAC;
    temp_r1 = (Obj *) arg0->unk8;
    if (temp_r1 != 0) {
        temp_r1->unk0->unk8(temp_r1, 3);
    }
    temp_r1_2 = (Inner *)(arg0->unk4);
    if (temp_r1_2 != 0) {
        v = (Vtbl *)(temp_r1_2->unk4);
        v->unk8(temp_r1_2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08090EC4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08090960(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08090EC4")))
i32 *func_08090EC4(i32 *arg0, GenObj__func_08090EC4 *arg1) {
    i32 temp_r1;

    func_08090960((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08091420 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.08091420")))
i32 func_08091420(void *arg0, i32 arg1, i32 arg2) {
    i32 var_r5;
    u32 temp_r0;
    u32 temp_r4;
    u32 var_r3;

    temp_r4 = arg1 & 7;
    var_r3 = 0;
    var_r5 = 0;
    temp_r0 = arg2 - 0x12;
    switch (temp_r0) {
    case 0:
        var_r3 = 1;
        break;
    case 1:
        var_r3 = 2;
        break;
    case 2:
        var_r3 = 3;
        break;
    case 3:
        var_r3 = 4;
        break;
    case 10:
        var_r3 = 7;
        break;
    }
    if (temp_r4 == var_r3) {
        var_r5 = 1;
    } else if (temp_r4 > var_r3) {
        var_r5 = 2;
    } else if (temp_r4 < var_r3) {
        var_r5 = 3;
    }
    return var_r5;
}
}

// DECOMP-MATCHED func_080914A0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.080914A0")))
i32 func_080914A0(void *arg0, i32 arg1, i32 arg2) {
    i32 var_r5;
    u32 temp_r0;
    u32 temp_r3;
    u32 var_r4;

    temp_r3 = arg1 & 7;
    var_r4 = 0;
    var_r5 = 0;
    temp_r0 = arg2 - 0x12;
    switch (temp_r0) {
    case 0:
        var_r4 = 1;
        break;
    case 1:
        var_r4 = 2;
        break;
    case 2:
        var_r4 = 3;
        break;
    case 3:
        var_r4 = 4;
        break;
    case 10:
        var_r4 = 7;
        break;
    }
    if (temp_r3 == var_r4) {
        var_r5 = 0;
    } else if (temp_r3 > var_r4) {
        var_r5 = 1;
    } else if (temp_r3 < var_r4) {
        var_r5 = var_r4 - temp_r3;
        if ((temp_r3 == 6) && (var_r4 == 7)) {
            var_r5 = 2;
        }
    }
    return var_r5;
}
}

// DECOMP-MATCHED func_08092570 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_08090EE0(i32, i32 *, i32, u8);               /* extern */
extern i32 vtable_unk_080E7DC8;

__attribute__((section(".text.code_0803EE94.08092570")))
void *func_08092570(GenObj__func_08092570 *arg0, i32 *arg1, i32 arg2, u8 arg3) {
    i32 sp0;
    i32 temp_r0;
    i32 temp_r0_2;

    arg0->unk0 = &vtable_unk_080E7DC8;
    temp_r0 = *arg1;
    *arg1 = 0;
    sp0 = temp_r0;
    arg0->unk4 = func_08090EE0(__builtin_new(0x1B8), &sp0, arg2, arg3);
    temp_r0_2 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r0_2;
    return arg0;
}
}

// DECOMP-MATCHED func_080925C4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7DC8;

__attribute__((section(".text.code_0803EE94.080925C4")))
void func_080925C4(GenObj__func_080925C4 *arg0, i32 arg1) {
    Obj *temp_r1;
    Inner *temp_r1_2;
    Vtbl *v;

    arg0->unk0 = &vtable_unk_080E7DC8;
    temp_r1 = (Obj *) arg0->unk8;
    if (temp_r1 != 0) {
        temp_r1->unk0->unk8(temp_r1, 3);
    }
    temp_r1_2 = (Inner *)(arg0->unk4);
    if (temp_r1_2 != 0) {
        v = (Vtbl *)(temp_r1_2->unk4);
        v->unk8(temp_r1_2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08092690 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E3504(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7DD8;

__attribute__((section(".text.code_0803EE94.08092690")))
void func_08092690(GenObj__func_08092690 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E7DD8;
    func_080E3504(arg0, arg1);
}
/* ATTEMPT-NOTE cline: forward (arg0,arg1) ke func_080E3504 agar literal memakai r2 spt ref. */
}

// DECOMP-MATCHED func_080931B0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_08092640(i32, i32);                        /* extern */
extern i32 vtable_unk_080E7DE4;

__attribute__((section(".text.code_0803EE94.080931B0")))
void *func_080931B0(GenObj__func_080931B0 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7DE4;
    arg0->unk4 = func_08092640(__builtin_new(0x10C), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_080931E0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E7DE4;

__attribute__((section(".text.code_0803EE94.080931E0")))
void func_080931E0(GenObj__func_080931E0 *arg0, i32 arg1) {
    GenObj__func_080931E0 *t1;
    GenObj__func_080931E0 *t2;

    arg0->unk0 = &vtable_unk_080E7DE4;
    t1 = (GenObj__func_080931E0 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_080931E0 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_080931E0 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08093220 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08092D64(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08093220")))
i32 *func_08093220(i32 *arg0, GenObj__func_08093220 *arg1) {
    i32 temp_r1;

    func_08092D64((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08093A58 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_0809323C(i32, i32);                        /* extern */
extern i32 vtable_unk_080E8018;

__attribute__((section(".text.code_0803EE94.08093A58")))
void *func_08093A58(GenObj__func_08093A58 *arg0, i32 *arg1, i32 arg2) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E8018;
    arg0->unk4 = func_0809323C(__builtin_new(0x3F0), arg2);
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
}
// DECOMP-MATCHED func_08093A88 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E8018;

__attribute__((section(".text.code_0803EE94.08093A88")))
void func_08093A88(GenObj__func_08093A88 *arg0, i32 arg1) {
    GenObj__func_08093A88 *t1;
    GenObj__func_08093A88 *t2;

    arg0->unk0 = &vtable_unk_080E8018;
    t1 = (GenObj__func_08093A88 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_08093A88 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_08093A88 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_08093AC8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08093AC8")))
i32 func_08093AC8(GenObj__func_08093AC8 *arg0) {
    return arg0->unk4->unk1C4;
}
}

// DECOMP-MATCHED func_08093AD4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08093364(i32);                               /* extern */

__attribute__((section(".text.code_0803EE94.08093AD4")))
i32 *func_08093AD4(i32 *arg0, GenObj__func_08093AD4 *arg1) {
    i32 temp_r1;

    func_08093364((i32)(arg1->unk4));
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
}

// DECOMP-MATCHED func_08093DCC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_delete(i32);                            /* extern */
extern i32 vtable_unk_080E812C;

__attribute__((section(".text.code_0803EE94.08093DCC")))
void func_08093DCC(i32 *arg0, i32 arg1) {
    *arg0 = (i32)&vtable_unk_080E812C;
    if (1 & arg1) {
        __builtin_delete((i32)(arg0));
    }
}
}

// DECOMP-MATCHED func_08093DEC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_081007AC;

__attribute__((section(".text.code_0803EE94.08093DEC")))
void func_08093DEC(GenObj__func_08093DEC *arg0, i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7) {
    arg0->unk0->unk20(arg0, arg1, arg2);
    arg0->unk14 = arg3;
    arg0->unk18 = arg4;
    arg0->unk1C = arg5;
    arg0->unk20 = arg6;
    arg0->unk24 = arg7;
    arg0->unk8 = &gUnk_081007AC;
    arg0->unkD = 0;
}
}

// DECOMP-MATCHED func_08093F20 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08093F20")))
u8 func_08093F20(GenObj__func_08093F20 *arg0) {
    return arg0->unkD;
}
}

// DECOMP-MATCHED func_08093F24 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08093F24")))
i32 func_08093F24(GenObj__func_08093F24 *arg0) {
    return arg0->unk10;
}
}
// DECOMP-MATCHED func_08093F28 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08093F28")))
void func_08093F28(FTab93F28 **arg0) {
    ((void (*)(void *,...))((*arg0)->unk28))(arg0);
    ((void (*)(void *,...))((*arg0)->unk30))(arg0);
}
}
// DECOMP-MATCHED func_08093F48 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_081007D4;
extern i32 gUnk_0810089C;
extern i32 gUnk_081008C4;

__attribute__((section(".text.code_0803EE94.08093F48")))
void func_08093F48(GenObj__func_08093F48 *arg0, i32 arg1) {
    i32 *var_r0;

    if (arg1 == 1) {
        ((void (*)(void *,...))(arg0->unk0->unk3C))(arg0);
    }
    if ((((i32 (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        if ((((i32 (*)(void *,...))(arg0->unk0->unk48))(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_081008C4;
        } else if ((((i32 (*)(void *,...))(arg0->unk0->unk44))(arg0) << 0x18) != 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_0810089C;
        } else {
            var_r0 = &gUnk_081007D4;
        }
        arg0->unk8 = (i32)(var_r0);
    }
}
}
// DECOMP-MATCHED func_08093FB0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08093FB0")))
void func_08093FB0(GenObj__func_08093FB0 *arg0) {
    ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, *arg0->unk14, 0);
}
}

// DECOMP-MATCHED gData_code_0803EE94_080940BC.data.080940BC
extern "C" {
// data tak-dirujuk di 0x080940BC (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_080940BC[4] __attribute__((section(".text.code_0803EE94.080940BC"))) = {0x70, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_08094000 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08094000")))
void func_08094000(GenObj__func_08094000 *arg0) {
    arg0->unk14->unk8 = ((i32 (*)(void *,...))(arg0->unk0->unk4C))(arg0);
    if ((((i32 (*)(void *,...))(arg0->unk0->unk50))(arg0) << 0x18) != 0) {
        ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 0, 0);
        return;
    }
    ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 1, 0);
}
}

// DECOMP-MATCHED func_080940C0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_0810084C;

__attribute__((section(".text.code_0803EE94.080940C0")))
void func_080940C0(GenObj__func_080940C0 *arg0, i32 arg1) {
    switch (arg1) {
    case 2:
        arg0->unkC = 1;
        break;
    case 3:
        arg0->unkC = 0;
        break;
    default:
        return;
    }
    arg0->unk8 = &gUnk_0810084C;
}
}

// DECOMP-MATCHED func_080940E4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080940E4")))
void func_080940E4(GenObj__func_080940E4 *arg0) {
    if (arg0->unkC != 0) {
        arg0->unk0->unk38(arg0, 0, 1);
    } else {
        arg0->unk0->unk38(arg0, 1, 1);
    }
}
}

// DECOMP-MATCHED func_080941A8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080941A8")))
void func_080941A8(GenObj__func_080941A8 *arg0) {
    ((void (*)(void *,...))(arg0->unk0->unk34))(arg0, arg0->unk18, arg0->unk1C, arg0->unk20, arg0->unk24);
}
}
// DECOMP-MATCHED func_080941C8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_0810089C;
extern i32 gUnk_081008C4;

__attribute__((section(".text.code_0803EE94.080941C8")))
void func_080941C8(GenObj__func_080941C8 *arg0) {
    i32 *var_r0;
    u8 temp_r0;

    if ((((i32 (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        temp_r0 = ((i32 (*)(void *,...))(arg0->unk0->unk48))(arg0);
        if (temp_r0 != 0) {
            var_r0 = &gUnk_081008C4;
        } else {
            arg0->unk10 = (i32) temp_r0;
            var_r0 = &gUnk_0810089C;
        }
        arg0->unk8 = (i32)(var_r0);
    }
}
}

// DECOMP-MATCHED func_08094268 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_delete(i32);                            /* extern */
extern i32 vtable_unk_080E8028;

__attribute__((section(".text.code_0803EE94.08094268")))
void func_08094268(i32 *arg0, i32 arg1) {
    *arg0 = (i32)&vtable_unk_080E8028;
    if (1 & arg1) {
        __builtin_delete((i32)(arg0));
    }
}
}

// DECOMP-MATCHED func_0809424C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_081009DC;
extern i32 vtable_unk_080E8028;

__attribute__((section(".text.code_0803EE94.0809424C")))
void func_0809424C(GenObj__func_0809424C *arg0) {
    arg0->unk0 = &vtable_unk_080E8028;
    arg0->unk4 = (i32)(&gUnk_081009DC);
    arg0->unk8 = 0;
    arg0->unkD = 1;
}
}

// DECOMP-MATCHED func_08094288 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_081008EC;

__attribute__((section(".text.code_0803EE94.08094288")))
void func_08094288(GenObj__func_08094288 *arg0, i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7) {
    arg0->unk0->unk20(arg0, arg1, arg2);
    arg0->unk14 = arg3;
    arg0->unk20 = arg4;
    arg0->unk24 = arg5;
    arg0->unk28 = arg6;
    arg0->unk2C = arg7;
    arg0->unk8 = &gUnk_081008EC;
    arg0->unkD = 0;
}
}

// DECOMP-MATCHED func_080943BC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080943BC")))
u8 func_080943BC(GenObj__func_080943BC *arg0) {
    return arg0->unkD;
}
}

// DECOMP-MATCHED func_080943C0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080943C0")))
i32 func_080943C0(GenObj__func_080943C0 *arg0) {
    return arg0->unk10;
}
}
// DECOMP-MATCHED func_080943C4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080943C4")))
void func_080943C4(FTab943C4 **arg0) {
    ((void (*)(void *,...))((*arg0)->unk28))(arg0);
    ((void (*)(void *,...))((*arg0)->unk30))(arg0);
}
}
// DECOMP-MATCHED func_080943E4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08100914;
extern i32 gUnk_081009DC;
extern i32 gUnk_08100A04;

__attribute__((section(".text.code_0803EE94.080943E4")))
void func_080943E4(GenObj__func_080943E4 *arg0, i32 arg1) {
    i32 *var_r0;

    if (arg1 == 1) {
        ((void (*)(void *,...))(arg0->unk0->unk3C))(arg0);
    }
    if ((((i32 (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        if ((((i32 (*)(void *,...))(arg0->unk0->unk48))(arg0) << 0x18) != 0) {
            var_r0 = &gUnk_08100A04;
        } else if ((((i32 (*)(void *,...))(arg0->unk0->unk44))(arg0) << 0x18) != 0) {
            arg0->unk10 = 1;
            var_r0 = &gUnk_081009DC;
        } else {
            var_r0 = &gUnk_08100914;
        }
        arg0->unk8 = (i32)(var_r0);
    }
}
}

// DECOMP-MATCHED func_0809444C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.0809444C")))
void func_0809444C(GenObj__func_0809444C *arg0) {
    GenObj__func_0809444C *o = arg0->unk0;
    i32 a = arg0->unk14;
    void *b = (u8 *)arg0 + 0x18;

    ((void (*)(void *, i32, i32, void *, i32))(o->unk34))(arg0, a, 8, b, 8);
}

/* ATTEMPT-NOTE opencode: var per-arg agar urutan load pas (o->r4 dulu, funcptr terakhir sblm call); b=(u8*) byte-arith. */
}

// DECOMP-MATCHED gData_code_0803EE94_0809455C.data.0809455C
extern "C" {
// data tak-dirujuk di 0x0809455C (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_0809455C[4] __attribute__((section(".text.code_0803EE94.0809455C"))) = {0x70, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_080944A8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080944A8")))
void func_080944A8(GenObj__func_080944A8 *arg0) {
    arg0->unk14->unk8 = (i32) arg0->unk18;
    if ((((i32 (*)(void *,...))(arg0->unk0->unk50))(arg0) << 0x18) != 0) {
        ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 0, 0);
        return;
    }
    ((void (*)(void *,...))(arg0->unk0->unk38))(arg0, 1, 0);
}
}

// DECOMP-MATCHED func_08094560 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_0810098C;

__attribute__((section(".text.code_0803EE94.08094560")))
void func_08094560(GenObj__func_08094560 *arg0, i32 arg1) {
    switch (arg1) {
    case 2:
        arg0->unkC = 1;
        break;
    case 3:
        arg0->unkC = 0;
        break;
    default:
        return;
    }
    arg0->unk8 = &gUnk_0810098C;
}
}

// DECOMP-MATCHED func_08094584 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08094584")))
void func_08094584(GenObj__func_08094584 *arg0) {
    if (arg0->unkC != 0) {
        arg0->unk0->unk38(arg0, 0, 1);
    } else {
        arg0->unk0->unk38(arg0, 1, 1);
    }
}
}

// DECOMP-MATCHED func_08094648 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08094648")))
void func_08094648(GenObj__func_08094648 *arg0) {
    ((void (*)(void *,...))(arg0->unk0->unk34))(arg0, arg0->unk20, arg0->unk24, arg0->unk28, arg0->unk2C);
}
}
// DECOMP-MATCHED func_08094668 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_081009DC;
extern i32 gUnk_08100A04;

__attribute__((section(".text.code_0803EE94.08094668")))
void func_08094668(GenObj__func_08094668 *arg0) {
    i32 *var_r0;
    u8 temp_r0;

    if ((((i32 (*)(void *,...))(arg0->unk0->unk40))(arg0) << 0x18) != 0) {
        temp_r0 = ((i32 (*)(void *,...))(arg0->unk0->unk48))(arg0);
        if (temp_r0 != 0) {
            var_r0 = &gUnk_08100A04;
        } else {
            arg0->unk10 = (i32) temp_r0;
            var_r0 = &gUnk_081009DC;
        }
        arg0->unk8 = (i32)(var_r0);
    }
}
}

// DECOMP-MATCHED func_080946A8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.080946A8")))
void func_080946A8(GenObj__func_080946A8 *arg0) {
    arg0->unkD = 1;
    ((void (*)(void *,...))(arg0->unk0->unk2C))(arg0);
}
}

// DECOMP-MATCHED func_080946BC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.080946BC")))
void func_080946BC(void) {

}
}

// DECOMP-MATCHED func_080946C0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.080946C0")))
void func_080946C0(void) {

}
}

// DECOMP-MATCHED func_080948E0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08100A98;

__attribute__((section(".text.code_0803EE94.080948E0")))
i32 func_080948E0(void) {
    return gUnk_08100A98;
}
}
// DECOMP-MATCHED func_080948EC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
extern i32 gUnk_08100AA0;

__attribute__((section(".text.code_0803EE94.080948EC")))
i32 func_080948EC(void) {
    return gUnk_08100AA0;
}
}

// DECOMP-MATCHED gData_code_0803EE94_080948F8.data.080948F8
extern "C" {
// data tak-dirujuk di 0x080948F8 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_080948F8[4] __attribute__((section(".text.code_0803EE94.080948F8"))) = {0x0C, 0x30, 0x70, 0x47};
}

// DECOMP-MATCHED func_080948FC (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.080948FC")))
i32 func_080948FC(i32 arg0) {
    return arg0 + 0xC;
}
}

// DECOMP-MATCHED func_08094814 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_delete(i32);                            /* extern */
i32 __builtin_vec_delete();                           /* extern */

__attribute__((section(".text.code_0803EE94.08094814")))
void func_08094814(GenObj__func_08094814 *arg0, i32 arg1) {
    if (arg0->unk4 != 0) {
        __builtin_vec_delete();
    }
    if (arg0->unk8 != 0) {
        __builtin_vec_delete();
    }
    if (1 & arg1) {
        __builtin_delete((i32)(arg0));
    }
}
}

// DECOMP-MATCHED func_08094900 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08094900")))
i32 func_08094900(GenObj__func_08094900 *arg0) {
    return arg0->unk4;
}
}

// DECOMP-MATCHED func_08094904 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.08094904")))
i32 func_08094904(void) {
    return 0x2B;
}
}

// DECOMP-MATCHED func_08094908 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08094908")))
i32 func_08094908(GenObj__func_08094908 *arg0) {
    return arg0->unk8;
}
}

// DECOMP-MATCHED func_0809490C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.0809490C")))
i32 func_0809490C(void) {
    return 0x2F;
}
}
// DECOMP-MATCHED func_08094910 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.08094910")))
i32 func_08094910(GenObj__func_08094910 *arg0) {
    return arg0->unk14;
}
}
// DECOMP-MATCHED gData_code_0803EE94_08094914.data.08094914
extern "C" {
// data tak-dirujuk di 0x08094914 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_0803EE94_08094914[44] __attribute__((section(".text.code_0803EE94.08094914"))) = {0x00, 0xB5, 0x82, 0x68, 0x00, 0xF0, 0x72, 0xF8, 0x01, 0xBC, 0x00, 0x47, 0x00, 0xB5, 0x82, 0x68, 0x0D, 0x32, 0x00, 0xF0, 0x6B, 0xF8, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0x00, 0xB5, 0x82, 0x68, 0x1A, 0x32, 0x00, 0xF0, 0x63, 0xF8, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00};
}

// DECOMP-MATCHED func_08094940 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08094A00(void *, i32, i32);                    /* extern */

__attribute__((section(".text.code_0803EE94.08094940")))
void func_08094940(GenObj__func_08094940 *arg0, i32 arg1) {
    func_08094A00(arg0, arg1, (i32)(arg0->unk8));
}
}
// DECOMP-MATCHED func_0809494C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08094A00(void *, i32, i32);                    /* extern */

__attribute__((section(".text.code_0803EE94.0809494C")))
void func_0809494C(GenObj__func_0809494C *arg0, i32 arg1) {
    func_08094A00(arg0, arg1, (i32)(arg0->unk8 + 0xD));
}
}


// DECOMP-MATCHED func_0809496C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_0803EE94.0809496C")))
i32 func_0809496C(GenObj__func_0809496C *arg0) {
    return arg0->unk8 + 0x27;
}
}

// DECOMP-MATCHED func_08094974 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_0803EE94.08094974")))
void func_08094974(i32 arg0, i32 arg1, i32 arg2, u32 arg3) {
    u32 var_r2;

    (void) arg0;
    var_r2 = 0;
    if (var_r2 < arg3) {
        do {
            *((u8 *)arg1 + var_r2) = *((u8 *)arg2 + var_r2);
            var_r2 += 1;
        } while (var_r2 < arg3);
    }
}
}

// DECOMP-MATCHED func_0809A4D4 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 __builtin_new(i32);                             /* extern */
i32 func_08094AC0(i32, i32, u8);                    /* extern */
extern i32 vtable_unk_080E824C;

__attribute__((section(".text.code_0803EE94.0809A4D4")))
void *func_0809A4D4(GenObj__func_0809A4D4 *arg0, i32 *arg1, i32 arg2, u8 arg3) {
    i32 tmp;
    arg0->unk0 = &vtable_unk_080E824C;
    arg0->unk4 = func_08094AC0((i32)(__builtin_new(0x33E0)), arg2, arg3);
    tmp = *arg1;
    *arg1 = 0;
    arg0->unk8 = tmp;
    return arg0;
}
}
// DECOMP-MATCHED func_0809A518 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC(void *, i32);                       /* extern */
extern i32 vtable_unk_080E824C;

__attribute__((section(".text.code_0803EE94.0809A518")))
void func_0809A518(GenObj__func_0809A518 *arg0, i32 arg1) {
    GenObj__func_0809A518 *t1;
    GenObj__func_0809A518 *t2;

    arg0->unk0 = &vtable_unk_080E824C;
    t1 = (GenObj__func_0809A518 *)(arg0->unk8);
    if (t1 != 0) {
        ((i32 (*)(void *, ...))(((GenObj__func_0809A518 *)(t1->unk0))->unk8))(t1, 3);
    }
    t2 = (GenObj__func_0809A518 *)(arg0->unk4);
    if (t2 != 0) {
        ((i32 (*)(void *, ...))(t2->unk4->unk8))(t2, 3);
    }
    func_080007EC(arg0, arg1);
}
}

// DECOMP-MATCHED func_0809B018 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

void *func_0809B018(GenObj__func_0809B018 *arg0, u32 arg1) {
    u8 *p = (u8 *)arg0;
    u32 n;
    void *r;
    p += 8;
    n = arg0->unk8;
    if (arg1 >= n) {
        r = (u8 *)arg0 + 12;
    } else {
        u32 t = arg1 + 1;
        r = 4 + ((n - t) * 8) + p;
    }
    return r;
}
}

// DECOMP-MATCHED func_0809B038 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {
/* GENOBJ-UNIFIED: view penuh gabungan 9B05C/9B084/9B0B0/9B0D8 (src) + 9B038
   (akses mentah +0xFC/+0x100, tanpa member) — offset/size identik di semua
   view; tanpa union (tak ada member beda-tipe di offset sama). */

void *func_0809B038(GenObj *arg0, u32 arg1) {
    u8 *p = (u8 *)arg0;
    u32 n;
    void *r;
    p += 0xFC;
    n = *(u32 *)p;
    if (arg1 >= n) {
        r = (u8 *)arg0 + 0x100;
    } else {
        u32 t = arg1 + 1;
        r = 4 + ((n - t) * 8) + p;
    }
    return r;
}
}

// DECOMP-MATCHED func_0809B05C (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0809B05C(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 8;
    i32 n = arg0->unk8;
    i32 off = (n - 1) * 8 + 4;
    i32 v;
    i32 lim;
    i32 *q;
    p += off;
    v = arg0->unk120;
    lim = *(i32 *)p;
    q = (i32 *)p;
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk120;
    }
    return *q;
}
}

// DECOMP-MATCHED func_0809B084 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0809B084(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 8;
    i32 n = arg0->unk8;
    i32 off = (n - 1) * 8 + 4;
    i32 v;
    i32 lim;
    i32 *q;
    p += off;
    v = arg0->unk124;
    lim = *(i32 *)(p + 4);
    q = (i32 *)(p + 4);
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk124;
    }
    return *q;
}
}

// DECOMP-MATCHED func_0809B0B0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0809B0B0(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 0xFC;
    i32 n = *(i32 *)p;
    i32 off = (n - 1) * 8 + 4;
    i32 v;
    i32 lim;
    i32 *q;
    p += off;
    v = arg0->unk128;
    lim = *(i32 *)p;
    q = (i32 *)p;
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk128;
    }
    return *q;
}
}

// DECOMP-MATCHED func_0809B0D8 (dari code_0803EE94.s; cek manusia sebelum ke src/)
extern "C" {

i32 func_0809B0D8(GenObj *arg0) {
    u8 *p = (u8 *)arg0 + 0xFC;
    i32 n = *(i32 *)p;
    i32 off = (n - 1) * 8 + 4;
    i32 v;
    i32 lim;
    i32 *q;
    p += off;
    v = arg0->unk12C;
    lim = *(i32 *)(p + 4);
    q = (i32 *)(p + 4);
    if ((u32)v >= (u32)lim) {
        q = &arg0->unk12C;
    }
    return *q;
}
}
