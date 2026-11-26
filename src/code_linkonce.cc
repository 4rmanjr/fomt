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

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080E5844 {
    i32 unk0;
    void *unk4;
} GenObj__func_080E5844;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080E581C {
    i32 unk0;
    void *unk4;
} GenObj__func_080E581C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D6E98 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    i32 unk4;
    i32 unk8;
} GenObj__func_080D6E98;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D6ECC {
    u8 unk0;
    u8 unk1;
} GenObj__func_080D6ECC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D6F0C {
    u8 unk0;
    u8 unk1;
    u8 _2[2];
    u32 unk4;
    u32 unk8;
} GenObj__func_080D6F0C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D7568 {
    u8 unk0;
    u8 unk1;
    u8 _pad2[2];
    u8 unk4;
    u8 _pad5[59];
    u8 unk40;
} GenObj__func_080D7568;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D780C {
    u8 _pad0[12];
    i32 unkC;
} GenObj__func_080D780C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D781C {
    u8 _pad0[12];
    i32 unkC;
} GenObj__func_080D781C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Range {
    u8 *unk0;
    u8 *unk4;
} Range;
typedef struct GenObj__func_080D782C {
    u8 _pad0[12];
    Range *unkC;
} GenObj__func_080D782C;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D7F60 {
    u8 _pad0[172];
    i32 unkAC;
} GenObj__func_080D7F60;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D7F74 {
    u8 _pad0[172];
    i32 unkAC;
} GenObj__func_080D7F74;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080D7F88 {
    u8 _pad0[172];
    i32 unkAC;
} GenObj__func_080D7F88;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080DCFCC {
    u8 _pad0[28];
    u8 unk1C;
} GenObj__func_080DCFCC;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080DE184 {
    u8 _pad0[8];
    i32 unk8;
    i32 unkC;
    u8 _pad10[60];
    struct GenObj__func_080DE184 *unk4C;
} GenObj__func_080DE184;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080E09E4 {
    u8 _pad0[448];
    i32 unk1C0;
} GenObj__func_080E09E4;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct {
    i32 unk0;
    i32 unk4;
    i32 unk8;
    i32 unkC;
    i32 unk10;
    i32 unk14;
} UnkStruct;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct GenObj__func_080E1A54 {
    u8 _pad0[2500];
    void *unk9C4;
} GenObj__func_080E1A54;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct VtblE {
    u8 _pad0[0x4C];
    i32 (*unk4C)(void *);
} VtblE;
typedef struct ObjE {
    struct VtblE *unk0;
    u8 _pad4[72];
    i32 unk4C;
    u8 _pad50[360];
    u8 unk1B8;
    u8 unk1B9;
} ObjE;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
struct Params_func_080E44E4 { i32 a; i32 b; i32 c; };
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Src_DD410 {
    u8 _pad0[0x50];
    i32 unk50;
    u16 unk54;
    u16 unk56;
} Src_DD410;
typedef struct Dst_DD410 {
    u8 a : 4;
    u8 b : 4;
    i32 unk4;
    u16 unk8;
    u16 unkA;
} Dst_DD410;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Src_func_080DD4F0 {
    u8 _pad0[0x50];
    i32 unk50;
    u16 unk54;
    u16 unk56;
} Src_func_080DD4F0;
typedef struct Dst_func_080DD4F0 {
    u8 a : 4;
    u8 b : 4;
    i32 unk4;
    u16 unk8;
    u16 unkA;
} Dst_func_080DD4F0;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Src_func_080DD594 {
    u8 _pad0[0x50];
    i32 unk50;
    u16 unk54;
    u16 unk56;
} Src_func_080DD594;
typedef struct Dst_func_080DD594 {
    u8 a : 4;
    u8 b : 4;
    i32 unk4;
    u16 unk8;
    u16 unkA;
} Dst_func_080DD594;
// === END MIGRATED TYPES ===

// === MIGRATED TYPES (auto-managed by migrate.py) ===
typedef struct Src_func_080DD794 {
    u8 _pad0[0x50];
    i32 unk50;
    u16 unk54;
    u16 unk56;
} Src_func_080DD794;
typedef struct Dst_func_080DD794 {
    u8 a : 4;
    u8 b : 4;
    i32 unk4;
    u16 unk8;
    u16 unkA;
} Dst_func_080DD794;
// === END MIGRATED TYPES ===

// DECOMP-MATCHED func_080D3C60 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800080C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b0.080D3C60")))
void func_080D3C60(void) {
    func_0800080C();
}
}
// DECOMP-MATCHED func_080D3C6C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800080C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b0.080D3C6C")))
void func_080D3C6C(void) {
    func_0800080C();
}
}

// DECOMP-MATCHED func_080D4040 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800080C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b0.080D4040")))
void func_080D4040(void) {
    func_0800080C();
}
}

