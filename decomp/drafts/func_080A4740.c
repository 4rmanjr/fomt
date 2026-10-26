s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                       /* extern */
s16 func_08007D4C(void *);                          /* extern */
s32 memset(void *, u8, s32);                          /* extern */
extern s32 vtable_unk_080E82D8;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u8 _pad18[12];
    void *unk24;
} GenObj;
void *func_080A4740(GenObj *arg0, void **arg1, ? arg2, ? arg3) {
    u8 sp0;
    GenObj *temp_r4;

    arg0->unk24 = &vtable_unk_080E82D8;
    arg0->unk0 = arg1;
    temp_r4 = (GenObj *)((u8 *)arg0 + 4);
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, arg2);
    arg0->unkC = func_08007D4C(temp_r4);
    sp0 = 0;
    arg0->unk10 = 0;
    memset((GenObj *)((u8 *)arg0 + 0x14), sp0, 1);
    arg0->unk10 = 1;
    arg0->unk14 = (*arg1)->unk48(arg1, arg3);
    return arg0;
}
