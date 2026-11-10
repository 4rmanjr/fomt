typedef struct GenObj {
    u8 _pad0[124];
    s32 unk7C;
} GenObj;
void func_080CECD0(GenObj *arg0) {
    u8 *p;

    p = (u8 *) arg0 + 0x84;
    *p = 0;
    p -= 0x1C;
    *p = 0;
    *(s32 *) ((u8 *) arg0 + 0x7C) = 0x12;
    *(s32 *) ((u8 *) arg0 + 0x80) = 0;
}