// DECOMP-MATCHED func_080D6D8C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800080C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b1.080D6D8C")))
void func_080D6D8C(void) {
    func_0800080C();
}
}
// DECOMP-MATCHED func_080D6D98 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_linkonce.b1.080D6D98")))
i32 *func_080D6D98(i32 arg0, i32 arg1, i32 *arg2) {
    i32 off = arg1 * 4 - 4;
    i32 var_r1 = arg0 + off;
    i32 temp_r0;

    *(i32 **)var_r1 = arg2;
    if (var_r1 != arg0) {
        do {
            temp_r0 = var_r1;
            var_r1 -= 4;
            *(i32 **)var_r1 = (i32 *)temp_r0;
        } while (var_r1 != arg0);
    }
    return (i32 *)var_r1;
}
}

// DECOMP-MATCHED func_080D6E98 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_linkonce.b1.080D6E98")))
void func_080D6E98(GenObj__func_080D6E98 *arg0) {
    arg0->unk4 = -1;
    arg0->unk8 = -1;
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}
}

// DECOMP-MATCHED func_080D6ECC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D6EAC(i32);                               /* extern */

__attribute__((section(".text.code_linkonce.b1.080D6ECC")))
void func_080D6ECC(GenObj__func_080D6ECC *arg0) {
    func_080D6EAC((i32)((u8 *)arg0 + 4));
    func_080D6EAC((i32)((u8 *)arg0 + 0x20));
    arg0->unk0 = 1;
    arg0->unk1 = 0;
}

/* ATTEMPT-NOTE opencode: pola 07EA8 (byte-arith + u8 member). */
}

// DECOMP-MATCHED func_080D6F0C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_linkonce.b1.080D6F0C")))
void func_080D6F0C(GenObj__func_080D6F0C *arg0) {
    arg0->unk8 = 0;
    arg0->unk4 = 0;
    arg0->unk0 = 0;
    arg0->unk1 = 1;
}
}

// DECOMP-MATCHED func_080D6F3C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
void func_080D6F1C(u8 *);                              /* extern */

__attribute__((section(".text.code_linkonce.b1.080D6F3C")))
void func_080D6F3C(u8 *arg0) {
    func_080D6F1C(arg0 + 0x20);
    func_080D6F1C(arg0 + 4);
    arg0[0] = 0;
    arg0[1] = 1;
}
}
// DECOMP-MATCHED func_080D6F5C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
void func_080D6F3C(u8 *arg0);                             /* extern */
__attribute__((section(".text.code_linkonce.b1.080D6F5C")))
void func_080D6F5C(u8 *arg0) {
    func_080D6F3C(arg0 + 0x40);
    func_080D6F3C(arg0 + 4);
    arg0[0] = 0;
    arg0[1] = 1;
}
}

// DECOMP-MATCHED func_080D7568 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D6EEC(void *);                            /* extern */
u32 func_080D74F0(u8 *, u32);                       /* extern */

__attribute__((section(".text.code_linkonce.b1.080D7568")))
i32 func_080D7568(GenObj__func_080D7568 *arg0, u32 arg1) {
    i32 sp0;
    i32 var_r0;
    i32 var_r3;
    u32 temp_r0;
    u32 var_r1;
    u8 *var_r4;
    u32 temp_r5;

    if (arg1 <= 8U) {
        var_r3 = 0;
        var_r4 = (u8 *)arg0 + 4;
        do {
            temp_r5 = *var_r4;
            if (temp_r5 == 0) {
                sp0 = var_r3;
                temp_r0 = func_080D74F0(var_r4, arg1);
                var_r0 = 0;
                if (temp_r0 <= 0xFFU) {
                    var_r0 = 1;
                }
                if (var_r0 != 0) {
                    arg0->unk1 = (u8) temp_r5;
                    var_r1 = 0;
                    if (arg0->unk4 != 0) {
                        var_r1 = (u32) (0 - arg0->unk40) >> 0x1F;
                    }
                    arg0->unk0 = (i8) var_r1;
                    return (var_r3 << 8) | temp_r0;
                }
            }
            var_r4 += 0x3C;
            var_r3 += 1;
        } while (var_r3 <= 1);
    } else if ((arg1 == 9) && (arg0->unk1 != 0)) {
        func_080D6EEC(arg0);
        return 0;
    }
    return 0x200;
}

/* ATTEMPT-NOTE worker-d756: MATCH. Kunci: do-while (var_r3 <= 1) agar ble-loop,
   else-if agar loop-exit b END (skip tes ==9), temp u32 agar ldrb r5,[r4]
   langsung (u8 memicu copy add r5,r0). Reg: a0->r6 a1->r7 cnt->r3(sp) p->r4 t->r5 v->r2. */
}

