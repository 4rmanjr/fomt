#include "prelude.h"
// DECOMP-MATCHED func_0805039C (dari code_0803EE94.s; cek manusia sebelum ke src/)
i32 func_08009940(void *, void *);                    /* extern */
i32 func_0804F0E0(void *);                            /* extern */
void func_0805039C();

typedef struct GenObj__func_0805039C {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
    u8 unkC;
} GenObj__func_0805039C;

__attribute__((section(".text.code_0803EE94.0805039C")))
void func_0805039C(GenObj__func_0805039C *arg0) {
    register u8 *temp_r5 asm("r5");
    register i32 temp_r6 asm("r6");
    i32 t;

    temp_r6 = arg0->unk8;
    if (temp_r6 == 0) {
        func_0804F0E0((u8 *)arg0 + 0xD0);
        t = arg0->unk4;
        temp_r5 = (u8 *)arg0 + 0x20;
        if (t != 1) {
            func_08009940(temp_r5, (u8 *)arg0 + (0x98 << 1));
        }
        func_08009940(temp_r5, (u8 *)arg0 + (0xA4 << 1));
        arg0->unkC = temp_r6;
    }
    {
        i32 t2 = arg0->unk8;
        if (t2 >= 0) {
            if (t2 <= 2) {
                arg0->unk8 = 1;
            }
        }
    }
}
// DECOMP-MATCHED func_08050D0C (dari code_0803EE94.s; cek manusia sebelum ke src/)
i32 __builtin_delete(i32 *);                          /* extern */
i32 func_0804F69C(i32, i32);                          /* extern */

__attribute__((section(".text.code_0803EE94.08050D0C")))
void func_08050D0C(i32 *arg0, i32 arg1) {
    i32 temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 != 0) {
        func_0804F69C(temp_r0, 3);
    }
    if (1 & arg1) {
        __builtin_delete(arg0);
    }
}


// DECOMP-MATCHED func_08050D5C (dari code_0803EE94.s; cek manusia sebelum ke src/)

__attribute__((section(".text.code_0803EE94.08050D5C")))
void func_08050D5C(i32 *arg0) {
    func_0805039C((void *)(*arg0));
}
// DECOMP-MATCHED func_08077C40 (dari code_0803EE94.s; cek manusia sebelum ke src/)
i32 __builtin_new(i32);                               /* extern */
i32 func_080773E8();                                /* extern */
extern i32 vtable_unk_080E7BA4;

typedef struct GenObj__func_08077C40 {
    void *unk0;
    i32 unk4;
    i32 unk8;
} GenObj__func_08077C40;

__attribute__((section(".text.code_0803EE94.08077C40")))
void *func_08077C40(GenObj__func_08077C40 *arg0, i32 *arg1) {
    i32 temp_r1;

    arg0->unk0 = &vtable_unk_080E7BA4;
    __builtin_new(0x730);
    arg0->unk4 = func_080773E8();
    temp_r1 = *arg1;
    *arg1 = 0;
    arg0->unk8 = temp_r1;
    return arg0;
}
// DECOMP-MATCHED func_0807F5F0 (dari code_0803EE94.s; cek manusia sebelum ke src/)
i32 func_0807EF90(i32);                               /* extern */

typedef struct GenObj__func_0807F5F0 {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_0807F5F0;

__attribute__((section(".text.code_0803EE94.0807F5F0")))
i32 *func_0807F5F0(i32 *arg0, GenObj__func_0807F5F0 *arg1) {
    i32 temp_r1;

    func_0807EF90(arg1->unk4);
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
// DECOMP-MATCHED func_080804CC (dari code_0803EE94.s; cek manusia sebelum ke src/)
i32 func_0807F8C8(i32);                               /* extern */

typedef struct GenObj__func_080804CC {
    u8 _pad0[4];
    i32 unk4;
    i32 unk8;
} GenObj__func_080804CC;

__attribute__((section(".text.code_0803EE94.080804CC")))
i32 *func_080804CC(i32 *arg0, GenObj__func_080804CC *arg1) {
    i32 temp_r1;

    func_0807F8C8(arg1->unk4);
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
