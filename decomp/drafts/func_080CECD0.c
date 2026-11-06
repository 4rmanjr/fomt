typedef struct GenObj {
    u8 _pad0[124];
    s32 unk7C;
} GenObj;
void func_080CECD0(GenObj *arg0) {
    u8 *p;
    s32 z;

    z = 0;
    p = (u8 *) arg0 + 0x84;
    *p = (u8) z;
    *(p - 0x1C) = (u8) z;
    *(s32 *) ((u8 *) arg0 + 0x7C) = 0x12;
    *(s32 *) ((u8 *) arg0 + 0x80) = z;
}