// DECOMP-MATCHED func_080D770C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_linkonce.b1.080D770C")))
i32 *func_080D770C(i32 arg0, i32 arg1, i32 *arg2) {
    i32 tmp;
    i32 *var_r1;
    i32 *t;

    tmp = (arg1 << 3) - 8;
    var_r1 = (i32 *)(arg0 + tmp);
    *var_r1 = (i32)arg2;
    if (var_r1 != (i32 *)arg0) {
        do {
            t = var_r1;
            var_r1 -= 2;
            *var_r1 = (i32)t;
        } while (var_r1 != (i32 *)arg0);
    }
    return var_r1;
}
}

// DECOMP-MATCHED func_080D780C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080096F0(i32);                               /* extern */

__attribute__((section(".text.code_linkonce.b1.080D780C")))
i32 func_080D780C(GenObj__func_080D780C *arg0) {
    func_080096F0((i32)(arg0->unkC));
    return 0;
}
}
// DECOMP-MATCHED func_080D781C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08009864(i32);                               /* extern */

__attribute__((section(".text.code_linkonce.b1.080D781C")))
i32 func_080D781C(GenObj__func_080D781C *arg0) {
    func_08009864((i32)(arg0->unkC));
    return 0;
}
}
// DECOMP-MATCHED func_080D782C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
void func_08008FE4(u8 *, u8 *);                        /* extern */

__attribute__((section(".text.code_linkonce.b1.080D782C")))
i32 func_080D782C(GenObj__func_080D782C *arg0) {
    Range *t;
    u8 *start;
    u8 *end;
    i32 flag;
    /* pin r0: samakan alokasi register agbcc aslinya (ldr r0 + mov r2,r0) */
    register u8 *cur asm ("r0");
    u8 *saved;
    u8 *lim;

    t = (Range *)(arg0->unkC);
    flag = 0;
    start = (u8 *)(t->unk0);
    end = (u8 *)(t->unk4);
    if (start == end) {
        flag = 1;
    }
    if (flag == 0) {
        func_08008FE4(start, start + (((end - start) >> 4) << 4));
        cur = t->unk0;
        saved = cur;
        lim = (u8 *)(t->unk4);
        if (saved != lim) {
            do {
                cur += 0x10;
            } while (cur != lim);
        }
        t->unk4 = saved;
    }
    return 0;
}
}
// DECOMP-MATCHED func_080D7868 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b1.080D7868")))
void func_080D7868(void) {
    func_080098AC();
}
}
// DECOMP-MATCHED func_080D7874 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b1.080D7874")))
void func_080D7874(void) {
    func_080098AC();
}
}

// DECOMP-MATCHED func_080D7B2C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b1.080D7B2C")))
void func_080D7B2C(void) {
    func_080098AC();
}
}
// DECOMP-MATCHED func_080D7B38 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b1.080D7B38")))
void func_080D7B38(void) {
    func_080098AC();
}
}
// DECOMP-MATCHED func_080D7B44 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b1.080D7B44")))
void func_080D7B44(void) {
    func_080098AC();
}
}

// DECOMP-MATCHED func_080D7F60 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050E8C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080D7F60")))
void func_080D7F60(GenObj__func_080D7F60 *arg0) {
    if (arg0->unkAC != 0) {
        func_08050E8C();
    }
}
}
// DECOMP-MATCHED func_080D7F74 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050E5C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080D7F74")))
void func_080D7F74(GenObj__func_080D7F74 *arg0) {
    if (arg0->unkAC != 0) {
        func_08050E5C();
    }
}
}
// DECOMP-MATCHED func_080D7F88 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050E74();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080D7F88")))
void func_080D7F88(GenObj__func_080D7F88 *arg0) {
    if (arg0->unkAC != 0) {
        func_08050E74();
    }
}
}

// DECOMP-MATCHED func_080DB314 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800080C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DB314")))
void func_080DB314(void) {
    func_0800080C();
}
}

// DECOMP-MATCHED func_080DC1C8 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800080C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DC1C8")))
void func_080DC1C8(void) {
    func_0800080C();
}
}

// DECOMP-MATCHED func_080DC288 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_0800080C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DC288")))
void func_080DC288(void) {
    func_0800080C();
}
}
// DECOMP-MATCHED func_080DC294 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 LoadById__12ScriptEngineii(i32);                  /* extern */
i32 func_080D7F3C(i32);                               /* extern */
extern i32 gUnk_0300040C;

__attribute__((section(".text.code_linkonce.b2.080DC294")))
void func_080DC294(i32 arg0) {
    LoadById__12ScriptEngineii(gUnk_0300040C + 8);
    func_080D7F3C(arg0);
}
}

