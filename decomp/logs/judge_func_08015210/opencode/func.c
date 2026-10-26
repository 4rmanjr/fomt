#include "common.h"
s32 GetBarnAnimal__4BarnUi(s32, u32);               /* extern */
u32 GetCapacity__C4Barn(s32);                       /* extern */
u32 GetCapacity__C4Coop(s32);                       /* extern */
s32 GetChicken__4CoopUi(s32, u32);                  /* extern */
s32 RemoveAndRememberUnk__4BarnUi(s32, u32);          /* extern */
s32 RemoveAndRememberUnk__4CoopUi(s32, u32);          /* extern */
s32 func_0800F190(s32);                             /* extern */
s32 func_0800F204(s32);                             /* extern */
u32 func_0800F344(s32);                             /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 method_0809B514__C9Livestock();                 /* extern */

void func_08015210(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 var_r4;
    u32 var_r4_2;
    void **temp_r0_3;
    void **temp_r0_5;
    void *temp_r0;

    temp_r0 = arg0->unk4;
    temp_r0_2 = GetCapacity__C4Coop(temp_r0->unk8C + 0x410);
    var_r4 = 0;
    if (temp_r0_2 > 0U) {
        do {
            if ((GetChicken__4CoopUi(temp_r0->unk8C + 0x410, var_r4) != 0) && (method_0809B514__C9Livestock() == 2)) {
                temp_r0_3 = temp_r0->unkA8;
                (*temp_r0_3)->unk3C(temp_r0_3, var_r4 + 0x2E);
                RemoveAndRememberUnk__4CoopUi(temp_r0->unk8C + 0x410, var_r4);
            }
            var_r4 += 1;
        } while (var_r4 < temp_r0_2);
    }
    temp_r5 = temp_r0->unk8C + 0x1C2C;
    if (((func_0800F190(temp_r5) << 0x18) == 0) && (func_0800F204(temp_r5) == 3)) {
        temp_r4 = temp_r0->unk8C + 0x410;
        if (GetChicken__4CoopUi(temp_r4, func_0800F344(temp_r5)) == 0) {
            func_0800F390(temp_r0->unk8C + 0x1C2C);
        }
    }
    temp_r0_4 = GetCapacity__C4Barn(temp_r0->unk8C + 0x5F0);
    var_r4_2 = 0;
    if (temp_r0_4 > 0U) {
        do {
            if ((GetBarnAnimal__4BarnUi(temp_r0->unk8C + 0x5F0, var_r4_2) != 0) && (method_0809B514__C9Livestock() == 2)) {
                temp_r0_5 = temp_r0->unkA8;
                (*temp_r0_5)->unk3C(temp_r0_5, var_r4_2 + 0x36);
                RemoveAndRememberUnk__4BarnUi(temp_r0->unk8C + 0x5F0, var_r4_2);
            }
            var_r4_2 += 1;
        } while (var_r4_2 < temp_r0_4);
    }
}

