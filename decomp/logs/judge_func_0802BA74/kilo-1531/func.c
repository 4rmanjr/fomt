#include "common.h"
void func_0802BA74(void *arg0, ? arg3) {
s32 sp0;
    s16 var_ip;
    s16 var_r3;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    u8 temp_r0;
    u8 temp_r0_3;
    u8 temp_r0_7;
    u8 temp_r2_2;
    void **temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r1;

    temp_r0 = arg0->unk34;
    switch ((u32) temp_r0) {                        /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        arg0->unk54 = 0;
        return;
    case 1:                                         /* switch 1 */
        temp_r1 = arg0 + 0x38;
        temp_r1->unk4 = (s32) (temp_r1->unk4 + temp_r1->unkC);
        temp_r1->unk8 = (s32) (temp_r1->unk8 + temp_r1->unk10);
        temp_r0_2 = temp_r1->unk18 + 0xFFFFB556;
        temp_r1->unk18 = temp_r0_2;
        temp_r2 = temp_r1->unk14 + temp_r0_2;
        if (temp_r2 > 0) {
            temp_r1->unk14 = temp_r2;
        } else {
            temp_r1->unk14 = 0;
            temp_r1->unk18 = 0;
        }
        var_r1 = 0;
        if (arg0->unk24 == 0) {
            var_r1 = 1;
        }
        if (var_r1 == 0) {
            return;
        }
        arg0->unk34 = 0U;
        var_r3 = arg0->unkA;
        var_ip = arg0->unkE;
        temp_r0_3 = arg0->unk20;
        switch (temp_r0_3) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            var_ip += 0x14;
            break;
        case 1:                                     /* switch 2 */
            var_ip -= 0x14;
            break;
        case 2:                                     /* switch 2 */
            var_r3 -= 0x14;
            break;
        case 3:                                     /* switch 2 */
            var_r3 += 0x14;
            break;
        }
        sp0.unk0 = (u16) ((0xFFFFFC00 & sp0.unk0) | (arg0->unk4 & 0x3FF));
        sp0.unk1 = (u8) ((3 & sp0.unk1) | (((u16) var_r3 & 0x3F) * 4));
        sp0.unk2 = (u16) ((0xFFFFFC00 & sp0.unk2) | (((u32) (var_r3 << 0x10) >> 0x16) & 0x3FF));
        sp0.unk3 = (u8) ((3 & sp0.unk3) | (((u16) var_ip & 0x3F) * 4));
        sp0.unk4 = (u16) ((0xFFFFFC00 & sp0.unk4) | (((u32) (var_ip << 0x10) >> 0x16) & 0x3FF));
        temp_r0_4 = arg0->unk0;
        (*temp_r0_4)->unkBC(temp_r0_4, &sp0, arg0->unk56);
        arg0->unk38 = 0;
        arg0->unk59 = 0;
        return;
    case 2:                                         /* switch 1 */
        var_r1_2 = 0;
        if (arg0->unk24 == 0) {
            var_r1_2 = 1;
        }
        if (var_r1_2 != 0) {
            temp_r0_5 = arg0 + 0x34;
            arg0->unk34 = 0U;
            temp_r0_5->unk4 = 0;
            (temp_r0_5 + 4)->unk21 = 0;
            return;
        }
        return;
    case 3:                                         /* switch 1 */
        var_r1_3 = 0;
        if (arg0->unk24 == 0) {
            var_r1_3 = 1;
        }
        if (var_r1_3 != 0) {
            temp_r0_6 = arg0 + 0x38;
            temp_r0_6->unk4 = 0;
            temp_r0_6->unk8 = 0;
            temp_r0_6->unk14 = 0x150000;
            *(temp_r0_6 - 4) = 0;
            arg0->unk59 = 1;
            return;
        }
        break;
    case 4:                                         /* switch 1 */
        temp_r0_7 = arg0->unk35 - 1;
        arg0->unk35 = temp_r0_7;
        temp_r2_2 = temp_r0_7;
        if (temp_r2_2 == 0) {
            arg0->unk34 = temp_r2_2;
            (arg0 + 0x34)->unk4 = temp_r2_2;
        }
        break;
    }
}

