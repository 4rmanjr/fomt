s32 func_08008B6C(s32, s32);                       /* extern */

typedef struct GenObj {
    u8 _pad0[0xAC];
    u32 unkAC;
    u8 _padB0[0x18];
    u8 unkC8;
    u8 _padC9[0x0F];
    u8 unkD8;
    u8 unkD9;
    u8 _padDA[2];
    u8 unkDC;
} GenObj;

void func_080B9428(GenObj *arg0) {
    u8 *p;

    arg0->unkD8 = 1;
    if (arg0->unkAC <= 1U) {
        p = (u8 *) arg0 + 0xDC;
        *p = 0;
        p -= 0x14;
        *p = 0;
        p += 0x11;
        *p = 1;
        arg0->unkAC = 5U;
        func_08008B6C((s32) ((u8 *) arg0 + 0x70C), 0xCC);
    }
}
