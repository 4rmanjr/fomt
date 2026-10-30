typedef struct Vtbl1FAB8 {
    u8 _pad0[0x44];
    s32 (*unk44)(void *, s32);
} Vtbl1FAB8;
typedef struct GenObj {
    Vtbl1FAB8 *unk0;
} GenObj;
s32 func_0801FAB8(GenObj *arg0, s32 arg1) {
    return arg0->unk0->unk44(arg0, arg1);
}
