s32 func_0800E4E0(void *);                          /* extern */
s32 func_08094974(void *, s32, void *, s32);          /* extern */
s32 func_08094994(void *, s32, s32);                  /* extern */
s32 func_0809EACC();                                /* extern */
s32 func_080A0A04(void *);                            /* extern */
s32 method_08009AF4__C4Farm(void *);                /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[4];
    s32 unkC;
    s32 unk10;
    u8 _pad14[8632];
    struct GenObj *unk21CC;
} GenObj;
void func_08094844(GenObj *arg0) {
    s32 sp0;
    s32 temp_r1;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_sb;
    s32 temp_sl;
    GenObj *temp_r0;
    void *temp_r5;

    temp_r6 = arg0->unk4;
    temp_r0 = arg0->unk0;
    temp_r7 = temp_r0->unk21CC;
    temp_r1 = ((GenObj *)((u8 *)temp_r0 + 0x21CC))->unk4;
    sp0 = temp_r1;
    temp_sb = method_08009AF4__C4Farm((GenObj *)((u8 *)temp_r0 + 0x14));
    temp_sl = func_0800E4E0(arg0->unk0 + 0x1BD8);
    func_080A0A04(arg0->unk0 + 0x1CD4);
    temp_r8 = func_0809EACC();
    temp_r5 = arg0->unk0 + 0x21DC;
    arg0->unkC = temp_r7;
    arg0->unk10 = temp_r1;
    func_08094994(arg0, temp_r6, temp_sb);
    func_08094994(arg0, temp_r6 + 0xD, temp_sl);
    func_08094994(arg0, temp_r6 + 0x1A, temp_r8);
    func_08094974(arg0, temp_r6 + 0x27, temp_r5, 4);
}
