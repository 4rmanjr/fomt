s32 func_0800050C(s32);
s32 func_08000528(s32);
s32 func_080D100C();
void func_080D78E0(void);
extern void *gUnk_03000410;
extern s32 vtable_unk_080E5B3C;
extern s32 vtable_unk_080E5B48;

typedef struct GenObj {
    void *unk0;
    u16 unk4;
    u16 pad6;
    s32 unk8;
    s32 *unkC;
    s32 unk10;
    s32 *unk14;
} GenObj;

void *func_080D78F8(GenObj *arg0, s32 *arg1) {
    void *prev;
    s32 m;

    arg0->unk14 = &vtable_unk_080E5B3C;
    arg0->unk0 = (void *)*arg1;
    m = 1;
    m &= func_08000528(1);
    arg0->unk4 = (u16)m;
    prev = gUnk_03000410;
    gUnk_03000410 = arg0;
    arg0->unk8 = (s32)prev;
    arg0->unkC = &vtable_unk_080E5B48;
    arg0->unk10 = func_080D100C(0, (void *)&func_080D78E0);
    func_0800050C(1);
    return arg0;
}
