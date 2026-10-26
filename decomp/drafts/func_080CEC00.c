s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_0805E6CC(s32, s32 *);                          /* extern */
s32 func_0805E824(void *, s32, s32, s32);             /* extern */
extern s32 gUnk_08754C0C;

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk2;
    struct GenObj *unk4;
    struct GenObj *unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk11;
    struct GenObj *unk14;
    struct GenObj *unk18;
    struct GenObj *unk1C;
    u8 _pad20[20];
    s32 unk34;
    s32 unk36;
    u8 _pad3A[18];
    s32 unk4C;
    u8 _pad50[44];
    s32 unk7C;
    s32 unk80;
} GenObj;
void *func_080CEC00(GenObj *arg0, s32 arg1) {
    s32 temp_r4;
    GenObj *temp_r0;
    GenObj *temp_r4_2;
    void *temp_r4_3;

    arg0->unk0 = arg1;
    temp_r4 = (GenObj *)((u8 *)arg0 + 4);
    func_0805E6CC(temp_r4, &gUnk_08754C0C);
    arg0->unk34 = 0;
    arg0->unk36 = 0;
    func_0805E824((GenObj *)((u8 *)arg0 + 0x38), temp_r4, 1, 0x100);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x4C);
    arg0->unk4C = 0;
    temp_r0->unk2 = 0;
    temp_r0->unk4 = 0;
    temp_r0->unk6 = 0;
    temp_r0->unk8 = 0;
    temp_r0->unkC = 0;
    temp_r0->unk10 = 0;
    temp_r0->unk11 = 0;
    temp_r0->unk14 = 0;
    temp_r0->unk18 = 0;
    temp_r0->unk1C = 0;
    temp_r4_2 = (GenObj *)((u8 *)arg0 + 0x6C);
    func_08007874(temp_r4_2);
    temp_r4_2->unk4 = func_08007B54(temp_r4_2, 4);
    temp_r4_3 = (GenObj *)((u8 *)temp_r4_2 + 8);
    func_08007128(temp_r4_3);
    temp_r4_3->unk4 = func_0800736C(temp_r4_3);
    arg0->unk7C = 0x12;
    arg0->unk80 = 0;
    ((GenObj *)((u8 *)arg0 + 0x80))->unk4 = 0;
    return arg0;
}
