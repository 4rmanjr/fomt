s32 func_0800050C(s32);                               /* extern */
s32 func_08000528(s32);                             /* extern */
s32 func_080D100C(s32, s32 *);                        /* extern */
extern s32 func_080D78E0;
extern void *gUnk_03000410;
extern s32 vtable_unk_080E5B3C;
extern s32 vtable_unk_080E5B48;

typedef struct GenObj {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    s32 unk8;
    void *unkC;
    s32 unk10;
    void *unk14;
} GenObj;
void *func_080D78F8(GenObj *arg0, s32 *arg1) {
    void *temp_r1;
    GenObj *self;
    s32 one;

    self = arg0;
    self->unk14 = &vtable_unk_080E5B3C;
    self->unk0 = (s32) *arg1;
    one = 1;
    self->unk4 = (s16) (one & func_08000528(one));
    temp_r1 = gUnk_03000410;
    gUnk_03000410 = self;
    self->unk8 = temp_r1;
    self->unkC = &vtable_unk_080E5B48;
    self->unk10 = func_080D100C(0, &func_080D78E0);
    func_0800050C(one);
    return self;
    self->unk8 = temp_r1;
    self->unkC = &vtable_unk_080E5B48;
    self->unk10 = func_080D100C(0, &func_080D78E0);
    func_0800050C(one);
    return self;
}
/* ATTEMPT opencode: unk4 = s16 (strh match). push b530 butuh base=r5,one=r4:
   - temp_r1 di atas -> push b570 (kelebihan r6)
   - one dipakai ulang di call ke-3 -> tetap b510/b570
   Sisa: +0x0 push / +0x2 base-reg. Belum ketemu kombinasi yg memberi r5+r4. */
