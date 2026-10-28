s32 func_080A5BD8(void *, s32 *, s32, s32);             /* extern */
extern s32 gUnk_08106B24;

typedef struct GenObj {
    u8 _pad0[4];
    s32 unk4;
    u8 _pad8[33];
    u8 unk29;
} GenObj;
void func_080A635C(GenObj *arg0) {
    s32 temp_r0;

    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 41:
        func_080A5BD8(arg0, &gUnk_08106B24, 1, 0x11);
        break;
    case 42:
        func_080A5BD8(arg0, &gUnk_08106B24, 0x10, 0x11);
        break;
    case 43:
        func_080A5BD8(arg0, &gUnk_08106B24, 0x18, 0x11);
        break;
    default:
        return;
    }
    arg0->unk29 = 1;
}
