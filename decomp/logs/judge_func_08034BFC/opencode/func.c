#include "common.h"
s32 func_0805E860(s32, u16);                          /* extern */
extern s32 gUnk_080F14F0;

typedef struct GenObj {
    u8 _pad0[2];
    struct GenObj *unk2;
    u8 _pad6[194];
    s32 unkC8;
    u8 _padCC[4];
    s32 unkD0;
} GenObj;
void func_08034BFC(GenObj *arg0, s32 arg1, s16 arg2, s16 arg3) {
    GenObj *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    func_0805E860((GenObj *)((u8 *)arg0 + 0xB4), *((arg1 * 2) + &gUnk_080F14F0));
    temp_r0 = (GenObj *)((u8 *)arg0 + 0xC8);
    arg0->unkC8 = 1;
    temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 2);
    temp_r0->unk2 = 0;
    temp_r0_3 = temp_r0_2 + 1;
    temp_r0_2->unk1 = 1;
    temp_r0_3->unk1 = arg2;
    (temp_r0_3 + 1)->unk2 = arg3;
    arg0->unkD0 = 0x3C;
}

