s32 func_080A58EC(s32 *, void *, s32, s32);           /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    u8 _pad6[2];
    s32 unk8;
    s32 unkA;
    s32 unkC;
    s32 unkE;
    u8 _pad12[23];
    s32 unk29;
} GenObj;
void func_080A5960(GenObj *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    GenObj *sp4;

    func_080A58EC(&sp0, arg0, arg1, arg2);
    sp4 = sp0;
    if (arg0->unkA != sp4.unk0) {
        arg0->unk29 = 1;
        arg0->unk8 = (s32) (sp4.unk0 << 0x10);
    }
    if (arg0->unkE != sp4.unk2) {
        arg0->unk29 = 1;
        arg0->unkC = (s32) (sp4.unk2 << 0x10);
    }
}
