s32 func_08039F90(void *, s32, s32, s32, s32);        /* extern */

typedef struct GenObj {
    u8 _pad0[84];
    s32 unk54;
    s32 unk56;
    u8 _pad5A[42];
    s32 unk84;
} GenObj;
void func_080DD994(GenObj *arg0) {
    func_08039F90(arg0, (s32) arg0->unk54, (s32) arg0->unk56, (s32) (s8) arg0->unk84, 1);
}
