void *GetMapData(s32);                              /* extern */
s32 GetUpgradeLevel__C4Barn(s32);                   /* extern */
s32 GetUpgradeLevel__C4Coop(s32);                   /* extern */
s32 GetUpgradeLevel__C9FarmHouse(s32);              /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_0803A8A4(u32, s32, s32, s32, s32);         /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    s32 unk8;
    s32 unkA;
    u8 _padE[10];
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk22;
    u8 _pad26[6];
    struct GenObj *unk2C;
    u8 _pad30[4104];
    s32 unk1038;
    u8 _pad103C[20];
    s32 unk1050;
} GenObj;
void *func_0801A054(GenObj *arg0, GenObj *arg1, u32 arg2) {
    s32 sp4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    u16 temp_r5_2;
    u16 temp_r6_2;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r4;

    if (arg2 > 0x233U) {
        arg0->unk0 = 0;
        arg0->unk4 = 0;
        arg0->unk8 = 0U;
        arg0->unkA = 0U;
    } else {
        temp_r0 = arg1->unk4;
        sp4 = temp_r0->unk0;
        if ((arg2 == 2) && (sp4 != 2)) {
            arg0->unk0 = (s32) arg1->unk1050;
            arg0->unk4 = 0;
            arg0->unk8 = 0x80U;
            arg0->unkA = 0x58U;
        } else {
            if (sp4 == arg2) {
                var_r0 = temp_r0->unk4;
            } else {
                temp_r8 = func_0800E324(arg1->unk1038 + 0x10);
                temp_r6 = GetUpgradeLevel__C9FarmHouse(arg1->unk1038 + 0x1F4);
                temp_r5 = GetUpgradeLevel__C4Coop(arg1->unk1038 + 0x410);
                var_r0 = func_0803A8A4(arg2, temp_r8, temp_r6, temp_r5, GetUpgradeLevel__C4Barn(arg1->unk1038 + 0x5F0));
            }
            temp_r0_2 = GetMapData(var_r0);
            temp_r5_2 = temp_r0_2->unk20;
            temp_r6_2 = temp_r0_2->unk22;
            if (sp4 == arg2) {
                temp_r4 = arg1->unk4;
                GetMapData(temp_r4->unk4);
                var_r1 = 0;
                var_r0_2 = temp_r4->unk2C;
            } else {
                var_r1 = temp_r0_2->unk1C;
                var_r0_2 = temp_r0_2->unk18;
            }
            arg0->unk0 = var_r0_2;
            arg0->unk4 = var_r1;
            arg0->unk8 = temp_r5_2;
            arg0->unkA = temp_r6_2;
        }
    }
    return arg0;
}
