#include "common.h"
s32 AddAffection__6Animali(void *, s32);              /* extern */
s32 AddOutdoorMinutes__9LivestockUi(void *, s32);     /* extern */
u32 GetCurrentOutdoorMinutes__C9Livestock(void *);  /* extern */
s32 GetGrowthStage__C7Chicken(void *);              /* extern */
u8 IsSick__C9Livestock(void *);                     /* extern */
s32 IsUnhappy__C9Livestock(void *);                 /* extern */
s32 ResetUnhappy__9Livestock(void *);                 /* extern */
s32 SetFed__7Chicken(void *);                         /* extern */
s32 SetUnhappy__9Livestock(void *);                   /* extern */
s32 func_08020130(void *);                          /* extern */
s32 func_08020170(void *, s32 *);                     /* extern */
s32 func_080228B4(void *, s8, u8);                    /* extern */
s8 func_08022950(void *);                           /* extern */
u32 func_080AB788(s32);                             /* extern */
u8 func_080AB7A4(u8);                               /* extern */
s8 func_080AB82C(void *, s32);                      /* extern */
s32 func_080AB85C(s32 *);                             /* extern */
s32 func_080AB8D0(s32 *);                             /* extern */
s32 func_080AB948(s32 *);                             /* extern */
s32 func_080AB9C4(s32 *);                             /* extern */
s32 func_080ABA90(s32 *, s32 *, s32);                   /* extern */
u8 func_080ABE58(s16, s16, s16, s16, s32 *, s32);   /* extern */
s32 method_0809BD20__7ChickenPC15UnkBarnAnimal2C(void *, s32 *); /* extern */
extern s32 gUnk_080F09C8;

