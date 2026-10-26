s32 GetUpgradeLevel__C4Barn(s32);                   /* extern */
s32 GetUpgradeLevel__C4Coop(s32);                   /* extern */
s32 GetUpgradeLevel__C9FarmHouse(s32);              /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_0803A8A4(s32, s32, s32, s32, s32);           /* extern */

typedef struct GenObj {
    s32 unk0;
    u8 _pad4[144];
    s32 unk94;
} GenObj;
void func_080AAF3C(GenObj *arg0) {
    s32 temp_r5;
    s32 temp_r8;
    s32 temp_sb;

    temp_sb = func_0800E324(arg0->unk94 + 0x10);
    temp_r8 = GetUpgradeLevel__C9FarmHouse(arg0->unk94 + 0x1F4);
    temp_r5 = GetUpgradeLevel__C4Coop(arg0->unk94 + 0x410);
    func_0803A8A4(arg0->unk0, temp_sb, temp_r8, temp_r5, GetUpgradeLevel__C4Barn(arg0->unk94 + 0x5F0));
}