// DECOMP-MATCHED func_080DC9C0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DC9C0")))
void func_080DC9C0(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DC9CC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DC9CC")))
void func_080DC9CC(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DC9D8 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DC9D8")))
void func_080DC9D8(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DC9E4 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DC9E4")))
void func_080DC9E4(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DC9F0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DC9F0")))
void func_080DC9F0(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DC9FC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DC9FC")))
void func_080DC9FC(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA08 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA08")))
void func_080DCA08(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA14 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA14")))
void func_080DCA14(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA20 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA20")))
void func_080DCA20(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA2C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA2C")))
void func_080DCA2C(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA38 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA38")))
void func_080DCA38(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA44 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA44")))
void func_080DCA44(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA50 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA50")))
void func_080DCA50(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA5C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA5C")))
void func_080DCA5C(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA68 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA68")))
void func_080DCA68(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA74 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA74")))
void func_080DCA74(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA80 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA80")))
void func_080DCA80(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA8C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA8C")))
void func_080DCA8C(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCA98 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCA98")))
void func_080DCA98(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCAA4 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCAA4")))
void func_080DCAA4(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCAB0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCAB0")))
void func_080DCAB0(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCABC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCABC")))
void func_080DCABC(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCAC8 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCAC8")))
void func_080DCAC8(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCAD4 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCAD4")))
void func_080DCAD4(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCAE0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCAE0")))
void func_080DCAE0(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCAEC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCAEC")))
void func_080DCAEC(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCAF8 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCAF8")))
void func_080DCAF8(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCB04 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCB04")))
void func_080DCB04(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCB10 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCB10")))
void func_080DCB10(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCB1C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCB1C")))
void func_080DCB1C(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCB28 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCB28")))
void func_080DCB28(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCB34 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCB34")))
void func_080DCB34(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCB40 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 NpcEntityDtor(void) asm("_._10ANpcEntity");

__attribute__((section(".text.code_linkonce.b2.080DCB40")))
void func_080DCB40(void) {
    NpcEntityDtor();
}
}
// DECOMP-MATCHED func_080DCB4C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08037048();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DCB4C")))
void func_080DCB4C(void) {
    func_08037048();
}
}
// DECOMP-MATCHED func_080DCB58 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08037048();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DCB58")))
void func_080DCB58(void) {
    func_08037048();
}
}
// DECOMP-MATCHED func_080DCB64 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08037048();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DCB64")))
void func_080DCB64(void) {
    func_08037048();
}
}
// DECOMP-MATCHED func_080DCB70 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08037048();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DCB70")))
void func_080DCB70(void) {
    func_08037048();
}
}

// DECOMP-MATCHED func_080DCFCC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 vfunc_14__7AEntity();                             /* extern */

__attribute__((section(".text.code_linkonce.b2.080DCFCC")))
void func_080DCFCC(GenObj__func_080DCFCC *arg0) {
    vfunc_14__7AEntity();
    arg0->unk1C = 0;
}
}

// DECOMP-MATCHED func_080DD404 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DD404")))
void func_080DD404(void) {
    func_08039F50();
}
}
// DECOMP-MATCHED func_080DD410 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_linkonce.b2.080DD410")))
void func_080DD410(Src_DD410 *arg0, Dst_DD410 *arg1) {
    arg1->a = 0xB;
    arg1->unk4 = arg0->unk50;
    arg1->unk8 = arg0->unk54;
    arg1->unkA = arg0->unk56;
}
}

// DECOMP-MATCHED func_080DD4E4 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DD4E4")))
void func_080DD4E4(void) {
    func_08039F50();
}
}
// DECOMP-MATCHED func_080DD4F0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_linkonce.b2.080DD4F0")))
void func_080DD4F0(Src_func_080DD4F0 *arg0, Dst_func_080DD4F0 *arg1) {
    arg1->a = 0xA;
    arg1->unk4 = arg0->unk50;
    arg1->unk8 = arg0->unk54;
    arg1->unkA = arg0->unk56;
}
}

// DECOMP-MATCHED func_080DD588 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DD588")))
void func_080DD588(void) {
    func_08039F50();
}
}
// DECOMP-MATCHED func_080DD594 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_linkonce.b2.080DD594")))
void func_080DD594(Src_func_080DD594 *arg0, Dst_func_080DD594 *arg1) {
    arg1->a = 9;
    arg1->unk4 = arg0->unk50;
    arg1->unk8 = arg0->unk54;
    arg1->unkA = arg0->unk56;
}
}

// DECOMP-MATCHED func_080DD788 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DD788")))
void func_080DD788(void) {
    func_08039F50();
}
}
// DECOMP-MATCHED func_080DD794 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {


__attribute__((section(".text.code_linkonce.b2.080DD794")))
void func_080DD794(Src_func_080DD794 *arg0, Dst_func_080DD794 *arg1) {
    arg1->a = 8;
    arg1->unk4 = arg0->unk50;
    arg1->unk8 = arg0->unk54;
    arg1->unkA = arg0->unk56;
}
}


// DECOMP-MATCHED func_080DD860 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DD860")))
void func_080DD860(void) {
    func_08039F50();
}
}

// DECOMP-MATCHED func_080DD938 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DD938")))
void func_080DD938(void) {
    func_08039F50();
}
}

// DECOMP-MATCHED func_080DDC18 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DDC18")))
void func_080DDC18(void) {
    func_08039F50();
}
}

// DECOMP-MATCHED func_080DDE68 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DDE68")))
void func_080DDE68(void) {
    func_08039F50();
}
}

// DECOMP-MATCHED func_080DDF0C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DDF0C")))
void func_080DDF0C(void) {
    func_08039F50();
}
}

// DECOMP-MATCHED func_080DDFB0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DDFB0")))
void func_080DDFB0(void) {
    func_08039F50();
}
}

// DECOMP-MATCHED func_080DE050 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DE050")))
void func_080DE050(void) {
    func_08039F50();
}
}

// DECOMP-MATCHED func_080DE128 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08039F50();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080DE128")))
void func_080DE128(void) {
    func_08039F50();
}
}

// DECOMP-MATCHED func_080DE184 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_linkonce.b2.080DE184")))
void func_080DE184(GenObj__func_080DE184 *arg0) {
    u8 *var_r4;
    GenObj__func_080DE184 *temp_r2;
    u8 *temp_r5;

    var_r4 = (u8 *)arg0 + 0xC;
    temp_r5 = (u8 *)((arg0->unk8 * 4) + (i32)arg0) + 0xC;
    if (var_r4 != temp_r5) {
        do {
            temp_r2 = *(GenObj__func_080DE184 **)var_r4;
            if (temp_r2 != 0) {
                ((void (*)(void *))(temp_r2->unk4C->unkC))(temp_r2);
            }
            var_r4 += 4;
        } while (var_r4 != temp_r5);
    }
}

/* ATTEMPT-NOTE opencode: (i32)arg0 agar adds r1,r1,r0 (bukan r0,r0,r1); var u8* utk +=4. */
}

// DECOMP-MATCHED gData_code_linkonce_080DE240.data.080DE240
extern "C" {
// data tak-dirujuk di 0x080DE240 (label di-strip; tak dirujuk modul) — byte-identik dgn asm
extern const u8 gData_code_linkonce_080DE240[64] __attribute__((section(".text.code_linkonce.b2.080DE240"))) = {0x10, 0xB5, 0x88, 0xB0, 0x04, 0x1C, 0x69, 0x46, 0x00, 0x20, 0x08, 0x70, 0x20, 0x70, 0x20, 0x1D, 0xF5, 0xF7, 0x6A, 0xFC, 0x20, 0x1C, 0x08, 0xB0, 0x10, 0xBC, 0x02, 0xBC, 0x08, 0x47, 0x00, 0x00, 0x00, 0xB5, 0x02, 0x1C, 0x05, 0x48, 0x10, 0x60, 0x01, 0x20, 0x08, 0x40, 0x00, 0x28, 0x02, 0xD0, 0x10, 0x1C, 0x22, 0xF7, 0xC9, 0xF9, 0x01, 0xBC, 0x00, 0x47, 0x00, 0x00, 0xF8, 0x76, 0x0E, 0x08};
}

// DECOMP-MATCHED func_080DE280 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E0908(i32);                               /* extern */

__attribute__((section(".text.code_linkonce.b2.080DE280")))
void func_080DE280(i32 arg0) {
    func_080E0908(arg0 - 4);
}
}
// DECOMP-MATCHED func_080DE28C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080E0908(i32);                               /* extern */

__attribute__((section(".text.code_linkonce.b2.080DE28C")))
void func_080DE28C(i32 arg0) {
    func_080E0908(arg0 - 0xC);
}
}

// DECOMP-MATCHED func_080E09B0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080007EC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080E09B0")))
void func_080E09B0(void) {
    func_080007EC();
}
}

// DECOMP-MATCHED func_080E09E4 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_linkonce.b2.080E09E4")))
void func_080E09E4(GenObj__func_080E09E4 *arg0, i32 arg1) {
    i32 var_r4;
    u8 *var_r1;
    u32 temp_r2;

    var_r4 = arg1;
    var_r1 = (u8 *)arg0;
    var_r1 += 0x30;
    temp_r2 = *(u32 *)((u8 *)arg0 + 0x1C0);
    if (temp_r2 <= 0x63U) {
        *(i32 *)((temp_r2 << 2) + var_r1) = var_r4;
        *(u32 *)((u8 *)arg0 + 0x1C0) = temp_r2 + 1;
    }
}
}

// DECOMP-MATCHED func_080E0A7C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080E0A7C")))
void func_080E0A7C(void) {
    func_080098AC();
}
}
// DECOMP-MATCHED func_080E0A88 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080E0A88")))
void func_080E0A88(void) {
    func_080098AC();
}
}

// DECOMP-MATCHED func_080E0D50 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08008E64(i32, i32, i32);                     /* extern */

__attribute__((section(".text.code_linkonce.b2.080E0D50")))
i32 func_080E0D50(UnkStruct *arg0) {
    func_08008E64((i32)(arg0->unkC), (i32)(arg0->unk10), (i32)(arg0->unk14));
    return 0;
}
}
// DECOMP-MATCHED func_080E0D64 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b2.080E0D64")))
void func_080E0D64(void) {
    func_080098AC();
}
}

// DECOMP-MATCHED func_080E0EF0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
u32 ScriptEngineDtor2(void) asm("_._13AScriptEngine");

__attribute__((section(".text.code_linkonce.b3.080E0EF0")))
void func_080E0EF0(void) {
    ScriptEngineDtor2();
}
}

