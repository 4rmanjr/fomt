#include "common.h"
s32 GetId__C7Article(s8 *);                         /* extern */
s32 IsDisplayEnabled__C11ShippingBini(void *, s32); /* extern */
s32 func_0800F204(s32);                             /* extern */
s8 func_0800F258(s32);                              /* extern */
s32 func_0809C32C(void *);                          /* extern */
u8 func_0809DFAC(void *);                           /* extern */
u8 func_0809E02C(void *);                           /* extern */
s32 func_0809E174(void *);                          /* extern */
s32 func_0809E184(void *);                          /* extern */
s32 func_0809E194(void *);                          /* extern */
s32 func_0809E1A4(void *);                          /* extern */
extern s32 gUnk_080F11BC;
extern s32 gUnk_080F11E0;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    u8 _pad8[44];
    void *unk34;
    s32 unk38;
    u8 _pad3C[8525];
    s32 unk2189;
    s32 unk218B;
    u8 _pad218F[5];
    s32 unk2194;
    s32 unk2195;
} GenObj;
void func_0802B054(GenObj *arg0) {
    s8 sp0;
    GenObj *sp4;
    s8 spC;
    GenObj *sp10;
    GenObj *sp18;
    GenObj *sp20;
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r7;
    s32 var_r7_2;
    u32 var_r6;
    u32 var_r6_2;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    if (func_0809DFAC(arg0->unk34 + 0x2E58) == 9) {
        temp_r4 = 0x30 & arg0->unk34->unk2189;
        if ((temp_r4 == 0) && (func_0800F204(arg0->unk38 + 0x54) == 1)) {
            sp0 = func_0800F258(arg0->unk38 + 0x54);
            if (GetId__C7Article(&sp0) == 0x25) {
                temp_r0 = arg0->unk0;
                sp4 = 0x330;
                sp4.unk4 = temp_r4;
                (*temp_r0)->unk140(temp_r0, &sp4, 0);
            }
        }
    }
    if (func_0809E02C(arg0->unk34 + 0x2E58) == 9) {
        temp_r4_2 = 0x18 & arg0->unk34->unk218B;
        if ((temp_r4_2 == 0) && (func_0800F204(arg0->unk38 + 0x54) == 1)) {
            spC = func_0800F258(arg0->unk38 + 0x54);
            if (GetId__C7Article() == 0x26) {
                temp_r0_2 = arg0->unk0;
                sp10 = 0x332;
                sp10.unk4 = temp_r4_2;
                (*temp_r0_2)->unk140(temp_r0_2, &sp10, 0);
            }
        }
    }
    if (!(0xC0 & arg0->unk34->unk2194)) {
        var_r7 = 1;
        var_r6 = 0;
        var_r4 = &gUnk_080F11BC;
loop_13:
        if (var_r6 <= 8U) {
            if ((IsDisplayEnabled__C11ShippingBini(arg0->unk34 + 0x54, *var_r4) << 0x18) == 0) {
                var_r7 = 0;
            } else {
                var_r4 += 4;
                var_r6 += 1;
                goto loop_13;
            }
        }
        if ((var_r7 != 0) && ((func_0809E184(arg0->unk34 + 0x2E58) << 0x18) != 0) && ((func_0809E194(arg0->unk34 + 0x2E58) << 0x18) != 0) && ((func_0809DFAC(arg0->unk34 + 0x2E58) << 0x18) != 0) && ((func_0809E1A4(arg0->unk34 + 0x2E58) << 0x18) != 0)) {
            temp_r0_3 = arg0->unk0;
            sp18 = 0x34D;
            sp18.unk4 = 0;
            (*temp_r0_3)->unk140(temp_r0_3, &sp18, 0);
        }
    }
    if (!(3 & arg0->unk34->unk2195)) {
        var_r7_2 = 1;
        var_r6_2 = 0;
        var_r4_2 = &gUnk_080F11E0;
loop_25:
        if (var_r6_2 <= 0xDU) {
            if ((IsDisplayEnabled__C11ShippingBini(arg0->unk34 + 0x54, *var_r4_2) << 0x18) == 0) {
                var_r7_2 = 0;
            } else {
                var_r4_2 += 4;
                var_r6_2 += 1;
                goto loop_25;
            }
        }
        if ((var_r7_2 != 0) && ((func_0809C32C(arg0->unk34 + 0x3480) << 0x18) != 0) && ((func_0809E174(arg0->unk34 + 0x2E58) << 0x18) != 0) && ((func_0809E02C(arg0->unk34 + 0x2E58) << 0x18) != 0)) {
            temp_r0_4 = arg0->unk0;
            sp20 = 0x34E;
            sp20.unk4 = 0;
            (*temp_r0_4)->unk140(temp_r0_4, &sp20, 0);
        }
    }
}

