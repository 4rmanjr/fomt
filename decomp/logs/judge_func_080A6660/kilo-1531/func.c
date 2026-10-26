#include "common.h"
u32 GetCapacity__C4Barn(void *);                    /* extern */
u32 GetCapacity__C4Coop(void *);                    /* extern */
s32 GetFridge__C9FarmHouse(void *);                 /* extern */
u32 GetPregnancyStallCapacity__C4Barn(void *);      /* extern */
s32 GetRecordPlayer__C9FarmHouse(void *);           /* extern */
s32 GetShelf__C9FarmHouse(void *);                  /* extern */
s32 GetUpgradeLevel__C4Barn(void *);                /* extern */
s32 GetUpgradeLevel__C4Coop(void *);                /* extern */
s32 GetUpgradeLevel__C8Rucksack(void *);            /* extern */
u32 GetUpgradeLevel__C9FarmHouse(void *);           /* extern */
s32 HasAlbum__C12RecordPlayer();                    /* extern */
s32 HasBathroom__C9FarmHouse(void *);               /* extern */
s32 HasBushelForEnt__C4CoopUi(void *, u32);         /* extern */
s32 HasBushelForPregnancyStall__C4BarnUi(void *, u32); /* extern */
s32 HasBushelForStall__C4BarnUi(void *, u32);       /* extern */
s32 HasCarpet__C9FarmHouse(void *);                 /* extern */
s32 HasClock__C9FarmHouse(void *);                  /* extern */
s32 HasKitchen__C9FarmHouse(void *);                /* extern */
s32 HasLargeBed__C9FarmHouse(void *);               /* extern */
s32 HasMirror__C9FarmHouse(void *);                 /* extern */
s32 HasVase__C9FarmHouse(void *);                   /* extern */
s32 IsIncubatorOccupied__C4CoopUi(void *, s32);     /* extern */
s32 func_0800E324(s32);                             /* extern */
s32 func_0800E9A0(void *);                          /* extern */
s32 func_08010E48(void *);                          /* extern */
s32 func_08010E50(void *);                          /* extern */
s32 func_08010E58(void *);                          /* extern */
u32 func_0809D8A4(void *);                          /* extern */
u32 func_0809D8B8(void *);                          /* extern */
s32 func_0809D8D4(void *, u32, u32);                /* extern */
s32 func_0809E0AC(void *, u32, u32);                /* extern */
s32 func_080A5BD8(void *, ? *, s32, s32);             /* extern */
s32 func_080A5CC0();                                  /* extern */
s32 func_080A6024(void *, u32);                       /* extern */
s32 func_080A607C(void *, u32);                       /* extern */
s32 func_080A63B8(void *, s32);                       /* extern */
s32 func_080AA540(void *, s32, s32, s32, s32);        /* extern */
s32 func_080AA6D0(void *, s32, s32, void *, s32);     /* extern */
s32 func_080AA850(void *, s32);                       /* extern */
s32 func_080AA8F0(void *);                          /* extern */
s32 func_080AACB8(void *);                            /* extern */
s32 method_0800AF5C__C9FieldPlotPC9FieldPlotT1(void *, void *, void *); /* extern */
s32 method_0800C5C4__C4Coop(void *);                /* extern */
s32 method_0800CF00__C4Barn(void *);                /* extern */
s32 method_0800CF08__C4Barn(void *);                /* extern */
extern ? gUnk_0810692C;
extern ? gUnk_08106944;
extern ? gUnk_0810695C;
extern ? gUnk_08106974;
extern ? gUnk_0810698C;
extern ? gUnk_081069A4;
extern ? gUnk_081069BC;
extern ? gUnk_081069D4;
extern ? gUnk_081069EC;
extern ? gUnk_08106A04;
extern ? gUnk_08106A1C;
extern ? gUnk_08106A34;
extern ? gUnk_08106A4C;
extern ? gUnk_08106A64;
extern ? gUnk_08106A94;
extern ? gUnk_08106AC4;
extern ? gUnk_08106AF4;
extern ? gUnk_08106B0C;
extern ? gUnk_08106B24;
extern ? gUnk_08106B3C;
extern ? gUnk_08106B54;
extern ? gUnk_08106B6C;
extern ? gUnk_08106B84;
extern ? gUnk_08106B9C;
extern ? gUnk_08106BB4;
extern ? gUnk_08106BCC;
extern ? gUnk_08106BE4;
extern ? gUnk_08106C2C;
extern ? gUnk_08106C44;
extern ? gUnk_08106C5C;
extern ? gUnk_08106CA4;
extern ? gUnk_08106CBC;
extern ? gUnk_08106CD4;
extern ? gUnk_08106CEC;
extern ? gUnk_08106D04;
extern ? gUnk_08106D1C;
extern ? gUnk_08106D34;
extern ? gUnk_08106D4C;
extern ? gUnk_08106D64;
extern ? gUnk_08106D7C;
extern ? gUnk_08106D94;
extern ? gUnk_08106DC4;
extern ? gUnk_08106DDC;
extern ? gUnk_08106DF4;
extern ? gUnk_08106E0C;
extern ? gUnk_08107204;
extern ? gUnk_08107230;
extern ? gUnk_0810725C;
extern ? gUnk_08107288;
extern ? gUnk_081072B4;
extern ? gUnk_081072E0;
extern ? gUnk_0810730C;

