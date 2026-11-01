typedef struct Vtbl1FAA8 {
    u8 _pad0[0x40];
    s32 (*unk40)(void *, s32);
} Vtbl1FAA8;
typedef struct GenObj {
    Vtbl1FAA8 *unk0;
} GenObj;
s32 func_0801FAA8(GenObj *arg0, s32 arg1) {
    return arg0->unk0->unk40(arg0, arg1);
}
