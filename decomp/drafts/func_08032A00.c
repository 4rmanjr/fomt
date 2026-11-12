s32 func_080324BC(void *, s32, s32, s32, s32, s32, s32, u8); /* extern */
extern s32 vtable_unk_080E6864;

typedef struct GenObj {
    u8 _pad0[4];
    void *unk4;
} GenObj;

void *func_08032A00(GenObj *arg0, s32 arg1) {
    u8 z;
    u8 *zp;

    zp = &z;
    *zp = 0;
    func_080324BC(arg0, arg1, 6, 0x20, 1, 0, 0, z);
    arg0->unk4 = &vtable_unk_080E6864;
    return arg0;
}
