void *__builtin_new(s32);                           /* extern */
s32 func_08008D84();                                  /* extern */
s32 func_08008D9C();                                /* extern */
s32 func_080095C0(void *, void *);                    /* extern */
s32 func_080D78F8(void *, void **);                   /* extern */
extern s32 vtable_unk_080E5B0C;
extern s32 vtable_unk_080E5B18;
extern s32 vtable_unk_080E5B60;
extern s32 vtable_unk_080E5B70;
extern s32 vtable_unk_080E5B90;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    u8 _pad18[4];
    s32 unk1C;
    u8 _pad20[8];
    s32 unk28;
    u8 _pad2C[4];
    struct GenObj *unk30;
    s32 unk34;
    u8 _pad38[12];
    s32 unk44;
    u8 _pad48[32];
    s32 unk68;
} GenObj;
void **func_08008980(void **arg0) {
    void *sp0;
    s8 temp_r0_3;
    GenObj *temp_r0;
    void *temp_r0_2;
    GenObj *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r1_3;
    GenObj *temp_r5;
    GenObj *temp_r7;

    temp_r0 = __builtin_new(0x6C);
    temp_r0->unk0 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk8 = &vtable_unk_080E5B70;
    temp_r5 = (GenObj *)((u8 *)temp_r0 + 0xC);
    temp_r0->unkC = 0;
    temp_r5->unk4 = 0;
    temp_r5->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = (GenObj *)((u8 *)temp_r0 + 0x1C);
    temp_r5->unkC = temp_r1;
    temp_r0->unk1C = 0;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r5->unk10 = (void *) ((GenObj *)((u8 *)temp_r0 + 0x18));
    temp_r5->unk14 = temp_r1;
    temp_r5->unk8 = &vtable_unk_080E5B90;
    temp_r1_2 = (GenObj *)((u8 *)temp_r0 + 0x28);
    temp_r0->unk28 = 0;
    temp_r1_2->unk4 = 0;
    temp_r1_2->unk8 = &vtable_unk_080E5B60;
    temp_r7 = (GenObj *)((u8 *)temp_r0 + 0x34);
    temp_r0->unk34 = 0;
    temp_r7->unk4 = 0;
    temp_r7->unk8 = &vtable_unk_080E5BB4;
    temp_r1_3 = (GenObj *)((u8 *)temp_r0 + 0x44);
    temp_r7->unkC = temp_r1_3;
    temp_r0->unk44 = 0;
    temp_r1_3->unk4 = 0;
    temp_r1_3->unk8 = &vtable_unk_080E5BD8;
    temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 0x40);
    temp_r7->unk10 = temp_r0_2;
    temp_r7->unk14 = temp_r1_3;
    temp_r7->unk8 = &vtable_unk_080E5B90;
    sp0 = temp_r7;
    func_080D78F8(temp_r0_2 + 0x10, &sp0);
    temp_r7->unk30 = &vtable_unk_080E5B0C;
    temp_r7->unk8 = &vtable_unk_080E5B18;
    temp_r0_3 = func_08008D9C() ^ 1;
    temp_r0->unk68 = temp_r0_3;
    if ((temp_r0_3 << 0x18) != 0) {
        func_08008D84();
    }
    func_080095C0(temp_r7, temp_r0);
    func_080095C0(temp_r7, temp_r5);
    func_080095C0(temp_r7, temp_r1_2);
    *arg0 = temp_r0;
    return arg0;
}
