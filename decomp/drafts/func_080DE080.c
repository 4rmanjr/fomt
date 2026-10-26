s32 func_08039F90(s32, s32, s32, s32);                /* extern */

typedef struct GenObj {
    u8 _pad0[84];
    s32 unk54;
    s32 unk56;
} GenObj;
void func_080DE080(GenObj *arg0) {
    func_08039F90((s32) arg0->unk54, (s32) arg0->unk56, 0, 2);
}