// DECOMP-MATCHED func_080E1018 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E1018")))
void func_080E1018(void) {
    func_080098AC();
}
}
// DECOMP-MATCHED func_080E1024 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E1024")))
void func_080E1024(void) {
    func_080098AC();
}
}
// DECOMP-MATCHED func_080E1030 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E1030")))
void func_080E1030(void) {
    func_080098AC();
}
}

// DECOMP-MATCHED func_080E10E0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E10E0")))
void func_080E10E0(void) {
    func_080098AC();
}
}
// DECOMP-MATCHED func_080E10EC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_linkonce.b3.080E10EC")))
i32 func_080E10EC(void) {
    return 1;
}
}

// DECOMP-MATCHED func_080E1A48 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08076EA8();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E1A48")))
i32 func_080E1A48(void) {
    func_08076EA8();
    return 1;
}
}
// DECOMP-MATCHED func_080E1A54 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08076E0C(void *, i32);                  /* extern */
extern i32 vtable_unk_080E5A28;

__attribute__((section(".text.code_linkonce.b3.080E1A54")))
void func_080E1A54(GenObj__func_080E1A54 *arg0, i32 arg1) {
    arg0->unk9C4 = &vtable_unk_080E5A28;
    func_08076E0C(arg0, arg1);
}
}

