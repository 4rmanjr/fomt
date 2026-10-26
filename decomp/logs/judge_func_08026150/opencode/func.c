#include "common.h"
s32 ForceEnableDisplay__11ShippingBini(s32, s32);     /* extern */
s32 GetArticle__C12RucksackItem(s32 *);             /* extern */
s32 GetFood__C12RucksackItem(s32 *, s32 *);             /* extern */
s32 GetId__C7Product(u8 *);                         /* extern */
s32 GetKind__C12RucksackItem(s32 *);                /* extern */
s32 GetPrice__C7Product(u8 *);                      /* extern */
s32 IsDisplayEnabled__C11ShippingBini(s32, s32);    /* extern */
s32 __7Product(u8 *);                                 /* extern */
s32 __7ProductG4Food(u8 *, s32);                      /* extern */
s32 __7ProductG7Article(u8 *, s32);                   /* extern */
s32 func_08008B6C(s32, s32);                          /* extern */
s32 func_08008CD0(s32);                             /* extern */
s32 func_0800F418(s32);                               /* extern */
s32 func_0800F528(s32);                               /* extern */
s32 func_0802A588(void *);                            /* extern */

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    u8 _padC[8];
    struct GenObj *unk14;
    u8 _pad18[28];
    s32 unk34;
    s32 unk38;
    s32 unk3C;
} GenObj;
void func_08026150(GenObj *arg0, s32 *arg1, u8 arg2) {
GenObj sp0;
    s32 sp4;
    u8 sp8;
    s32 *var_r4_2;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0_2;
    s32 var_r1;
    u8 *var_r4;
    u8 temp_r3;
    void *temp_r0_2;
    GenObj *var_r0;

    __7Product(&sp8);
    temp_r0 = GetKind__C12RucksackItem(arg1);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_r4 = &(GenObj *)((u8 *)sp0 + 9);
        GetFood__C12RucksackItem(&sp0, arg1);
        __7ProductG4Food(var_r4, (sp0.unk2 << 0x10) | ((sp0.unk1 << 8) | sp0));
block_5:
        sp8 = *var_r4;
        break;
    case 1:                                         /* switch 1 */
        var_r4 = &(GenObj *)((u8 *)sp0 + 0xA);
        __7ProductG7Article(var_r4, GetArticle__C12RucksackItem(arg1));
        goto block_5;
    }
    temp_r4 = arg0->unk34 + 0x54;
    if ((GetPrice__C7Product(&sp8) != 0) && ((IsDisplayEnabled__C11ShippingBini(temp_r4, GetId__C7Product(&sp8)) << 0x18) == 0)) {
        ForceEnableDisplay__11ShippingBini(temp_r4, GetId__C7Product(&sp8));
    }
    sp4 = *arg1;
    func_0800F418(arg0->unk38 + 0x54);
    if (arg2 != 0) {
        func_0800F528(arg0->unk38 + 0x54);
    }
    func_0802A588(arg0);
    arg0->unk3C = 0x11;
    temp_r3 = *(((GenObj *)((u8 *)arg0 + 0x3C)) - 0x1C);
    switch (temp_r3) {                              /* switch 2; irregular */
    case 2:                                         /* switch 2 */
        var_r0 = (GenObj *)((u8 *)arg0 + 0x88);
        var_r0->unk4 = 0xFFF60000;
        var_r0->unk8 = 0;
block_24:
        var_r0->unk14 = 0xC0000;
        break;
    case 3:                                         /* switch 2 */
        var_r0 = (GenObj *)((u8 *)arg0 + 0x88);
        var_r0->unk4 = 0xA0000;
        var_r0->unk8 = 0;
        goto block_24;
    case 1:                                         /* switch 2 */
        var_r0 = (GenObj *)((u8 *)arg0 + 0x88);
        var_r1 = 0xFFF60000;
        var_r0->unk4 = 0;
block_23:
        var_r0->unk8 = var_r1;
        goto block_24;
    case 0:                                         /* switch 2 */
        var_r0 = (GenObj *)((u8 *)arg0 + 0x88);
        var_r1 = 0xA0000;
        var_r0->unk4 = (s32) temp_r3;
        goto block_23;
    }
    temp_r0_2 = (*arg0->unk0)->unk14C();
    var_r4_2 = temp_r0_2->unk0;
    temp_r5 = temp_r0_2->unk4;
    if (var_r4_2 != temp_r5) {
loop_26:
        if ((func_08008CD0(*var_r4_2) << 0x18) != 0) {
            var_r4_2 += 4;
            if (var_r4_2 == temp_r5) {
                goto block_28;
            }
            goto loop_26;
        }
        var_r0_2 = *var_r4_2;
    } else {
block_28:
        var_r0_2 = *(temp_r5 - 4);
    }
    func_08008B6C(var_r0_2, 0x6A);
}

