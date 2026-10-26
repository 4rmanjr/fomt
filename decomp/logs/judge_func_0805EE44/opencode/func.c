#include "common.h"
void *__builtin_new(s32);                           /* extern */
s32 free(void *);                                     /* extern */
s32 func_08008724(void *);                            /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
void *func_08008910(void *);                        /* extern */
s16 *func_08008918(void *);                         /* extern */
void *func_08008940(void *);                        /* extern */
s32 func_08008B6C(void *, s32);                       /* extern */
s32 func_08008F0C(void ***, void *, s32, s32);        /* extern */
s32 func_08009300(void *, s16 *);                     /* extern */
s32 func_0800934C(void *, s32, s32, s32);             /* extern */
s32 func_08009378(void *, s32, s32, s32);             /* extern */
s32 func_0805F5F4(void *);                            /* extern */
s32 func_0805FBB8(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern s32 vtable_unk_080E5B80;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    u8 _pad14[25612];
    s32 unk6420;
    s32 unk6422;
    s32 unk6424;
    s32 unk6426;
} GenObj;
s32 *func_0805EE44(s32 *arg0, GenObj *arg1) {
    s16 sp0;
    GenObj *sp4;
    void **sp8;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s16 *sp28;
    s32 *sp30;
    u32 sp34;
    s32 sp38;
    s16 *sp3C;
    s16 *sp40;
    s16 *sp44;
    s32 sp48;
    void *sp4C;
    s16 *temp_r0;
    s16 *temp_r0_16;
    s16 *temp_r0_17;
    s16 *temp_r0_20;
    s16 *temp_r1;
    s16 *var_r1;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 *var_r1_4;
    s16 temp_r0_11;
    s16 temp_r0_15;
    s16 temp_r0_3;
    s16 temp_r0_7;
    s16 temp_r0_9;
    s16 var_r0;
    s32 *var_r0_2;
    s32 *var_r0_5;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_8;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 var_ip_2;
    s32 var_ip_4;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sl;
    u16 temp_r2;
    u32 temp_r0_10;
    u32 temp_r0_5;
    u32 temp_r0_8;
    GenObj *temp_r0_12;
    GenObj *temp_r0_13;
    GenObj *temp_r0_14;
    GenObj *temp_r0_2;
    GenObj *temp_r0_4;
    GenObj *temp_r0_6;
    GenObj *temp_r1_4;
    void *temp_r1_5;
    GenObj *temp_r1_6;
    void *temp_r1_7;
    void *temp_r2_2;
    void *temp_r2_3;
    GenObj *temp_r4;
    GenObj *temp_r6;
    GenObj *temp_r6_2;
    GenObj *var_ip;
    GenObj *var_ip_3;
    void *var_r0_3;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_7;
    GenObj *var_r2;
    GenObj *var_r2_2;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    void *var_r4;
    void *var_r4_2;

    sp30 = arg0;
    sp34 = 0;
    sp38 = 0;
    func_08008724(arg1);
    temp_r0 = func_08008918(arg1);
    sp0 = 0x3F;
    temp_r0->unk50 = 0x3F;
    temp_r4 = __builtin_new(0x10);
    temp_r1 = func_08008918(arg1);
    temp_r4->unk0 = sp38;
    temp_r4->unk4 = sp38;
    temp_r4->unk8 = &vtable_unk_080E5B80;
    func_08009300((GenObj *)((u8 *)temp_r4 + 0xC), temp_r1);
    sp4 = temp_r4;
    func_0805FBB8(arg1);
    func_08008B6C((GenObj *)((u8 *)arg1 + 0x18), 0x25);
    func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 0);
    temp_r0_2 = func_08008940(arg1);
    ((void (*)(void *,...))(temp_r0_2->unk8->unk10))(temp_r0_2, sp4);
    arg1->unk6422 = 4U;
    sp40 = &sp0 + 8;
    sp44 = &sp0 + 0x28;
