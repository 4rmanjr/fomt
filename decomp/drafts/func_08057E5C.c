// DECOMP-MATCHED func_08057E5C (dari code_0803EE94.s; cek manusia sebelum ke src/)
s32 func_08052984(void ***, s32);                     /* extern */

typedef struct Vtbl57E5C { u8 _pad0[8]; void (*unk8)(void *, s32); } Vtbl57E5C;
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
typedef struct Obj57E5C { Vtbl57E5C *unk0; } Obj57E5C;
s32 *func_08057E5C(s32 *arg0, GenObj *arg1) {
    Obj57E5C *sp0;
    s32 temp_r1;

    func_08052984((void ***)&sp0, arg1->unk4);
    if (sp0 != 0) {
        ((void (*)(void *,...))(sp0->unk0->unk8))(sp0, 3);
    }
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