void func_080A6660(void *arg0) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    ? *var_r1;
    ? *var_r1_10;
    ? *var_r1_11;
    ? *var_r1_3;
    ? *var_r1_4;
    ? *var_r1_6;
    ? *var_r1_8;
    ? *var_r1_9;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r2;
    s32 temp_r4_2;
    s32 temp_r6_2;
    s32 temp_r6_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r2;
    s32 var_r2_3;
    s32 var_r2_5;
    s32 var_r2_6;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r6;
    s32 var_sl;
    s32 var_sl_2;
    u32 temp_r0_2;
    u32 temp_r0_4;
    u32 temp_r0_7;
    u32 temp_r2_2;
    u32 var_r1_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u32 var_r4_7;
    u32 var_r4_8;
    u32 var_r5;
    u32 var_r7;
    u8 temp_r3;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r6;
    void *var_r1_5;
    void *var_r1_7;
    void *var_r2_2;
    void *var_r2_4;

    func_080A5CC0();
    var_r6 = func_0800E324(arg0->unk94 + 0x10);
    temp_r0 = arg0->unk0;
    if (temp_r0 <= 0x2E) {
        if (temp_r0 < 0x2D) {

        } else {
            var_r6 = 1;
        }
    } else if (temp_r0 != 0x2F) {

    } else {
        var_r6 = 3;
    }
    temp_r4 = arg0->unk94;
    temp_r2 = arg0->unk0;
    switch (temp_r2) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        if (((u32) (temp_r4->unk219C << 0x19) >> 0x1E) != 1) {

        } else {
            func_080A5BD8(arg0, &gUnk_08106D34, 0x17, 0x11);
        }
        break;
    case 6:                                         /* switch 1 */
        if (((u32) (temp_r4->unk21A9 << 0x1E) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_0810725C, 0x13, 0x11);
        }
        if (((u32) (temp_r4->unk21A0 << 0x1E) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_0810730C, 0x16, 0x10);
        }
        if (((u32) (temp_r4->unk219A << 0x17) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_08107230, 0x13, 0x11);
        }
        if (((u32) (temp_r4->unk219B << 0x1A) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_08107230, 0x13, 0x11);
        }
        if (((u32) ((u8) temp_r4->unk219A << 0x1C) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_08107204, 8, 0xC);
            func_080A5BD8(arg0, &gUnk_081072B4, 0x11, 0xF);
        }
        if (((u32) (temp_r4->unk219D << 0x1B) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_08107288, 0x17, 0x17);
        }
        if (((u32) (temp_r4->unk219E << 0x1D) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_08107204, 8, 0xC);
        }
        if (((u32) (temp_r4->unk21A1 << 0x1B) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_08107204, 8, 0xC);
            func_080A5BD8(arg0, &gUnk_081072B4, 0x11, 0xF);
        }
        if (((u32) (temp_r4->unk21A2 << 0x1D) >> 0x1E) == 1) {
            func_080A5BD8(arg0, &gUnk_08107204, 8, 0xC);
        }
        if (((u8) (temp_r4 + 0x214C)->unk4C >> 6) == 1) {
            func_080A5BD8(arg0, &gUnk_081072E0, 0x1B, 0x1A);
            func_080A5BD8(arg0, &gUnk_08107230, 0x13, 0x11);
        }
        break;
    }
    temp_r2_2 = arg0->unk4;
    switch (temp_r2_2) {                            /* switch 2 */
    case 0x8:                                       /* switch 2 */
        if (var_r6 == 1) {
            func_080A5BD8(arg0, &gUnk_08106D1C, 0xA, 0x19);
        }
        if ((func_08010E58(arg0->unk94) << 0x18) != 0) {
            var_r1 = &gUnk_08106CEC;
            var_r2 = 0x17;
block_168:
            func_080A5BD8(arg0, var_r1, var_r2, 0x34);
        }
        break;
    case 0x9:                                       /* switch 2 */
        if ((func_08010E58(arg0->unk94) << 0x18) != 0) {
            var_r1 = &gUnk_08106D04;
            var_r2 = 0x17;
            goto block_168;
        }
        break;
    case 0x13:                                      /* switch 2 */
        func_080AA850(arg0, 0);
        break;
    case 0x16:                                      /* switch 2 */
        func_080AA850(arg0, 1);
        break;
    case 0x17:                                      /* switch 2 */
        func_080AA850(arg0, 2);
        func_080AA850(arg0, 3);
        break;
    case 0x1E:                                      /* switch 2 */
        func_080AA850(arg0, 6);
        func_080AA850(arg0, 7);
        break;
    case 0x30:                                      /* switch 2 */
        func_080AA850(arg0, 8);
        break;
    case 0x18:                                      /* switch 2 */
        temp_r1 = arg0->unk94;
        if (((u32) (temp_r1->unk2186 << 0x19) >> 0x1E) == 2) {
            temp_r3 = temp_r1->unk11;
            var_r1_2 = ((u32) (temp_r3 << 0x19) >> 0x1B) + ((((u32) (temp_r3 << 0x1E) >> 0x1E) * 0x1E) + ((((u32) (temp_r1->unk10 << 0x1D) >> 0x1D) + 6) * 0x78));
            if (var_r1_2 > 6U) {
                var_r1_2 = var_r1_2 % 7U;
            }
            if ((var_r1_2 & 7) == 3) {
                func_080A5BD8(arg0, &gUnk_08106E0C, 0x28, 0x1D);
            }
        }
        func_080AA850(arg0, 4);
        func_080AA850(arg0, 5);
        break;
    case 0x38:                                      /* switch 2 */
    case 0x39:                                      /* switch 2 */
    case 0x3A:                                      /* switch 2 */
    case 0x3B:                                      /* switch 2 */
    case 0x3D:                                      /* switch 2 */
        temp_r0_2 = temp_r2_2 - 0x38;
        switch (temp_r0_2) {                        /* switch 3 */
        case 3:                                     /* switch 3 */
            break;
        case 2:                                     /* switch 3 */
            break;
        case 1:                                     /* switch 3 */
            break;
        default:                                    /* switch 3 */
        case 0:                                     /* switch 3 */
        case 4:                                     /* switch 3 */
        case 5:                                     /* switch 3 */
            break;
        }
        temp_r6 = arg0->unk94 + 0x2E58;
        var_r7 = 0;
loop_65:
        if (var_r7 < func_0809D8B8(temp_r6)) {
            var_r5 = 0;
loop_63:
            if (var_r5 < func_0809D8A4(temp_r6)) {
                temp_r4_2 = func_0809D8D4(temp_r6, var_r5, var_r7);
                func_080AA540(arg0, (var_r5 * 2) + 2, (var_r7 * 2) + 7, temp_r4_2, func_0809E0AC(temp_r6, var_r5, var_r7));
                var_r5 += 1;
                goto loop_63;
            }
            var_r7 += 1;
            goto loop_65;
        }
        break;
    case 0x1F:                                      /* switch 2 */
        func_080AA850(arg0, 0xA);
        func_080AA850(arg0, 0xB);
        break;
    case 0x19:                                      /* switch 2 */
        func_080AA850(arg0, 9);
        temp_r0_3 = GetUpgradeLevel__C8Rucksack(arg0->unk94 + 0x1C38);
        switch (temp_r0_3) {                        /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            func_080A5BD8(arg0, &gUnk_08106D7C, 0x21, 0x14);
            break;
        case 1:                                     /* switch 4 */
            if (func_0800E9A0(arg0->unk94 + 0x1BD8) == 7) {
                func_080A5BD8(arg0, &gUnk_08106D7C, 0x21, 0x14);
            }
            break;
        }
        if ((func_080AA8F0(arg0) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106D94, 0x21, 0x17);
        }
        switch (var_r6) {                           /* switch 5; irregular */
        case 0:                                     /* switch 5 */
            var_r1_3 = &gUnk_08106DC4;
block_85:
            func_080A5BD8(arg0, var_r1_3, 0xC, 0x14);
            break;
        case 1:                                     /* switch 5 */
            var_r1_3 = &gUnk_08106DDC;
            goto block_85;
        case 2:                                     /* switch 5 */
            var_r1_3 = &gUnk_08106DF4;
            goto block_85;
        }
        break;
    case 0x6:                                       /* switch 2 */
        if ((func_08010E50(arg0->unk94) << 0x18) != 0) {
            var_r1_4 = &gUnk_08106CBC;
block_90:
            func_080A5BD8(arg0, var_r1_4, 0x3C, 0);
        }
        break;
    case 0x7:                                       /* switch 2 */
        if ((func_08010E50(arg0->unk94) << 0x18) != 0) {
            var_r1_4 = &gUnk_08106CD4;
            goto block_90;
        }
        break;
    case 0x0:                                       /* switch 2 */
        var_r0 = 0;
        do {
            var_r4 = 0;
            temp_r6_2 = var_r0 + 1;
            sp1C = var_r0 - 1;
            sp20 = var_r0 * 2;
            sp4 = 0x2B * var_r0;
            sp8 = temp_r6_2;
            spC = 0x2B * temp_r6_2;
            var_sl = 0x22;
loop_93:
            temp_r1_2 = arg0->unk94 + 0x9DC;
            temp_r5 = temp_r1_2 + ((var_r4 + sp4) * 4);
            var_r0_2 = 0;
            if ((var_r4 >= 0) && (temp_r6_2 >= 0) && (var_r4 <= 0x2A) && (sp8 <= 0x18)) {
                var_r0_2 = 1;
            }
            if (var_r0_2 != 0) {
                var_r1_5 = temp_r1_2 + ((var_r4 + spC) * 4);
            } else {
                var_r1_5 = 0;
            }
            var_r3 = 0;
            if ((var_r4 >= 0) && (sp1C >= 0) && (var_r4 <= 0x2A) && (sp1C <= 0x18)) {
                var_r3 = 1;
            }
            if (var_r3 != 0) {
                var_r2_2 = temp_r1_2 + ((var_r4 + (0x2B * sp1C)) * 4);
            } else {
                var_r2_2 = 0;
            }
            func_080AA6D0(arg0, var_sl, sp20 + 0x16, temp_r5, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r5, var_r1_5, var_r2_2));
            var_sl += 2;
            var_r4 += 1;
            if ((u32) var_r4 <= 0x2AU) {
                goto loop_93;
            }
            var_r0 = temp_r6_2;
        } while ((u32) var_r0 <= 0x18U);
        temp_r0_4 = GetUpgradeLevel__C9FarmHouse(arg0->unk94 + 0x1F4);
        switch (temp_r0_4) {                        /* switch 6; irregular */
        default:                                    /* switch 6 */
            var_r1_6 = &gUnk_0810692C;
            var_r2_3 = 0x1A;
block_117:
            func_080A5BD8(arg0, var_r1_6, var_r2_3, 3);
            break;
        case 1:                                     /* switch 6 */
            var_r1_6 = &gUnk_0810695C;
            var_r2_3 = 0x12;
            goto block_117;
        case 2:                                     /* switch 6 */
            func_080A5BD8(arg0, &gUnk_0810698C, 0xA, 2);
            break;
        }
        temp_r0_5 = GetUpgradeLevel__C4Barn(arg0->unk94 + 0x5F0);
        switch (temp_r0_5) {                        /* switch 7; irregular */
        case 0:                                     /* switch 7 */
            func_080A5BD8(arg0, &gUnk_081069BC, 0x3A, 2);
            break;
        case 1:                                     /* switch 7 */
            func_080A5BD8(arg0, &gUnk_081069EC, 0x3A, 2);
            break;
        }
        temp_r0_6 = GetUpgradeLevel__C4Coop(arg0->unk94 + 0x410);
        switch (temp_r0_6) {                        /* switch 8; irregular */
        case 0:                                     /* switch 8 */
            var_r1 = &gUnk_08106A1C;
block_167:
            var_r2 = 0xE;
            goto block_168;
        case 1:                                     /* switch 8 */
            var_r1 = &gUnk_08106A4C;
            goto block_167;
        }
        break;
    case 0x1:                                       /* switch 2 */
        var_r0_3 = 0;
        do {
            var_r4_2 = 0;
            temp_r6_3 = var_r0_3 + 1;
            sp24 = var_r0_3 - 1;
            sp28 = var_r0_3 * 2;
            sp10 = 0x2B * var_r0_3;
            sp14 = temp_r6_3;
            sp18 = 0x2B * temp_r6_3;
            var_sl_2 = 0x22;
loop_131:
            temp_r1_3 = arg0->unk94 + 0x9DC;
            temp_r5_2 = temp_r1_3 + ((var_r4_2 + sp10) * 4);
            var_r0_4 = 0;
            if ((var_r4_2 >= 0) && (temp_r6_3 >= 0) && (var_r4_2 <= 0x2A) && (sp14 <= 0x18)) {
                var_r0_4 = 1;
            }
            if (var_r0_4 != 0) {
                var_r1_7 = temp_r1_3 + ((var_r4_2 + sp18) * 4);
            } else {
                var_r1_7 = 0;
            }
            var_r3_2 = 0;
            if ((var_r4_2 >= 0) && (sp24 >= 0) && (var_r4_2 <= 0x2A) && (sp24 <= 0x18)) {
                var_r3_2 = 1;
            }
            if (var_r3_2 != 0) {
                var_r2_4 = temp_r1_3 + ((var_r4_2 + (0x2B * sp24)) * 4);
            } else {
                var_r2_4 = 0;
            }
            func_080AA6D0(arg0, var_sl_2, sp28 + 0x16, temp_r5_2, method_0800AF5C__C9FieldPlotPC9FieldPlotT1(temp_r5_2, var_r1_7, var_r2_4));
            var_sl_2 += 2;
            var_r4_2 += 1;
            if ((u32) var_r4_2 <= 0x2AU) {
                goto loop_131;
            }
            var_r0_3 = temp_r6_3;
        } while ((u32) var_r0_3 <= 0x18U);
        temp_r0_7 = GetUpgradeLevel__C9FarmHouse(arg0->unk94 + 0x1F4);
        switch (temp_r0_7) {                        /* switch 9; irregular */
        default:                                    /* switch 9 */
            var_r1_8 = &gUnk_08106944;
            var_r2_5 = 0x1A;
block_155:
            func_080A5BD8(arg0, var_r1_8, var_r2_5, 3);
            break;
        case 1:                                     /* switch 9 */
            var_r1_8 = &gUnk_08106974;
            var_r2_5 = 0x12;
            goto block_155;
        case 2:                                     /* switch 9 */
            func_080A5BD8(arg0, &gUnk_081069A4, 0xA, 2);
            break;
        }
        temp_r0_8 = GetUpgradeLevel__C4Barn(arg0->unk94 + 0x5F0);
        switch (temp_r0_8) {                        /* switch 10; irregular */
        case 0:                                     /* switch 10 */
            func_080A5BD8(arg0, &gUnk_081069D4, 0x3A, 2);
            break;
        case 1:                                     /* switch 10 */
            func_080A5BD8(arg0, &gUnk_08106A04, 0x3A, 2);
            break;
        }
        temp_r0_9 = GetUpgradeLevel__C4Coop(arg0->unk94 + 0x410);
        switch (temp_r0_9) {                        /* switch 11; irregular */
        case 0:                                     /* switch 11 */
            var_r1 = &gUnk_08106A34;
            goto block_167;
        case 1:                                     /* switch 11 */
            var_r1 = &gUnk_08106A64;
            goto block_167;
        }
        break;
    case 0x29:                                      /* switch 2 */
        func_080A5BD8(arg0, &gUnk_08106A94, 0x19, 0xF);
        if (GetRecordPlayer__C9FarmHouse(arg0->unk94 + 0x1F4) != 0) {
            if ((HasAlbum__C12RecordPlayer() << 0x18) != 0) {
                var_r1_9 = &gUnk_08106B24;
            } else {
                var_r1_9 = &gUnk_08106B3C;
            }
            func_080A5BD8(arg0, var_r1_9, 1, 0x11);
        } else {
            func_080A5BD8(arg0, &gUnk_08106B0C, 1, 0x11);
        }
        if ((HasVase__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106BB4, 0x13, 6);
        }
        if ((HasMirror__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106BCC, 8, 2);
        }
        if ((HasClock__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) == 0) {

        } else {
            var_r2_6 = 5;
block_203:
            func_080A5BD8(arg0, &gUnk_08106BE4, var_r2_6, 3);
        }
        break;
    case 0x2A:                                      /* switch 2 */
        func_080A5BD8(arg0, &gUnk_08106A94, 0x28, 0xF);
        if ((HasKitchen__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106B54, 2, 1);
        }
        if (GetFridge__C9FarmHouse(arg0->unk94 + 0x1F4) != 0) {
            func_080A5BD8(arg0, &gUnk_08106AC4, 0xB, 3);
        }
        if (GetShelf__C9FarmHouse(arg0->unk94 + 0x1F4) != 0) {
            func_080A5BD8(arg0, &gUnk_08106AF4, 0xF, 2);
        }
        if (GetRecordPlayer__C9FarmHouse(arg0->unk94 + 0x1F4) != 0) {
            if ((HasAlbum__C12RecordPlayer() << 0x18) != 0) {
                var_r1_10 = &gUnk_08106B24;
            } else {
                var_r1_10 = &gUnk_08106B3C;
            }
            func_080A5BD8(arg0, var_r1_10, 0x10, 0x11);
        } else {
            func_080A5BD8(arg0, &gUnk_08106B0C, 0x10, 0x11);
        }
        if ((HasCarpet__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106B9C, 0x17, 0xA);
        }
        if ((HasVase__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106BB4, 0x22, 6);
        }
        if ((HasMirror__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106BCC, 0x17, 2);
        }
        if ((HasClock__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) == 0) {

        } else {
            var_r2_6 = 0x14;
            goto block_203;
        }
        break;
    case 0x2B:                                      /* switch 2 */
        func_080A5BD8(arg0, &gUnk_08106A94, 0x36, 0xF);
        if ((HasKitchen__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106B54, 0xA, 1);
        }
        if (GetFridge__C9FarmHouse(arg0->unk94 + 0x1F4) != 0) {
            func_080A5BD8(arg0, &gUnk_08106AC4, 0x13, 3);
        }
        if (GetShelf__C9FarmHouse(arg0->unk94 + 0x1F4) != 0) {
            func_080A5BD8(arg0, &gUnk_08106AF4, 0x17, 2);
        }
        if (GetRecordPlayer__C9FarmHouse(arg0->unk94 + 0x1F4) != 0) {
            if ((HasAlbum__C12RecordPlayer() << 0x18) != 0) {
                var_r1_11 = &gUnk_08106B24;
            } else {
                var_r1_11 = &gUnk_08106B3C;
            }
            func_080A5BD8(arg0, var_r1_11, 0x18, 0x11);
        } else {
            func_080A5BD8(arg0, &gUnk_08106B0C, 0x18, 0x11);
        }
        func_080A5BD8(arg0, &gUnk_08106B6C, 4, 1);
        if ((HasLargeBed__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106B84, 0x34, 5);
        }
        if ((HasCarpet__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106B9C, 0x1F, 0xA);
        }
        if ((HasVase__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106BB4, 0x2A, 6);
        }
        if ((HasMirror__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106BCC, 0x1F, 2);
        }
        if ((HasClock__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106BE4, 0x1C, 3);
        }
        if ((HasBathroom__C9FarmHouse(arg0->unk94 + 0x1F4) << 0x18) == 0) {

        } else {
            func_080AA850(arg0, 0xC);
        }
        break;
    case 0x24:                                      /* switch 2 */
        temp_r5_3 = arg0->unk94 + 0x410;
        var_r4_3 = 0;
