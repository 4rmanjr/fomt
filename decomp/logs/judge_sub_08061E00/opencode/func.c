#include "common.h"
s32 CountChickens__C4Coop(s32);                     /* extern */
s32 CountCows__C4Barn(s32);                         /* extern */
s32 CountSheeps__C4Barn(s32);                       /* extern */
u32 GetAffection__C6Animal(s32);                    /* extern */
s32 GetHorse__C4Farm(s32);                          /* extern */
s32 GetName__C6Animal(s32);                         /* extern */
s32 GetStoredBushelCount__C4Barn(s32);              /* extern */
s32 GetStoredBushelCount__C4Coop(s32);              /* extern */
s32 GetUnk10__C4Farm(s32);                          /* extern */
s32 IsFestivalWinner__C6Animal(s32);                /* extern */
s32 free(void *);                                     /* extern */
void *func_08008910(s32);                           /* extern */
s32 func_08008F0C(s32 *, void *, s32, s32);             /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32);             /* extern */
s32 func_0804E9F4(s32, u32, s32, s32);                /* extern */
s32 func_0804EDB4(s32, s32, s32, s32);                /* extern */
s32 func_08075E24(void *, s16);                       /* extern */
s32 func_0809AA28(s32);                             /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
extern ? gUnk_08751B4C;
extern ? gUnk_08751BCC;
extern ? gUnk_08751E6C;
extern ? gUnk_08751EEC;
extern ? gUnk_0875236C;
extern ? gUnk_087523EC;
extern ? gUnk_087525EC;
extern ? gUnk_0875266C;
extern ? gUnk_0875268C;
extern ? gUnk_0875270C;
extern ? gUnk_087527CC;
extern ? gUnk_0875284C;
extern ? gUnk_08752EEC;
extern ? gUnk_08752F6C;
extern ? gUnk_0875316C;
extern ? gUnk_087531EC;
extern ? gUnk_0875320C;
extern ? gUnk_0875328C;