typedef struct GenObj {
    s32 unk0;
    s32 unk1;
    s32 unk2;
    s32 unk4;
    s32 unk8;
    s32 unkA;
    s32 unkC;
    s32 unkE;
    u8 _pad12[2];
    struct GenObj *unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    struct GenObj *unk24;
    struct GenObj *unk28;
    s32 unk2C;
    s32 unk30;
    s32 unk34;
} GenObj;
void func_080224E4(GenObj *arg0, GenObj *arg1) {
GenObj sp8;
    GenObj *sp14;
s32 sp28;
    s32 sp34;
    s32 sp38;
    s32 sp48;
s32 sp50;
s32 sp58;
    s32 sp60;
    s32 sp64;
    void *sp68;
    s32 sp6C;
    s32 sp70;
    s32 temp_r0;
    s32 temp_r1_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r6_2;
    s32 var_r6;
    s32 var_r7_2;
    s8 temp_r0_2;
    s8 var_r7;
    u16 temp_r1;
    u16 temp_r2;
    u16 var_r4_2;
    u16 var_sl;
    u32 temp_r0_3;
    u32 temp_r4;
    u32 temp_r5;
    u32 var_r5;
    u8 var_r4;
    u8 var_r5_2;
    void **temp_r8;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r5_2;
    void *temp_r6;
    GenObj *temp_r7;
    GenObj *var_r1;

    temp_r7 = arg0->unk34;
    temp_r8 = arg0->unk0;
    temp_r2 = arg0->unk4;
    sp64 = (s32) temp_r2;
    if ((temp_r2 == 2) && (arg1->unk4 != 0)) {
        temp_r5 = GetCurrentOutdoorMinutes__C9Livestock(temp_r7);
        AddOutdoorMinutes__9LivestockUi(temp_r7, 1);
        temp_r4 = GetCurrentOutdoorMinutes__C9Livestock(temp_r7);
        if ((temp_r5 <= 0xB3U) && (temp_r4 > 0xB3U) && (*(*temp_r8)->unk144(temp_r8) != 0) && ((IsUnhappy__C9Livestock(temp_r7) << 0x18) == 0)) {
            SetUnhappy__9Livestock(temp_r7);
        }
        if ((temp_r5 <= 0xEFU) && (temp_r4 > 0xEFU)) {
            SetFed__7Chicken(temp_r7);
        }
        if ((temp_r5 <= 0x12BU) && (temp_r4 > 0x12BU) && (*(*temp_r8)->unk144(temp_r8) == 0)) {
            if (((IsUnhappy__C9Livestock(temp_r7) << 0x18) != 0) && (func_080AB788(0x64) <= 0x1DU)) {
                ResetUnhappy__9Livestock(temp_r7);
            }
            AddAffection__6Animali(temp_r7, 1);
        }
    }
    (*temp_r8)->unk34(&sp8, temp_r8, sp64);
    ((void (*)(void *,...))(arg0->unk14->unkC))(&sp48, arg0);
    sp6C = sp48;
    sp70 = sp4C;
    sp14 = 0x11;
    sp14.unk4 = -0x11;
    sp14.unk8 = -0x11;
    sp14.unkC = 0x11;
    sp28 = (s32) sp8;
    sp28.unk4 = (s32) sp8.unk4;
    sp28.unk8 = (s32) sp8.unk8;
    sp34 = sp48;
    sp38 = sp4C;
    sp14.unk28 = 0x10;
    sp14.unk2C = 0;
    sp14.unk30 = 0;
    temp_r6 = (*temp_r8)->unk40(temp_r8, 0);
    temp_r5_2 = (*temp_r8)->unk40(temp_r8, 0x4A);
    if ((temp_r6 != 0) && (temp_r6->unk4 == sp64)) {
        ((void (*)(void *,...))(temp_r6->unk14->unkC))(&sp50, temp_r6);
        func_080ABA90(&sp14, &sp50, 0);
    }
    if ((temp_r5_2 != 0) && (temp_r5_2->unk4 == sp64)) {
        ((void (*)(void *,...))(temp_r5_2->unk14->unkC))(&sp58, temp_r5_2);
        func_080ABA90(&sp14, &sp58, 0);
    }
    temp_r0 = temp_r7->unk24;
    switch (temp_r0) {                              /* irregular */
    case 1:
        sp68 = (GenObj *)((u8 *)temp_r7 + 0x28);
        temp_r1 = temp_r7->unk28;
        var_sl = temp_r1;
        if (temp_r1 != 0) {
            var_sl -= 1;
        }
        temp_r1_2 = (s32) temp_r7->unk28;
        var_r5 = (u32) (temp_r1_2 << 9) >> 0x19;
        if (var_r5 != 0) {
            var_r5 -= 1;
        }
        var_r4 = sp68->unk3;
        if (var_r4 != 0) {
            var_r4 -= 1;
        }
        if (var_sl != 0) {
            if ((s32) (temp_r1_2 << 8) < 0) {
                var_r1 = (*temp_r8)->unk40(temp_r8, 0x2D);
            } else {
                var_r1 = temp_r6;
            }
            if ((var_r1 != 0) && (var_r1->unk4 == sp64)) {
                if (var_r4 == 0) {
                    var_r7 = 1;
                    if (var_r5 != 0) {
                        var_r7 = 4;
                    }
                    func_080228B4(arg0, var_r7, func_080ABE58(arg0->unkA, arg0->unkE, var_r1->unkA, var_r1->unkE, &sp14, (s32) arg0->unk20));
                    var_r4 = func_080AB788(0x1E) + 1;
                }
                sp68->unk0 = var_sl;
                sp68->unk2 = (u8) ((-0x80 & sp68->unk2) | (var_r5 & 0x7F));
                sp68->unk3 = var_r4;
            } else {
                goto block_75;
            }
        } else {
block_75:
            sp60 = ((sp60 & 0xFFFF0000) | 0xB4) & 0xFF00FFFF;
            method_0809BD20__7ChickenPC15UnkBarnAnimal2C(temp_r7, &sp60);
            func_080228B4(arg0, func_08022950(arg0), arg0->unk20);
        }
        break;
    case 0:
        var_r4_2 = temp_r7->unk28;
        if (var_r4_2 != 0) {
            temp_r5_3 = arg0->unk18;
            temp_r6_2 = arg0->unk1C;
            var_r7_2 = 0;
            if (temp_r5_3 < 0) {
                if ((s64) (sp1C + sp3C) < 0) {
                    func_080AB948(&sp14);
                }
                if (sp1C <= -0x10) {
                    goto block_32;
                }
                goto block_46;
            }
block_32:
            if (temp_r5_3 > 0) {
                if (sp20 > sp3C) {
                    func_080AB9C4(&sp14);
                }
                if (sp20 > 0xF) {
                    goto block_37;
                }
                goto block_46;
            }
block_37:
            if (temp_r6_2 < 0) {
                if ((s64) (sp18 + sp3C) < 0) {
                    func_080AB8D0(&sp14);
                }
                if (sp18 <= -0x10) {
                    goto block_41;
                }
                goto block_46;
            }
block_41:
            if (temp_r6_2 > 0) {
                if (sp14 > sp3C) {
                    func_080AB85C(&sp14);
                }
                if (sp14 <= 0xF) {
block_46:
                    var_r7_2 = 1;
                }
            }
            if (var_r7_2 != 0) {
                var_r4_2 = 0;
            } else {
                var_r4_2 -= 1;
            }
        } else if ((func_08020130(arg0) << 0x18) != 0) {
            var_r6 = 0;
            if ((u32) (((u32) ((*temp_r8)->unk144(temp_r8)->unkA << 0x1B) >> 0x1B) - 6) > 0xEU) {
                var_r6 = 1;
            }
            temp_r5_4 = GetGrowthStage__C7Chicken(temp_r7);
            temp_r4_2 = (var_r6 * 0x50) + ((temp_r5_4 * 0x28) + &gUnk_080F09C8) + (IsSick__C9Livestock(temp_r7) * 0x14);
            temp_r0_2 = func_080AB82C(temp_r4_2, 5);
            temp_r4_3 = temp_r4_2 + (temp_r0_2 * 4);
            var_r4_2 = (0x3C * temp_r4_3->unk1) + func_080AB788(0x3C * temp_r4_3->unk2);
            var_r5_2 = arg0->unk20;
            temp_r0_3 = func_080AB788(4);
            if ((temp_r0_3 != 0) && (temp_r0_3 != 3)) {
                var_r5_2 = func_080AB7A4(var_r5_2);
            }
            func_080228B4(arg0, temp_r0_2, var_r5_2);
            ((GenObj *)((u8 *)temp_r7 + 0x28))->unk2 = temp_r0_2;
        }
        temp_r7->unk28 = var_r4_2;
        break;
    }
    func_08020170(arg0, &sp14);
}