loop_1:
    func_080087C8(arg1);
    func_080088B8(arg1);
    temp_r0_3 = arg1->unk6422 - 1;
    switch ((u32) temp_r0_3) {                      /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 2, 0);
        temp_r0_4 = func_08008940(arg1);
        ((void (*)(void *,...))(temp_r0_4->unk8->unk10))(temp_r0_4, sp4);
        var_r1 = (GenObj *)((u8 *)arg1 + 0x6422);
block_23:
        *var_r1 = 4;
        break;
    case 1:                                         /* switch 1 */
        temp_r0_5 = (sp34 << 0x10) + 0xFFFF0000;
        sp34 = temp_r0_5 >> 0x10;
        if ((s32) temp_r0_5 >= 0) {

        } else {
            arg1->unk6422 = 3U;
        }
        break;
    case 2:                                         /* switch 1 */
        func_0800934C((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 0);
        temp_r0_6 = func_08008940(arg1);
        ((void (*)(void *,...))(temp_r0_6->unk8->unk10))(temp_r0_6, sp4);
        var_r1 = (GenObj *)((u8 *)arg1 + 0x6422);
        goto block_23;
    case 3:                                         /* switch 1 */
        temp_r1_2 = sp4->unk0;
        if ((s32) ((0 - temp_r1_2) | temp_r1_2) < 0) {

        } else {
            arg1->unk6422 = 5U;
            temp_r0_7 = arg1->unk6420;
            if ((temp_r0_7 == 1) || (((s32) temp_r0_7 >= 1) && ((s32) temp_r0_7 <= 0xC) && ((s32) temp_r0_7 >= 0xB))) {
                sp34 = 0x3C;
            } else {
                sp34 = 0;
            }
        }
        break;
    case 4:                                         /* switch 1 */
        temp_r0_8 = (sp34 << 0x10) + 0xFFFF0000;
        sp34 = temp_r0_8 >> 0x10;
        if ((s32) temp_r0_8 >= 0) {

        } else {
            arg1->unk6422 = 6U;
            arg1->unk6426 = 0;
            temp_r0_9 = arg1->unk6420;
            switch (temp_r0_9) {                    /* switch 2 */
            case 0:                                 /* switch 2 */
                arg1->unk6424 = 0;
                break;
            case 1:                                 /* switch 2 */
                var_r1 = (GenObj *)((u8 *)arg1 + 0x6424);
                goto block_23;
            case 2:                                 /* switch 2 */
                arg1->unk6424 = 5;
                break;
            case 9:                                 /* switch 2 */
                arg1->unk6424 = 0xE;
                break;
            case 10:                                /* switch 2 */
                arg1->unk6424 = 0x10;
                break;
            case 11:                                /* switch 2 */
                arg1->unk6424 = 0x13;
                break;
            case 12:                                /* switch 2 */
                arg1->unk6424 = 0x16;
                break;
            case 13:                                /* switch 2 */
                arg1->unk6424 = 0x19;
                break;
            default:                                /* switch 2 */
                sp34 = 0xB4;
                arg1->unk6426 = 2;
                arg1->unk6422 = 7U;
                break;
            }
        }
        break;
    case 5:                                         /* switch 1 */
        if (arg1->unk6426 != 2) {

        } else {
            var_r1_2 = (GenObj *)((u8 *)arg1 + 0x6422);
block_37:
            *var_r1_2 = 8;
        }
        break;
    case 6:                                         /* switch 1 */
        temp_r0_10 = (sp34 << 0x10) + 0xFFFF0000;
        sp34 = temp_r0_10 >> 0x10;
        if ((s32) temp_r0_10 >= 0) {

        } else {
            var_r1_2 = (GenObj *)((u8 *)arg1 + 0x6422);
            goto block_37;
        }
        break;
    case 7:                                         /* switch 1 */
        temp_r2 = (u16) arg1->unk6420;
        temp_r0_11 = temp_r2 + 1;
        arg1->unk6420 = temp_r0_11;
        if ((s32) temp_r0_11 <= 0xD) {
            if ((u32) (u16) (temp_r2 - 8) <= 2U) {
                func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 0);
                temp_r0_12 = func_08008940(arg1);
                ((void (*)(void *,...))(temp_r0_12->unk8->unk10))(temp_r0_12, sp4);
            } else {
                func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 2, 0);
                temp_r0_13 = func_08008940(arg1);
                ((void (*)(void *,...))(temp_r0_13->unk8->unk10))(temp_r0_13, sp4);
            }
            var_r1_3 = (GenObj *)((u8 *)arg1 + 0x6422);
            var_r0 = 9;
        } else {
            func_08009378((GenObj *)((u8 *)sp4 + 0xC), 0x889, 1, 1);
            temp_r0_14 = func_08008940(arg1);
            ((void (*)(void *,...))(temp_r0_14->unk8->unk10))(temp_r0_14, sp4);
            var_r1_3 = (GenObj *)((u8 *)arg1 + 0x6422);
            var_r0 = 0xA;
        }
        *var_r1_3 = var_r0;
        /* fallthrough */
    case 8:                                         /* switch 1 */
        temp_r1_3 = sp4->unk0;
        if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {

        } else {
            var_sl = -1;
            temp_r0_15 = (u16) arg1->unk6420 - 1;
            switch ((u32) temp_r0_15) {             /* switch 3; irregular */
            case 0:                                 /* switch 3 */
                var_sl = 0;
                var_r1_4 = (GenObj *)((u8 *)arg1 + 0x6422);
block_54:
                *var_r1_4 = 1;
                break;
            case 1:                                 /* switch 3 */
            case 12:                                /* switch 3 */
                temp_r0_16 = func_08008918(arg1);
                sp0 = 0x1240;
                *temp_r0_16 = 0x1240;
                var_r1_4 = (GenObj *)((u8 *)arg1 + 0x6422);
                goto block_54;
            case 8:                                 /* switch 3 */
                temp_r0_17 = func_08008918(arg1);
                sp0 = 0x1040;
                *temp_r0_17 = 0x1040;
                arg1->unk6422 = 3U;
                break;
            case 2:                                 /* switch 3 */
            case 3:                                 /* switch 3 */
            case 4:                                 /* switch 3 */
            case 5:                                 /* switch 3 */
            case 6:                                 /* switch 3 */
            case 7:                                 /* switch 3 */
                var_sl = (arg1->unk6420 - 2) * 2;
                var_r1_4 = (GenObj *)((u8 *)arg1 + 0x6422);
                goto block_54;
            case 9:                                 /* switch 3 */
                arg1->unk6422 = 3U;
block_58:
                var_sl = (arg1->unk6420 - 3) * 2;
                break;
            case 10:                                /* switch 3 */
                sp34 = 0x78;
                arg1->unk6422 = 2U;
                goto block_58;
            case 11:                                /* switch 3 */
                arg1->unk6422 = 1U;
                goto block_58;
            }
            if (var_sl == -1) {

            } else {
                temp_r6 = func_08008910(arg1);
                func_08008F0C(&sp8, (var_sl * 0x500) + (GenObj *)((u8 *)arg1 + 0x20), 0x0600F000, 0x500);
                sp3C = sp40;
                temp_r1_4 = temp_r6->unk4;
                sp48 = var_sl * 4;
                if (temp_r1_4 != temp_r6->unkC) {
                    if (temp_r1_4 != 0) {
                        temp_r1_4->unk0 = (s32) sp40->unk0;
                        temp_r1_4->unk4 = (s32) sp40->unk4;
                        temp_r1_4->unk8 = (s32) sp40->unk8;
                        temp_r1_4->unkC = (s32) sp40->unkC;
                    }
                    temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
                } else {
                    sp4C = temp_r1_4;
                    sp1C = 1;
                    temp_r4_2 = (s32) (sp4C - temp_r6->unk0) >> 4;
                    sp18 = temp_r4_2;
                    var_r0_2 = &sp18;
                    if ((u32) temp_r4_2 < 1U) {
                        var_r0_2 = &sp1C;
                    }
                    temp_r0_18 = temp_r4_2 + *var_r0_2;
                    if (temp_r0_18 != 0) {
                        temp_r4_3 = temp_r0_18 * 0x10;
                        var_r0_3 = malloc(temp_r4_3);
                        var_sb = temp_r4_3;
                        if (var_r0_3 == 0) {
                            var_r0_3 = func_080D3BC0(var_sb);
                        }
                    } else {
                        var_r0_3 = 0;
                        var_sb = 0;
                    }
                    var_r2 = temp_r6->unk0;
                    var_ip = var_r0_3;
                    if (var_r2 != sp4C) {
                        do {
                            if (var_ip != 0) {
                                var_ip->unk0 = (s32) var_r2->unk0;
                                var_ip->unk4 = (s32) var_r2->unk4;
                                var_ip->unk8 = (s32) var_r2->unk8;
                                var_ip->unkC = (s32) var_r2->unkC;
                            }
                            var_r2 += 0x10;
                            var_ip += 0x10;
                        } while (var_r2 != sp4C);
                    }
                    if (sp1C == 1) {
                        if (var_ip != 0) {
                            var_ip->unk0 = (s32) sp3C->unk0;
                            var_ip->unk4 = (s32) sp3C->unk4;
                            var_ip->unk8 = (s32) sp3C->unk8;
                            var_ip->unkC = (s32) sp3C->unkC;
                        }
                        var_r4 = (GenObj *)((u8 *)var_ip + 0x10);
                    } else {
                        var_ip_2 = sp1C;
                        var_r2_2 = var_ip;
                        if (sp1C != 0) {
                            do {
                                if (var_r2_2 != 0) {
                                    var_r2_2->unk0 = (s32) sp3C->unk0;
                                    var_r2_2->unk4 = (s32) sp3C->unk4;
                                    var_r2_2->unk8 = (s32) sp3C->unk8;
                                    var_r2_2->unkC = (s32) sp3C->unkC;
                                }
                                var_ip_2 -= 1;
                                var_r2_2 += 0x10;
                            } while (var_ip_2 != 0);
                        }
                        var_r4 = var_r2_2;
                    }
                    temp_r2_2 = temp_r6->unk4;
                    temp_r1_5 = temp_r6->unk0;
                    var_r0_4 = temp_r1_5;
                    if (temp_r1_5 != temp_r2_2) {
                        do {
                            var_r0_4 += 0x10;
                        } while (var_r0_4 != temp_r2_2);
                    }
                    if (temp_r1_5 != 0) {
                        free(temp_r1_5);
                    }
                    temp_r6->unk0 = var_r0_3;
                    temp_r6->unk4 = var_r4;
                    temp_r6->unkC = (void *) (var_sb + var_r0_3);
                }
                temp_r6_2 = func_08008910(arg1);
                func_08008F0C(&sp8, ((sp48 + var_sl) << 8) + (GenObj *)((u8 *)arg1 + 0x520), 0x0600E800, 0x500);
                temp_r1_6 = temp_r6_2->unk4;
                if (temp_r1_6 != temp_r6_2->unkC) {
                    if (temp_r1_6 != 0) {
                        temp_r1_6->unk0 = (s32) sp40->unk0;
                        temp_r1_6->unk4 = (s32) sp40->unk4;
                        temp_r1_6->unk8 = (s32) sp40->unk8;
                        temp_r1_6->unkC = (s32) sp40->unkC;
                    }
                    temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
                } else {
                    sp4C = temp_r1_6;
                    sp24 = 1;
                    temp_r4_4 = (s32) (sp4C - temp_r6_2->unk0) >> 4;
                    sp20 = temp_r4_4;
                    var_r0_5 = &sp20;
                    if ((u32) temp_r4_4 < 1U) {
                        var_r0_5 = &sp24;
                    }
                    temp_r0_19 = temp_r4_4 + *var_r0_5;
                    if (temp_r0_19 != 0) {
                        temp_r4_5 = temp_r0_19 * 0x10;
                        var_r0_6 = malloc(temp_r4_5);
                        var_sb_2 = temp_r4_5;
                        if (var_r0_6 == 0) {
                            var_r0_6 = func_080D3BC0(var_sb_2);
                        }
                    } else {
                        var_r0_6 = 0;
                        var_sb_2 = 0;
                    }
                    var_r2_3 = temp_r6_2->unk0;
                    var_ip_3 = var_r0_6;
                    if (var_r2_3 != sp4C) {
                        do {
                            if (var_ip_3 != 0) {
                                var_ip_3->unk0 = (s32) var_r2_3->unk0;
                                var_ip_3->unk4 = (s32) var_r2_3->unk4;
                                var_ip_3->unk8 = (s32) var_r2_3->unk8;
                                var_ip_3->unkC = (s32) var_r2_3->unkC;
                            }
                            var_r2_3 += 0x10;
                            var_ip_3 += 0x10;
                        } while (var_r2_3 != sp4C);
                    }
                    if (sp24 == 1) {
                        if (var_ip_3 != 0) {
                            var_ip_3->unk0 = (s32) sp40->unk0;
                            var_ip_3->unk4 = (s32) sp40->unk4;
                            var_ip_3->unk8 = (s32) sp40->unk8;
                            var_ip_3->unkC = (s32) sp40->unkC;
                        }
                        var_r4_2 = (GenObj *)((u8 *)var_ip_3 + 0x10);
                    } else {
                        var_ip_4 = sp24;
                        var_r2_4 = var_ip_3;
                        if (sp24 != 0) {
                            do {
                                if (var_r2_4 != 0) {
                                    var_r2_4->unk0 = (s32) sp40->unk0;
                                    var_r2_4->unk4 = (s32) sp40->unk4;
                                    var_r2_4->unk8 = (s32) sp40->unk8;
                                    var_r2_4->unkC = (s32) sp40->unkC;
                                }
                                var_ip_4 -= 1;
                                var_r2_4 += 0x10;
                            } while (var_ip_4 != 0);
                        }
                        var_r4_2 = var_r2_4;
                    }
                    temp_r2_3 = temp_r6_2->unk4;
                    temp_r1_7 = temp_r6_2->unk0;
                    var_r0_7 = temp_r1_7;
                    if (temp_r1_7 != temp_r2_3) {
                        do {
                            var_r0_7 += 0x10;
                        } while (var_r0_7 != temp_r2_3);
                    }
                    if (temp_r1_7 != 0) {
                        free(temp_r1_7);
                    }
                    temp_r6_2->unk0 = var_r0_6;
                    temp_r6_2->unk4 = var_r4_2;
                    temp_r6_2->unkC = (void *) (var_sb_2 + var_r0_6);
                }
                temp_r0_20 = func_08008918(arg1);
                sp0 = 0x1C40;
                *temp_r0_20 = 0x1C40;
            }
        }
        break;
    case 9:                                         /* switch 1 */
        temp_r1_8 = sp4->unk0;
        if ((s32) ((0 - temp_r1_8) | temp_r1_8) >= 0) {
            sp38 = 1;
        }
        break;
    }
    func_0805F5F4(arg1);
    if (sp38 == 0) {
        goto loop_1;
    }
    sp8 = 0;
    sp28 = sp40;
    sp44->unk4 = 0;
    sp40->unk0 = 0;
    *sp30 = 0;
    if (sp8 != 0) {
        (*sp8)->unk8(sp8, 3);
    }
    if (sp4 != 0) {
        ((void (*)(void *,...))(sp4->unk8->unkC))(sp4, 3);
    }
    return sp30;
}

