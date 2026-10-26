#include "common.h"
s32 free();                                           /* extern */
void *func_08008910(void *);                        /* extern */
s32 func_08008920(void *);                          /* extern */
s32 func_08008F0C(s32 *, s32, s32, u16);                /* extern */
s32 func_0805E8F0(void *);                            /* extern */
s32 func_0805E99C(s32, s32, u16, s32 *);                /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    struct GenObj *unkE;
    s32 unk10;
    s32 unk11;
    u8 _pad15[3];
    s32 unk18;
    u8 _pad1C[32];
    s32 unk3C;
    s32 unk3E;
    s32 unk40;
    s32 unk44;
    u8 _pad48[12];
    s32 unk54;
    u8 _pad58[24];
    s32 unk70;
    s32 unk74;
    s32 unk76;
    s32 unk78;
    s32 unk7C;
    u8 _pad80[12];
    s32 unk8C;
    u8 _pad90[24];
    s32 unkA8;
    u8 _padAC[56];
    s32 unkE4;
    s32 unkE6;
    s32 unkE8;
    s32 unkEC;
    u8 _padF0[12];
    s32 unkFC;
    u8 _pad100[1168];
    struct GenObj *unk590;
    u8 _pad594[32];
    struct GenObj *unk5B4;
} GenObj;
void func_0807628C(GenObj *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    s32 sp1C;
    s32 sp24;
GenObj sp3C;
    s32 sp6C;
    s32 sp74;
    u32 sp8C;
    u32 sp90;
    u32 sp94;
    u32 sp98;
    u32 sp9C;
    u32 spA0;
    u32 spA4;
    u32 spA8;
    s32 *spAC;
    GenObj *spB0;
    s32 spB4;
    GenObj *spB8;
    GenObj *spBC;
    void *spC0;
    u8 *spC4;
    GenObj *spC8;
    u8 *spCC;
    u16 *spD0;
    u16 *spD4;
    GenObj *spD8;
    GenObj *spDC;
    void *spE0;
    s32 *temp_r1_5;
    s32 temp_r0_10;
    s32 temp_r0_15;
    s32 temp_r0_20;
    s32 temp_r0_3;
    s32 temp_r0_5;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r4_10;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sl;
    s8 var_r2;
    s8 var_r2_2;
    u16 var_r2_12;
    u16 var_r2_3;
    u16 var_r2_6;
    u16 var_r2_9;
    u16 var_r3;
    u16 var_r3_3;
    u16 var_r3_5;
    u16 var_r3_7;
    u32 *var_r0;
    u32 *var_r0_3;
    u32 *var_r0_5;
    u32 *var_r0_7;
    u32 var_ip;
    u32 var_ip_2;
    u32 var_r8_2;
    u32 var_r8_3;
    void **temp_r1_12;
    void **temp_r1_2;
    void **temp_r1_6;
    void **temp_r1_9;
    GenObj *temp_r0;
    void *temp_r0_11;
    GenObj *temp_r0_12;
    void *temp_r0_13;
    void *temp_r0_14;
    void *temp_r0_16;
    GenObj *temp_r0_17;
    void *temp_r0_18;
    void *temp_r0_19;
    void *temp_r0_21;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r0_8;
    void *temp_r0_9;
    GenObj *temp_r1;
    void *temp_r1_10;
    GenObj *temp_r1_11;
    void *temp_r1_13;
    GenObj *temp_r1_14;
    void *temp_r1_3;
    GenObj *temp_r1_4;
    void *temp_r1_7;
    GenObj *temp_r1_8;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    GenObj *temp_r4;
    void *temp_r4_4;
    void *var_r0_2;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    GenObj *var_r2_10;
    GenObj *var_r2_11;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r3_2;
    GenObj *var_r3_4;
    GenObj *var_r3_6;
    GenObj *var_r3_8;
    void *var_r4;
    void *var_r4_2;
    void *var_r5;
    void *var_r5_2;
    GenObj *var_r8;

    temp_r1 = arg0->unk8;
    var_r2 = 0;
    if ((s32) temp_r1->unk590 < (s32) (s16) (temp_r1->unk4->unkE - 0xA0)) {
        var_r2 = 1;
    }
    arg0->unkA8 = var_r2;
    var_r2_2 = 0;
    spCC = (GenObj *)((u8 *)arg0 + 0xA8);
    if ((s32) arg0->unk8->unk590 > 0) {
        var_r2_2 = 1;
    }
    arg0->unk70 = var_r2_2;
    sp0 = 0U;
    sp0.unk2 = 0U;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    temp_r4 = (GenObj *)((u8 *)arg0 + 0xE8);
    func_0805E8F0(temp_r4);
    temp_r1_2 = arg0->unkE8;
    (*temp_r1_2)->unk10(&sp1C, temp_r1_2, *(arg0->unkEC + (temp_r4->unkC * 4)));
    temp_r0 = (GenObj *)((u8 *)arg0 + 0xFC);
    temp_r0_2 = (GenObj *)((u8 *)temp_r0 + 0xC);
    sp0 = (s32) arg0->unkFC;
    sp0.unk4 = (s32) temp_r0->unk4;
    sp0.unk8 = (s32) temp_r0->unk8;
    temp_r1_3 = &(GenObj *)((u8 *)sp0 + 0xC);
    sp0.unkC = (s32) temp_r0->unkC;
    temp_r1_3->unk4 = (s32) temp_r0_2->unk4;
    temp_r1_3->unk8 = (s32) temp_r0_2->unk8;
    temp_r1_3->unkC = (s32) temp_r0_2->unkC;
    sp0 = (u16) arg0->unkE4;
    sp0.unk2 = (u16) arg0->unkE6;
    sp0.unk4 = 0;
    sp0.unk6 = 0;
    temp_r0_3 = func_08008920(arg0);
    var_r2_3 = 0;
    spC4 = (GenObj *)((u8 *)arg0 + 0x70);
    if (sp1C != 0) {
        var_r2_3 = sp1C.unk4;
    }
    func_0805E99C(temp_r0_3, sp1C, var_r2_3, &sp0);
    temp_r0_4 = func_08008910(arg0);
    var_r3 = 0;
    if (sp24 != 0) {
        var_r3 = sp24.unk4;
    }
    spD8 = temp_r0_4;
    func_08008F0C(&sp3C, sp24, 0x06010000, var_r3);
    temp_r1_4 = spD8->unk4;
    if (temp_r1_4 != spD8->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) sp3C;
            temp_r1_4->unk4 = (s32) sp3C.unk4;
            temp_r1_4->unk8 = (s32) sp3C.unk8;
            temp_r1_4->unkC = (s32) sp3C.unkC;
        }
        spD8->unk4 = (void *) (spD8->unk4 + 0x10);
        var_r8 = (GenObj *)((u8 *)arg0 + 0xB0);
        spB8 = &(GenObj *)((u8 *)sp0 + 0x4C);
        spAC = (GenObj *)((u8 *)arg0 + 0xB4);
        spB0 = (GenObj *)((u8 *)arg0 + 0xC4);
        spD0 = (GenObj *)((u8 *)arg0 + 0xAC);
        spD4 = (GenObj *)((u8 *)arg0 + 0xAE);
        spC0 = &(GenObj *)((u8 *)sp0 + 0x54);
        spBC = (GenObj *)((u8 *)arg0 + 0x40);
        spC8 = (GenObj *)((u8 *)arg0 + 0x78);
    } else {
        spDC = temp_r1_4;
        sp90 = 1;
        temp_r4_2 = (s32) (spDC - spD8->unk0) >> 4;
        var_r0 = &sp8C;
        *var_r0 = (u32) temp_r4_2;
        if ((u32) temp_r4_2 < (u32) sp90) {
            var_r0 = &sp90;
        }
        temp_r0_5 = temp_r4_2 + *var_r0;
        if (temp_r0_5 != 0) {
            temp_r4_3 = temp_r0_5 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            spB4 = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(temp_r4_3);
            }
        } else {
            var_r0_2 = 0;
            spB4 = 0;
        }
        var_r2_4 = spD8->unk0;
        var_r3_2 = var_r0_2;
        var_r8 = (GenObj *)((u8 *)arg0 + 0xB0);
        temp_r0_6 = &(GenObj *)((u8 *)sp0 + 0x4C);
        spB8 = temp_r0_6;
        temp_r1_5 = (GenObj *)((u8 *)arg0 + 0xB4);
        spAC = temp_r1_5;
        temp_r4_4 = (GenObj *)((u8 *)arg0 + 0xC4);
        spB0 = temp_r4_4;
        spD0 = (GenObj *)((u8 *)arg0 + 0xAC);
        spD4 = (GenObj *)((u8 *)arg0 + 0xAE);
        spC0 = temp_r0_6 + 8;
        spBC = temp_r1_5 - 0x74;
        spC8 = temp_r4_4 - 0x4C;
        if (var_r2_4 != spDC) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2_4->unk0;
                    var_r3_2->unk4 = (s32) var_r2_4->unk4;
                    var_r3_2->unk8 = (s32) var_r2_4->unk8;
                    var_r3_2->unkC = (s32) var_r2_4->unkC;
                }
                var_r2_4 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2_4 != spDC);
        }
        if (sp90 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) sp3C;
                var_r3_2->unk4 = (s32) sp3C.unk4;
                var_r3_2->unk8 = (s32) sp3C.unk8;
                var_r3_2->unkC = (s32) sp3C.unkC;
            }
            var_r4 = (GenObj *)((u8 *)var_r3_2 + 0x10);
        } else {
            var_ip = sp90;
            var_r2_5 = var_r3_2;
            if (sp90 != 0) {
                do {
                    if (var_r2_5 != 0) {
                        var_r2_5->unk0 = (s32) sp3C;
                        var_r2_5->unk4 = (s32) sp3C.unk4;
                        var_r2_5->unk8 = (s32) sp3C.unk8;
                        var_r2_5->unkC = (s32) sp3C.unkC;
                    }
                    var_ip -= 1;
                    var_r2_5 += 0x10;
                } while (var_ip != 0);
            }
            var_r4 = var_r2_5;
        }
        temp_r2 = spD8->unk4;
        temp_r0_7 = spD8->unk0;
        var_r1 = temp_r0_7;
        if (temp_r0_7 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        spD8->unk0 = var_r0_2;
        spD8->unk4 = var_r4;
        spD8->unkC = (void *) (spB4 + var_r0_2);
    }
    func_0805E8F0(var_r8);
    temp_r1_6 = var_r8->unk0;
    (*temp_r1_6)->unk10(spB8, temp_r1_6, *(*spAC + (var_r8->unkC * 4)));
    temp_r0_8 = (GenObj *)((u8 *)spB0 + 0xC);
    sp0 = (s32) spB0->unk0;
    sp0.unk4 = (s32) spB0->unk4;
    sp0.unk8 = (s32) spB0->unk8;
    temp_r1_7 = &(GenObj *)((u8 *)sp0 + 0xC);
    sp0.unkC = (s32) spB0->unkC;
    temp_r1_7->unk4 = (s32) temp_r0_8->unk4;
    temp_r1_7->unk8 = (s32) temp_r0_8->unk8;
    temp_r1_7->unkC = (s32) temp_r0_8->unkC;
    sp0 = (u16) *spD0;
    sp0.unk2 = (u16) *spD4;
    sp0.unk4 = 0;
    sp0.unk6 = 1;
    temp_r3 = func_08008920(arg0);
    var_r2_6 = 0;
    if (sp4C != 0) {
        var_r2_6 = spB8->unk4;
    }
    func_0805E99C(temp_r3, sp4C, var_r2_6, &sp0);
    temp_r0_9 = func_08008910(arg0);
    var_r3_3 = 0;
    if (sp54 != 0) {
        var_r3_3 = spC0->unk4;
    }
    spDC = temp_r0_9;
    func_08008F0C(&sp3C, sp54, 0x06010020, var_r3_3);
    temp_r1_8 = spDC->unk4;
    if (temp_r1_8 != spDC->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32) sp3C;
            temp_r1_8->unk4 = (s32) sp3C.unk4;
            temp_r1_8->unk8 = (s32) sp3C.unk8;
            temp_r1_8->unkC = (s32) sp3C.unkC;
        }
        spDC->unk4 = (void *) (spDC->unk4 + 0x10);
    } else {
        spD8 = temp_r1_8;
        sp98 = 1;
        temp_r4_5 = (s32) (spD8 - spDC->unk0) >> 4;
        var_r0_3 = &sp94;
        *var_r0_3 = (u32) temp_r4_5;
        if ((u32) temp_r4_5 < (u32) sp98) {
            var_r0_3 = &sp98;
        }
        temp_r0_10 = temp_r4_5 + *var_r0_3;
        if (temp_r0_10 != 0) {
            temp_r4_6 = temp_r0_10 * 0x10;
            var_r0_4 = malloc(temp_r4_6);
            var_sb = temp_r4_6;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_4 = 0;
            var_sb = 0;
        }
        var_r2_7 = spDC->unk0;
        var_r3_4 = var_r0_4;
        if (var_r2_7 != spD8) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_7->unk0;
                    var_r3_4->unk4 = (s32) var_r2_7->unk4;
                    var_r3_4->unk8 = (s32) var_r2_7->unk8;
                    var_r3_4->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_7 != spD8);
        }
        if (sp98 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) sp3C;
                var_r3_4->unk4 = (s32) sp3C.unk4;
                var_r3_4->unk8 = (s32) sp3C.unk8;
                var_r3_4->unkC = (s32) sp3C.unkC;
            }
            var_r4_2 = (GenObj *)((u8 *)var_r3_4 + 0x10);
        } else {
            var_ip_2 = sp98;
            var_r2_8 = var_r3_4;
            if (sp98 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) sp3C;
                        var_r2_8->unk4 = (s32) sp3C.unk4;
                        var_r2_8->unk8 = (s32) sp3C.unk8;
                        var_r2_8->unkC = (s32) sp3C.unkC;
                    }
                    var_ip_2 -= 1;
                    var_r2_8 += 0x10;
                } while (var_ip_2 != 0);
            }
            var_r4_2 = var_r2_8;
        }
        temp_r2_2 = spDC->unk4;
        temp_r0_11 = spDC->unk0;
        var_r1_2 = temp_r0_11;
        if (temp_r0_11 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_11 != 0) {
            free();
        }
        spDC->unk0 = var_r0_4;
        spDC->unk4 = var_r4_2;
        spDC->unkC = (void *) (var_sb + var_r0_4);
    }
    func_0805E8F0(spBC);
    if (*spC4 == 0) {

    } else {
        temp_r1_9 = arg0->unk40;
        (*temp_r1_9)->unk10(&sp6C, temp_r1_9, *(arg0->unk44 + (spBC->unkC * 4)));
        temp_r0_12 = (GenObj *)((u8 *)arg0 + 0x54);
        temp_r0_13 = (GenObj *)((u8 *)temp_r0_12 + 0xC);
        sp0 = (s32) arg0->unk54;
        sp0.unk4 = (s32) temp_r0_12->unk4;
        sp0.unk8 = (s32) temp_r0_12->unk8;
        temp_r1_10 = &(GenObj *)((u8 *)sp0 + 0xC);
        sp0.unkC = (s32) temp_r0_12->unkC;
        temp_r1_10->unk4 = (s32) temp_r0_13->unk4;
        temp_r1_10->unk8 = (s32) temp_r0_13->unk8;
        temp_r1_10->unkC = (s32) temp_r0_13->unkC;
        sp0 = (u16) arg0->unk3C;
        sp0.unk2 = (u16) arg0->unk3E;
        sp0.unk4 = 0;
        sp0.unk6 = 2;
        temp_r3_2 = func_08008920(arg0);
        var_r2_9 = 0;
        if (sp6C != 0) {
            var_r2_9 = sp6C.unk4;
        }
        func_0805E99C(temp_r3_2, sp6C, var_r2_9, &sp0);
        temp_r0_14 = func_08008910(arg0);
        var_r3_5 = 0;
        if (sp74 != 0) {
            var_r3_5 = sp74.unk4;
        }
        spD8 = temp_r0_14;
        func_08008F0C(&sp3C, sp74, 0x06010040, var_r3_5);
        temp_r1_11 = spD8->unk4;
        if (temp_r1_11 != spD8->unkC) {
            if (temp_r1_11 != 0) {
                temp_r1_11->unk0 = (s32) sp3C;
                temp_r1_11->unk4 = (s32) sp3C.unk4;
                temp_r1_11->unk8 = (s32) sp3C.unk8;
                temp_r1_11->unkC = (s32) sp3C.unkC;
            }
            spD8->unk4 = (void *) (spD8->unk4 + 0x10);
        } else {
            spA0 = 1;
            temp_r4_7 = (s32) (temp_r1_11 - spD8->unk0) >> 4;
            var_r0_5 = &sp9C;
            *var_r0_5 = (u32) temp_r4_7;
            if ((u32) temp_r4_7 < (u32) spA0) {
                var_r0_5 = &spA0;
            }
            temp_r0_15 = temp_r4_7 + *var_r0_5;
            if (temp_r0_15 != 0) {
                temp_r4_8 = temp_r0_15 * 0x10;
                var_r0_6 = malloc(temp_r4_8);
                var_sb_2 = temp_r4_8;
                if (var_r0_6 == 0) {
                    var_r0_6 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_6 = 0;
                var_sb_2 = 0;
            }
            spE0 = var_r0_6;
            var_r2_10 = spD8->unk0;
            var_r3_6 = var_r0_6;
            if (var_r2_10 != temp_r1_11) {
                do {
                    if (var_r3_6 != 0) {
                        var_r3_6->unk0 = (s32) var_r2_10->unk0;
                        var_r3_6->unk4 = (s32) var_r2_10->unk4;
                        var_r3_6->unk8 = (s32) var_r2_10->unk8;
                        var_r3_6->unkC = (s32) var_r2_10->unkC;
                    }
                    var_r2_10 += 0x10;
                    var_r3_6 += 0x10;
                } while (var_r2_10 != temp_r1_11);
            }
            if (spA0 == 1) {
                if (var_r3_6 != 0) {
                    var_r3_6->unk0 = (s32) sp3C;
                    var_r3_6->unk4 = (s32) sp3C.unk4;
                    var_r3_6->unk8 = (s32) sp3C.unk8;
                    var_r3_6->unkC = (s32) sp3C.unkC;
                }
                var_r5 = (GenObj *)((u8 *)var_r3_6 + 0x10);
            } else {
                var_r8_2 = spA0;
                var_r2_11 = var_r3_6;
                if (spA0 != 0) {
                    do {
                        if (var_r2_11 != 0) {
                            var_r2_11->unk0 = (s32) sp3C;
                            var_r2_11->unk4 = (s32) sp3C.unk4;
                            var_r2_11->unk8 = (s32) sp3C.unk8;
                            var_r2_11->unkC = (s32) sp3C.unkC;
                        }
                        var_r8_2 -= 1;
                        var_r2_11 += 0x10;
                    } while (var_r8_2 != 0);
                }
                var_r5 = var_r2_11;
            }
            temp_r2_3 = spD8->unk4;
            temp_r0_16 = spD8->unk0;
            var_r1_3 = temp_r0_16;
            if (temp_r0_16 != temp_r2_3) {
                do {
                    var_r1_3 += 0x10;
                } while (var_r1_3 != temp_r2_3);
            }
            if (temp_r0_16 != 0) {
                free();
            }
            spD8->unk0 = spE0;
            spD8->unk4 = var_r5;
            spD8->unkC = (void *) (spE0 + var_sb_2);
        }
    }
    func_0805E8F0(spC8);
    if (*spCC == 0) {

    } else {
        temp_r1_12 = arg0->unk78;
        (*temp_r1_12)->unk10(&sp6C, temp_r1_12, *(arg0->unk7C + (spC8->unkC * 4)));
        temp_r0_17 = (GenObj *)((u8 *)arg0 + 0x8C);
        temp_r0_18 = (GenObj *)((u8 *)temp_r0_17 + 0xC);
        sp0 = (s32) arg0->unk8C;
        sp0.unk4 = (s32) temp_r0_17->unk4;
        sp0.unk8 = (s32) temp_r0_17->unk8;
        temp_r1_13 = &(GenObj *)((u8 *)sp0 + 0xC);
        sp0.unkC = (s32) temp_r0_17->unkC;
        temp_r1_13->unk4 = (s32) temp_r0_18->unk4;
        temp_r1_13->unk8 = (s32) temp_r0_18->unk8;
        temp_r1_13->unkC = (s32) temp_r0_18->unkC;
        sp0 = (u16) arg0->unk74;
        sp0.unk2 = (u16) arg0->unk76;
        sp0.unk4 = 0;
        sp0.unk6 = 3;
        temp_r3_3 = func_08008920(arg0);
        var_r2_12 = 0;
        if (sp6C != 0) {
            var_r2_12 = sp6C.unk4;
        }
        func_0805E99C(temp_r3_3, sp6C, var_r2_12, &sp0);
        temp_r0_19 = func_08008910(arg0);
        var_r3_7 = 0;
        if (sp74 != 0) {
            var_r3_7 = sp74.unk4;
        }
        spD8 = temp_r0_19;
        func_08008F0C(&sp3C, sp74, 0x06010060, var_r3_7);
        temp_r1_14 = spD8->unk4;
        if (temp_r1_14 != spD8->unkC) {
            if (temp_r1_14 != 0) {
                temp_r1_14->unk0 = (s32) sp3C;
                temp_r1_14->unk4 = (s32) sp3C.unk4;
                temp_r1_14->unk8 = (s32) sp3C.unk8;
                temp_r1_14->unkC = (s32) sp3C.unkC;
            }
            spD8->unk4 = (void *) (spD8->unk4 + 0x10);
        } else {
            spA8 = 1;
            temp_r4_9 = (s32) (temp_r1_14 - spD8->unk0) >> 4;
            var_r0_7 = &spA4;
            *var_r0_7 = (u32) temp_r4_9;
            if ((u32) temp_r4_9 < (u32) spA8) {
                var_r0_7 = &spA8;
            }
            temp_r0_20 = temp_r4_9 + *var_r0_7;
            if (temp_r0_20 != 0) {
                temp_r4_10 = temp_r0_20 * 0x10;
                var_r0_8 = malloc(temp_r4_10);
                var_sl = temp_r4_10;
                if (var_r0_8 == 0) {
                    var_r0_8 = func_080D3BC0(var_sl);
                }
            } else {
                var_r0_8 = 0;
                var_sl = 0;
            }
            spE0 = var_r0_8;
            var_r2_13 = spD8->unk0;
            var_r3_8 = var_r0_8;
            if (var_r2_13 != temp_r1_14) {
                do {
                    if (var_r3_8 != 0) {
                        var_r3_8->unk0 = (s32) var_r2_13->unk0;
                        var_r3_8->unk4 = (s32) var_r2_13->unk4;
                        var_r3_8->unk8 = (s32) var_r2_13->unk8;
                        var_r3_8->unkC = (s32) var_r2_13->unkC;
                    }
                    var_r2_13 += 0x10;
                    var_r3_8 += 0x10;
                } while (var_r2_13 != temp_r1_14);
            }
            if (spA8 == 1) {
                if (var_r3_8 != 0) {
                    var_r3_8->unk0 = (s32) sp3C;
                    var_r3_8->unk4 = (s32) sp3C.unk4;
                    var_r3_8->unk8 = (s32) sp3C.unk8;
                    var_r3_8->unkC = (s32) sp3C.unkC;
                }
                var_r5_2 = (GenObj *)((u8 *)var_r3_8 + 0x10);
            } else {
                var_r8_3 = spA8;
                var_r2_14 = var_r3_8;
                if (spA8 != 0) {
                    do {
                        if (var_r2_14 != 0) {
                            var_r2_14->unk0 = (s32) sp3C;
                            var_r2_14->unk4 = (s32) sp3C.unk4;
                            var_r2_14->unk8 = (s32) sp3C.unk8;
                            var_r2_14->unkC = (s32) sp3C.unkC;
                        }
                        var_r8_3 -= 1;
                        var_r2_14 += 0x10;
                    } while (var_r8_3 != 0);
                }
                var_r5_2 = var_r2_14;
            }
            temp_r2_4 = spD8->unk4;
            temp_r0_21 = spD8->unk0;
            var_r1_4 = temp_r0_21;
            if (temp_r0_21 != temp_r2_4) {
                do {
                    var_r1_4 += 0x10;
                } while (var_r1_4 != temp_r2_4);
            }
            if (temp_r0_21 != 0) {
                free();
            }
            spD8->unk0 = spE0;
            spD8->unk4 = var_r5_2;
            spD8->unkC = (void *) (spE0 + var_sl);
        }
    }
    arg0->((void (*)(void *,...))(unk8->unk5B4->unkC))();
}

