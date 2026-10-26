#include "common.h"
s32 GetFirstFreeItemSlot__C8Rucksack(s32);          /* extern */
s32 *GetItemAt__8RucksackUi(s32);                   /* extern */
s32 IsEmpty__C12RucksackItem(s32 *);                /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0800F294(s32 *, s32);                        /* extern */
s32 func_0800F390(s32);                               /* extern */
s32 func_0802A7D8(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[48];
    s32 unk38;
    s32 unk3C;
} GenObj;
void func_080258A0(GenObj *arg0) {
    s32 sp0;
    s32 *var_r4;
    s32 temp_r5;
    s32 var_r0;
    s8 *var_r1;
    s8 var_r0_2;
    void *temp_r0;

    func_0800F294(&sp0, arg0->unk38 + 0x54);
    if ((IsEmpty__C12RucksackItem(&sp0) << 0x18) == 0) {
        if (GetFirstFreeItemSlot__C8Rucksack(arg0->unk38 + 0x60) != -1) {
            *GetItemAt__8RucksackUi(arg0->unk38 + 0x60) = sp0;
            func_0800F390(arg0->unk38 + 0x54);
            arg0->unk3C = 0x12;
            func_0802A7D8(arg0);
            temp_r0 = (*arg0->unk0)->unk14C();
            var_r4 = temp_r0->unk0;
            temp_r5 = temp_r0->unk4;
            if (var_r4 != temp_r5) {
loop_3:
                if ((func_08008CD0(*var_r4) << 0x18) != 0) {
                    var_r4 += 4;
                    if (var_r4 == temp_r5) {
                        goto block_5;
                    }
                    goto loop_3;
                }
                var_r0 = *var_r4;
            } else {
block_5:
                var_r0 = *(temp_r5 - 4);
            }
            func_08008B6C(var_r0, 0x6B);
            return;
        }
        var_r1 = arg0 + 0x3C;
        var_r0_2 = 4;
        goto block_10;
    }
    var_r1 = arg0 + 0x3C;
    var_r0_2 = 0;
block_10:
    *var_r1 = var_r0_2;
}

