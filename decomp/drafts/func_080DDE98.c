typedef struct GenObj {
    u8 _pad0[0x54];
    s16 unk54;
    s16 unk56;
} GenObj;

void func_08039F90(void *, void *, void *, void *, s16, s16, s32, s32);

void func_080DDE98(GenObj *arg0, void *arg1, void *arg2, void *arg3) {
    func_08039F90(arg0, arg1, arg2, arg3, arg0->unk54, arg0->unk56, 0, 2);
}
