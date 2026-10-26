#include "common.h"
s32 __builtin_delete();                               /* extern */
s32 __builtin_new(s32);                             /* extern */
s32 free();                                           /* extern */
s32 func_08007D4C(void *, s32);                     /* extern */
s32 func_080087C8(void *);                            /* extern */
s32 func_080088B8(void *);                            /* extern */
s32 func_080088CC(void *);                          /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008B88(void *, s32);                       /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
void *func_0805E824(s32, s32, s32, s32);            /* extern */
s32 func_0805E860(void *, s32);                       /* extern */
s32 func_080BDF40(void *);                            /* extern */
s32 func_080BE728(void *, s32);                       /* extern */
s32 func_080C0B70(void *);                            /* extern */
s32 func_080C0CA4(void *);                            /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 memcpy(s32 *, ? *, s32);                            /* extern */

void func_080BF348(void *arg0) {
s32 sp0;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    void *sp3C;
    void *sp40;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 temp_r0_5;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r6_2;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_sb;
    s32 var_sb_2;
    u16 temp_r0_10;
    u16 var_r3;
    u16 var_r3_3;
    void **temp_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_5;
    void *temp_r6;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r1;
    void *var_r1_2;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3_2;
    void *var_r3_4;
    void *var_r4;
    void *var_r4_2;

    sp34 = 0;
    sp30 = 0;
    sp38 = 0x8500;
    temp_r0 = func_0805E824(__builtin_new(0x14), arg0->unk420, 0, 0x100);
    if (temp_r0 != arg0->unk460) {
        __builtin_delete();
    }
    arg0->unk460 = temp_r0;
    func_0805E860(temp_r0, 0);
    temp_r4 = arg0 + 0x468;
    temp_r0_2 = arg0->unk460;
    temp_r1 = temp_r0_2->unk0;
    (*temp_r1)->unk10(&sp0, temp_r1, *(temp_r0_2->unk4 + (temp_r0_2->unkC * 4)));
    memcpy(&sp0, &sp0, 0x20);
    temp_r0_3 = &sp0 + 0xC;
    arg0->unk468 = (s32) sp0.unk0;
    temp_r4->unk4 = (s32) sp0.unk4;
    temp_r4->unk8 = (s32) sp0.unk8;
    temp_r4_2 = temp_r4 + 0xC;
    temp_r4->unkC = (s32) sp0.unkC;
    temp_r4_2->unk4 = (s32) temp_r0_3->unk4;
    temp_r4_2->unk8 = (s32) temp_r0_3->unk8;
    temp_r4_2->unkC = (s32) temp_r0_3->unkC;
    (temp_r4_2 + 0xC)->unk4 = (s32) (temp_r0_3 + 0xC)->unk4;
    temp_r6 = func_08008910(arg0);
    temp_r7 = arg0->unk470;
    temp_r0_4 = arg0 + 0x5B8;
    temp_r2 = func_08007D4C(temp_r0_4, temp_r0_4->unk4);
    var_r3 = 0;
    if (arg0->unk470 != 0) {
        var_r3 = (arg0 + 0x470)->unk4;
    }
    sp3C = temp_r6;
    func_08008F0C(&sp0, temp_r7, (temp_r2 << 5) + 0x06010000, var_r3);
    temp_r1_2 = temp_r6->unk4;
    if (temp_r1_2 != temp_r6->unkC) {
        if (temp_r1_2 != 0) {
            temp_r1_2->unk0 = (s32) sp0.unk0;
            temp_r1_2->unk4 = (s32) sp0.unk4;
            temp_r1_2->unk8 = (s32) sp0.unk8;
            temp_r1_2->unkC = (s32) sp0.unkC;
        }
        sp3C->unk4 = (void *) (sp3C->unk4 + 0x10);
    } else {
        sp40 = temp_r1_2;
        sp24 = 1;
        temp_r4_3 = (s32) (temp_r1_2 - sp3C->unk0) >> 4;
        sp20 = temp_r4_3;
        var_r0 = &sp20;
        if ((u32) temp_r4_3 < 1U) {
            var_r0 = &sp24;
        }
        temp_r0_5 = temp_r4_3 + *var_r0;
        if (temp_r0_5 != 0) {
            temp_r4_4 = temp_r0_5 * 0x10;
            var_r0_2 = malloc(temp_r4_4);
            var_sb = temp_r4_4;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        var_r2 = sp3C->unk0;
        var_r3_2 = var_r0_2;
loop_18:
        if (var_r2 != sp40) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) var_r2->unk0;
                var_r3_2->unk4 = (s32) var_r2->unk4;
                var_r3_2->unk8 = (s32) var_r2->unk8;
                var_r3_2->unkC = (s32) var_r2->unkC;
            }
            var_r2 += 0x10;
            var_r3_2 += 0x10;
            goto loop_18;
        }
        if (sp24 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp0.unk0;
                var_r3_2->unk4 = (s32) sp0.unk4;
                var_r3_2->unk8 = (s32) sp0.unk8;
                var_r3_2->unkC = (s32) sp0.unkC;
            }
            var_r4 = var_r3_2 + 0x10;
        } else {
            var_ip = sp24;
            var_r2_2 = var_r3_2;
            if (sp24 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) sp0.unk0;
                        var_r2_2->unk4 = (s32) sp0.unk4;
                        var_r2_2->unk8 = (s32) sp0.unk8;
                        var_r2_2->unkC = (s32) sp0.unkC;
                    }
                    var_ip -= 1;
                    var_r2_2 += 0x10;
                } while (var_ip != 0);
            }
            var_r4 = var_r2_2;
        }
        temp_r2_2 = sp3C->unk4;
        temp_r0_6 = sp3C->unk0;
        var_r1 = temp_r0_6;
        if (temp_r0_6 != temp_r2_2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2_2);
        }
        if (temp_r0_6 != 0) {
            free();
        }
        sp3C->unk0 = var_r0_2;
        sp3C->unk4 = var_r4;
        sp3C->unkC = (void *) (var_sb + var_r0_2);
    }
    temp_r4_5 = func_08008910(arg0);
    temp_r0_7 = arg0->unk478;
    var_r3_3 = 0;
    if (temp_r0_7 != 0) {
        var_r3_3 = (arg0 + 0x478)->unk4;
    }
    sp3C = temp_r4_5;
    func_08008F0C(&sp0, temp_r0_7, 0x05000260, var_r3_3);
    temp_r1_3 = temp_r4_5->unk4;
    if (temp_r1_3 != temp_r4_5->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) sp0.unk0;
            temp_r1_3->unk4 = (s32) sp0.unk4;
            temp_r1_3->unk8 = (s32) sp0.unk8;
            temp_r1_3->unkC = (s32) sp0.unkC;
        }
        sp3C->unk4 = (void *) (sp3C->unk4 + 0x10);
    } else {
        sp40 = temp_r1_3;
        sp2C = 1;
        temp_r4_6 = (s32) (temp_r1_3 - sp3C->unk0) >> 4;
        sp28 = temp_r4_6;
        var_r0_3 = &sp28;
        if ((u32) temp_r4_6 < 1U) {
            var_r0_3 = &sp2C;
        }
        temp_r0_8 = temp_r4_6 + *var_r0_3;
        if (temp_r0_8 != 0) {
            temp_r4_7 = temp_r0_8 * 0x10;
            var_r0_4 = malloc(temp_r4_7);
            var_sb_2 = temp_r4_7;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb_2);
            }
        } else {
            var_r0_4 = 0;
            var_sb_2 = 0;
        }
        var_r2_3 = sp3C->unk0;
        var_r3_4 = var_r0_4;
        if (var_r2_3 != sp40) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_3->unk0;
                    var_r3_4->unk4 = (s32) var_r2_3->unk4;
                    var_r3_4->unk8 = (s32) var_r2_3->unk8;
                    var_r3_4->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_3 != sp40);
        }
        if (sp2C == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) sp0.unk0;
                var_r3_4->unk4 = (s32) sp0.unk4;
                var_r3_4->unk8 = (s32) sp0.unk8;
                var_r3_4->unkC = (s32) sp0.unkC;
            }
            var_r4_2 = var_r3_4 + 0x10;
        } else {
            var_ip_2 = sp2C;
            var_r2_4 = var_r3_4;
            if (sp2C != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) sp0.unk0;
                        var_r2_4->unk4 = (s32) sp0.unk4;
                        var_r2_4->unk8 = (s32) sp0.unk8;
                        var_r2_4->unkC = (s32) sp0.unkC;
                    }
                    var_ip_2 -= 1;
                    var_r2_4 += 0x10;
                } while (var_ip_2 != 0);
            }
            var_r4_2 = var_r2_4;
        }
        temp_r2_3 = sp3C->unk4;
        temp_r0_9 = sp3C->unk0;
        var_r1_2 = temp_r0_9;
        if (temp_r0_9 != temp_r2_3) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_3);
        }
        if (temp_r0_9 != 0) {
            free();
        }
        sp3C->unk0 = var_r0_4;
        sp3C->unk4 = var_r4_2;
        sp3C->unkC = (void *) (var_sb_2 + var_r0_4);
    }
