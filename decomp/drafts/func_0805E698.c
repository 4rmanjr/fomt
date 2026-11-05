// DECOMP-MATCHED func_0805E698 (dari code_0803EE94.s; cek manusia sebelum ke src/)
s32 func_0805D170(void ***, s32);                     /* extern */

typedef struct Vtbl0805E698 { u8 _pad0[8]; void (*unk8)(void *, s32); } Vtbl0805E698;
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
} GenObj;
typedef struct Obj0805E698 { Vtbl0805E698 *unk0; } Obj0805E698;
s32 *func_0805E698(s32 *arg0, GenObj *arg1) {
    Obj0805E698 *sp0;
    s32 temp_r1;

    func_0805D170((void ***)&sp0, arg1->unk4);
    if (sp0 != 0) {
        ((void (*)(void *,...))(sp0->unk0->unk8))(sp0, 3);
    }
    temp_r1 = arg1->unk8;
    arg1->unk8 = 0;
    *arg0 = temp_r1;
    return arg0;
}
