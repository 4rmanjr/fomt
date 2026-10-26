s32 func_080D0BA8(s32 *);                             /* extern */
extern void *gUnk_03000420;

typedef struct GenObj {
    u8 _pad0[28];
    s32 unk1C;
} GenObj;
void func_080D0454(void) {
    GenObj *sp0;
    void *sp10;
    s32 sp18;

    gUnk_03000420->unk14 = 1;
    sp0 = 1;
    func_080D0BA8(&sp0);
    sp0 = 3;
    sp10 = gUnk_03000420 + 0x24;
    sp18 = 2;
    sp0.unk1C = 0;
    func_080D0BA8(&sp0);
}
