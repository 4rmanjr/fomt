typedef struct Vt_3853C {
    u8 _pad0[0x64];
    s32 (*unk64)();
} Vt_3853C;

typedef struct O1_3853C {
    Vt_3853C *unk0;
} O1_3853C;

typedef struct Obj_3853C {
    O1_3853C *unk0;
    u8 _pad4[0x24];
    u16 unk28;
    u8 _pad2A[2];
} Obj_3853C;

typedef struct GenObj_3853C {
    void *unk0;
    void *unk4;
} GenObj_3853C;

typedef struct Zed_3853C {
    u8 b;
} Zed_3853C;

s32 func_080A4A00(void *, s32, u16, s32, s32, s32, Zed_3853C); /* extern */
extern s32 vtable_unk_080E73E8;

void *func_0803853C(GenObj_3853C *arg0, Obj_3853C *arg1) {
    Zed_3853C z;
    u8 *pz;
    s32 temp_r1;

    arg0->unk0 = arg1;
    arg0->unk4 = &vtable_unk_080E73E8;
    temp_r1 = arg1->unk0->unk0->unk64();
    pz = &z.b;
    *pz = 0;
    func_080A4A00((u8 *)arg0 + 8, temp_r1, arg1->unk28, (s32) arg1->unk0, 2, 7, z);
    return arg0;
}
