s32 func_080D0BA8();                                  /* extern */
extern void *gUnk_03000420;

typedef struct GenObj {
    u8 _pad0[28];
    s32 unk1C;
} GenObj;
void func_080D0558(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    GenObj *sp0;
    void *sp10;
    u32 sp18;
    u32 temp_r4;
    u32 temp_r6;

    gUnk_03000420->unk14 = 4;
    sp0 = 4;
    sp10 = gUnk_03000420 + 0x24;
    sp18 = 2;
    sp0.unk1C = 0;
    func_080D0BA8();
    sp0 = 3;
    sp10 = arg2;
    temp_r6 = (u32) (arg3 + 1) >> 1;
    sp18 = temp_r6;
    sp0.unk1C = 0;
    func_080D0BA8();
    sp0 = 2;
    sp10 = arg0;
    temp_r4 = (u32) (arg1 + 1) >> 1;
    sp18 = temp_r4;
    sp0.unk1C = 0;
    func_080D0BA8();
    gUnk_03000420->unk1C = 0;
    gUnk_03000420->unk20 = (s32) (temp_r4 + temp_r6);
    gUnk_03000420->unk184 = 0;
}
