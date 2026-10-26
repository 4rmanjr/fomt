extern s32 gUnk_080F9F70;
extern u32 gUnk_080F9F74;
extern s32 vtable_unk_080E5BB4;
extern s32 vtable_unk_080E5BD8;
extern s32 vtable_unk_080E7758;
extern s32 vtable_unk_080E7768;

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    s32 unkA;
    s32 unkB;
    struct GenObj *unkC;
    s32 unkD;
    struct GenObj *unk10;
    struct GenObj *unk14;
    struct GenObj *unk15;
    struct GenObj *unk16;
    struct GenObj *unk18;
    struct GenObj *unk1C;
    u8 _pad20[12];
    s32 unk2C;
    u8 _pad30[20];
    s32 unk44;
} GenObj;
void *func_0803B8CC(GenObj *arg0, s16 arg1, s16 arg2, u16 arg3, s32 arg4, s32 arg5, u32 arg6, s32 arg7, s32 arg8) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s16 temp_r3;
    s16 var_r0;
    s16 var_r6;
    s32 temp_r5;
    s32 temp_r6;
    s8 var_r4;
    u32 temp_r7;
    u8 temp_r2;
    u8 temp_r2_2;
    void *temp_r1;
    GenObj *temp_r1_2;
    GenObj *temp_r2_3;
    GenObj *temp_r2_4;

    arg0->unk0 = arg1;
    arg0->unk2 = arg2;
    arg0->unk4 = arg3;
    arg0->unk6 = (u16) arg4;
    temp_r2 = (((-4 & arg0->unk8) | (arg5 & 3)) & ~0x7C) | ((arg6 & 0x1F) * 4);
    arg0->unk8 = temp_r2;
    temp_r3 = (0xFFFFFE7F & (u16) arg0->unk8) | (((arg6 >> 3) & 3) << 7);
    arg0->unk8 = temp_r3;
    sp0 = 0x3FF;
    temp_r5 = ((s32) arg0->unk8 & 0xFFF801FF) | ((((arg6 & 7) << 6) + 0x14) << 9);
    arg0->unk8 = temp_r5;
    temp_r2_2 = (-0x79 & arg0->unkA) | ((arg7 & 0xF) * 8);
    arg0->unkA = temp_r2_2;
    arg0->unkA = (s16) ((0xFFFF807F & (u16) arg0->unkA) | ((u8) arg8 << 7));
    arg0->unkB = (u8) (0x7F & arg0->unkB);
    arg0->unkC = (u8) (-0x80 & arg0->unkC);
    arg0->unkD = 0;
    temp_r2_3 = (GenObj *)((u8 *)arg0 + 0x10);
    arg0->unk10 = 0;
    temp_r2_3->unk4 = 0;
    temp_r2_3->unk8 = &vtable_unk_080E5BB4;
    temp_r1 = (GenObj *)((u8 *)temp_r2_3 + 0x10);
    temp_r2_3->unkC = temp_r1;
    temp_r1->unk4 = 0;
    temp_r1->unk8 = &vtable_unk_080E5BD8;
    temp_r2_3->unk10 = (void *) ((GenObj *)((u8 *)arg0 + 0x1C));
    temp_r2_3->unk14 = temp_r1;
    temp_r7 = (u32) (temp_r5 << 0xD) >> 0x16;
    var_r4 = 0;
    if (arg8 == 1) {
        var_r4 = 1;
    }
    temp_r1_2 = (GenObj *)((u8 *)arg0 + 0x2C);
    arg0->unk2C = 0;
    temp_r1_2->unk4 = 0;
    temp_r1_2->unk8 = &vtable_unk_080E7768;
    temp_r1_2->unkC = (s32) gUnk_080F9F70;
    temp_r1_2->unk10 = (s32) ((((((u32) (temp_r3 << 0x17) >> 0x1E) << 9) + temp_r7) << 5) + 0x06000000);
    temp_r1_2->unk14 = (s8) ((u32) gUnk_080F9F74 >> 5);
    temp_r1_2->unk15 = var_r4;
    temp_r1_2->unk16 = 0;
    var_r0 = arg0->unk0;
    if ((s32) var_r0 < 0) {
        var_r0 += 7;
    }
    sp4 = var_r0 >> 3;
    var_r6 = arg0->unk2;
    if ((s32) var_r6 < 0) {
        var_r6 += 7;
    }
    temp_r6 = var_r6 >> 3;
    sp8 = temp_r6;
    temp_r2_4 = (GenObj *)((u8 *)arg0 + 0x44);
    arg0->unk44 = 0;
    temp_r2_4->unk4 = 0;
    temp_r2_4->unk8 = &vtable_unk_080E7758;
    temp_r2_4->unkC = sp4;
    temp_r2_4->unk10 = temp_r6;
    temp_r2_4->unk14 = (u32) ((u16) arg0->unk4 >> 3);
    temp_r2_4->unk18 = (u32) ((u16) arg0->unk6 >> 3);
    temp_r2_4->unk1C = (u8) ((-0x20 & temp_r2_4->unk1C) | (((u32) (temp_r2 << 0x19) >> 0x1B) & 0x1F));
    temp_r2_4->unk1C = (s16) ((0xFFFF801F & (u16) temp_r2_4->unk1C) | ((temp_r7 & sp0) << 5));
    temp_r2_4->unk1C = (s32) (((s32) temp_r2_4->unk1C & 0xFFF87FFF) | (((u32) (temp_r2_2 << 0x19) >> 0x1C) << 0xF));
    return arg0;
}
