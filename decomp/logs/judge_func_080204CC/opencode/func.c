#include "common.h"
s32 GetAdequacy__C3Pet(void *);                     /* extern */
s32 GetAffection__C6Animal(void *);                 /* extern */
s32 GetGrowthStage__C3Dog(void *);                  /* extern */
s32 func_080200C4(void *, s32);                       /* extern */
s32 func_08020130(void *);                          /* extern */
s32 func_08020170(void *, s32 *);                     /* extern */
s32 func_080211E4(void *, s8, u8);                    /* extern */
s8 func_08021264(void *);                           /* extern */
s32 func_080212C0(void *);                            /* extern */
s32 func_080323C8(void *);                            /* extern */
s32 func_08038374(void *, s32, s32, u16, s32);        /* extern */
s32 func_08038398(void *, u16, u8);                   /* extern */
u16 func_080AB788(s32);                             /* extern */
u8 func_080AB7A4(u8);                               /* extern */
s8 func_080AB82C(void *, s32);                      /* extern */
s32 func_080AB85C(s32 *);                             /* extern */
s32 func_080AB8D0(s32 *);                             /* extern */
s32 func_080AB948(s32 *);                             /* extern */
s32 func_080AB9C4(s32 *);                             /* extern */
s32 func_080ABA90(s32 *, s32 *, s32);                   /* extern */
u8 func_080ABC40(s16, s16, s16, s16, s32 *, s32);   /* extern */
u8 func_080ABE58(s16, s16, s16, s16, s32 *, s32);   /* extern */
s32 memcpy(s32 *, s32 *, s32);                        /* extern */
s32 method_0809BB48__3DogPC15UnkBarnAnimal2C(void *); /* extern */
s32 method_0809BB80__3DogPC15UnkBarnAnimal2C(void *); /* extern */
s32 method_0809BB8C__3DogPC18UnkBarnAnimal2C_x2(void *); /* extern */
s32 method_0809BB9C__3DogPC15UnkBarnAnimal2C(void *); /* extern */
extern s32 gUnk_080F0838;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk4;
    s32 unk6;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    s32 unkE;
    u8 _pad12[2];
    struct GenObj *unk14;
    s32 unk18;
    s32 unk1C;
    struct GenObj *unk20;
    s32 unk22;
    struct GenObj *unk24;
    s32 unk28;
    u8 _pad2C[8];
    s32 unk34;
    u8 _pad38[4];
    s32 unk3C;
    s32 unk3E;
    s32 unk40;
    s32 unk44;
    u8 _pad48[56];
    s32 unk80;
} GenObj;
void func_080204CC(GenObj *arg0) {
GenObj sp8;
    GenObj *sp14;
    u8 sp24;
    u8 sp25;
    u8 sp26;
    u8 sp27;
s32 sp28;
    s32 sp34;
    s32 sp38;
    s32 sp40;
    s32 sp44;
    GenObj *sp48;
s32 sp5C;
    s32 sp68;
    s32 sp6C;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    s32 sp80;
    s32 sp84;
s32 sp8C;
s32 sp94;
s32 sp9C;
s32 spA4;
    s32 spAC;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spC8;
    s32 spCC;
    s32 spD0;
    s32 spD4;
    void **spD8;
    s32 spDC;
    s32 spE0;
    s32 spE4;
    GenObj *spE8;
    s32 spEC;
    s32 spF0;
    s32 spF4;
    u8 *spF8;
    s16 temp_r0;
    s16 temp_r0_10;
    s16 temp_r1_2;
    s16 temp_r1_4;
    s16 temp_r1_5;
    s16 temp_r1_6;
    s16 temp_r2;
    s16 temp_r2_2;
    s16 temp_r2_3;
    s16 temp_r3;
    s16 temp_r3_2;
    s16 temp_r3_3;
    s16 temp_r3_4;
    s16 temp_r3_5;
    s16 temp_r4_4;
    s16 temp_r4_5;
    s16 temp_r7_4;
    s16 temp_r7_5;
    s16 var_r4;
    s16 var_r5;
    s32 *var_r1_5;
    s32 temp_r1_3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r7_2;
    s32 temp_r7_3;
    s32 temp_r8;
    s32 var_r0;
    s32 var_r0_10;
    s32 var_r0_11;
    s32 var_r0_12;
    s32 var_r0_13;
    s32 var_r0_14;
    s32 var_r0_15;
    s32 var_r0_16;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_4;
    s32 var_r4_3;
    s32 var_r8;
    s8 temp_r0_5;
    u16 temp_r0_6;
    u16 temp_r0_7;
    u16 temp_r4_6;
    u16 var_r1_3;
    u16 var_r2;
    u16 var_r2_2;
    u16 var_r4_2;
    u16 var_r4_5;
    u16 var_r4_6;
    u16 var_r5_3;
    u16 var_r7;
    u16 var_r7_2;
    u16 var_r8_2;
    u32 temp_r0_3;
    u32 var_r5_4;
    u8 var_r4_4;
    u8 var_r5_2;
    void *temp_r0_11;
    void *temp_r0_2;
    void *temp_r0_4;
    void *temp_r0_8;
    void *temp_r0_9;
    GenObj *temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r7;
    void *temp_r7_6;
    void *temp_sb;
    GenObj *var_r3;

    spD8 = arg0->unk0;
    temp_r1 = arg0->unk34;
    temp_r5 = GetGrowthStage__C3Dog(temp_r1);
    spDC = (s32) arg0->unk4;
    (*spD8)->unk34(&sp8, spD8);
    ((void (*)(void *,...))(arg0->unk14->unkC))(&sp7C, arg0);
    var_r1 = 0;
    var_r0 = 0;
    if (spDC <= 8) {
        var_r0 = 1;
    }
    if ((var_r0 != 0) && (temp_r5 == 1)) {
        var_r1 = 1;
    }
    if (var_r1 != 0) {
        spE0 = (sp7C.unk4 - sp7C) + 0x10;
    } else {
        spE0 = 0;
    }
    if (var_r1 != 0) {
        spE4 = (sp7C.unk6 - sp7C.unk2) + 0x10;
    } else {
        spE4 = 0;
    }
    sp14 = 0x21;
    sp14.unk4 = -0x21;
    sp14.unk8 = -0x21;
    sp14.unkC = 0x21;
    sp28 = (s32) sp8;
    sp28.unk4 = (s32) sp8.unk4;
    sp28.unk8 = (s32) sp8.unk8;
    sp34 = sp7C;
    sp38 = sp80;
    sp14.unk28 = 0x20;
    sp40 = spE0;
    sp44 = spE4;
    temp_sb = (*spD8)->unk40(spD8, 0);
    temp_r7 = (*spD8)->unk40(spD8, 0x4A);
    spE8 = 0;
    spF8 = (GenObj *)((u8 *)arg0 + 0x40);
    if (arg0->unk40 == 0) {
        goto block_28;
    }
    var_r1_2 = 0;
    if (arg0->unk24 == 0) {
        var_r1_2 = 1;
    }
    if (var_r1_2 == 0) {
block_28:
        if ((temp_sb != 0) && (temp_sb->unk4 == spDC)) {
            ((void (*)(void *,...))(temp_sb->unk14->unkC))(&sp9C, temp_sb);
            func_080ABA90(&sp14, &sp9C, 1);
        }
        if ((temp_r7 != 0) && (temp_r7->unk4 == spDC)) {
            ((void (*)(void *,...))(temp_r7->unk14->unkC))(&spA4, temp_r7);
            func_080ABA90(&sp14, &spA4, 0);
        }
        if (*spF8 != 0) {

        } else if (temp_r5 != 1) {

        } else {
            temp_r0 = arg0->unkA;
            spEC = (s32) temp_r0;
            temp_r2 = arg0->unkE;
            spF0 = (s32) temp_r2;
            temp_r8 = arg0->unk18;
            temp_r7_2 = arg0->unk1C;
            var_r4 = temp_r0;
            var_r5 = temp_r2;
            if (temp_r7_2 > 0) {
                if (sp14 > sp3C) {
                    func_080AB85C(&sp14);
                }
                if (sp14 == 0) {
                    if (sp14 > sp3C) {
                        func_080AB85C(&sp14);
                    }
                    if (sp24 != 0) {
                        var_r5 += spE4;
                    }
                }
            }
            if (temp_r7_2 < 0) {
                if ((s64) (sp18 + sp3C) < 0) {
                    func_080AB8D0(&sp14);
                }
                if (sp18 == 0) {
                    if ((s64) (sp18 + sp3C) < 0) {
                        func_080AB8D0(&sp14);
                    }
                    if (sp25 != 0) {
                        var_r5 -= spE4;
                    }
                }
            }
            if (temp_r8 < 0) {
                if ((s64) (sp1C + sp3C) < 0) {
                    func_080AB948(&sp14);
                }
                if (sp1C == 0) {
                    if ((s64) (sp1C + sp3C) < 0) {
                        func_080AB948(&sp14);
                    }
                    if (sp26 != 0) {
                        var_r4 -= spE0;
                    }
                }
            }
            if (temp_r8 > 0) {
                if (sp20 > sp3C) {
                    func_080AB9C4(&sp14);
                }
                if (sp20 == 0) {
                    if (sp20 > sp3C) {
                        func_080AB9C4(&sp14);
                    }
                    if (sp27 != 0) {
                        var_r4 += spE0;
                    }
                }
            }
            if ((var_r4 != spEC) || (var_r5 != spF0)) {
                arg0->unk3C = var_r4;
                arg0->unk3E = var_r5;
                *spF8 = 1;
                func_080211E4(arg0, 0xC, arg0->unk20);
                if ((temp_r1->unk20 == 5) && ((spE8 != 0) || (temp_r0_2 = (*spD8)->unk40(spD8, 0x4B), spE8 = temp_r0_2, (temp_r0_2 != 0))) && (spE8->unk4 == spDC)) {
                    func_08038398(spE8, arg0->unk22, arg0->unk20);
                }
            }
        }
        temp_r0_3 = temp_r1->unk20;
        switch (temp_r0_3) {
        case 0:
            var_r4_2 = temp_r1->unk24;
            if (var_r4_2 != 0) {
                temp_r5_2 = arg0->unk18;
                temp_r7_3 = arg0->unk1C;
                var_r8 = 0;
                if (temp_r5_2 < 0) {
                    if ((s64) (sp1C + sp3C) < 0) {
                        func_080AB948(&sp14);
                    }
                    if (sp1C <= -0x10) {
                        goto block_88;
                    }
                    goto block_102;
                }
block_88:
                if (temp_r5_2 > 0) {
                    if (sp20 > sp3C) {
                        func_080AB9C4(&sp14);
                    }
                    if (sp20 > 0xF) {
                        goto block_93;
                    }
                    goto block_102;
                }
block_93:
                if (temp_r7_3 < 0) {
                    if ((s64) (sp18 + sp3C) < 0) {
                        func_080AB8D0(&sp14);
                    }
                    if (sp18 <= -0x10) {
                        goto block_97;
                    }
                    goto block_102;
                }
block_97:
                if (temp_r7_3 > 0) {
                    if (sp14 > sp3C) {
                        func_080AB85C(&sp14);
                    }
                    if (sp14 <= 0xF) {
block_102:
                        var_r8 = 1;
                    }
                }
                if (var_r8 != 0) {
                    var_r4_2 = 0;
                } else {
                    var_r4_2 -= 1;
                }
                goto block_118;
            }
            if ((*spF8 == 0) && ((func_08020130(arg0) << 0x18) != 0)) {
                if ((GetGrowthStage__C3Dog(temp_r1) == 1) && (temp_r0_4 = (*spD8)->unk40(spD8, 0x2D), (temp_r0_4 != 0)) && (temp_r0_4->unk4 == spDC)) {
                    func_080200C4(arg0, 0xA9);
                    spAC = spAC & 0xFFFF0000 & 0xFF00FFFF;
                    method_0809BB9C__3DogPC15UnkBarnAnimal2C(temp_r1);
block_250:
                    func_080211E4(arg0, func_08021264(arg0), arg0->unk20);
                } else {
                    var_r4_3 = 0;
                    if ((u32) (((u32) ((*spD8)->unk144(spD8)->unkA << 0x1B) >> 0x1B) - 6) > 0xEU) {
                        var_r4_3 = 1;
                    }
                    temp_r4 = (0x68 * var_r4_3) + ((0x34 * GetGrowthStage__C3Dog(temp_r1)) + &gUnk_080F0838);
                    temp_r0_5 = func_080AB82C(temp_r4, 0xD);
                    temp_r4_2 = temp_r4 + (temp_r0_5 * 4);
                    var_r4_2 = (0x3C * temp_r4_2->unk1) + func_080AB788(0x3C * temp_r4_2->unk2);
                    var_r5_2 = arg0->unk20;
                    temp_r0_6 = func_080AB788(4);
                    if ((temp_r0_6 != 0) && (temp_r0_6 != 3)) {
                        var_r5_2 = func_080AB7A4(var_r5_2);
                    }
                    ((GenObj *)((u8 *)temp_r1 + 0x24))->unk2 = temp_r0_5;
                    func_080211E4(arg0, temp_r0_5, var_r5_2);
                    goto block_118;
                }
            } else {
block_118:
                temp_r1->unk24 = var_r4_2;
            }
            break;
        case 1:
            temp_r4_3 = (GenObj *)((u8 *)temp_r1 + 0x24);
            var_r5_3 = temp_r1->unk24;
            if (var_r5_3 != 0) {
                var_r5_3 -= 1;
            }
            var_r2 = temp_r4_3->unk2;
            if (var_r2 != 0) {
                var_r2 -= 1;
            }
            if (*spF8 != 0) {
                temp_r1->unk24 = var_r5_3;
                temp_r4_3->unk2 = var_r2;
            } else if ((var_r5_3 != 0) && (temp_sb != 0) && (temp_sb->unk4 == spDC)) {
                temp_r3 = arg0->unkA;
                temp_r1_2 = arg0->unkE;
                temp_r7_4 = temp_sb->unkA;
                temp_r7_5 = temp_sb->unkE;
                var_r0_2 = temp_r7_4 - temp_r3;
                if (var_r0_2 < 0) {
                    var_r0_2 = 0 - var_r0_2;
                }
                if (var_r0_2 <= 0xF) {
                    var_r0_3 = temp_r7_5 - temp_r1_2;
                    if (var_r0_3 < 0) {
                        var_r0_3 = 0 - var_r0_3;
                    }
                    if (var_r0_3 > 0xF) {
                        goto block_134;
                    }
                    goto block_143;
                }
block_134:
                if (var_r2 != 0) {
                    var_r0_4 = temp_r4_3->unk4 - temp_r3;
                    if (var_r0_4 < 0) {
                        var_r0_4 = 0 - var_r0_4;
                    }
                    if (var_r0_4 <= 0xF) {
                        var_r0_5 = temp_r4_3->unk6 - temp_r1_2;
                        if (var_r0_5 < 0) {
                            var_r0_5 = 0 - var_r0_5;
                        }
                        if (var_r0_5 <= 0xF) {
                            goto block_141;
                        }
                    }
                } else {
block_141:
                    func_080211E4(arg0, 2, func_080ABC40(temp_r3, temp_r1_2, temp_r7_4, temp_r7_5, &sp14, (s32) arg0->unk20));
                    var_r2 = func_080AB788(0x1E) + 1;
                    temp_r4_3->unk4 = temp_r7_4;
                    temp_r4_3->unk6 = temp_r7_5;
                }
                temp_r1->unk24 = var_r5_3;
                temp_r4_3->unk2 = var_r2;
            } else {
block_143:
                spB0 = ((spB0 & 0xFFFF0000) | 0xB4) & 0xFF00FFFF;
block_249:
                method_0809BB48__3DogPC15UnkBarnAnimal2C(temp_r1);
                goto block_250;
            }
            break;
        case 2:
            temp_r7_6 = (GenObj *)((u8 *)temp_r1 + 0x24);
            temp_r0_7 = temp_r1->unk24;
            var_r8_2 = temp_r0_7;
            if (temp_r0_7 != 0) {
                var_r8_2 -= 1;
            }
            temp_r1_3 = (s32) temp_r1->unk24;
            var_r5_4 = (u32) (temp_r1_3 << 9) >> 0x19;
            if (var_r5_4 != 0) {
                var_r5_4 -= 1;
            }
            var_r4_4 = temp_r7_6->unk3;
            if (var_r4_4 != 0) {
                var_r4_4 -= 1;
            }
            if (*spF8 != 0) {
                temp_r1->unk24 = var_r8_2;
                goto block_161;
            }
            if (var_r8_2 != 0) {
                if ((s32) (temp_r1_3 << 8) < 0) {
                    var_r3 = (*spD8)->unk40(spD8, 0x2D);
                } else {
                    var_r3 = temp_sb;
                }
                if ((var_r3 != 0) && (var_r3->unk4 == spDC)) {
                    if (var_r4_4 == 0) {
                        func_080211E4(arg0, 2, func_080ABE58(arg0->unkA, arg0->unkE, var_r3->unkA, var_r3->unkE, &sp14, (s32) arg0->unk20));
                        var_r4_4 = func_080AB788(0x1E) + 1;
                    }
                    temp_r1->unk24 = var_r8_2;
block_161:
                    temp_r7_6->unk2 = (u8) ((-0x80 & temp_r7_6->unk2) | (var_r5_4 & 0x7F));
                    temp_r7_6->unk3 = var_r4_4;
                } else {
                    goto block_162;
                }
            } else {
block_162:
                func_080323C8(arg0);
                spB4 = ((spB4 & 0xFFFF0000) | 0xB4) & 0xFF00FFFF;
                goto block_249;
            }
            break;
        case 3:
            temp_r5_3 = (GenObj *)((u8 *)temp_r1 + 0x24);
            var_r7 = temp_r1->unk24;
            if (var_r7 != 0) {
                var_r7 -= 1;
            }
            var_r4_5 = temp_r5_3->unk2;
            if (var_r4_5 != 0) {
                var_r4_5 -= 1;
            }
            if (*spF8 != 0) {
                temp_r1->unk24 = var_r7;
                temp_r5_3->unk2 = var_r4_5;
            } else if (var_r7 != 0) {
                temp_r0_8 = (*spD8)->unk40(spD8, 0x4B);
                spE8 = temp_r0_8;
                if ((temp_r0_8 != 0) && (temp_r0_8->unk4 == spDC)) {
                    temp_r2_2 = arg0->unkA;
                    temp_r1_4 = arg0->unkE;
                    temp_r3_2 = spE8->unkA;
                    temp_r3_3 = spE8->unkE;
                    var_r0_6 = temp_r3_2 - temp_r2_2;
                    if (var_r0_6 < 0) {
                        var_r0_6 = 0 - var_r0_6;
                    }
                    if (var_r0_6 <= 7) {
                        var_r0_7 = temp_r3_3 - temp_r1_4;
                        if (var_r0_7 < 0) {
                            var_r0_7 = 0 - var_r0_7;
                        }
                        if (var_r0_7 > 7) {
                            goto block_178;
                        }
                        spB8 = (spB8 & 0xFFFF0000) | func_080AB788(0x78);
                        method_0809BB80__3DogPC15UnkBarnAnimal2C(temp_r1);
                        goto block_250;
                    }
block_178:
                    if (var_r4_5 != 0) {
                        var_r0_8 = temp_r5_3->unk4 - temp_r2_2;
                        if (var_r0_8 < 0) {
                            var_r0_8 = 0 - var_r0_8;
                        }
                        if (var_r0_8 <= 7) {
                            var_r0_9 = temp_r5_3->unk6 - temp_r1_4;
                            if (var_r0_9 < 0) {
                                var_r0_9 = 0 - var_r0_9;
                            }
                            if (var_r0_9 <= 7) {
                                goto block_185;
                            }
                        }
                    } else {
block_185:
                        func_080211E4(arg0, 2, func_080ABC40(temp_r2_2, temp_r1_4, temp_r3_2, temp_r3_3, &sp14, (s32) arg0->unk20));
                        var_r4_5 = func_080AB788(0x1E) + 1;
                        temp_r5_3->unk4 = temp_r3_2;
                        temp_r5_3->unk6 = temp_r3_3;
                    }
                    goto block_188;
                }
                if (var_r4_5 != 0) {
block_188:
                    temp_r1->unk24 = var_r7;
                    temp_r5_3->unk2 = var_r4_5;
                } else {
                    func_080200C4(arg0, 0xAA);
                    goto block_190;
                }
            } else {
block_190:
                spBC = ((spBC & 0xFFFF0000) | 0xB4) & 0xFF00FFFF;
                goto block_249;
            }
            break;
        case 4:
            spE8 = (*spD8)->unk40(spD8, 0x4B);
            var_r1_3 = temp_r1->unk24;
            if (var_r1_3 != 0) {
                var_r1_3 -= 1;
            }
            if ((spE8 != 0) && (spE8->unk4 == spDC)) {
                if (var_r1_3 == 0) {
                    func_080200C4(arg0, 0xA9);
                    spC0 = (s32) (u16) (((u32) (GetAffection__C6Animal(temp_r1) * 0x3C0) / 251U) + 0x1E0);
                    method_0809BB8C__3DogPC18UnkBarnAnimal2C_x2(arg0->unk34);
                    func_080211E4(arg0, func_08021264(arg0), arg0->unk20);
                    func_08038374(spE8, arg0->unk8, arg0->unkC, arg0->unk22, (s32) arg0->unk20);
                } else {
                    temp_r1->unk24 = var_r1_3;
                }
            } else {
                func_080200C4(arg0, 0xAA);
                spC8 = ((spC8 & 0xFFFF0000) | 0xB4) & 0xFF00FFFF;
                goto block_249;
            }
            break;
        case 5:
            temp_r5_4 = (GenObj *)((u8 *)temp_r1 + 0x24);
            spE8 = (*spD8)->unk40(spD8, 0x4B);
            var_r7_2 = temp_r1->unk24;
            if (var_r7_2 != 0) {
                var_r7_2 -= 1;
            }
            var_r2_2 = temp_r5_4->unk2;
            if (var_r2_2 != 0) {
                var_r2_2 -= 1;
            }
            if (*spF8 != 0) {
                temp_r1->unk24 = var_r7_2;
                temp_r5_4->unk2 = var_r2_2;
            } else {
                if ((spE8 != 0) && (spE8->unk4 == spDC)) {
                    if ((var_r7_2 != 0) && (temp_sb != 0) && (temp_sb->unk4 == spDC)) {
                        temp_r3_4 = arg0->unkA;
                        temp_r1_5 = arg0->unkE;
                        temp_r4_4 = temp_sb->unkA;
                        spF4 = (s32) temp_r4_4;
                        temp_r4_5 = temp_sb->unkE;
                        var_r0_10 = temp_r4_4 - temp_r3_4;
                        if (var_r0_10 < 0) {
                            var_r0_10 = 0 - var_r0_10;
                        }
                        if (var_r0_10 <= 0xF) {
                            var_r0_11 = temp_r4_5 - temp_r1_5;
                            if (var_r0_11 < 0) {
                                var_r0_11 = 0 - var_r0_11;
                            }
                            if (var_r0_11 > 0xF) {
                                goto block_216;
                            }
                            func_080200C4(arg0, 0xA9);
                            goto block_228;
                        }
block_216:
                        if (var_r2_2 != 0) {
                            var_r0_12 = temp_r5_4->unk4 - temp_r3_4;
                            if (var_r0_12 < 0) {
                                var_r0_12 = 0 - var_r0_12;
                            }
                            if (var_r0_12 <= 0xF) {
                                var_r0_13 = temp_r5_4->unk6 - temp_r1_5;
                                if (var_r0_13 < 0) {
                                    var_r0_13 = 0 - var_r0_13;
                                }
                                if (var_r0_13 <= 0xF) {
                                    goto block_223;
                                }
                            }
                        } else {
block_223:
                            func_080211E4(arg0, 2, func_080ABC40(temp_r3_4, temp_r1_5, (s16) spF4, temp_r4_5, &sp14, (s32) arg0->unk20));
                            func_08038398(spE8, arg0->unk22, arg0->unk20);
                            var_r2_2 = func_080AB788(0x1E) + 1;
                            temp_r5_4->unk4 = (s16) spF4;
                            temp_r5_4->unk6 = temp_r4_5;
                        }
                        goto block_226;
                    }
                    goto block_228;
                }
                if (var_r2_2 != 0) {
block_226:
                    temp_r1->unk24 = var_r7_2;
                    temp_r5_4->unk2 = var_r2_2;
                } else {
                    func_080200C4(arg0, 0xAA);
block_228:
                    func_080212C0(arg0);
                    spCC = ((spCC & 0xFFFF0000) | 0xB4) & 0xFF00FFFF;
                    goto block_249;
                }
            }
            break;
        case 6:
            temp_r5_5 = (GenObj *)((u8 *)temp_r1 + 0x24);
            var_r4_6 = temp_r1->unk24;
            if (var_r4_6 != 0) {
                var_r4_6 -= 1;
            }
            if (*spF8 != 0) {
                temp_r1->unk24 = var_r4_6;
            } else {
                temp_r0_9 = (*spD8)->unk40(spD8, 0x2D);
                if (temp_r0_9 == 0) {
                    goto block_263;
                }
                if (temp_r0_9->unk4 != spDC) {
block_263:
                    spD4 = ((spD4 & 0xFFFF0000) | 0xB4) & 0xFF00FFFF;
                    method_0809BB48__3DogPC15UnkBarnAnimal2C(temp_r1);
                    func_080211E4(arg0, func_08021264(arg0), arg0->unk20);
                } else {
                    temp_r0_10 = arg0->unkA;
                    temp_r1_6 = arg0->unkE;
                    temp_r2_3 = temp_r0_9->unkA;
                    temp_r3_5 = temp_r0_9->unkE;
                    if (temp_r5_5->unk2 != 0) {
                        if (var_r4_6 == 0) {
                            var_r0_14 = temp_r2_3 - temp_r0_10;
                            if (var_r0_14 < 0) {
                                var_r0_14 = 0 - var_r0_14;
                            }
                            if (var_r0_14 <= 0xF) {
                                var_r1_4 = temp_r3_5 - temp_r1_6;
                                if (var_r1_4 < 0) {
                                    var_r1_4 = 0 - var_r1_4;
                                }
                                if ((var_r1_4 <= 0xF) && ((((void (*)(void *,...))(temp_r0_9->unk14->unk44))(temp_r0_9) << 0x18) != 0)) {
                                    ((void (*)(void *,...))(temp_r0_9->unk14->unk80))(temp_r0_9);
                                }
                            }
                            temp_r4_6 = func_080AB788(0xFB);
                            if ((u32) temp_r4_6 < (u32) (0xFB - GetAdequacy__C3Pet(temp_r1))) {
                                spD0 = ((spD0 & 0xFFFF0000) | func_080AB788(0xB4)) & 0xFF00FFFF;
                                goto block_249;
                            }
                            temp_r5_5->unk2 = 0U;
                            var_r4_6 = func_080AB788(0x1E) + 1;
                            goto block_252;
                        }
block_252:
                        temp_r1->unk24 = var_r4_6;
                    } else {
                        var_r0_15 = temp_r2_3 - temp_r0_10;
                        if (var_r0_15 < 0) {
                            var_r0_15 = 0 - var_r0_15;
                        }
                        if (var_r0_15 <= 0xF) {
                            var_r0_16 = temp_r3_5 - temp_r1_6;
                            if (var_r0_16 < 0) {
                                var_r0_16 = 0 - var_r0_16;
                            }
                            if (var_r0_16 > 0xF) {
                                goto block_259;
                            }
                            func_080200C4(arg0, 0xD2);
                            func_080211E4(arg0, 0xB, arg0->unk20);
                            temp_r5_5->unk2 = 1U;
                            temp_r1->unk24 = 0x24U;
                        } else {
block_259:
                            if (var_r4_6 == 0) {
                                func_080211E4(arg0, 2, func_080ABC40(temp_r0_10, (s16) &sp14, (s16) (s32) arg0->unk20));
                                var_r4_6 = func_080AB788(0x1E) + 1;
                            }
                            temp_r1->unk24 = var_r4_6;
                        }
                    }
                }
            }
            break;
        }
    } else {
        *spF8 = spE8;
        arg0->unk8 = (s32) (arg0->unk3C << 0x10);
        arg0->unkC = (s32) (arg0->unk3E << 0x10);
        ((void (*)(void *,...))(arg0->unk14->unkC))(&sp84, arg0);
        sp7C = sp84;
        sp80 = sp84.unk4;
        sp48 = 0x21;
        sp48.unk4 = -0x21;
        sp48.unk8 = -0x21;
        sp48.unkC = 0x21;
        sp5C = (s32) sp8;
        sp5C.unk4 = (s32) sp8.unk4;
        sp5C.unk8 = (s32) sp8.unk8;
        sp68 = sp7C;
        sp6C = sp80;
        sp48.unk28 = 0x20;
        sp74 = (sp7C.unk4 - sp7C) + 0x10;
        sp78 = (sp7C.unk6 - sp7C.unk2) + 0x10;
        memcpy(&sp14, &sp48, 0x34);
        if ((temp_sb != 0) && (temp_sb->unk4 == spDC)) {
            ((void (*)(void *,...))(temp_sb->unk14->unkC))(&sp8C, temp_sb);
            func_080ABA90(&sp14, &sp8C, 1);
        }
        if ((temp_r7 != 0) && (temp_r7->unk4 == spDC)) {
            ((void (*)(void *,...))(temp_r7->unk14->unkC))(&sp94, temp_r7);
            func_080ABA90(&sp14, &sp94, 0);
        }
        func_080211E4(arg0, func_08021264(arg0), arg0->unk20);
        if ((temp_r1->unk20 == 5) && ((spE8 != 0) || (temp_r0_11 = (*spD8)->unk40(spD8, 0x4B), spE8 = temp_r0_11, (temp_r0_11 != 0))) && (spE8->unk4 == spDC)) {
            func_08038398(spE8, arg0->unk22, arg0->unk20);
        }
    }
    if (((arg0->unk18 != 0) || (arg0->unk1C != 0)) && ((spDC == 2) || (spDC == (*spD8)->unk14(spD8)))) {
        var_r1_5 = &sp14;
        if (*spF8 != 0) {
            var_r1_5 = 0;
        }
        func_08020170(arg0, var_r1_5);
    }
    if ((temp_r1->unk20 == 5) && (spE8 != 0) && (spE8->unk4 == spDC)) {
        spE8->unk8 = (s32) arg0->unk8;
        spE8->unkC = (s32) arg0->unkC;
    }
}

