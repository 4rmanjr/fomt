s32 func_08008CD0(s32);                               /* extern */

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
} GenObj;
s32 func_080167CC(GenObj *arg0) {
    return func_08008CD0(arg0->unk4 + 0xBC);
}
