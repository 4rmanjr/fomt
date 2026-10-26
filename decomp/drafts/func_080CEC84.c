s32 func_0805E8F0(void *);                          /* extern */
s32 func_080CE120(s32 *, s32, s32);                     /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    u8 _pad5[47];
    s32 unk34;
    s32 unk36;
    u8 _pad3A[66];
    s32 unk7C;
    s32 unk80;
    s32 unk84;
} GenObj;
void func_080CEC84(GenObj *arg0, s32 arg1, s32 arg2) {
s32 sp0;

    arg0->unk84 = 1;
    *((arg0 + 0x84) - 0x1C) = 1;
    do {

    } while ((s32) (func_0805E8F0(arg0 + 0x38) << 0x1D) >= 0);
    func_080CE120(&sp0, arg0->unk0, arg1);
    arg0->unk34 = (s16) (sp0 + 8);
    arg0->unk36 = (s16) sp0.unk1;
    arg0->unk7C = arg1;
    arg0->unk80 = arg2;
}