loop_233:
        if (var_r4_3 < GetCapacity__C4Coop(temp_r5_3)) {
            if ((HasBushelForEnt__C4CoopUi(temp_r5_3, var_r4_3) << 0x18) != 0) {
                func_080A6024(arg0, var_r4_3);
            }
            var_r4_3 += 1;
            goto loop_233;
        }
        if ((IsIncubatorOccupied__C4CoopUi(arg0->unk94 + 0x410, 0) << 0x18) == 0) {

        } else {
            func_080A63B8(arg0, 0);
        }
        break;
    case 0x25:                                      /* switch 2 */
        temp_r5_4 = arg0->unk94 + 0x410;
        var_r4_4 = 0;
loop_241:
        if (var_r4_4 < GetCapacity__C4Coop(temp_r5_4)) {
            if ((HasBushelForEnt__C4CoopUi(temp_r5_4, var_r4_4) << 0x18) != 0) {
                func_080A6024(arg0, var_r4_4);
            }
            var_r4_4 += 1;
            goto loop_241;
        }
        if ((method_0800C5C4__C4Coop(temp_r5_4) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106C2C, 2, 5);
        }
        if ((IsIncubatorOccupied__C4CoopUi(arg0->unk94 + 0x410, 0) << 0x18) != 0) {
            func_080A63B8(arg0, 0);
        }
        if ((IsIncubatorOccupied__C4CoopUi(arg0->unk94 + 0x410, 1) << 0x18) == 0) {

        } else {
            func_080A63B8(arg0, 1);
        }
        break;
    case 0x26:                                      /* switch 2 */
        temp_r5_5 = arg0->unk94 + 0x5F0;
        var_r4_5 = 0;
