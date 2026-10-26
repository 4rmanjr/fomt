#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088C4(void *);                          /* extern */
s32 func_080088CC(void *);                          /* extern */
s32 func_080088D4(void *);                          /* extern */
void *func_08008918(void *);                        /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08009300(void *, void *);                    /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_08079860(void *);                            /* extern */
s32 func_08079A64(void *);                            /* extern */
s32 func_08079DC0(void *);                            /* extern */
s32 func_08079F8C(void *);                            /* extern */
s32 func_0807A878(void *);                            /* extern */
s32 func_0807A98C(void *);                            /* extern */
s32 func_0807AF78(void *, s32);                       /* extern */
s32 func_0807AFF4(void *);                          /* extern */
extern s32 gUnk_0810828C;
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk4;
    struct GenObj *unk8;
    s32 unkC;
    s32 unk10;
    u8 _pad14[2];
    s32 unk16;
    u8 _pad1A[54];
    s32 unk50;
    u8 _pad54[1976];
    s32 unk80C;
    u8 _pad810[48];
    s32 unk840;
    s32 unk842;
    s32 unk844;
    s32 unk848;
    s32 unk84C;
    s32 unk84E;
    s32 unk850;
    s32 unk852;
    s32 unk854;
    s32 unk856;
    u8 _pad85A[508];
    s32 unkA56;
    s32 unkA58;
    s32 unkA5C;
    s32 unkA60;
    u8 _padA64[12];
    s32 unkA70;
} GenObj;
s32 *func_080790E4(s32 *arg0, GenObj *arg1) {
    u16 sp0;
    GenObj *sp4;
    void **sp8;
    GenObj *spC;
    GenObj *sp10;
    void ***sp14;
    u16 *sp1C;
    s16 temp_r0_7;
    s16 temp_r0_9;
    s32 *var_r1;
    s32 *var_r1_4;
    s32 *var_r1_6;
    s32 temp_r0_14;
    s32 temp_r0_3;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_7;
    s32 temp_r1_9;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 var_r1_5;
    s32 var_r2_2;
    s32 var_r4;
    s32 var_r7;
    s32 var_r8;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r1_11;
    u16 temp_r1_2;
    u16 temp_r1_6;
    u16 var_r1_2;
    u16 var_r1_3;
    u32 *temp_r4_2;
    u32 temp_r0_13;
    u32 temp_r1_10;
    u32 temp_r3;
    u32 var_r2;
    u8 temp_r1_8;
    GenObj *temp_r0;
    GenObj *temp_r0_10;
    GenObj *temp_r0_11;
    GenObj *temp_r0_12;
    GenObj *temp_r0_15;
    GenObj *temp_r0_16;
    GenObj *temp_r0_2;
    void *temp_r1;
    GenObj *temp_r4;

    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = 0;
    temp_r4->unk4 = 0;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    func_08009300((GenObj *)((u8 *)temp_r4 + 0xC), temp_r1);
    sp4 = temp_r4;
    func_08079860(arg1);
    func_0807A878(arg1);
    var_r8 = 0;
    sp1C = &sp0 + 0x14;
loop_1:
    if ((s32) arg1->unkA58 > 6) {
        goto block_50;
    }
    func_08008724(arg1);
    temp_r1_2 = arg1->unk856;
    arg1->unk840 = temp_r1_2;
    arg1->unk842 = temp_r1_2;
    arg1->unk844 = (s32) (arg1->unk840 << 0x10);
    func_08079A64(arg1);
    func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
    temp_r0_2 = func_08008940(arg1);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    var_r4 = 0;
loop_4:
    func_080087C8(arg1);
    func_080088B8(arg1);
    temp_r0_3 = arg1->unkA58;
    switch (temp_r0_3) {                            /* switch 1 */
    default:                                        /* switch 1 */
        arg1->unk80C = 1;
        arg1->unkA58 = 1;
        break;
    case 1:                                         /* switch 1 */
        temp_r1_3 = sp4->unk0;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {

        } else {
block_38:
            var_r1 = (GenObj *)((u8 *)arg1 + 0xA58);
block_39:
            *var_r1 = 2;
        }
        break;
    case 2:                                         /* switch 1 */
        if (func_080088D4(arg1) & 0x40) {
            func_08008B6C((GenObj *)((u8 *)arg1 + 0xC), 0xCB);
            if ((s32) (s16) arg1->unk84C > 0) {
                temp_r0_4 = arg1->unk84C - 1;
                arg1->unk84C = temp_r0_4;
                var_r1_2 = temp_r0_4;
            } else {
                var_r1_2 = 0;
            }
            arg1->unk84C = var_r1_2;
            if ((s32) (s16) var_r1_2 >= (s32) (s16) arg1->unk84E) {

            } else {
                arg1->unk84E = (u16) (arg1->unk84E - 1);
                arg1->unk842 = (u16) (0xFFF0 & arg1->unk840);
                arg1->unkA58 = 3;
            }
        } else if (func_080088D4(arg1) & 0x80) {
            func_08008B6C((GenObj *)((u8 *)arg1 + 0xC), 0xCB);
            if ((s32) (s16) arg1->unk84C < (s32) (arg1->unk850 - 1)) {
                temp_r0_5 = arg1->unk84C + 1;
                arg1->unk84C = temp_r0_5;
                var_r1_3 = temp_r0_5;
            } else {
                var_r1_3 = (u16) arg1->unk850 - 1;
            }
            arg1->unk84C = var_r1_3;
            if ((s32) ((s16) arg1->unk84C - (s16) arg1->unk84E) <= 7) {

            } else {
                arg1->unk84E = (u16) (arg1->unk84E + 1);
                arg1->unk842 = (u16) (0xFFF0 & arg1->unk840);
                arg1->unkA58 = 4;
            }
        } else {
            if (func_080088CC(arg1) & 1) {
                func_08008B6C((GenObj *)((u8 *)arg1 + 0xC), 0xC5);
                arg1->unk856 = (u16) arg1->unk840;
                arg1->unkA70 = (u16) *((GenObj *)((u8 *)arg1 + 0x858) + ((s16) arg1->unk84C * 2));
                arg1->unkA5C = (s32) *(((s16) arg1->unkA70 * 4) + &gUnk_0810828C);
                var_r1_4 = (GenObj *)((u8 *)arg1 + 0xA58);
                goto block_29;
            }
            if (!(func_080088CC(arg1) & 2)) {

            } else {
                func_08008B6C((GenObj *)((u8 *)arg1 + 0xC), 0xC6);
                arg1->unkA70 = 0xFFFFU;
                var_r1_4 = (GenObj *)((u8 *)arg1 + 0xA58);
block_29:
                *var_r1_4 = 5;
            }
        }
        break;
    case 3:                                         /* switch 1 */
        temp_r0_6 = arg1->unk844 + 0xFFFC0000;
        arg1->unk844 = temp_r0_6;
        if (temp_r0_6 < 0) {
            arg1->unk844 = 0;
        }
        temp_r0_7 = ((GenObj *)((u8 *)arg1 + 0x844))->unk2;
        arg1->unk840 = (u16) temp_r0_7;
        if (!(temp_r0_7 & 0xF)) {
            func_08079DC0(arg1);
            var_r1 = (GenObj *)((u8 *)arg1 + 0xA58);
            goto block_39;
        }
        break;
    case 4:                                         /* switch 1 */
        temp_r1_4 = arg1->unk844 + 0x40000;
        arg1->unk844 = temp_r1_4;
        temp_r0_8 = arg1->unk848;
        if (temp_r1_4 > temp_r0_8) {
            arg1->unk844 = temp_r0_8;
        }
        temp_r0_9 = ((GenObj *)((u8 *)arg1 + 0x844))->unk2;
        arg1->unk840 = (u16) temp_r0_9;
        if (!(temp_r0_9 & 0xF)) {
            func_08079DC0(arg1);
            goto block_38;
        }
        break;
    case 5:                                         /* switch 1 */
        func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
        temp_r0_10 = func_08008940(arg1);
        ((void (*)(void *,...))(temp_r0_10->unk8->unk10))(temp_r0_10, sp4);
        arg1->unkA58 = 6;
        break;
    case 6:                                         /* switch 1 */
        temp_r1_5 = sp4->unk0;
        if ((s32) ((0 - temp_r1_5) | temp_r1_5) >= 0) {
            if ((s32) (s16) arg1->unkA70 < 0) {
                var_r8 = 1;
            } else {
                arg1->unkA58 = 7;
            }
            var_r4 = 1;
        }
        break;
    }
    temp_r0_11 = func_08008918(arg1);
    temp_r1_6 = arg1->unk840;
    sp0 = temp_r1_6;
    temp_r0_11->unk16 = temp_r1_6;
    arg1->unk852 = 0xC;
    arg1->unk854 = (s16) (((s16) arg1->unk84C * 0x10) - (((s16) arg1->unk84E * 0x10) - 0x28));
    func_0807A98C(arg1);
    if (var_r4 != 1) {
        goto loop_4;
    }
    if (var_r8 != 0) {

    } else {
block_50:
        func_08008724(arg1);
        func_08079F8C(arg1);
        func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
        temp_r0_12 = func_08008940(arg1);
        ((void (*)(void *,...))(temp_r0_12->unk8->unk10))(temp_r0_12, sp4);
        var_r7 = 0;
loop_51:
        func_080087C8(arg1);
        func_080088B8(arg1);
        temp_r0_13 = arg1->unkA58 - 7;
        switch (temp_r0_13) {                       /* switch 2 */
        default:                                    /* switch 2 */
            arg1->unk840 = 0U;
            arg1->unk842 = 0U;
            arg1->unk844 = (s32) (arg1->unk840 << 0x10);
            arg1->unk80C = 0;
            arg1->unkA58 = 8;
            break;
        case 1:                                     /* switch 2 */
            temp_r1_7 = sp4->unk0;
            if ((s32) ((0 - temp_r1_7) | temp_r1_7) < 0) {

            } else {
block_92:
                arg1->unkA58 = 9;
            }
            break;
        case 2:                                     /* switch 2 */
            spC = func_080088C4(arg1);
            temp_r0_14 = func_080088CC(arg1);
            if (3 & temp_r0_14) {
                func_08008B6C((GenObj *)((u8 *)arg1 + 0xC), 0xC6);
                arg1->unkA58 = 0xD;
            } else if (((u32) (spC << 0x19) >> 0x1F) == ((u32) (spC << 0x18) >> 0x1F)) {

            } else if (2 & spC.unk1) {
                var_r1_5 = 0;
                temp_r4_2 = arg1->unkA60;
                temp_r2 = ((GenObj *)((u8 *)arg1 + 0xA60))->unk4;
                if (temp_r4_2 == temp_r2) {
                    var_r1_5 = 1;
                }
                if (var_r1_5 == 0) {
                    if (!(0x2C0 & temp_r0_14)) {

                    } else {
                        temp_r3 = (u16) arg1->unk840 >> 4;
                        if (0x40 & spC.unk0) {
                            var_r2 = temp_r3;
                            if (arg1->unk844 & 0xFFFFF) {
                                var_r2 = temp_r3 + 1;
                            }
                            if (var_r2 <= (u32) *temp_r4_2) {

                            } else {
                                arg1->unkA58 = 0xA;
                            }
                        } else if (temp_r3 >= (u32) *(temp_r2 - 4)) {

                        } else {
                            arg1->unkA58 = 0xB;
                        }
                    }
                } else {
                    goto block_76;
                }
            } else {
block_76:
                var_r2_2 = 0x40000;
                if (1 & spC.unk1) {
                    var_r2_2 = 0x80000;
                }
                temp_r1_8 = spC.unk0;
                if (0x40 & temp_r1_8) {
                    func_0807AF78(arg1, 0 - var_r2_2);
                } else if (!(0x80 & temp_r1_8)) {

                } else {
                    func_0807AF78(arg1, var_r2_2);
                }
            }
            break;
        case 3:                                     /* switch 2 */
            temp_r2_2 = arg1->unk844;
            func_0807AF78(arg1, ((temp_r2_2 - 1) & 0xFFF00000) - temp_r2_2);
            if ((arg1->unk844 == 0) || ((func_0807AFF4(arg1) << 0x18) != 0)) {
                var_r1_6 = (GenObj *)((u8 *)arg1 + 0xA58);
block_89:
                *var_r1_6 = 0xC;
            }
            break;
        case 4:                                     /* switch 2 */
            temp_r2_3 = arg1->unk844;
            func_0807AF78(arg1, ((temp_r2_3 + 0x100000) & 0xFFF00000) - temp_r2_3);
            if ((arg1->unk844 == arg1->unk848) || ((func_0807AFF4(arg1) << 0x18) != 0)) {
                var_r1_6 = (GenObj *)((u8 *)arg1 + 0xA58);
                goto block_89;
            }
            break;
        case 5:                                     /* switch 2 */
            sp10 = func_080088C4(arg1);
            if (!(0xC0 & sp10.unk0) || !(2 & sp10.unk1)) {
                goto block_92;
            }
            break;
        case 6:                                     /* switch 2 */
            func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
            temp_r0_15 = func_08008940(arg1);
            ((void (*)(void *,...))(temp_r0_15->unk8->unk10))(temp_r0_15, sp4);
            arg1->unkA58 = 0xE;
            break;
        case 7:                                     /* switch 2 */
            temp_r1_9 = sp4->unk0;
            temp_r1_10 = (u32) ((0 - temp_r1_9) | temp_r1_9) >> 0x1F;
            if (temp_r1_10 == 0) {
                if (arg1->unkA56 == 1) {
                    var_r8 = 1;
                } else {
                    arg1->unkA58 = (s32) temp_r1_10;
                }
                var_r7 = 1;
            }
            break;
        }
        temp_r0_16 = func_08008918(arg1);
        temp_r1_11 = arg1->unk840;
        sp0 = temp_r1_11;
        temp_r0_16->unk16 = temp_r1_11;
        func_0807A98C(arg1);
        if (var_r7 != 1) {
            goto loop_51;
        }
    }
    if (var_r8 != 1) {
        goto loop_1;
    }
    sp8 = 0;
    sp14 = &sp8;
    sp1C->unk4 = 0;
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

