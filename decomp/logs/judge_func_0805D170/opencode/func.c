#include "common.h"
s32 __4FoodUi(void ***, u16);                         /* extern */
s32 __7ArticleUi(u8 *, u16);                          /* extern */
void *__builtin_new(s32);                           /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
s32 func_080088D4(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_0800EAFC(void *);                            /* extern */
s32 func_0800F3B0(void *, s32);                       /* extern */
s32 func_0800F3E8(void *, u8);                        /* extern */
s32 func_0800F510(void *, s32);                       /* extern */
s32 func_08050E50(s32, s32);                          /* extern */
s32 func_0805D760(void *);                            /* extern */
s32 func_0805D9C0(void *);                            /* extern */
s32 func_0805DC24(void *);                            /* extern */
s32 func_0805DE24(void *);                            /* extern */
s32 func_0805DFC4(void *);                            /* extern */
s32 memcpy(u8 *, void ***, s32);                      /* extern */
extern s32 gUnk_080FB000;
extern s32 gUnk_080FB0F0;
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    s32 unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unkD;
    s32 unk10;
    u8 _pad14[2];
    s32 unk16;
    u8 _pad1A[54];
    s32 unk50;
    u8 _pad54[248];
    s32 unk14C;
    u8 _pad150[2432];
    s32 unkAD0;
    s32 unkAD4;
    s32 unkAD6;
    s32 unkAD8;
    s32 unkADA;
    s32 unkADC;
    s32 unkADE;
    s32 unkAE0;
    s32 unkAE1;
    u8 _padAE5[11];
    s32 unkAF0;
    u8 _padAF4[5784];
    struct GenObj *unk218C;
    u8 _pad2190[55];
    struct GenObj *unk21C7;
    u8 _pad21CB[2685];
    struct GenObj *unk2C48;
    struct GenObj *unk2C4A;
} GenObj;
s32 *func_0805D170(s32 *arg0, GenObj *arg1) {
s32 sp0;
    GenObj *sp4;
    void **sp8;
    u8 spC;
    u8 sp10;
    void ***sp14;
    s16 *var_r1_5;
    s16 *var_r1_6;
    s16 temp_r0_3;
    s16 temp_r0_6;
    s16 temp_r3;
    s16 temp_r4_2;
    s32 temp_r1_2;
    s32 temp_r1_5;
    s32 temp_r2_5;
    s32 temp_r3_2;
    s32 var_r8;
    s8 *var_r0;
    s8 var_r1;
    u16 *var_r1_2;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r1_3;
    u16 temp_r1_4;
    u16 temp_r1_6;
    u16 var_r1_3;
    u16 var_r1_4;
    u8 temp_r5;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r0_7;
    GenObj *temp_r0_8;
    void *temp_r1;
    GenObj *temp_r2;
    GenObj *temp_r2_2;
    GenObj *temp_r2_3;
    GenObj *temp_r2_4;
    GenObj *temp_r3_3;
    GenObj *temp_r4;
    void *temp_r5_2;

    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3FU;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    func_08009300((GenObj *)((u8 *)temp_r4 + 0xC), temp_r1);
    sp4 = temp_r4;
    func_08050E50(arg1->unk10, 0x75);
    var_r1 = 9;
    var_r0 = (GenObj *)((u8 *)arg1 + 0xAE9);
    do {
        *var_r0 = var_r1;
        var_r0 -= 1;
        var_r1 -= 1;
    } while ((s32) var_r1 >= 0);
    if ((s32) (arg1->unk8->unk2C4A << 0x1B) < 0) {
        arg1->unkAE0 = 0xA;
    }
    if ((s32) (arg1->unk8->unk2C4A << 0x1C) < 0) {
        arg1->unkAE1 = 0xB;
    }
    func_0805D9C0(arg1);
    func_0805DC24(arg1);
    arg1->unkAD4 = 0U;
    arg1->unkAD6 = 0U;
    arg1->unkAD8 = 0;
    arg1->unkADC = 2;
    arg1->unkADA = 0;
    func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    var_r8 = 0;
loop_7:
    func_080087C8(arg1);
    func_080088B8(arg1);
    temp_r0_3 = arg1->unkADA;
    switch ((u32) temp_r0_3) {                      /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            var_r1_2 = (GenObj *)((u8 *)arg1 + 0xADA);
block_67:
            *var_r1_2 += 1;
        }
        break;
    case 1:                                         /* switch 1 */
        if (func_080088D4(arg1) & 0x40) {
            func_08008B6C((GenObj *)((u8 *)arg1 + 0x1C), 0xCB);
            if ((s32) (s16) arg1->unkAD4 > 0) {
                temp_r0_4 = arg1->unkAD4 - 1;
                arg1->unkAD4 = temp_r0_4;
                var_r1_3 = temp_r0_4;
            } else {
                var_r1_3 = 0;
            }
            arg1->unkAD4 = var_r1_3;
            if ((s32) (s16) var_r1_3 >= (s32) (s16) arg1->unkAD6) {

            } else {
                arg1->unkAD6 = (u16) (arg1->unkAD6 - 1);
                arg1->unkADA = 5;
            }
        } else {
            temp_r5 = func_080088D4(arg1) & 0x80;
            if (temp_r5 != 0) {
                func_08008B6C((GenObj *)((u8 *)arg1 + 0x1C), 0xCB);
                if ((s32) (s16) arg1->unkAD4 <= 8) {
                    temp_r0_5 = arg1->unkAD4 + 1;
                    arg1->unkAD4 = temp_r0_5;
                    var_r1_4 = temp_r0_5;
                } else {
                    var_r1_4 = 9;
                }
                arg1->unkAD4 = var_r1_4;
                if ((s32) ((s16) arg1->unkAD4 - (s16) arg1->unkAD6) <= 7) {

                } else {
                    arg1->unkAD6 = (u16) (arg1->unkAD6 + 1);
                    arg1->unkADA = 6;
                }
            } else {
                temp_r4_2 = func_080088CC(arg1) & 1;
                if (temp_r4_2 != 0) {
                    func_08008B6C((GenObj *)((u8 *)arg1 + 0x1C), 0xC5);
                    arg1->unkADC = (s16) temp_r5;
                    arg1->unkAD8 = (s16) *((GenObj *)((u8 *)arg1 + 0xAE0) + (s16) arg1->unkAD4);
                    temp_r3 = arg1->unkAD8;
                    if ((s32) ((temp_r3 * 0x14) + &gUnk_080FB000)->unk10 <= (s32) arg1->unkAD0) {
                        arg1->unkAF0 = (s32) temp_r3;
                        arg1->unkADA = 8;
                    } else {
                        arg1->unkADA = 7;
                    }
                } else if (!(func_080088CC(arg1) & 2)) {

                } else {
                    func_08008B6C((GenObj *)((u8 *)arg1 + 0x1C), 0xC6);
                    arg1->unkADC = temp_r4_2;
                    arg1->unkADA = 2;
                }
            }
        }
        break;
    case 2:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
    case 4:                                         /* switch 1 */
        if (arg1->unkADC != 2) {

        } else if (arg1->unkADE == 0) {
            var_r1_5 = (GenObj *)((u8 *)arg1 + 0xADA);
block_63:
            *var_r1_5 = 0xB;
        } else {
            var_r1_6 = (GenObj *)((u8 *)arg1 + 0xADA);
block_65:
            *var_r1_6 = 1;
        }
        break;
    case 5:                                         /* switch 1 */
        temp_r1_3 = arg1->unk14C - 4;
        arg1->unk14C = temp_r1_3;
        if (temp_r1_3 & 0xF) {

        } else {
block_64:
            var_r1_6 = (GenObj *)((u8 *)arg1 + 0xADA);
            goto block_65;
        }
        break;
    case 6:                                         /* switch 1 */
        temp_r1_4 = arg1->unk14C + 4;
        arg1->unk14C = temp_r1_4;
        if (temp_r1_4 & 0xF) {

        } else {
            var_r1_6 = (GenObj *)((u8 *)arg1 + 0xADA);
            goto block_65;
        }
        break;
    case 7:                                         /* switch 1 */
        if (arg1->unkADC != 2) {

        } else {
            var_r1_6 = (GenObj *)((u8 *)arg1 + 0xADA);
            goto block_65;
        }
        break;
    case 8:                                         /* switch 1 */
    case 9:                                         /* switch 1 */
    case 10:                                        /* switch 1 */
        if (arg1->unkADC != 2) {

        } else {
            if (arg1->unkADE != 0) {
                goto block_64;
            }
            temp_r0_6 = arg1->unkAD8;
            switch (temp_r0_6) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
                func_0800EAFC(arg1->unk8 + 0x1BD8);
                temp_r2 = arg1->unk8;
                temp_r2->unk2C4A = (u8) (temp_r2->unk2C4A | 8);
                func_0800F510(arg1->unk8 + 0x1C2C, 0x15F);
                break;
            case 8:                                 /* switch 2 */
                __4FoodUi(&sp8, gUnk_080FB0F0.unk10);
                temp_r5_2 = arg1->unk8 + 0x1C2C;
                memcpy(&spC, &sp8, 3);
                func_0800F3B0(temp_r5_2, ((&(GenObj *)((u8 *)sp0 + 0xD))->unk1 << 0x10) | ((sp0.unkD << 8) | spC));
                break;
            case 0:                                 /* switch 2 */
                temp_r2_2 = arg1->unk8;
                temp_r2_2->unk2C4A = (u8) (temp_r2_2->unk2C4A | 0x10);
                temp_r2_3 = arg1->unk8;
                temp_r3_2 = temp_r2_3->unk218C;
                temp_r2_3->unk218C = (s32) ((0xFFFE1FFF & temp_r3_2) | (((((u32) (temp_r3_2 << 0xF) >> 0x1C) + 1) & 0xF) << 0xD));
                temp_r2_4 = arg1->unk8;
                temp_r2_4->unk21C7 = (u8) (temp_r2_4->unk21C7 | 4);
                /* fallthrough */
            default:                                /* switch 2 */
                __7ArticleUi(&sp10, *((arg1->unkAD8 * 2) + &gUnk_080FB0F0));
                func_0800F3E8(arg1->unk8 + 0x1C2C, sp10);
                break;
            }
            temp_r2_5 = arg1->unkAD0 - ((arg1->unkAD8 * 0x14) + &gUnk_080FB000)->unk10;
            arg1->unkAD0 = temp_r2_5;
            temp_r3_3 = arg1->unk8;
            temp_r3_3->unk2C48 = (s32) ((temp_r3_3->unk2C48 & 0xFFF80003) | ((temp_r2_5 & 0x1FFFF) * 4));
            var_r1_5 = (GenObj *)((u8 *)arg1 + 0xADA);
            goto block_63;
        }
        break;
    case 11:                                        /* switch 1 */
        func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
        temp_r0_7 = func_08008940(arg1);
        ((void (*)(void *,...))(temp_r0_7->unk8->unk10))(temp_r0_7, sp4);
        var_r1_2 = (GenObj *)((u8 *)arg1 + 0xADA);
        goto block_67;
    case 12:                                        /* switch 1 */
        temp_r1_5 = sp4->unk0;
        if ((s32) ((0 - temp_r1_5) | temp_r1_5) >= 0) {
            var_r8 = 1;
        }
        break;
    }
    func_0805D760(arg1);
    temp_r0_8 = func_08008918(arg1);
    temp_r1_6 = arg1->unk14C;
    sp0 = temp_r1_6;
    temp_r0_8->unk16 = temp_r1_6;
    func_0805DE24(arg1);
    func_0805DFC4(arg1);
    if (var_r8 != 1) {
        goto loop_7;
    }
    sp8 = 0;
    sp14 = &sp8;
    sp14.unk4 = 0;
    sp8 = 0;
    *arg0 = 0;
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    if (sp4 != 0) {
        ((void (*)(void *,...))(sp4->unk8->unkC))(sp4, 3);
    }
    return arg0;
}