loop_253:
        if (var_r4_5 < GetCapacity__C4Barn(temp_r5_5)) {
            if ((HasBushelForStall__C4BarnUi(temp_r5_5, var_r4_5) << 0x18) != 0) {
                func_080A607C(arg0, var_r4_5);
            }
            var_r4_5 += 1;
            goto loop_253;
        }
        var_r4_6 = 0;
loop_258:
        if (var_r4_6 < GetPregnancyStallCapacity__C4Barn(temp_r5_5)) {
            if ((HasBushelForPregnancyStall__C4BarnUi(temp_r5_5, var_r4_6) << 0x18) != 0) {
                func_080A607C(arg0, var_r4_6 + 0x10);
            }
            var_r4_6 += 1;
            goto loop_258;
        }
        break;
    case 0x27:                                      /* switch 2 */
        temp_r5_6 = arg0->unk94 + 0x5F0;
        var_r4_7 = 0;
loop_264:
        if (var_r4_7 < GetCapacity__C4Barn(temp_r5_6)) {
            if ((HasBushelForStall__C4BarnUi(temp_r5_6, var_r4_7) << 0x18) != 0) {
                func_080A607C(arg0, var_r4_7);
            }
            var_r4_7 += 1;
            goto loop_264;
        }
        var_r4_8 = 0;
loop_269:
        if (var_r4_8 < GetPregnancyStallCapacity__C4Barn(temp_r5_6)) {
            if ((HasBushelForPregnancyStall__C4BarnUi(temp_r5_6, var_r4_8) << 0x18) != 0) {
                func_080A607C(arg0, var_r4_8 + 0x10);
            }
            var_r4_8 += 1;
            goto loop_269;
        }
        if ((method_0800CF00__C4Barn(temp_r5_6) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106C5C, 0xC, 5);
        }
        if ((method_0800CF08__C4Barn(temp_r5_6) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106C44, 8, 5);
        }
        break;
    case 0xE:                                       /* switch 2 */
        if ((func_08010E48(arg0->unk94) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106D4C, 0x24, 2);
        }
        break;
    case 0xF:                                       /* switch 2 */
        func_080A5BD8(arg0, &gUnk_08106CA4, 0x20, 0x20);
        if ((func_08010E48(arg0->unk94) << 0x18) != 0) {
            func_080A5BD8(arg0, &gUnk_08106D64, 0x24, 2);
        }
        break;
    }
    func_080AACB8(arg0);
}

