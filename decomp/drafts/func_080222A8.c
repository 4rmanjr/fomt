s32 func_08022320(s32);                             /* extern */
s32 func_08022334(s32);                             /* extern */
s32 func_080324BC(void *, void *, s32, s32, s32, s32, s32); /* extern */
extern s32 vtable_unk_080E64B4;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;

void *func_080222A8(GenObj *arg0, void *arg1, s32 arg2) {
    s32 sp0[4];
    s32 temp_r5;

    temp_r5 = func_08022320(arg2);
    sp0[2] = 0;
    ((s8 *) sp0)[12] = 0;
    func_080324BC(arg0, arg1, 5, 0xD, temp_r5, func_08022334(arg2), sp0[2]);
    arg0->unk4 = &vtable_unk_080E64B4;
    return arg0;
}
