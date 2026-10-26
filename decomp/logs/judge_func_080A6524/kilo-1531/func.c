#include "common.h"
s32 GetStockingArticleId__C9FarmHouse(s32);         /* extern */
s32 HasStocking__C9FarmHouse(s32);                  /* extern */
s32 func_080A4F50();                                  /* extern */
s32 func_080A5AB0(void *, ? *, u8, s32);              /* extern */
extern ? gUnk_0810710C;
extern ? gUnk_08107338;
extern ? gUnk_08107344;

void func_080A6524(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 var_r2_2;
    s32 var_r2_3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 var_r2;
    void *temp_r4;
    void *temp_r4_2;

    func_080A4F50();
    temp_r1 = arg0->unk0;
    switch (temp_r1) {                              /* irregular */
    case 29:
        if (arg0->unk98 != 0) {
            arg0->unk98 = 0U;
            if ((HasStocking__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
                if (GetStockingArticleId__C9FarmHouse(arg0->unk94 + 0x1F4) == 0x5F) {
                    var_r2 = 1;
                } else {
                    var_r2 = 2;
                }
            } else {
                var_r2 = 0;
            }
            func_080A5AB0(arg0, &gUnk_0810710C, var_r2, arg1);
            return;
        }
        return;
    case 6:
        if (((u32) (arg0->unk94->unk21A0 << 0x1E) >> 0x1E) == 1) {
            temp_r4 = arg0 + 0xB4;
            if (temp_r4->unk1 != 0) {
                temp_r4->unk1 = 0U;
                func_080A5AB0(arg0, &gUnk_08107338, arg0->unkB4, arg1);
                var_r2_2 = 0;
                temp_r0 = arg0->unkB4 + 1;
                arg0->unkB4 = temp_r0;
                if (temp_r0 == gUnk_08107338.unk4->unk2) {
                    var_r2_2 = 1;
                }
                if (var_r2_2 != 0) {
                    arg0->unkB4 = 0U;
                }
            }
            temp_r4_2 = arg0 + 0xB8;
            if (temp_r4_2->unk1 != 0) {
                temp_r4_2->unk1 = 0U;
                func_080A5AB0(arg0, &gUnk_08107344, arg0->unkB8, arg1);
                var_r2_3 = 0;
                temp_r0_2 = arg0->unkB8 + 1;
                arg0->unkB8 = temp_r0_2;
                if (temp_r0_2 == gUnk_08107344.unk4->unk2) {
                    var_r2_3 = 1;
                }
                if (var_r2_3 != 0) {
                    arg0->unkB8 = 0U;
                }
            }
        }
        break;
    }
}