// DECOMP-MATCHED func_080E1DBC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08076EA8();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E1DBC")))
i32 func_080E1DBC(void) {
    func_08076EA8();
    return 1;
}
}

// DECOMP-MATCHED func_080E20F8 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08070C88();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E20F8")))
void func_080E20F8(void) {
    func_08070C88();
}
}
// DECOMP-MATCHED func_080E2104 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08070C88();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E2104")))
void func_080E2104(void) {
    func_08070C88();
}
}
// DECOMP-MATCHED func_080E2110 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08070C88();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E2110")))
void func_080E2110(void) {
    func_08070C88();
}
}

// DECOMP-MATCHED func_080E35DC (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08093308(i32);                               /* extern */

__attribute__((section(".text.code_linkonce.b3.080E35DC")))
void func_080E35DC(i32 arg0) {
    func_08093308(arg0 - 8);
}
}
// DECOMP-MATCHED func_080E35E8 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050DC8(i32, i32 *, i32, i32);                /* extern */
i32 func_08050E50(i32, i32);                          /* extern */
extern i32 gUnk_081004E0;

__attribute__((section(".text.code_linkonce.b3.080E35E8")))
void func_080E35E8(i32 arg0) {
    i32 temp_r4;

    temp_r4 = arg0 + 0x1C8;
    func_08050DC8(temp_r4, &gUnk_081004E0, 0, 0);
    func_08050E50(temp_r4, 0x39);
}
}
// DECOMP-MATCHED func_080E3610 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080088CC(i32);                             /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3610")))
u32 func_080E3610(i32 arg0) {
    return (u32) (0 - (u8) (func_080088CC(arg0 - 8) & 2)) >> 0x1F;
}
}
// DECOMP-MATCHED func_080E3628 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050DC8(i32, i32 *, i32, i32);                /* extern */
i32 func_08050E50(i32, i32);                          /* extern */
extern i32 gUnk_08100524;

__attribute__((section(".text.code_linkonce.b3.080E3628")))
void func_080E3628(i32 arg0) {
    i32 temp_r4;

    temp_r4 = arg0 + 0x1C8;
    func_08050DC8(temp_r4, &gUnk_08100524, 0, 0);
    func_08050E50(temp_r4, 0x38);
}
}
// DECOMP-MATCHED func_080E3650 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050DC8(i32, i32 *, i32, i32);                /* extern */
i32 func_08050E50(i32, i32);                          /* extern */
extern i32 gUnk_08100540;

__attribute__((section(".text.code_linkonce.b3.080E3650")))
void func_080E3650(i32 arg0) {
    i32 temp_r4;

    temp_r4 = arg0 + 0x1C8;
    func_08050DC8(temp_r4, &gUnk_08100540, 0, 0);
    func_08050E50(temp_r4, 0x38);
}
}

// DECOMP-MATCHED func_080E3730 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_linkonce.b3.080E3730")))
void func_080E3730(void) {

}
}
// DECOMP-MATCHED func_080E3734 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08050DC8(i32, i32 *, i32, i32);                /* extern */
i32 func_08050E50(i32, i32);                          /* extern */
extern i32 gUnk_08100594;

