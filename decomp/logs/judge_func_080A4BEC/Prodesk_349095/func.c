#include "common.h"
extern ? gUnk_08107114;
extern ? gUnk_08107120;
extern ? gUnk_0810712C;
extern ? gUnk_08107138;
extern ? gUnk_0810715C;
extern ? gUnk_08107168;
extern ? gUnk_08107174;
extern ? gUnk_08107180;
extern ? gUnk_0810718C;
extern ? gUnk_08107198;
extern ? gUnk_081071A4;
extern ? gUnk_081071B0;
extern ? gUnk_081071BC;
extern ? gUnk_081071C8;
extern ? gUnk_081071D4;
extern ? gUnk_081071E0;
extern ? gUnk_081071EC;
extern ? gUnk_081071F8;

void func_080A4BEC(void *arg0) {
    ? *var_r1;
    u32 temp_r0;
    u8 temp_r0_10;
    u8 temp_r0_11;
    u8 temp_r0_12;
    u8 temp_r0_13;
    u8 temp_r0_14;
    u8 temp_r0_15;
    u8 temp_r0_16;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r0_8;
    u8 temp_r0_9;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *var_r2;

    if (arg0->unk8C != 0) {
        arg0->unk8 = (s32) (arg0->unk8 + arg0->unk84);
        arg0->unkC = (s32) (arg0->unkC + arg0->unk88);
        arg0->unk8C = (s32) (arg0->unk8C - 1);
        arg0->unk29 = 1;
    }
    temp_r0 = arg0->unk4;
    switch (temp_r0) {                              /* irregular */
    case 0xE:
        temp_r3 = arg0 + 0x40;
        temp_r0_2 = temp_r3->unk2 + 1;
        temp_r3->unk2 = temp_r0_2;
        if ((u32) temp_r0_2 >= (u32) gUnk_0810718C.unk8) {
            temp_r3->unk2 = 0U;
            temp_r3->unk1 = 1;
        }
        temp_r3_2 = arg0 + 0x44;
        temp_r0_3 = temp_r3_2->unk2 + 1;
        temp_r3_2->unk2 = temp_r0_3;
        if ((u32) temp_r0_3 >= (u32) gUnk_08107198.unk8) {
            temp_r3_2->unk2 = 0U;
            temp_r3_2->unk1 = 1;
        }
        var_r2 = arg0 + 0x48;
        temp_r0_4 = var_r2->unk2 + 1;
        var_r2->unk2 = temp_r0_4;
        if ((u32) temp_r0_4 < (u32) gUnk_081071A4.unk8) {
            return;
        }
        var_r2->unk2 = 0U;
block_43:
        var_r2->unk1 = 1;
        return;
    case 0xF:
        temp_r3_3 = arg0 + 0x40;
        temp_r0_5 = temp_r3_3->unk2 + 1;
        temp_r3_3->unk2 = temp_r0_5;
        if ((u32) temp_r0_5 >= (u32) gUnk_081071B0.unk8) {
            temp_r3_3->unk2 = 0U;
            temp_r3_3->unk1 = 1;
        }
        temp_r3_4 = arg0 + 0x44;
        temp_r0_6 = temp_r3_4->unk2 + 1;
        temp_r3_4->unk2 = temp_r0_6;
        if ((u32) temp_r0_6 >= (u32) gUnk_081071BC.unk8) {
            temp_r3_4->unk2 = 0U;
            temp_r3_4->unk1 = 1;
        }
        var_r2 = arg0 + 0x48;
        temp_r0_7 = var_r2->unk2 + 1;
        var_r2->unk2 = temp_r0_7;
        if ((u32) temp_r0_7 < (u32) gUnk_081071C8.unk8) {
            return;
        }
        var_r2->unk2 = 0U;
        goto block_43;
    case 0x3C:
        var_r2 = arg0 + 0x50;
        temp_r0_8 = var_r2->unk2 + 1;
        var_r2->unk2 = temp_r0_8;
        if ((u32) temp_r0_8 < (u32) gUnk_081071F8.unk8) {
            return;
        }
        var_r2->unk2 = 0U;
        goto block_43;
    case 0x1F:
        var_r2 = arg0 + 0x54;
        temp_r0_9 = var_r2->unk2 + 1;
        var_r2->unk2 = temp_r0_9;
        if ((u32) temp_r0_9 < (u32) gUnk_081071E0.unk8) {
            return;
        }
        var_r2->unk2 = 0U;
        goto block_43;
    case 0x8:
        var_r2 = arg0 + 0x4C;
        temp_r0_10 = var_r2->unk2 + 1;
        var_r2->unk2 = temp_r0_10;
        if ((u32) temp_r0_10 >= (u32) gUnk_081071D4.unk8) {
            var_r2->unk2 = 0U;
            goto block_43;
        }
        break;
    case 0x9:
        var_r2 = arg0 + 0x4C;
        temp_r0_11 = var_r2->unk2 + 1;
        var_r2->unk2 = temp_r0_11;
        if ((u32) temp_r0_11 >= (u32) gUnk_081071EC.unk8) {
            var_r2->unk2 = 0U;
            goto block_43;
        }
        break;
    case 0x6:
        temp_r3_5 = arg0 + 0x38;
        temp_r0_12 = temp_r3_5->unk2 + 1;
        temp_r3_5->unk2 = temp_r0_12;
        if ((u32) temp_r0_12 >= (u32) gUnk_0810715C.unk8) {
            temp_r3_5->unk2 = 0U;
            temp_r3_5->unk1 = 1;
        }
        var_r2 = arg0 + 0x3C;
        var_r1 = &gUnk_08107168;
block_41:
        temp_r0_13 = var_r2->unk2 + 1;
        var_r2->unk2 = temp_r0_13;
        if ((u32) temp_r0_13 >= (u32) var_r1->unk8) {
            var_r2->unk2 = 0U;
            goto block_43;
        }
        break;
    case 0x7:
        temp_r3_6 = arg0 + 0x38;
        temp_r0_14 = temp_r3_6->unk2 + 1;
        temp_r3_6->unk2 = temp_r0_14;
        if ((u32) temp_r0_14 >= (u32) gUnk_08107174.unk8) {
            temp_r3_6->unk2 = 0U;
            temp_r3_6->unk1 = 1;
        }
        var_r2 = arg0 + 0x3C;
        var_r1 = &gUnk_08107180;
        goto block_41;
    case 0x0:
    case 0x3E:
    case 0x3F:
        temp_r3_7 = arg0 + 0x30;
        temp_r0_15 = temp_r3_7->unk2 + 1;
        temp_r3_7->unk2 = temp_r0_15;
        if ((u32) temp_r0_15 >= (u32) gUnk_08107114.unk8) {
            temp_r3_7->unk2 = 0U;
            temp_r3_7->unk1 = 1;
        }
        var_r2 = arg0 + 0x34;
        var_r1 = &gUnk_0810712C;
        goto block_41;
    case 0x1:
        temp_r3_8 = arg0 + 0x30;
        temp_r0_16 = temp_r3_8->unk2 + 1;
        temp_r3_8->unk2 = temp_r0_16;
        if ((u32) temp_r0_16 >= (u32) gUnk_08107120.unk8) {
            temp_r3_8->unk2 = 0U;
            temp_r3_8->unk1 = 1;
        }
        var_r2 = arg0 + 0x34;
        var_r1 = &gUnk_08107138;
        goto block_41;
    }
}

