#include "prelude.h"
// DECOMP-MATCHED func_08037F74 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj__func_08037F74 {
    u8 _pad0[84];
    u8 unk54;
} GenObj__func_08037F74;

__attribute__((section(".text.code_entities_08034CEC.08037F74")))
void func_08037F74(GenObj__func_08037F74 *arg0) {
    arg0->unk54 = 0xA;
}
// DECOMP-MATCHED func_08038E90 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
typedef struct GenObj__func_08038E90 {
    u8 _pad0[12];
    i32 unkC;
    u8 _pad10[60];
    i32 unk4C;
    u8 unk50;
} GenObj__func_08038E90;

__attribute__((section(".text.code_entities_08034CEC.08038E90")))
void func_08038E90(GenObj__func_08038E90 *arg0) {
    GenObj__func_08038E90 *temp_r0;

    temp_r0 = (GenObj__func_08038E90 *)arg0->unkC;
    temp_r0->unk4C = 0x01200000;
    temp_r0->unk50 = 1;
}
// DECOMP-MATCHED func_080378B8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
i32 func_080378EC(i32, i32);
i32 SetAnim__12AActorEntityUi(i32, i32);
i32 SetLocation__12AActorEntityRC13ActorLocation(i32, i32 *);
i32 func_080A198C(i32 *);

typedef struct GenObj__func_080378B8 {
    u8 _pad0[34];
    u16 unk22;
} GenObj__func_080378B8;

__attribute__((section(".text.code_entities_08034CEC.080378B8")))
void func_080378B8(GenObj__func_080378B8 *arg0) {
    i32 sp[2];
    i32 t;

    func_080A198C(&sp[0]);
    SetLocation__12AActorEntityRC13ActorLocation((i32)arg0, &sp[0]);
    t = func_080378EC((i32)arg0, 0);
    if (arg0->unk22 != t) {
        SetAnim__12AActorEntityUi((i32)arg0, t);
    }
}
// DECOMP-MATCHED func_08037A04 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
i32 func_08037A38(i32, i32);
i32 func_080A19EC(i32 *);

typedef struct GenObj__func_08037A04 {
    u8 _pad0[34];
    u16 unk22;
} GenObj__func_08037A04;

__attribute__((section(".text.code_entities_08034CEC.08037A04")))
void func_08037A04(GenObj__func_08037A04 *arg0) {
    i32 sp[2];
    i32 t;

    func_080A19EC(&sp[0]);
    SetLocation__12AActorEntityRC13ActorLocation((i32)arg0, &sp[0]);
    t = func_08037A38((i32)arg0, 0);
    if (arg0->unk22 != t) {
        SetAnim__12AActorEntityUi((i32)arg0, t);
    }
}
// DECOMP-MATCHED func_08036768 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
i32 func_08035908(i32, i32);
i32 func_08035940(i32, i32);
typedef struct GenObj__func_08036768 {
    u8 _pad0[33];
    u8 unk21;
    u8 _pad22[18];
    u8 *unk34;
    u8 _pad38[8521];
    i32 unk2181;
} GenObj__func_08036768;

__attribute__((section(".text.code_entities_08034CEC.08036768")))
void func_08036768(GenObj__func_08036768 *arg0) {
    i32 var_r1;
    i32 var_r1b;
    i32 var_r5;

    var_r1 = 0x27B;
    var_r1b = 0x27F;
    var_r5 = 2;
    if ((((u32) (arg0->unk34[0x2181] << 0x1E)) >> 0x1E) == 1) {
        var_r1 = 0x293;
        var_r5 = 1;
    }
    func_08035908((i32)arg0, var_r1);
    func_08035940((i32)arg0, var_r1b);
    arg0->unk21 = (u8)var_r5;
}
// DECOMP-MATCHED func_080367C8 (dari code_entities_08034CEC.s; cek manusia sebelum ke src/)
i32 __builtin_new(i32);
i32 func_080324BC(i32, i32, i32, i32);

__attribute__((section(".text.code_entities_08034CEC.080367C8")))
i32 func_080367C8(i32 arg0) {
    i32 t;
    volatile struct { i32 a; i32 b; i32 c; } w;
    volatile u8 flag;

    func_08036768((GenObj__func_08036768 *)arg0);
    t = __builtin_new(0x8C);
    w.a = 1; w.b = 0; w.c = 0; flag = 0;
    return func_080324BC(t, arg0, 5, 0x1B);
}