__attribute__((section(".text.code_linkonce.b3.080E3734")))
void func_080E3734(i32 arg0) {
    i32 temp_r4;

    temp_r4 = arg0 + 0x1C8;
    func_08050DC8(temp_r4, &gUnk_08100594, 0, 0);
    func_08050E50(temp_r4, 0x38);
}
}
// DECOMP-MATCHED func_080E375C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080088CC(i32);                             /* extern */

__attribute__((section(".text.code_linkonce.b3.080E375C")))
u32 func_080E375C(i32 arg0) {
    return (u32) (0 - (u8) (func_080088CC(arg0 - 8) & 2)) >> 0x1F;
}
}

// DECOMP-MATCHED func_080E3858 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_linkonce.b3.080E3858")))
void func_080E3858(void) {

}
}
// DECOMP-MATCHED func_080E385C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080088C4(i32);

__attribute__((section(".text.code_linkonce.b3.080E385C")))
i32 func_080E385C(i32 arg0) {
    return func_080088C4(arg0 - 8);
}
}
// DECOMP-MATCHED func_080E3868 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080088CC(i32);                               /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3868")))
i32 func_080E3868(i32 arg0) {
    return func_080088CC(arg0 - 8);
}
}

// DECOMP-MATCHED func_080E38E0 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {

__attribute__((section(".text.code_linkonce.b3.080E38E0")))
u8 func_080E38E0(ObjE *arg0) {
    if (arg0->unk1B8 != 0) {
        return arg0->unk1B9;
    }
    if (arg0->unk0->unk4C(arg0) == 0) {
        return 1;
    }
    return 0;
}
}
// DECOMP-MATCHED func_080E3910 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_linkonce.b3.080E3910")))
i32 func_080E3910(void) {
    return 1;
}
}
// DECOMP-MATCHED func_080E3914 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D0340();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3914")))
void func_080E3914(void) {
    func_080D0340();
}
}
// DECOMP-MATCHED func_080E3920 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D02F0();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3920")))
void func_080E3920(void) {
    func_080D02F0();
}
}
// DECOMP-MATCHED func_080E392C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D035C();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E392C")))
void func_080E392C(void) {
    func_080D035C();
}
}

// DECOMP-MATCHED func_080E3A44 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D06A8();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3A44")))
void func_080E3A44(void) {
    func_080D06A8();
}
}
// DECOMP-MATCHED func_080E3A50 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D0678();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3A50")))
i32 func_080E3A50(void) {
    return func_080D0678();
}
}
// DECOMP-MATCHED func_080E3A5C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D0644(i32, u8);                           /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3A5C")))
void func_080E3A5C(i32 dummy, i32 arg1, u8 arg2) {
    func_080D0644(arg1, arg2);
}

/* ATTEMPT-NOTE opencode: dummy agar arg1=r1, arg2=r2 (lsls/lsrs u8). */
}
// DECOMP-MATCHED func_080E3A6C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
void func_080D0558(i32, i32, i32, i32);                /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3A6C")))
void func_080E3A6C(void *arg0, i32 arg1, i32 arg2, i32 arg3, i32 arg4) {
    func_080D0558(arg1, arg2, arg3, arg4);
}
}
// DECOMP-MATCHED func_080E3A80 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D0454(i32);                               /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3A80")))
void func_080E3A80(void) {
    func_080D0454(0);
}
}
// DECOMP-MATCHED func_080E3A8C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080D0444(i32, i32);                          /* extern */

__attribute__((section(".text.code_linkonce.b3.080E3A8C")))
void func_080E3A8C(i32 dummy, i32 arg1, i32 arg2) {
    func_080D0444(arg1, arg2);
}

/* ATTEMPT-NOTE opencode: dummy agar arg di r1/r2. */
}

// DECOMP-MATCHED func_080E3B60 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_08094268(i32 **, i32);                         /* extern */
i32 func_080D02EC();                                  /* extern */
extern i32 vtable_unk_080E7F0C;

__attribute__((section(".text.code_linkonce.b3.080E3B60")))
void func_080E3B60(i32 **arg0, i32 arg1) {
    *arg0 = &vtable_unk_080E7F0C;
    func_080D02EC();
    func_08094268(arg0, arg1);
}
}

