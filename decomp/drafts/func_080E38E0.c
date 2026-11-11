typedef struct VtblE {
    u8 _pad0[0x4C];
    s32 (*unk4C)(void *);
} VtblE;

typedef struct ObjE {
    struct VtblE *unk0;
    u8 _pad4[72];
    s32 unk4C;
    u8 _pad50[360];
    u8 unk1B8;
    u8 unk1B9;
} ObjE;

u8 func_080E38E0(ObjE *arg0) {
    if (arg0->unk1B8 != 0) {
        return arg0->unk1B9;
    }
    if (arg0->unk0->unk4C(arg0) == 0) {
        return 1;
    }
    return 0;
}
