#include "common.h"
void *GetMapData();                                 /* extern */
s32 GetUpgradeLevel__C4Barn(s32);                   /* extern */
s32 GetUpgradeLevel__C4Coop(s32);                   /* extern */
s32 GetUpgradeLevel__C9FarmHouse(s32);              /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_0803A8A4(?, s32, s32, s32, s32);             /* extern */

typedef struct GenObj {
    u8 _pad0[4152];
    s32 unk1038;
} GenObj;
s32 func_08019FE8(GenObj *arg0, ? arg1) {
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r8;

    temp_r8 = func_0800E324(arg0->unk1038 + 0x10);
    temp_r6 = GetUpgradeLevel__C9FarmHouse(arg0->unk1038 + 0x1F4);
    temp_r5 = GetUpgradeLevel__C4Coop(arg0->unk1038 + 0x410);
    func_0803A8A4(arg1, temp_r8, temp_r6, temp_r5, GetUpgradeLevel__C4Barn(arg0->unk1038 + 0x5F0));
    return GetMapData()->unk22 * 8;
}

