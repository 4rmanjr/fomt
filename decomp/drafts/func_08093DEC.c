extern s32 gUnk_081007AC;

typedef struct Vtbl20 {
    u8 _pad0[0x20];
    void (*unk20)(void *, s32, s32);
} Vtbl20;
typedef struct GenObj {
    Vtbl20 *unk0;
    u8 _pad4[4];
    void *unk8;
    u8 _padC;
    u8 unkD;
    u8 _padE[6];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
} GenObj;
void func_08093DEC(GenObj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    arg0->unk0->unk20(arg0, arg1, arg2);
    arg0->unk14 = arg3;
    arg0->unk18 = arg4;
    arg0->unk1C = arg5;
    arg0->unk20 = arg6;
    arg0->unk24 = arg7;
    arg0->unk8 = &gUnk_081007AC;
    arg0->unkD = 0;
}