void *sub_08061E00(s32 arg15, ? arg16, u32 arg57, u32 arg58, s16 arg59, s16 arg5A, u32 arg5B, u32 arg5C, u32 arg5D, u32 arg5E, u32 arg5F, u32 arg60, s16 arg61, s16 arg62, u32 arg63, u32 arg64, u32 arg65, u32 arg66, u32 arg67, u32 arg68, u32 arg69, u32 arg6A, u32 arg6B, u32 arg6C, u32 arg6D, u32 arg6E, u32 arg6F, u32 arg70, u32 arg71, u32 arg72, u32 arg73, u32 arg74, void *arg75, void *arg77, s32 arg78, s32 arg7C, u32 arg7D, u32 arg7E, u32 arg7F, s32 arg88, s32 arg89, s32 arg8B, s32 arg8C, void *arg8D, void *arg8E, u32 arg92, u32 arg9C, void *argA1, void *argA2, u32 *argA3, u32 *argA4, s16 *argA5, s16 *argA6, u32 *argA7, u32 *argA8, void *argA9, void *argAA) {
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_14;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_19;
    s32 temp_r0_20;
    s32 temp_r0_22;
    s32 temp_r0_23;
    s32 temp_r0_25;
    s32 temp_r0_26;
    s32 temp_r0_28;
    s32 temp_r0_29;
    s32 temp_r0_31;
    s32 temp_r0_32;
    s32 temp_r0_34;
    s32 temp_r0_3;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r1_3;
    s32 temp_r1_7;
    s32 temp_r3_10;
    s32 temp_r3_5;
    s32 temp_r3_8;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_13;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_22;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 var_r5_3;
    s32 var_r5_6;
    s32 var_r8;
    s32 var_r8_10;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    s32 var_r8_9;
    s32 var_sb_2;
    u16 temp_r1;
    u16 temp_r2_4;
    u32 *var_r1;
    u32 *var_r1_3;
    u32 *var_r2_10;
    u32 *var_r2_5;
    u32 *var_r3;
    u32 *var_r3_11;
    u32 *var_r3_14;
    u32 *var_r3_17;
    u32 *var_r3_20;
    u32 *var_r3_23;
    u32 *var_r3_26;
    u32 *var_r3_29;
    u32 *var_r3_6;
    u32 temp_r0_11;
    u32 temp_r0_13;
    u32 temp_r0_15;
    u32 temp_r0_18;
    u32 temp_r0_21;
    u32 temp_r0_24;
    u32 temp_r0_27;
    u32 temp_r0_2;
    u32 temp_r0_30;
    u32 temp_r0_33;
    u32 temp_r0_4;
    u32 temp_r0_6;
    u32 temp_r0_9;
    u32 temp_r6_3;
    u32 temp_r6_6;
    u32 var_r3_10;
    u32 var_r3_13;
    u32 var_r3_16;
    u32 var_r3_19;
    u32 var_r3_22;
    u32 var_r3_25;
    u32 var_r3_28;
    u32 var_r3_31;
    u32 var_r3_3;
    u32 var_r3_5;
    u32 var_r3_8;
    u32 var_r4;
    u32 var_r4_2;
    void *temp_r0_12;
    void *temp_r0_5;
    void *temp_r1_10;
    void *temp_r1_11;
    void *temp_r1_12;
    void *temp_r1_13;
    void *temp_r1_14;
    void *temp_r1_15;
    void *temp_r1_16;
    void *temp_r1_17;
    void *temp_r1_18;
    void *temp_r1_19;
    void *temp_r1_20;
    void *temp_r1_21;
    void *temp_r1_22;
    void *temp_r1_2;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r1_6;
    void *temp_r1_8;
    void *temp_r1_9;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r3;
    void *temp_r3_11;
    void *temp_r3_12;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_9;
    void *temp_r6;
    void *temp_r6_10;
    void *temp_r6_11;
    void *temp_r6_12;
    void *temp_r6_13;
    void *temp_r6_2;
    void *temp_r6_4;
    void *temp_r6_5;
    void *temp_r6_7;
    void *temp_r6_8;
    void *temp_r6_9;
    void *var_r0;
    void *var_r0_10;
    void *var_r0_11;
    void *var_r0_12;
    void *var_r0_13;
    void *var_r0_14;
    void *var_r0_15;
    void *var_r0_16;
    void *var_r0_17;
    void *var_r0_18;
    void *var_r0_19;
    void *var_r0_20;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_4;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r0_7;
    void *var_r0_8;
    void *var_r0_9;
    void *var_r1_2;
    void *var_r1_4;
    void *var_r2;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_14;
    void *var_r2_15;
    void *var_r2_16;
    void *var_r2_17;
    void *var_r2_18;
    void *var_r2_19;
    void *var_r2_20;
    void *var_r2_21;
    void *var_r2_22;
    void *var_r2_23;
    void *var_r2_24;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r2_6;
    void *var_r2_7;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r3_12;
    void *var_r3_15;
    void *var_r3_18;
    void *var_r3_21;
    void *var_r3_24;
    void *var_r3_27;
    void *var_r3_2;
    void *var_r3_30;
    void *var_r3_4;
    void *var_r3_7;
    void *var_r3_9;
    void *var_r5;
    void *var_r5_10;
    void *var_r5_11;
    void *var_r5_12;
    void *var_r5_13;
    void *var_r5_2;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_7;
    void *var_r5_8;
    void *var_r5_9;
    void *var_sb;

    temp_r1 = arg78 * 8;
    saved_reg_r10->unk0 = temp_r1;
    saved_reg_r10->unk4 = 0;
    saved_reg_r10->unk8 = &gUnk_08751E6C;
    saved_reg_r10->unkC = &gUnk_08751EEC;
    temp_r6 = arg75 + 0x594;
    temp_r2 = temp_r6->unk4;
    arg8B = (s32) temp_r1;
    if (temp_r2 != temp_r6->unkC) {
        if (temp_r2 != 0) {
            temp_r2->unk0 = (s32) saved_reg_r10->unk0;
            temp_r2->unk4 = (s32) saved_reg_r10->unk4;
            temp_r2->unk8 = (s32 *) saved_reg_r10->unk8;
            temp_r2->unkC = arg15;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        arg8C = arg78 << 6;
        arg89 = arg78 + 4;
    } else {
        arg58 = 1;
        temp_r4 = (s32) (temp_r2 - arg75->unk594) >> 4;
        arg57 = temp_r4;
        var_r3 = &arg57;
        if ((u32) temp_r4 < (u32) arg58) {
            var_r3 = &arg58;
        }
        temp_r0 = temp_r4 + *var_r3;
        if (temp_r0 != 0) {
            temp_r4_2 = temp_r0 * 0x10;
            var_r0 = malloc(temp_r4_2);
            var_r8 = temp_r4_2;
            if (var_r0 == 0) {
                var_r0 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0 = 0;
            var_r8 = 0;
        }
        argAA = var_r0;
        var_r2 = arg75->unk594;
        var_r3_2 = var_r0;
        arg8C = arg78 << 6;
        arg89 = arg78 + 4;
        if (var_r2 != temp_r2) {
            do {
                if (var_r3_2 != 0) {
                    var_r3_2->unk0 = (s32) var_r2->unk0;
                    var_r3_2->unk4 = (s32) var_r2->unk4;
                    var_r3_2->unk8 = (s32) var_r2->unk8;
                    var_r3_2->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3_2 += 0x10;
            } while (var_r2 != temp_r2);
        }
        temp_r0_2 = arg58;
        if (temp_r0_2 == 1) {
            if (var_r3_2 != 0) {
                var_r3_2->unk0 = (s32) saved_reg_r10->unk0;
                var_r3_2->unk4 = (s32) saved_reg_r10->unk4;
                var_r3_2->unk8 = (s32 *) saved_reg_r10->unk8;
                var_r3_2->unkC = arg15;
            }
            var_r5 = var_r3_2 + 0x10;
        } else {
            var_r3_3 = temp_r0_2;
            var_r2_2 = var_r3_2;
            if (var_r3_3 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) saved_reg_r10->unk0;
                        var_r2_2->unk4 = (s32) saved_reg_r10->unk4;
                        var_r2_2->unk8 = (s32 *) saved_reg_r10->unk8;
                        var_r2_2->unkC = arg15;
                    }
                    var_r3_3 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_3 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r3 = temp_r6->unk4;
        temp_r1_2 = arg75->unk594;
        var_r0_2 = temp_r1_2;
        if (temp_r1_2 != temp_r3) {
            do {
                var_r0_2 += 0x10;
            } while (var_r0_2 != temp_r3);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        arg75->unk594 = argAA;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (argAA + var_r8);
    }
    if ((IsFestivalWinner__C6Animal(arg75->unk58C + 0x1C70) << 0x18) != 0) {
        arg4 = 1;
        arg5 = 0x20;
        func_0804E9F4(arg77->unk18 + ((arg78 - 2) << 6), 0x54U, 2, 2);
    }
    arg59 = 0xC;
    argA1->unk2 = 2;
    func_0804E7A0((s32) arg59, arg8D, 0);
    temp_r1_3 = GetName__C6Animal(arg75->unk58C + 0x1C70);
    arg5A = 0xC;
    argA2->unk2 = 2;
    arg4 = temp_r1_3;
    func_0804E8F0((s32) arg5A, arg8D, 0, 0);
    temp_r6_2 = func_08008910(arg75->unk0);
    func_08008F0C(&arg16, arg8D, 0x06003900, 0x300);
    temp_r1_4 = temp_r6_2->unk4;
    if (temp_r1_4 != temp_r6_2->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) arg8E->unk0;
            temp_r1_4->unk4 = (s32) arg8E->unk4;
            temp_r1_4->unk8 = (s32) arg8E->unk8;
            temp_r1_4->unkC = (s32) arg8E->unkC;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        argA9 = temp_r1_4;
        arg5C = 1;
        temp_r4_3 = (s32) (argA9 - temp_r6_2->unk0) >> 4;
        arg5B = temp_r4_3;
        var_r1 = &arg5B;
        if ((u32) temp_r4_3 < (u32) arg5C) {
            var_r1 = &arg5C;
        }
        temp_r0_3 = temp_r4_3 + *var_r1;
        if (temp_r0_3 != 0) {
            temp_r4_4 = temp_r0_3 * 0x10;
            var_r0_3 = malloc(temp_r4_4);
            var_r8_2 = temp_r4_4;
            if (var_r0_3 == 0) {
                var_r0_3 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_3 = 0;
            var_r8_2 = 0;
        }
        argAA = var_r0_3;
        var_r2_3 = temp_r6_2->unk0;
        var_r3_4 = var_r0_3;
        if (var_r2_3 != argA9) {
            do {
                if (var_r3_4 != 0) {
                    var_r3_4->unk0 = (s32) var_r2_3->unk0;
                    var_r3_4->unk4 = (s32) var_r2_3->unk4;
                    var_r3_4->unk8 = (s32) var_r2_3->unk8;
                    var_r3_4->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_4 += 0x10;
            } while (var_r2_3 != argA9);
        }
        temp_r0_4 = arg5C;
        if (temp_r0_4 == 1) {
            if (var_r3_4 != 0) {
                var_r3_4->unk0 = (s32) arg8E->unk0;
                var_r3_4->unk4 = (s32) arg8E->unk4;
                var_r3_4->unk8 = (s32) arg8E->unk8;
                var_r3_4->unkC = (s32) arg8E->unkC;
            }
            var_r5_2 = var_r3_4 + 0x10;
        } else {
            var_r3_5 = temp_r0_4;
            var_r2_4 = var_r3_4;
            if (var_r3_5 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) arg8E->unk0;
                        var_r2_4->unk4 = (s32) arg8E->unk4;
                        var_r2_4->unk8 = (s32) arg8E->unk8;
                        var_r2_4->unkC = (s32) arg8E->unkC;
                    }
                    var_r3_5 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_5 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_2 = temp_r6_2->unk4;
        temp_r0_5 = temp_r6_2->unk0;
        var_r1_2 = temp_r0_5;
        if (temp_r0_5 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_5 != 0) {
            free();
        }
        temp_r6_2->unk0 = argAA;
        temp_r6_2->unk4 = var_r5_2;
        temp_r6_2->unkC = (void *) (argAA + var_r8_2);
    }
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg77->unk18 + arg8C + 4, 0x1C8U, 0xC, 2);
    arg5D = 0xA;
    temp_r0_6 = GetAffection__C6Animal(arg75->unk58C + 0x1C70) / 25U;
    arg5E = temp_r0_6;
    var_r2_5 = argA3;
    if ((u32) arg5D > temp_r0_6) {
        var_r2_5 = argA4;
    }
    temp_r6_3 = *var_r2_5;
    var_r4 = 0;
    if (temp_r6_3 > 0U) {
        var_r5_3 = 8;
        do {
            arg4 = 2;
            arg5 = 0x20;
            func_0804E9F4(arg77->unk18 + ((arg78 + 2) << 6) + var_r5_3, 0x580000U >> 0x10, 1, 1);
            var_r5_3 += 2;
            var_r4 += 1;
        } while (var_r4 < temp_r6_3);
    }
    temp_r0_7 = GetHorse__C4Farm(arg75->unk58C + 0x14);
    arg7C = temp_r0_7;
    if (temp_r0_7 == 0) {

    } else {
        saved_reg_r10->unk0 = (u16) arg8B;
        saved_reg_r10->unk4 = 0x78;
        saved_reg_r10->unk8 = &gUnk_087527CC;
        saved_reg_r10->unkC = &gUnk_0875284C;
        temp_r6_4 = arg75 + 0x594;
        temp_r1_5 = temp_r6_4->unk4;
        if (temp_r1_5 != temp_r6_4->unkC) {
            if (temp_r1_5 != 0) {
                temp_r1_5->unk0 = (s32) saved_reg_r10->unk0;
                temp_r1_5->unk4 = (s32) saved_reg_r10->unk4;
                temp_r1_5->unk8 = (s32 *) saved_reg_r10->unk8;
                temp_r1_5->unkC = arg15;
            }
            temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
            argA5 = &arg61;
            var_sb = arg75 + 0x186C;
            argA6 = &arg62;
            argA7 = &arg65;
            argA8 = &arg66;
        } else {
            argA9 = temp_r1_5;
            arg60 = 1;
            temp_r4_5 = (s32) (argA9 - arg75->unk594) >> 4;
            arg5F = temp_r4_5;
            var_r3_6 = &arg5F;
            if ((u32) temp_r4_5 < (u32) arg60) {
                var_r3_6 = &arg60;
            }
            temp_r0_8 = temp_r4_5 + *var_r3_6;
            if (temp_r0_8 != 0) {
                temp_r4_6 = temp_r0_8 * 0x10;
                var_r0_4 = malloc(temp_r4_6);
                var_r8_3 = temp_r4_6;
                if (var_r0_4 == 0) {
                    var_r0_4 = func_080D3BC0(var_r8_3);
                }
            } else {
                var_r0_4 = 0;
                var_r8_3 = 0;
            }
            argAA = var_r0_4;
            var_r2_6 = arg75->unk594;
            var_r3_7 = var_r0_4;
            argA5 = &arg61;
            var_sb = arg75 + 0x186C;
            argA6 = &arg62;
            argA7 = &arg65;
            argA8 = &arg66;
            if (var_r2_6 != argA9) {
                do {
                    if (var_r3_7 != 0) {
                        var_r3_7->unk0 = (s32) var_r2_6->unk0;
                        var_r3_7->unk4 = (s32) var_r2_6->unk4;
                        var_r3_7->unk8 = (s32) var_r2_6->unk8;
                        var_r3_7->unkC = (s32) var_r2_6->unkC;
                    }
                    var_r2_6 += 0x10;
                    var_r3_7 += 0x10;
                } while (var_r2_6 != argA9);
            }
            temp_r0_9 = arg60;
            if (temp_r0_9 == 1) {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) saved_reg_r10->unk0;
                    var_r3_7->unk4 = (s32) saved_reg_r10->unk4;
                    var_r3_7->unk8 = (s32 *) saved_reg_r10->unk8;
                    var_r3_7->unkC = arg15;
                }
                var_r5_4 = var_r3_7 + 0x10;
            } else {
                var_r3_8 = temp_r0_9;
                var_r2_7 = var_r3_7;
                if (var_r3_8 != 0) {
                    do {
                        if (var_r2_7 != 0) {
                            var_r2_7->unk0 = (s32) saved_reg_r10->unk0;
                            var_r2_7->unk4 = (s32) saved_reg_r10->unk4;
                            var_r2_7->unk8 = (s32 *) saved_reg_r10->unk8;
                            var_r2_7->unkC = arg15;
                        }
                        var_r3_8 -= 1;
                        var_r2_7 += 0x10;
                    } while (var_r3_8 != 0);
                }
                var_r5_4 = var_r2_7;
            }
            temp_r3_2 = temp_r6_4->unk4;
            temp_r1_6 = arg75->unk594;
            var_r0_5 = temp_r1_6;
            if (temp_r1_6 != temp_r3_2) {
                do {
                    var_r0_5 += 0x10;
                } while (var_r0_5 != temp_r3_2);
            }
            if (temp_r1_6 != 0) {
                free(temp_r1_6);
            }
            arg75->unk594 = argAA;
            temp_r6_4->unk4 = var_r5_4;
            temp_r6_4->unkC = (void *) (argAA + var_r8_3);
        }
        if ((IsFestivalWinner__C6Animal(arg7C) << 0x18) != 0) {
            arg4 = 1;
            arg5 = 0x20;
            func_0804E9F4(arg77->unk18 + ((arg78 - 2) << 6) + 0x1E, 0x54U, 2, 2);
        }
        arg61 = 0xC;
        argA5->unk2 = 2;
        func_0804E7A0((s32) arg61, var_sb, 0);
        temp_r1_7 = GetName__C6Animal(arg7C);
        arg62 = 0xC;
        argA6->unk2 = 2;
        arg4 = temp_r1_7;
        func_0804E8F0((s32) arg62, var_sb, 0, 0);
        temp_r6_5 = func_08008910(arg75->unk0);
        func_08008F0C(&arg16, var_sb, 0x06003C00, 0x300);
        temp_r1_8 = temp_r6_5->unk4;
        if (temp_r1_8 != temp_r6_5->unkC) {
            if (temp_r1_8 != 0) {
                temp_r1_8->unk0 = (s32) arg8E->unk0;
                temp_r1_8->unk4 = (s32) arg8E->unk4;
                temp_r1_8->unk8 = (s32) arg8E->unk8;
                temp_r1_8->unkC = (s32) arg8E->unkC;
            }
            temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
        } else {
            argA9 = temp_r1_8;
            arg64 = 1;
            temp_r4_7 = (s32) (argA9 - temp_r6_5->unk0) >> 4;
            arg63 = temp_r4_7;
            var_r1_3 = &arg63;
            if ((u32) temp_r4_7 < (u32) arg64) {
                var_r1_3 = &arg64;
            }
            temp_r0_10 = temp_r4_7 + *var_r1_3;
            if (temp_r0_10 != 0) {
                temp_r4_8 = temp_r0_10 * 0x10;
                var_r0_6 = malloc(temp_r4_8);
                var_sb_2 = temp_r4_8;
                if (var_r0_6 == 0) {
                    var_r0_6 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_6 = 0;
                var_sb_2 = 0;
            }
            argAA = var_r0_6;
            var_r2_8 = temp_r6_5->unk0;
            var_r3_9 = var_r0_6;
            if (var_r2_8 != argA9) {
                do {
                    if (var_r3_9 != 0) {
                        var_r3_9->unk0 = (s32) var_r2_8->unk0;
                        var_r3_9->unk4 = (s32) var_r2_8->unk4;
                        var_r3_9->unk8 = (s32) var_r2_8->unk8;
                        var_r3_9->unkC = (s32) var_r2_8->unkC;
                    }
                    var_r2_8 += 0x10;
                    var_r3_9 += 0x10;
                } while (var_r2_8 != argA9);
            }
            temp_r0_11 = arg64;
            if (temp_r0_11 == 1) {
                if (var_r3_9 != 0) {
                    var_r3_9->unk0 = (s32) arg8E->unk0;
                    var_r3_9->unk4 = (s32) arg8E->unk4;
                    var_r3_9->unk8 = (s32) arg8E->unk8;
                    var_r3_9->unkC = (s32) arg8E->unkC;
                }
                var_r5_5 = var_r3_9 + 0x10;
            } else {
                var_r3_10 = temp_r0_11;
                var_r2_9 = var_r3_9;
                if (var_r3_10 != 0) {
                    do {
                        if (var_r2_9 != 0) {
                            var_r2_9->unk0 = (s32) arg8E->unk0;
                            var_r2_9->unk4 = (s32) arg8E->unk4;
                            var_r2_9->unk8 = (s32) arg8E->unk8;
                            var_r2_9->unkC = (s32) arg8E->unkC;
                        }
                        var_r3_10 -= 1;
                        var_r2_9 += 0x10;
                    } while (var_r3_10 != 0);
                }
                var_r5_5 = var_r2_9;
            }
            temp_r2_3 = temp_r6_5->unk4;
            temp_r0_12 = temp_r6_5->unk0;
            var_r1_4 = temp_r0_12;
            if (temp_r0_12 != temp_r2_3) {
                do {
                    var_r1_4 += 0x10;
                } while (var_r1_4 != temp_r2_3);
            }
            if (temp_r0_12 != 0) {
                free();
            }
            temp_r6_5->unk0 = argAA;
            temp_r6_5->unk4 = var_r5_5;
            temp_r6_5->unkC = (void *) (argAA + var_sb_2);
        }
        arg4 = 0;
        arg5 = 0x20;
        func_0804E9F4(arg77->unk18 + arg8C + 0x22, 0x1E0U, 0xC, 2);
        arg65 = 0xA;
        temp_r0_13 = GetAffection__C6Animal(arg7C) / 25U;
        arg66 = temp_r0_13;
        var_r2_10 = argA7;
        if ((u32) arg65 > temp_r0_13) {
            var_r2_10 = argA8;
        }
        temp_r6_6 = *var_r2_10;
        var_r4_2 = 0;
        if (temp_r6_6 > 0U) {
            var_r5_6 = 0x26;
            do {
                arg4 = 2;
                arg5 = 0x20;
                func_0804E9F4(arg77->unk18 + ((arg78 + 2) << 6) + var_r5_6, 0x580000U >> 0x10, 1, 1);
                var_r5_6 += 2;
                var_r4_2 += 1;
            } while (var_r4_2 < temp_r6_6);
        }
    }
    arg78 = arg89;
    saved_reg_r10->unk0 = (u16) (arg89 * 8);
    saved_reg_r10->unk4 = 0x20;
    saved_reg_r10->unk8 = &gUnk_0875268C;
    saved_reg_r10->unkC = &gUnk_0875270C;
    temp_r6_7 = arg75 + 0x594;
    temp_r1_9 = temp_r6_7->unk4;
    if (temp_r1_9 != temp_r6_7->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32) saved_reg_r10->unk0;
            temp_r1_9->unk4 = (s32) saved_reg_r10->unk4;
            temp_r1_9->unk8 = (s32 *) saved_reg_r10->unk8;
            temp_r1_9->unkC = arg15;
        }
        temp_r6_7->unk4 = (void *) (temp_r6_7->unk4 + 0x10);
        arg8C = arg78 << 6;
    } else {
        arg68 = 1;
        temp_r4_9 = (s32) (temp_r1_9 - arg75->unk594) >> 4;
        arg67 = temp_r4_9;
        var_r3_11 = &arg67;
        if ((u32) temp_r4_9 < (u32) arg68) {
            var_r3_11 = &arg68;
        }
        temp_r0_14 = temp_r4_9 + *var_r3_11;
        if (temp_r0_14 != 0) {
            temp_r4_10 = temp_r0_14 * 0x10;
            var_r0_7 = malloc(temp_r4_10);
            var_r8_4 = temp_r4_10;
            if (var_r0_7 == 0) {
                var_r0_7 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_7 = 0;
            var_r8_4 = 0;
        }
        argAA = var_r0_7;
        var_r2_11 = arg75->unk594;
        var_r3_12 = var_r0_7;
        arg8C = arg78 << 6;
        if (var_r2_11 != temp_r1_9) {
            do {
                if (var_r3_12 != 0) {
                    var_r3_12->unk0 = (s32) var_r2_11->unk0;
                    var_r3_12->unk4 = (s32) var_r2_11->unk4;
                    var_r3_12->unk8 = (s32) var_r2_11->unk8;
                    var_r3_12->unkC = (s32) var_r2_11->unkC;
                }
                var_r2_11 += 0x10;
                var_r3_12 += 0x10;
            } while (var_r2_11 != temp_r1_9);
        }
        temp_r0_15 = arg68;
        if (temp_r0_15 == 1) {
            if (var_r3_12 != 0) {
                var_r3_12->unk0 = (s32) saved_reg_r10->unk0;
                var_r3_12->unk4 = (s32) saved_reg_r10->unk4;
                var_r3_12->unk8 = (s32 *) saved_reg_r10->unk8;
                var_r3_12->unkC = arg15;
            }
            var_r5_7 = var_r3_12 + 0x10;
        } else {
            var_r3_13 = temp_r0_15;
            var_r2_12 = var_r3_12;
            if (var_r3_13 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) saved_reg_r10->unk0;
                        var_r2_12->unk4 = (s32) saved_reg_r10->unk4;
                        var_r2_12->unk8 = (s32 *) saved_reg_r10->unk8;
                        var_r2_12->unkC = arg15;
                    }
                    var_r3_13 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_13 != 0);
            }
            var_r5_7 = var_r2_12;
        }
        temp_r3_3 = temp_r6_7->unk4;
        temp_r1_10 = arg75->unk594;
        var_r0_8 = temp_r1_10;
        if (temp_r1_10 != temp_r3_3) {
            do {
                var_r0_8 += 0x10;
            } while (var_r0_8 != temp_r3_3);
        }
        if (temp_r1_10 != 0) {
            free(temp_r1_10);
        }
        arg75->unk594 = argAA;
        temp_r6_7->unk4 = var_r5_7;
        temp_r6_7->unkC = (void *) (argAA + var_r8_4);
    }
    temp_r0_16 = CountChickens__C4Coop(arg75->unk58C + 0x410);
    arg4 = 0x20;
    func_0804EDB4(temp_r0_16, arg77->unk18 + arg8C + 0x12, 0x120, 0);
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg77->unk18 + arg8C + 0x14, arg92 >> 0x10, 2, 2);
    saved_reg_r10->unk4 = 0x94;
    saved_reg_r10->unk8 = &gUnk_087525EC;
    saved_reg_r10->unkC = &gUnk_0875266C;
    temp_r6_8 = arg75 + 0x594;
    temp_r1_11 = temp_r6_8->unk4;
    if (temp_r1_11 != temp_r6_8->unkC) {
        if (temp_r1_11 != 0) {
            temp_r1_11->unk0 = (s32) saved_reg_r10->unk0;
            temp_r1_11->unk4 = (s32) saved_reg_r10->unk4;
            temp_r1_11->unk8 = (s32 *) saved_reg_r10->unk8;
            temp_r1_11->unkC = arg15;
        }
        temp_r6_8->unk4 = (void *) (temp_r6_8->unk4 + 0x10);
    } else {
        arg6A = 1;
        temp_r4_11 = (s32) (temp_r1_11 - arg75->unk594) >> 4;
        arg69 = temp_r4_11;
        var_r3_14 = &arg69;
        if ((u32) temp_r4_11 < (u32) arg6A) {
            var_r3_14 = &arg6A;
        }
        temp_r0_17 = temp_r4_11 + *var_r3_14;
        if (temp_r0_17 != 0) {
            temp_r4_12 = temp_r0_17 * 0x10;
            var_r0_9 = malloc(temp_r4_12);
            var_r8_5 = temp_r4_12;
            if (var_r0_9 == 0) {
                var_r0_9 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_9 = 0;
            var_r8_5 = 0;
        }
        argAA = var_r0_9;
        var_r2_13 = arg75->unk594;
        var_r3_15 = var_r0_9;
        if (var_r2_13 != temp_r1_11) {
            do {
                if (var_r3_15 != 0) {
                    var_r3_15->unk0 = (s32) var_r2_13->unk0;
                    var_r3_15->unk4 = (s32) var_r2_13->unk4;
                    var_r3_15->unk8 = (s32) var_r2_13->unk8;
                    var_r3_15->unkC = (s32) var_r2_13->unkC;
                }
                var_r2_13 += 0x10;
                var_r3_15 += 0x10;
            } while (var_r2_13 != temp_r1_11);
        }
        temp_r0_18 = arg6A;
        if (temp_r0_18 == 1) {
            if (var_r3_15 != 0) {
                var_r3_15->unk0 = (s32) saved_reg_r10->unk0;
                var_r3_15->unk4 = (s32) saved_reg_r10->unk4;
                var_r3_15->unk8 = (s32 *) saved_reg_r10->unk8;
                var_r3_15->unkC = arg15;
            }
            var_r5_8 = var_r3_15 + 0x10;
        } else {
            var_r3_16 = temp_r0_18;
            var_r2_14 = var_r3_15;
            if (var_r3_16 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32) saved_reg_r10->unk0;
                        var_r2_14->unk4 = (s32) saved_reg_r10->unk4;
                        var_r2_14->unk8 = (s32 *) saved_reg_r10->unk8;
                        var_r2_14->unkC = arg15;
                    }
                    var_r3_16 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r3_16 != 0);
            }
            var_r5_8 = var_r2_14;
        }
        temp_r3_4 = temp_r6_8->unk4;
        temp_r1_12 = arg75->unk594;
        var_r0_10 = temp_r1_12;
        if (temp_r1_12 != temp_r3_4) {
            do {
                var_r0_10 += 0x10;
            } while (var_r0_10 != temp_r3_4);
        }
        if (temp_r1_12 != 0) {
            free(temp_r1_12);
        }
        arg75->unk594 = argAA;
        temp_r6_8->unk4 = var_r5_8;
        temp_r6_8->unkC = (void *) (argAA + var_r8_5);
    }
    temp_r0_19 = GetStoredBushelCount__C4Coop(arg75->unk58C + 0x410);
    temp_r5 = arg78 << 6;
    arg4 = 0x20;
    func_0804EDB4(temp_r0_19, arg77->unk18 + temp_r5 + 0x32, 0x120, 0);
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg77->unk18 + temp_r5 + 0x34, arg7E >> 0x10, 2, 2);
    temp_r3_5 = arg78 + 3;
    arg78 = temp_r3_5;
    saved_reg_r10->unk0 = (u16) (temp_r3_5 * 8);
    saved_reg_r10->unk4 = 0x20;
    saved_reg_r10->unk8 = &gUnk_08751B4C;
    saved_reg_r10->unkC = &gUnk_08751BCC;
    temp_r6_9 = arg75 + 0x594;
    temp_r1_13 = temp_r6_9->unk4;
    if (temp_r1_13 != temp_r6_9->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32) saved_reg_r10->unk0;
            temp_r1_13->unk4 = (s32) saved_reg_r10->unk4;
            temp_r1_13->unk8 = (s32 *) saved_reg_r10->unk8;
            temp_r1_13->unkC = arg15;
        }
        temp_r6_9->unk4 = (void *) (temp_r6_9->unk4 + 0x10);
        arg8C = arg78 << 6;
    } else {
        arg6C = 1;
        temp_r4_13 = (s32) (temp_r1_13 - arg75->unk594) >> 4;
        arg6B = temp_r4_13;
        var_r3_17 = &arg6B;
        if ((u32) temp_r4_13 < (u32) arg6C) {
            var_r3_17 = &arg6C;
        }
        temp_r0_20 = temp_r4_13 + *var_r3_17;
        if (temp_r0_20 != 0) {
            temp_r4_14 = temp_r0_20 * 0x10;
            var_r0_11 = malloc(temp_r4_14);
            var_r8_6 = temp_r4_14;
            if (var_r0_11 == 0) {
                var_r0_11 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_11 = 0;
            var_r8_6 = 0;
        }
        argAA = var_r0_11;
        var_r2_15 = arg75->unk594;
        var_r3_18 = var_r0_11;
        arg8C = arg78 << 6;
        if (var_r2_15 != temp_r1_13) {
            do {
                if (var_r3_18 != 0) {
                    var_r3_18->unk0 = (s32) var_r2_15->unk0;
                    var_r3_18->unk4 = (s32) var_r2_15->unk4;
                    var_r3_18->unk8 = (s32) var_r2_15->unk8;
                    var_r3_18->unkC = (s32) var_r2_15->unkC;
                }
                var_r2_15 += 0x10;
                var_r3_18 += 0x10;
            } while (var_r2_15 != temp_r1_13);
        }
        temp_r0_21 = arg6C;
        if (temp_r0_21 == 1) {
            if (var_r3_18 != 0) {
                var_r3_18->unk0 = (s32) saved_reg_r10->unk0;
                var_r3_18->unk4 = (s32) saved_reg_r10->unk4;
                var_r3_18->unk8 = (s32 *) saved_reg_r10->unk8;
                var_r3_18->unkC = arg15;
            }
            var_r5_9 = var_r3_18 + 0x10;
        } else {
            var_r3_19 = temp_r0_21;
            var_r2_16 = var_r3_18;
            if (var_r3_19 != 0) {
                do {
                    if (var_r2_16 != 0) {
                        var_r2_16->unk0 = (s32) saved_reg_r10->unk0;
                        var_r2_16->unk4 = (s32) saved_reg_r10->unk4;
                        var_r2_16->unk8 = (s32 *) saved_reg_r10->unk8;
                        var_r2_16->unkC = arg15;
                    }
                    var_r3_19 -= 1;
                    var_r2_16 += 0x10;
                } while (var_r3_19 != 0);
            }
            var_r5_9 = var_r2_16;
        }
        temp_r3_6 = temp_r6_9->unk4;
        temp_r1_14 = arg75->unk594;
        var_r0_12 = temp_r1_14;
        if (temp_r1_14 != temp_r3_6) {
            do {
                var_r0_12 += 0x10;
            } while (var_r0_12 != temp_r3_6);
        }
        if (temp_r1_14 != 0) {
            free(temp_r1_14);
        }
        arg75->unk594 = argAA;
        temp_r6_9->unk4 = var_r5_9;
        temp_r6_9->unkC = (void *) (argAA + var_r8_6);
    }
    temp_r0_22 = CountCows__C4Barn(arg75->unk58C + 0x5F0);
    arg4 = 0x20;
    func_0804EDB4(temp_r0_22, arg77->unk18 + arg8C + 0x12, 0x120, 0);
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg77->unk18 + arg8C + 0x14, arg9C >> 0x10, 2, 2);
    saved_reg_r10->unk4 = 0x94;
    saved_reg_r10->unk8 = &gUnk_0875236C;
    saved_reg_r10->unkC = &gUnk_087523EC;
    temp_r6_10 = arg75 + 0x594;
    temp_r1_15 = temp_r6_10->unk4;
    if (temp_r1_15 != temp_r6_10->unkC) {
        if (temp_r1_15 != 0) {
            temp_r1_15->unk0 = (s32) saved_reg_r10->unk0;
            temp_r1_15->unk4 = (s32) saved_reg_r10->unk4;
            temp_r1_15->unk8 = (s32 *) saved_reg_r10->unk8;
            temp_r1_15->unkC = arg15;
        }
        temp_r6_10->unk4 = (void *) (temp_r6_10->unk4 + 0x10);
    } else {
        arg6E = 1;
        temp_r4_15 = (s32) (temp_r1_15 - arg75->unk594) >> 4;
        arg6D = temp_r4_15;
        var_r3_20 = &arg6D;
        if ((u32) temp_r4_15 < (u32) arg6E) {
            var_r3_20 = &arg6E;
        }
        temp_r0_23 = temp_r4_15 + *var_r3_20;
        if (temp_r0_23 != 0) {
            temp_r4_16 = temp_r0_23 * 0x10;
            var_r0_13 = malloc(temp_r4_16);
            var_r8_7 = temp_r4_16;
            if (var_r0_13 == 0) {
                var_r0_13 = func_080D3BC0(var_r8_7);
            }
        } else {
            var_r0_13 = 0;
            var_r8_7 = 0;
        }
        argAA = var_r0_13;
        var_r2_17 = arg75->unk594;
        var_r3_21 = var_r0_13;
        if (var_r2_17 != temp_r1_15) {
            do {
                if (var_r3_21 != 0) {
                    var_r3_21->unk0 = (s32) var_r2_17->unk0;
                    var_r3_21->unk4 = (s32) var_r2_17->unk4;
                    var_r3_21->unk8 = (s32) var_r2_17->unk8;
                    var_r3_21->unkC = (s32) var_r2_17->unkC;
                }
                var_r2_17 += 0x10;
                var_r3_21 += 0x10;
            } while (var_r2_17 != temp_r1_15);
        }
        temp_r0_24 = arg6E;
        if (temp_r0_24 == 1) {
            if (var_r3_21 != 0) {
                var_r3_21->unk0 = (s32) saved_reg_r10->unk0;
                var_r3_21->unk4 = (s32) saved_reg_r10->unk4;
                var_r3_21->unk8 = (s32 *) saved_reg_r10->unk8;
                var_r3_21->unkC = arg15;
            }
            var_r5_10 = var_r3_21 + 0x10;
        } else {
            var_r3_22 = temp_r0_24;
            var_r2_18 = var_r3_21;
            if (var_r3_22 != 0) {
                do {
                    if (var_r2_18 != 0) {
                        var_r2_18->unk0 = (s32) saved_reg_r10->unk0;
                        var_r2_18->unk4 = (s32) saved_reg_r10->unk4;
                        var_r2_18->unk8 = (s32 *) saved_reg_r10->unk8;
                        var_r2_18->unkC = arg15;
                    }
                    var_r3_22 -= 1;
                    var_r2_18 += 0x10;
                } while (var_r3_22 != 0);
            }
            var_r5_10 = var_r2_18;
        }
        temp_r3_7 = temp_r6_10->unk4;
        temp_r1_16 = arg75->unk594;
        var_r0_14 = temp_r1_16;
        if (temp_r1_16 != temp_r3_7) {
            do {
                var_r0_14 += 0x10;
            } while (var_r0_14 != temp_r3_7);
        }
        if (temp_r1_16 != 0) {
            free(temp_r1_16);
        }
        arg75->unk594 = argAA;
        temp_r6_10->unk4 = var_r5_10;
        temp_r6_10->unkC = (void *) (argAA + var_r8_7);
    }
    temp_r0_25 = GetStoredBushelCount__C4Barn(arg75->unk58C + 0x5F0);
    temp_r5_2 = arg78 << 6;
    arg4 = 0x20;
    func_0804EDB4(temp_r0_25, arg77->unk18 + temp_r5_2 + 0x32, 0x120, 0);
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg77->unk18 + temp_r5_2 + 0x34, arg7E >> 0x10, 2, 2);
    temp_r3_8 = arg78 + 3;
    arg78 = temp_r3_8;
    saved_reg_r10->unk0 = (u16) (temp_r3_8 * 8);
    saved_reg_r10->unk4 = 0x20;
    saved_reg_r10->unk8 = &gUnk_0875320C;
    saved_reg_r10->unkC = &gUnk_0875328C;
    temp_r6_11 = arg75 + 0x594;
    temp_r1_17 = temp_r6_11->unk4;
    if (temp_r1_17 != temp_r6_11->unkC) {
        if (temp_r1_17 != 0) {
            temp_r1_17->unk0 = (s32) saved_reg_r10->unk0;
            temp_r1_17->unk4 = (s32) saved_reg_r10->unk4;
            temp_r1_17->unk8 = (s32 *) saved_reg_r10->unk8;
            temp_r1_17->unkC = arg15;
        }
        temp_r6_11->unk4 = (void *) (temp_r6_11->unk4 + 0x10);
    } else {
        arg70 = 1;
        temp_r4_17 = (s32) (temp_r1_17 - arg75->unk594) >> 4;
        arg6F = temp_r4_17;
        var_r3_23 = &arg6F;
        if ((u32) temp_r4_17 < (u32) arg70) {
            var_r3_23 = &arg70;
        }
        temp_r0_26 = temp_r4_17 + *var_r3_23;
        if (temp_r0_26 != 0) {
            temp_r4_18 = temp_r0_26 * 0x10;
            var_r0_15 = malloc(temp_r4_18);
            var_r8_8 = temp_r4_18;
            if (var_r0_15 == 0) {
                var_r0_15 = func_080D3BC0(var_r8_8);
            }
        } else {
            var_r0_15 = 0;
            var_r8_8 = 0;
        }
        argAA = var_r0_15;
        var_r2_19 = arg75->unk594;
        var_r3_24 = var_r0_15;
        if (var_r2_19 != temp_r1_17) {
            do {
                if (var_r3_24 != 0) {
                    var_r3_24->unk0 = (s32) var_r2_19->unk0;
                    var_r3_24->unk4 = (s32) var_r2_19->unk4;
                    var_r3_24->unk8 = (s32) var_r2_19->unk8;
                    var_r3_24->unkC = (s32) var_r2_19->unkC;
                }
                var_r2_19 += 0x10;
                var_r3_24 += 0x10;
            } while (var_r2_19 != temp_r1_17);
        }
        temp_r0_27 = arg70;
        if (temp_r0_27 == 1) {
            if (var_r3_24 != 0) {
                var_r3_24->unk0 = (s32) saved_reg_r10->unk0;
                var_r3_24->unk4 = (s32) saved_reg_r10->unk4;
                var_r3_24->unk8 = (s32 *) saved_reg_r10->unk8;
                var_r3_24->unkC = arg15;
            }
            var_r5_11 = var_r3_24 + 0x10;
        } else {
            var_r3_25 = temp_r0_27;
            var_r2_20 = var_r3_24;
            if (var_r3_25 != 0) {
                do {
                    if (var_r2_20 != 0) {
                        var_r2_20->unk0 = (s32) saved_reg_r10->unk0;
                        var_r2_20->unk4 = (s32) saved_reg_r10->unk4;
                        var_r2_20->unk8 = (s32 *) saved_reg_r10->unk8;
                        var_r2_20->unkC = arg15;
                    }
                    var_r3_25 -= 1;
                    var_r2_20 += 0x10;
                } while (var_r3_25 != 0);
            }
            var_r5_11 = var_r2_20;
        }
        temp_r3_9 = temp_r6_11->unk4;
        temp_r1_18 = arg75->unk594;
        var_r0_16 = temp_r1_18;
        if (temp_r1_18 != temp_r3_9) {
            do {
                var_r0_16 += 0x10;
            } while (var_r0_16 != temp_r3_9);
        }
        if (temp_r1_18 != 0) {
            free(temp_r1_18);
        }
        arg75->unk594 = argAA;
        temp_r6_11->unk4 = var_r5_11;
        temp_r6_11->unkC = (void *) (argAA + var_r8_8);
    }
    temp_r0_28 = CountSheeps__C4Barn(arg75->unk58C + 0x5F0);
    temp_r5_3 = arg78 << 6;
    arg4 = 0x20;
    func_0804EDB4(temp_r0_28, arg77->unk18 + temp_r5_3 + 0x12, 0x120, 0);
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg77->unk18 + temp_r5_3 + 0x14, arg9C >> 0x10, 2, 2);
    temp_r3_10 = arg78 + 3;
    arg78 = temp_r3_10;
    temp_r2_4 = temp_r3_10 * 8;
    saved_reg_r10->unk0 = temp_r2_4;
    saved_reg_r10->unk4 = 0x20;
    saved_reg_r10->unk8 = &gUnk_0875316C;
    saved_reg_r10->unkC = &gUnk_087531EC;
    temp_r6_12 = arg75 + 0x594;
    temp_r1_19 = temp_r6_12->unk4;
    if (temp_r1_19 != temp_r6_12->unkC) {
        if (temp_r1_19 != 0) {
            temp_r1_19->unk0 = (s32) saved_reg_r10->unk0;
            temp_r1_19->unk4 = (s32) saved_reg_r10->unk4;
            temp_r1_19->unk8 = (s32 *) saved_reg_r10->unk8;
            temp_r1_19->unkC = arg15;
        }
        temp_r6_12->unk4 = (void *) (temp_r6_12->unk4 + 0x10);
        arg8C = arg78 << 6;
        arg88 = arg78 + 3;
        arg8B = (s32) temp_r2_4;
    } else {
        arg72 = 1;
        temp_r4_19 = (s32) (temp_r1_19 - arg75->unk594) >> 4;
        arg71 = temp_r4_19;
        var_r3_26 = &arg71;
        if ((u32) temp_r4_19 < (u32) arg72) {
            var_r3_26 = &arg72;
        }
        temp_r0_29 = temp_r4_19 + *var_r3_26;
        if (temp_r0_29 != 0) {
            temp_r4_20 = temp_r0_29 * 0x10;
            var_r0_17 = malloc(temp_r4_20);
            var_r8_9 = temp_r4_20;
            if (var_r0_17 == 0) {
                var_r0_17 = func_080D3BC0(var_r8_9);
            }
        } else {
            var_r0_17 = 0;
            var_r8_9 = 0;
        }
        argAA = var_r0_17;
        var_r2_21 = arg75->unk594;
        var_r3_27 = var_r0_17;
        arg8C = arg78 << 6;
        arg88 = arg78 + 3;
        arg8B = arg78 * 8;
        if (var_r2_21 != temp_r1_19) {
            do {
                if (var_r3_27 != 0) {
                    var_r3_27->unk0 = (s32) var_r2_21->unk0;
                    var_r3_27->unk4 = (s32) var_r2_21->unk4;
                    var_r3_27->unk8 = (s32) var_r2_21->unk8;
                    var_r3_27->unkC = (s32) var_r2_21->unkC;
                }
                var_r2_21 += 0x10;
                var_r3_27 += 0x10;
            } while (var_r2_21 != temp_r1_19);
        }
        temp_r0_30 = arg72;
        if (temp_r0_30 == 1) {
            if (var_r3_27 != 0) {
                var_r3_27->unk0 = (s32) saved_reg_r10->unk0;
                var_r3_27->unk4 = (s32) saved_reg_r10->unk4;
                var_r3_27->unk8 = (s32 *) saved_reg_r10->unk8;
                var_r3_27->unkC = arg15;
            }
            var_r5_12 = var_r3_27 + 0x10;
        } else {
            var_r3_28 = temp_r0_30;
            var_r2_22 = var_r3_27;
            if (var_r3_28 != 0) {
                do {
                    if (var_r2_22 != 0) {
                        var_r2_22->unk0 = (s32) saved_reg_r10->unk0;
                        var_r2_22->unk4 = (s32) saved_reg_r10->unk4;
                        var_r2_22->unk8 = (s32 *) saved_reg_r10->unk8;
                        var_r2_22->unkC = arg15;
                    }
                    var_r3_28 -= 1;
                    var_r2_22 += 0x10;
                } while (var_r3_28 != 0);
            }
            var_r5_12 = var_r2_22;
        }
        temp_r3_11 = temp_r6_12->unk4;
        temp_r1_20 = arg75->unk594;
        var_r0_18 = temp_r1_20;
        if (temp_r1_20 != temp_r3_11) {
            do {
                var_r0_18 += 0x10;
            } while (var_r0_18 != temp_r3_11);
        }
        if (temp_r1_20 != 0) {
            free(temp_r1_20);
        }
        arg75->unk594 = argAA;
        temp_r6_12->unk4 = var_r5_12;
        temp_r6_12->unkC = (void *) (argAA + var_r8_9);
    }
    temp_r0_31 = func_0809AA28(arg75->unk58C + 0x2214);
    arg4 = 0x20;
    func_0804EDB4(temp_r0_31, arg77->unk18 + arg8C + 0x16, 0x120, 0);
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg77->unk18 + arg8C + 0x18, arg7D >> 0x10, 2, 2);
    saved_reg_r10->unk0 = (u16) arg8B;
    saved_reg_r10->unk4 = 0x94;
    saved_reg_r10->unk8 = &gUnk_08752EEC;
    saved_reg_r10->unkC = &gUnk_08752F6C;
    temp_r6_13 = arg75 + 0x594;
    temp_r1_21 = temp_r6_13->unk4;
    if (temp_r1_21 != temp_r6_13->unkC) {
        if (temp_r1_21 != 0) {
            temp_r1_21->unk0 = (s32) saved_reg_r10->unk0;
            temp_r1_21->unk4 = (s32) saved_reg_r10->unk4;
            temp_r1_21->unk8 = (s32 *) saved_reg_r10->unk8;
            temp_r1_21->unkC = arg15;
        }
        temp_r6_13->unk4 = (void *) (temp_r6_13->unk4 + 0x10);
    } else {
        arg74 = 1;
        temp_r4_21 = (s32) (temp_r1_21 - arg75->unk594) >> 4;
        arg73 = temp_r4_21;
        var_r3_29 = &arg73;
        if ((u32) temp_r4_21 < (u32) arg74) {
            var_r3_29 = &arg74;
        }
        temp_r0_32 = temp_r4_21 + *var_r3_29;
        if (temp_r0_32 != 0) {
            temp_r4_22 = temp_r0_32 * 0x10;
            var_r0_19 = malloc(temp_r4_22);
            var_r8_10 = temp_r4_22;
            if (var_r0_19 == 0) {
                var_r0_19 = func_080D3BC0(var_r8_10);
            }
        } else {
            var_r0_19 = 0;
            var_r8_10 = 0;
        }
        argAA = var_r0_19;
        var_r2_23 = arg75->unk594;
        var_r3_30 = var_r0_19;
        if (var_r2_23 != temp_r1_21) {
            do {
                if (var_r3_30 != 0) {
                    var_r3_30->unk0 = (s32) var_r2_23->unk0;
                    var_r3_30->unk4 = (s32) var_r2_23->unk4;
                    var_r3_30->unk8 = (s32) var_r2_23->unk8;
                    var_r3_30->unkC = (s32) var_r2_23->unkC;
                }
                var_r2_23 += 0x10;
                var_r3_30 += 0x10;
            } while (var_r2_23 != temp_r1_21);
        }
        temp_r0_33 = arg74;
        if (temp_r0_33 == 1) {
            if (var_r3_30 != 0) {
                var_r3_30->unk0 = (s32) saved_reg_r10->unk0;
                var_r3_30->unk4 = (s32) saved_reg_r10->unk4;
                var_r3_30->unk8 = (s32 *) saved_reg_r10->unk8;
                var_r3_30->unkC = arg15;
            }
            var_r5_13 = var_r3_30 + 0x10;
        } else {
            var_r3_31 = temp_r0_33;
            var_r2_24 = var_r3_30;
            if (var_r3_31 != 0) {
                do {
                    if (var_r2_24 != 0) {
                        var_r2_24->unk0 = (s32) saved_reg_r10->unk0;
                        var_r2_24->unk4 = (s32) saved_reg_r10->unk4;
                        var_r2_24->unk8 = (s32 *) saved_reg_r10->unk8;
                        var_r2_24->unkC = arg15;
                    }
                    var_r3_31 -= 1;
                    var_r2_24 += 0x10;
                } while (var_r3_31 != 0);
            }
            var_r5_13 = var_r2_24;
        }
        temp_r3_12 = temp_r6_13->unk4;
        temp_r1_22 = arg75->unk594;
        var_r0_20 = temp_r1_22;
        if (temp_r1_22 != temp_r3_12) {
            do {
                var_r0_20 += 0x10;
            } while (var_r0_20 != temp_r3_12);
        }
        if (temp_r1_22 != 0) {
            free(temp_r1_22);
        }
        arg75->unk594 = argAA;
        temp_r6_13->unk4 = var_r5_13;
        temp_r6_13->unkC = (void *) (argAA + var_r8_10);
    }
    temp_r0_34 = GetUnk10__C4Farm(arg75->unk58C + 0x14);
    arg4 = 0x20;
    func_0804EDB4(temp_r0_34, arg77->unk18 + arg8C + 0x32, 0x120, 0);
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg77->unk18 + arg8C + 0x34, arg7F >> 0x10, 2, 2);
    func_08075E24(arg77, (s16) (arg88 * 8));
    return arg75;
}

