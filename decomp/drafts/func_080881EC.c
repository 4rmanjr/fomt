s32 func_08085EEC(s32);                             /* extern */
s8 func_08086A08(s32);                              /* extern */
void *__builtin_new(s32);                           /* extern */
extern s32 vtable_unk_080E5C64;
extern s32 vtable_unk_080E5D94;

typedef struct VtblA {
    void *unk0;
    void *unk4;
    void (*unk8)(void *, s32);
} VtblA;
typedef struct ObjA {
    VtblA *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} ObjA;
typedef struct ObjB {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s8 unk10;
} ObjB;
typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    s32 unk8;
    u8 _padC[4];
    s32 unk10;
} GenObj;
ObjB *func_080881EC(ObjB **arg0, GenObj *arg1) {
    ObjB *temp_r0_3;
    ObjA *temp_r3_2;
    ObjA *temp_r2;
    s32 temp_r3;
    s32 temp_r0_2;
    s32 var_r7;
    s32 var_sl;
    s8 temp_r0;

    temp_r0 = func_08086A08(arg1->unk4);
    if (temp_r0 != -1) {
        temp_r0_2 = func_08085EEC(arg1->unk4);
        var_sl = 1;
        if (temp_r0_2 != 0) {
            var_sl = 2;
        }
        temp_r2 = __builtin_new(0x10);
        temp_r3 = arg1->unk8;
        arg1->unk8 = 0;
        var_r7 = 1;
        if (temp_r0_2 != 0) {
            var_r7 = 2;
        }
        temp_r2->unk0 = &vtable_unk_080E5D94;
        temp_r2->unk4 = temp_r3;
        temp_r2->unk8 = arg1->unk10;
        temp_r2->unkC = var_r7;
        temp_r3_2 = temp_r2;
        temp_r0_3 = __builtin_new(0x14);
        temp_r0_3->unk0 = &vtable_unk_080E5C64;
        temp_r0_3->unk4 = (s32) temp_r3_2;
        temp_r0_3->unk8 = arg1->unk10;
        temp_r0_3->unkC = var_sl;
        temp_r0_3->unk10 = temp_r0;
        *arg0 = temp_r0_3;
        if (temp_r3_2 != 0) {
            temp_r3_2->unk0->unk8(temp_r3_2, 3);
        }
    } else {
        temp_r3 = arg1->unk8;
        arg1->unk8 = 0;
        *arg0 = (ObjB *) temp_r3;
    }
    return *arg0;
}

/* ATTEMPT-NOTE pi: len 162 vs ref 192 (-30: ref simpan lebih banyak reg/stack: sub sp,0x14 + push r4-r7?); kandidat kurang spill; tambah var agar allocator simpan r6/r7. */