// DECOMP-MATCHED func_080E3DB4 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_linkonce.b3.080E3DB4")))
u16 *func_080E3DB4(u16 *arg0, u16 *arg1, u16 *arg2) {
    i32 temp_r0;
    i32 var_r2;
    u8 *var_r3;
    u16 temp_r1;

    var_r3 = (u8 *)arg0;
    var_r2 = ((i32)((u8 *)arg1 - var_r3)) >> 3;
    if (var_r2 > 0) {
        temp_r1 = *arg2;
    loop_2:
        if (*(u16 *)var_r3 != temp_r1) {
            var_r3 += 2;
            if (*(u16 *)var_r3 != temp_r1) {
                var_r3 += 2;
                if (*(u16 *)var_r3 != temp_r1) {
                    var_r3 += 2;
                    if (*(u16 *)var_r3 != temp_r1) {
                        var_r3 += 2;
                        var_r2 -= 1;
                        if (var_r2 <= 0) {
                            goto block_7;
                        }
                        goto loop_2;
                    }
                }
            }
        }
        goto block_16;
    }
block_7:
    temp_r0 = ((i32)((u8 *)arg1 - var_r3)) >> 1;
    if (temp_r0 == 1) {
        goto c1;
    }
    if (temp_r0 <= 1) {
        goto ret_arg1;
    }
    if (temp_r0 == 2) {
        goto c2;
    }
    if (temp_r0 != 3) {
        goto ret_arg1;
    }
    if (*(u16 *)var_r3 != *arg2) {
        var_r3 += 2;
    }
c2:
    if (*(u16 *)var_r3 != *arg2) {
        var_r3 += 2;
    }
c1:
    if (*(u16 *)var_r3 != *arg2) {
        goto ret_arg1;
    }
block_16:
    return (u16 *)var_r3;
ret_arg1:
    return arg1;
}

/* ATTEMPT-NOTE opencode: byte-arith (u8*) utk diff>>3 dan +=2; compare-chain goto utk tail. */
}
// DECOMP-MATCHED func_080E3E28 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
__attribute__((section(".text.code_linkonce.b3.080E3E28")))
u16 *func_080E3E28(u16 *arg0, u16 *arg1, u16 *arg2) {
    i32 temp_r0;
    i32 var_r2;
    u8 *var_r3;
    u16 temp_r1;

    var_r3 = (u8 *)arg0;
    var_r2 = ((i32)((u8 *)arg1 - var_r3)) >> 3;
    if (var_r2 > 0) {
        temp_r1 = *arg2;
    loop_2:
        if (*(u16 *)var_r3 != temp_r1) {
            var_r3 += 2;
            if (*(u16 *)var_r3 != temp_r1) {
                var_r3 += 2;
                if (*(u16 *)var_r3 != temp_r1) {
                    var_r3 += 2;
                    if (*(u16 *)var_r3 != temp_r1) {
                        var_r3 += 2;
                        var_r2 -= 1;
                        if (var_r2 <= 0) {
                            goto block_7;
                        }
                        goto loop_2;
                    }
                }
            }
        }
        goto block_16;
    }
block_7:
    temp_r0 = ((i32)((u8 *)arg1 - var_r3)) >> 1;
    if (temp_r0 == 1) {
        goto c1;
    }
    if (temp_r0 <= 1) {
        goto ret_arg1;
    }
    if (temp_r0 == 2) {
        goto c2;
    }
    if (temp_r0 != 3) {
        goto ret_arg1;
    }
    if (*(u16 *)var_r3 != *arg2) {
        var_r3 += 2;
    }
c2:
    if (*(u16 *)var_r3 != *arg2) {
        var_r3 += 2;
    }
c1:
    if (*(u16 *)var_r3 != *arg2) {
        goto ret_arg1;
    }
block_16:
    return (u16 *)var_r3;
ret_arg1:
    return arg1;
}

/* ATTEMPT-NOTE opencode: pola E3DB4 + tail dua asrs eksplisit. */

/* ATTEMPT-NOTE opencode: pola E3DB4; sisa 1 byte: >>1>>1 di-fold jadi >>2 (ref 2x asrs#1); tmp2/var-reuse dicoba. */
}

// DECOMP-MATCHED func_080E4238 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
i32 func_080098AC();                                  /* extern */

__attribute__((section(".text.code_linkonce.b3.080E4238")))
void func_080E4238(void) {
    func_080098AC();
}
}

// DECOMP-MATCHED func_080E44E4 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
void* __builtin_new(i32);                             /* extern */
i32 func_080324BC(i32, i32, i32, i32);              /* extern */

__attribute__((section(".text.code_linkonce.b3.080E44E4")))
i32 func_080E44E4(i32 arg0) {
    i32 t;
    struct Params_func_080E44E4 w;
    volatile u8 flag;

    t = (i32)(__builtin_new(0x8C));
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 5, 0x1b);
}
}

// DECOMP-MATCHED func_080E581C (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
void __builtin_delete(void *);                             /* extern */
extern i32 gUnk_03000414;
extern i32 vtable_unk_080E8594;

void func_080E581C(GenObj__func_080E581C *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E8594;
    gUnk_03000414 = arg0->unk0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}

// DECOMP-MATCHED func_080E5844 (dari code_linkonce.s; cek manusia sebelum ke src/)
extern "C" {
void __builtin_delete(void *);                             /* extern */
extern i32 gUnk_03000414;
extern i32 vtable_unk_080E8594;

void func_080E5844(GenObj__func_080E5844 *arg0, i32 arg1) {
    arg0->unk4 = &vtable_unk_080E8594;
    gUnk_03000414 = arg0->unk0;
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}
}

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
