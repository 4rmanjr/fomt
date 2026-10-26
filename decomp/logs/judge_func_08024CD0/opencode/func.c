#include "common.h"
s32 GetId__C4Tool();                                /* extern */
s8 GetTool__C9ToolStack(s32);                       /* extern */
s32 IsEmpty__C9ToolStack(s32);                      /* extern */
s32 SetAnim__12AActorEntityUi(void *);                /* extern */
s32 func_0800EE2C(s32);                             /* extern */
s32 func_0802CDCC(void *);                            /* extern */
u16 func_0802D158(void *);                          /* extern */
s32 func_0802F0EC(void *, s32, u8);                   /* extern */

void func_08024CD0(void *arg0, void *arg1) {
    u32 sp0;
s32 sp4;
    s32 sp14;
    s32 sp20;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    u32 sp50;
    s8 sp58;
    u32 sp5C;
    ? *temp_r1_3;
    ? *var_r0_5;
    ? *var_r4;
    s32 *var_r0_4;
    s32 *var_r1;
    s32 temp_r0_4;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 var_r0_2;
    u16 temp_r0;
    u16 var_r0;
    u32 var_r6;
    u8 temp_r0_2;
    u8 var_r0_3;
    void **temp_r0_3;
    void *temp_r2;

    func_0802F0EC(arg0, arg1->unk0, arg1->unk4);
    func_0802CDCC(arg0);
    if (arg0->unk22 != func_0802D158(arg0)) {
        SetAnim__12AActorEntityUi(arg0);
    }
    temp_r0 = arg0->unk24;
    if (temp_r0 != 0) {
        var_r0 = temp_r0 - 1;
    } else {
        var_r0 = arg0->unk26;
    }
    arg0->unk24 = var_r0;
    temp_r2 = arg0->unk10;
    if (temp_r2 != 0) {
        temp_r2->unk4->unkC(temp_r2);
    }
    if ((arg0->unk18 == 0) && (arg0->unk1C == 0)) {

    } else if (arg0->unk3C == 0x35) {

    } else {
        arg0->unk14->unkC(&sp20, arg0);
        sp28 = sp20;
        sp2C = sp24;
        sp0 = 0;
        temp_r0_2 = arg0->unk20;
        switch (temp_r0_2) {                        /* irregular */
        case 3:
            sp48.unk0 = (s16) (sp28.unk4 - 1);
            sp48.unk2 = (s16) sp28.unk2;
            if (sp0 <= 3U) {
                if (&(&sp0)[sp0].unk4 != 0) {
                    (&sp0)[sp0].unk4 = sp48;
                }
                sp0 += 1;
            }
            sp4C.unk0 = (s16) (sp28.unk4 - 1);
            sp4C.unk2 = (s16) (sp28.unk6 - 1);
            if (sp0 <= 3U) {
                var_r1 = &(&sp0)[sp0].unk4;
                if (var_r1 != 0) {
                    var_r0_2 = sp4C;
block_51:
                    *var_r1 = var_r0_2;
                }
block_52:
                sp0 += 1;
            }
            break;
        case 0:
            sp30.unk0 = (s16) sp28.unk0;
            sp30.unk2 = (s16) (sp28.unk6 - 1);
            if (sp0 <= 3U) {
                if (&(&sp0)[sp0].unk4 != 0) {
                    (&sp0)[sp0].unk4 = sp30;
                }
                sp0 += 1;
            }
            sp34.unk0 = (s16) (sp28.unk4 - 1);
            sp34.unk2 = (s16) (sp28.unk6 - 1);
            if (sp0 > 3U) {

            } else {
                var_r1 = &(&sp0)[sp0].unk4;
                if (var_r1 == 0) {

                } else {
                    var_r0_2 = sp34;
                    goto block_51;
                }
                goto block_52;
            }
            break;
        case 1:
            sp38.unk0 = (s16) sp28.unk0;
            sp38.unk2 = (s16) sp28.unk2;
            if (sp0 <= 3U) {
                if (&(&sp0)[sp0].unk4 != 0) {
                    (&sp0)[sp0].unk4 = sp38;
                }
                sp0 += 1;
            }
            sp3C.unk0 = (s16) (sp28.unk4 - 1);
            sp3C.unk2 = (s16) sp28.unk2;
            if (sp0 <= 3U) {
                var_r1 = &(&sp0)[sp0].unk4;
                if (var_r1 != 0) {
                    var_r0_2 = sp3C;
                    goto block_51;
                }
                goto block_52;
            }
            break;
        case 2:
            sp40.unk0 = (s16) sp28.unk0;
            sp40.unk2 = (s16) sp28.unk2;
            if (sp0 <= 3U) {
                if (&(&sp0)[sp0].unk4 != 0) {
                    (&sp0)[sp0].unk4 = sp40;
                }
                sp0 += 1;
            }
            sp44.unk0 = (s16) sp28.unk0;
            sp44.unk2 = (s16) (sp28.unk6 - 1);
            if (sp0 <= 3U) {
                var_r1 = &(&sp0)[sp0].unk4;
                if (var_r1 != 0) {
                    var_r0_2 = sp44;
                    goto block_51;
                }
                goto block_52;
            }
            break;
        }
        temp_r0_3 = arg0->unk0;
        (*temp_r0_3)->unk34(&sp14, temp_r0_3, arg0->unk4);
        var_r6 = 0;
        if (sp0 > 0U) {
            sp5C = (u32) sp14.unk8;
            var_r4 = &sp4;
loop_55:
            temp_r2_2 = (s32) (var_r4->unk0 << 0x10) >> 0x13;
            temp_r0_4 = (s32) (var_r4->unk2 << 0x10) >> 0x13;
            if ((sp14 != 0) && ((u32) temp_r2_2 <= sp5C) && ((u32) temp_r0_4 <= (u32) sp14.unkA)) {
                temp_r1 = sp14.unk4;
                var_r0_3 = (sp5C * temp_r0_4) + temp_r2_2;
                if (temp_r1 != 0) {
                    var_r0_3 = *(temp_r1 + var_r0_3);
                }
                var_r0_4 = sp14 + (var_r0_3 * 4);
            } else {
                var_r0_4 = 0;
            }
            if ((var_r0_4 == 0) || (temp_r1_2 = *var_r0_4, ((0x1FFFC & temp_r1_2) == 0))) {
                var_r4 += 4;
                var_r6 += 1;
                if (var_r6 < sp0) {
                    goto loop_55;
                }
            } else {
                sp50 = (u32) (temp_r1_2 << 0xF) >> 0x11;
                sp50.unk4 = 0;
                (*temp_r0_3)->unk140(temp_r0_3, &sp50, 0);
            }
        }
        temp_r1_3 = &(&sp0)[sp0].unk4;
        var_r0_5 = &sp4;
        if (var_r0_5 != temp_r1_3) {
            do {
                var_r0_5 += 4;
            } while (var_r0_5 != temp_r1_3);
        }
    }
    if (arg1->unk4 != 0) {
        temp_r4 = arg0->unk34 + 0x1C34;
        if ((IsEmpty__C9ToolStack(temp_r4) << 0x18) == 0) {
            sp58 = GetTool__C9ToolStack(temp_r4);
            if (GetId__C4Tool() == 0x4E) {
                arg0->unk14->unk64(arg0, 1, 0);
            }
        }
        if ((IsEmpty__C9ToolStack(temp_r4) << 0x18) == 0) {
            sp0.unk59 = GetTool__C9ToolStack(temp_r4);
            if ((GetId__C4Tool() == 0x4F) && ((func_0800EE2C(arg0->unk34 + 0x1BD8) << 0x18) != 0)) {
                arg0->unk14->unk64(arg0, 0, -1);
            }
        }
    }
}

