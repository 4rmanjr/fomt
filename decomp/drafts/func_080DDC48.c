s32 func_08039F90(s32, s32, s32, s32);                /* extern */

typedef struct GenObj {
    u8 _pad0[84];
    s32 unk54;
    s32 unk56;
    u8 _pad5A[14];
    s32 unk68;
} GenObj;
void func_080DDC48(GenObj *arg0) {
    func_08039F90((s32) arg0->unk54, (s32) arg0->unk56, (s32) arg0->unk68 >> 0x10, 2);
}
