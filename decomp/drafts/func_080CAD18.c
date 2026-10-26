s32 func_0805E6CC(s32 **);                              /* extern */
s32 func_0805E824(void ***, s32 **, u16, s32);          /* extern */
extern s32 vtable_unk_080E5A28;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk11;
    s32 unk14;
    s32 unk18;
} GenObj;
void func_080CAD18(GenObj *arg0, u16 arg2, s32 arg3) {
    s32 *sp0;
s32 sp30;
    void **sp34;
s32 sp48;
    s8 sp64;
s32 sp68;

    func_0805E6CC(&sp0);
    sp30 = 0;
    sp30.unk2 = 0;
    func_0805E824(&sp34, &sp0, arg2, 0x100);
    sp48 = 0;
    sp48.unk2 = 0;
    sp48.unk4 = 0;
    sp48.unk6 = 0;
    sp48.unk8 = 0;
    sp48.unkC = 0;
    sp48.unk10 = 0;
    sp48.unk11 = 0;
    sp48.unk14 = 0;
    sp48.unk18 = 0;
    sp64 = 0;
    (*sp34)->unk10(&sp68, sp34, *((u8 *)sp38 + (sp34.unkC * 4)));
    arg0->unk4 = sp70;
    arg0->unk8 = sp78;
    arg0->unk0 = arg3;
    sp0 = &vtable_unk_080E5A28;
}
