s32 func_080DC840();                                  /* extern */
extern s32 vtable_unk_080E681C;

typedef struct GenObj {
    u8 _pad0[1];
    struct GenObj *unk1;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[20];
    void *unk24;
    s32 unk28;
    u8 _pad2C[16];
    s32 unk3C;
    s32 unk3D;
    s32 unk3E;
    s32 unk3F;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk4D;
} GenObj;
void *func_080DCD2C(GenObj *arg0, GenObj *arg1) {
    GenObj *temp_r0;
    GenObj *temp_r1;
    GenObj *temp_r1_2;

    func_080DC840();
    arg0->unk24 = &vtable_unk_080E681C;
    temp_r1 = (GenObj *)((u8 *)arg0 + 0x28);
    temp_r0 = (GenObj *)((u8 *)arg1 + 0x28);
    arg0->unk28 = (s32) arg1->unk28;
    temp_r1->unk4 = (s32) temp_r0->unk4;
    temp_r1->unk8 = (s32) temp_r0->unk8;
    temp_r1->unkC = (s32) temp_r0->unkC;
    ((GenObj *)((u8 *)temp_r1 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
    arg0->unk3C = (u8) arg1->unk3C;
    temp_r1_2 = (GenObj *)((u8 *)arg0 + 0x3D);
    arg0->unk3D = (u8) arg1->unk3D;
    temp_r1_2->unk1 = (u8) arg1->unk3E;
    ((GenObj *)((u8 *)temp_r1_2 + 1))->unk1 = (u8) arg1->unk3F;
    arg0->unk40 = (s32) arg1->unk40;
    arg0->unk44 = (u16) arg1->unk44;
    arg0->unk48 = (s32) arg1->unk48;
    arg0->unk4C = (u8) arg1->unk4C;
    arg0->unk4D = (u8) arg1->unk4D;
    return arg0;
}
