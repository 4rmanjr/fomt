typedef struct Vtbl38 {
    u8 _pad0[0x38];
    void (*unk38)(void *, s32, s32);
} Vtbl38;
typedef struct GenObj {
    Vtbl38 *unk0;
    u8 _pad4[8];
    u8 unkC;
} GenObj;
void func_080940E4(GenObj *arg0) {
    if (arg0->unkC != 0) {
        arg0->unk0->unk38(arg0, 0, 1);
    } else {
        arg0->unk0->unk38(arg0, 1, 1);
    }
}
