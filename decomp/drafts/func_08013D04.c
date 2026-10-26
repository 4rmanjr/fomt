s32 **__builtin_new(s32);                             /* extern */
extern s32 vtable_unk_080E5C14;
extern s32 vtable_unk_080E5C24;
extern s32 vtable_unk_080E5E44;

typedef struct GenObj {
    u8 _pad0[1];
    struct GenObj *unk1;
    struct GenObj *unk2;
    struct GenObj *unk3;
    struct GenObj *unk4;
    u8 _pad8[132];
    struct GenObj *unk8C;
    u8 _pad90[12];
    struct GenObj *unk9C;
    u8 _padA0[4];
    struct GenObj *unkA4;
} GenObj;
void func_08013D04(GenObj *arg0, u8 arg1) {
    s32 **temp_r0;
    s32 **temp_r0_3;
    s32 **temp_r1;
    s32 temp_r0_2;
    s32 temp_r6;
    u8 temp_r4;
    GenObj *temp_r4_2;
    GenObj *temp_r7;

    temp_r4 = arg1;
    temp_r7 = arg0->unk4;
    temp_r0 = __builtin_new(0x10);
    temp_r6 = ((s32) ((0 - temp_r4) | temp_r4) >> 0x1F) & 2;
    temp_r0_2 = temp_r7->unk8C;
    temp_r0->unk0 = &vtable_unk_080E5C14;
    temp_r0->unk4 = temp_r0_2;
    temp_r0_3 = __builtin_new(0x14);
    temp_r0_3->unk0 = &vtable_unk_080E5E44;
    temp_r0_3->unk4 = 0;
    temp_r4_2 = temp_r0_3 + 6;
    temp_r0_3->unk6 = (u16) ((0xFFFFFC00 & temp_r0_3->unk6) | 0x234);
    temp_r4_2->unk1 = (u8) (3 & temp_r4_2->unk1);
    temp_r4_2->unk2 = (u16) (0xFFFFFC00 & temp_r4_2->unk2);
    temp_r4_2->unk3 = (u8) (3 & temp_r4_2->unk3);
    temp_r4_2->unk4 = (u16) (0xFFFFFC00 & temp_r4_2->unk4);
    temp_r0_3->unk0 = &vtable_unk_080E5C24;
    temp_r0_3->unkC = temp_r0_2;
    temp_r0_3->unk10 = temp_r6;
    temp_r0->unk8 = temp_r0_3;
    temp_r0->unkC = temp_r6;
    temp_r1 = temp_r7->unkA4;
    if ((temp_r0 != temp_r1) && (temp_r1 != 0)) {
        (*temp_r1)->unk8(temp_r1, 3);
    }
    temp_r7->unkA4 = temp_r0;
    temp_r7->unk9C = 0x18;
}