loop_84:
    func_080BDF40(arg0);
    if (arg0->unk5A0 == 3) {
        func_080087C8(arg0);
        func_080088B8(arg0);
        temp_r4_8 = arg0->unk5A4;
        switch (temp_r4_8) {                        /* irregular */
        default:
            func_080C0CA4(arg0);
            break;
        case 0:
            func_080C0B70(arg0);
            arg0->unk5FB = (u8) (arg0->unk5FB + 1);
            temp_r7_2 = sp30 + 1;
            sp30 = temp_r7_2;
            func_080BE728(arg0, temp_r7_2);
            if (temp_r7_2 == 0x3C) {
                sp30 = 0;
            }
            if (arg0->unk609 != 0) {
                func_08008B88(arg0 + 0x580, 0xBD);
            }
            break;
        case 1:
            func_080C0CA4(arg0);
            if (!(8 & func_080088CC(arg0))) {
                temp_r3 = sp30 + 1;
                sp30 = temp_r3;
                func_080BE728(arg0, temp_r3);
                if (sp30 == 0x3C) {
                    sp30 = 0;
                }
                if (arg0->unk60A == 0) {
                    if (sp34 <= 0x20) {
                        temp_r0_10 = sp38 + 0x20;
                        sp38 = (s32) temp_r0_10;
                        arg0->unk608 = (s8) ((u32) (temp_r0_10 << 0x10) >> 0x18);
                    }
                    if ((arg0->unk60A == 0) && (sp34 == 0x21)) {
                        arg0->unk60F = (s8) temp_r4_8;
                        arg0->unk60E = (s8) temp_r4_8;
                        sp38 = 0x8500;
                        arg0->unk608 = 0x85;
                    }
                }
                temp_r6_2 = sp34 + 1;
                sp34 = temp_r6_2;
                if (temp_r6_2 == 0x3C) {
                    sp34 = 0;
                    arg0->unk60E = 1;
                    arg0->unk5A4 = 0;
                }
            }
            break;
        }
        goto loop_84;
    }
}

