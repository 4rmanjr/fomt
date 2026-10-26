s32 func_08007128(void *);                            /* extern */
s32 func_0800736C(void *);                          /* extern */
s32 func_08007874(void *);                            /* extern */
s32 func_08007B54(void *, s32);                     /* extern */
s32 func_0805E6CC(void *, s32 *);                       /* extern */
s32 func_0805E824(void *, void *, s32, s32);          /* extern */
extern s32 gUnk_08728208;

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
    u8 _pad20[52];
    s32 unk54;
    u8 _pad58[20];
    s32 unk6C;
    u8 _pad70[8];
    struct GenObj *unk78;
    struct GenObj *unk7C;
    u8 _pad80[536];
    struct GenObj *unk298;
} GenObj;
void *func_080CD9B0(GenObj *arg0, void *arg1, s32 arg2) {
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r1;
    GenObj *temp_r4;
    void *temp_r4_2;
    void *temp_r6;

    arg0->unk0 = arg1;
    arg0->unk4 = arg2;
    arg0->unk8 = arg2;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x14);
    func_08007874(temp_r4);
    temp_r4->unk4 = func_08007B54(temp_r4, 2);
    temp_r4_2 = (GenObj *)((u8 *)temp_r4 + 8);
    func_08007128(temp_r4_2);
    temp_r4_2->unk4 = func_0800736C(temp_r4_2);
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x24);
    func_0805E6CC(temp_r6, &gUnk_08728208);
    temp_r0 = (GenObj *)((u8 *)arg0 + 0x54);
    arg0->unk54 = 0;
    temp_r0->unk2 = 0;
    func_0805E824((GenObj *)((u8 *)temp_r0 + 4), temp_r6, 0, 0x100);
    temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x6C);
    arg0->unk6C = 0;
    temp_r0_2->unk2 = 0;
    temp_r0_2->unk4 = 0;
    temp_r0_2->unk6 = 0;
    temp_r0_2->unk8 = 0;
    temp_r0_2->unkC = 0;
    temp_r0_2->unk10 = 0;
    temp_r0_2->unk11 = 0;
    temp_r0_2->unk14 = 0;
    temp_r0_2->unk18 = 0;
    temp_r0_2->unk1C = 0;
    temp_r1 = arg0->unk0;
    arg0->unkC = (s32) temp_r1->unk78->unk298;
    arg0->unk10 = (s32) (temp_r1->unk7C->unk298 + 9);
    return arg0;
}
