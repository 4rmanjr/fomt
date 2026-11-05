// DECOMP-MATCHED func_080D05DC (dari code_809E804.s; cek manusia sebelum ke src/)
s32 func_080D0BA8(s32 *);                             /* extern */
typedef struct S_D05DC { u8 _pad0[20]; s32 unk14; u8 _pad18[24]; s32 unk30; } S_D05DC;
extern S_D05DC *gUnk_03000420;
typedef struct SP_D05DC { s32 v; u8 _pad4[12]; void *ptr; u8 _pad14[4]; s32 num; u16 tail; u8 _pad1E[2]; } SP_D05DC;
void func_080D05DC(void) {
    SP_D05DC sp0;

    gUnk_03000420->unk14 = 5;
    if (gUnk_03000420->unk30 != 0) {
        sp0.v = 1;
        func_080D0BA8(&sp0.v);
    }
    sp0.v = 4;
    sp0.ptr = (void *)((u8 *)gUnk_03000420 + 0x24);
    sp0.num = 2;
    sp0.tail = 0;
    func_080D0BA8((s32 *)&sp0);
    sp0.v = 3;
    sp0.ptr = (void *)((u8 *)gUnk_03000420 + 0x2C);
    sp0.num = 2;
    sp0.tail = 0;
    func_080D0BA8((s32 *)&sp0);
    sp0.v = 2;
    sp0.ptr = (void *)((u8 *)gUnk_03000420 + 0x28);
    sp0.num = 2;
    sp0.tail = 0;
    func_080D0BA8((s32 *)&sp0);
}
