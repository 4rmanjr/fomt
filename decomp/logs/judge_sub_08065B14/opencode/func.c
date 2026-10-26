#include "common.h"
/* Warning: missing "bx $lr" in last block of sub_08065B14 (.L0806641A). */

s32 GetCurrentTask__C13HarvestSprite(s32);          /* extern */
u32 GetFriendship__C3Npc(s32);                      /* extern */
s32 GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(s32, s32); /* extern */
s32 GetWorkDaysLeft__C13HarvestSprite(s32);         /* extern */
s32 free(void *);                                     /* extern */
s32 func_0804E7A0(s32, void *, s32);                  /* extern */
s32 func_0804E8F0(s32, void *, s32, s32);             /* extern */
s32 func_0804E9F4(s32, u32, s32, s32);                /* extern */
s32 func_0804EDB4(s32, s32, s32, s32);                /* extern */
s32 func_0809FE3C(s32, s32);                        /* extern */
s32 func_080A031C(s32, u32);                        /* extern */
void *func_080D3BC0(s32);                           /* extern */
void *malloc(s32);                                  /* extern */
s32 sub_0806641E();                                   /* extern */
extern ? gUnk_08750C4C;
extern ? gUnk_08750C6C;
extern ? gUnk_08751F0C;
extern ? gUnk_08751F8C;
extern ? gUnk_08751FAC;
extern ? gUnk_0875202C;
extern ? gUnk_0875204C;
extern ? gUnk_087520CC;
extern ? gUnk_087520EC;
extern ? gUnk_0875216C;
extern ? gUnk_0875218C;
extern ? gUnk_0875220C;
extern ? gUnk_0875222C;
extern ? gUnk_087522AC;
extern ? gUnk_087522CC;
extern ? gUnk_0875234C;

void sub_08065B14(s32 arg4, ? arg6, ? argA, s32 argD, u32 arg38, u32 arg39, s16 arg3A, s16 arg3B, u32 arg3C, u32 arg3D, u32 arg3E, u32 arg3F, void *arg40, void *arg41, u32 arg42, s32 arg43, s32 arg44, void *arg45, u32 arg46, void *arg4B, void *arg4C, s32 *arg4D, u32 *arg4E, u32 arg4F, s32 arg51, s32 arg53, s32 arg54, s32 arg55, s32 arg56, s32 arg57, s32 arg58, s32 arg59, u32 arg5A, u32 arg5B, void *arg5C, void *arg5D) {
    s16 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_11;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r2_2;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 temp_r2_6;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_6;
    s32 temp_r4_7;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r0_7;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r4_5;
    s32 var_r5_3;
    s32 var_r5_4;
    s32 var_r5_5;
    s32 var_r5_6;
    s32 var_r5_7;
    s32 var_r5_8;
    s32 var_r5_9;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r6_3;
    s32 var_r8;
    s32 var_sl;
    u32 *var_r0;
    u32 *var_r0_4;
    u32 *var_r1;
    u32 temp_r0_4;
    u32 temp_r0_6;
    u32 temp_r0_8;
    u32 temp_r1_4;
    u32 temp_r4_10;
    u32 temp_r4_5;
    u32 temp_r4_8;
    u32 temp_r4_9;
    u32 temp_r6_3;
    u32 var_r1_2;
    u32 var_r1_3;
    u32 var_r1_4;
    u32 var_r1_5;
    u32 var_r3_2;
    u32 var_r3_4;
    u32 var_r4;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_9;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r2;
    void *temp_r2_3;
    void *temp_r6;
    void *temp_r6_2;
    void *var_r0_2;
    void *var_r0_3;
    void *var_r0_5;
    void *var_r0_6;
    void *var_r2;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_4;
    void *var_r3;
    void *var_r3_3;
    void *var_r5;
    void *var_r5_2;

    arg43 = func_080A031C(arg40->unk58C + 0x1CD4, arg42);
    arg52 = arg42 + 1;
    if (arg43 == 0) {
        sub_0806641E();
    }
    arg7 = 8;
    temp_r0 = saved_reg_r8 * 8;
    arg6.unk0 = temp_r0;
    arg58 = (s32) temp_r0;
    switch (arg42) {                                /* switch 1 */
    default:                                        /* switch 1 */
        arg8 = &gUnk_0875218C;
        arg9 = &gUnk_0875220C;
        arg44 = 0x27;
        break;
    case 1:                                         /* switch 1 */
        arg8 = &gUnk_0875204C;
        arg9 = &gUnk_087520CC;
        arg44 = 0x25;
        break;
    case 6:                                         /* switch 1 */
        arg8 = &gUnk_08751FAC;
        arg9 = &gUnk_0875202C;
        arg44 = 0x2A;
        break;
    case 5:                                         /* switch 1 */
        arg8 = &gUnk_087522CC;
        arg9 = &gUnk_0875234C;
        arg44 = 0x29;
        break;
    case 0:                                         /* switch 1 */
        arg8 = &gUnk_08751F0C;
        arg9 = &gUnk_08751F8C;
        arg44 = 0x24;
        break;
    case 2:                                         /* switch 1 */
        arg8 = &gUnk_087520EC;
        arg9 = &gUnk_0875216C;
        arg44 = 0x26;
        break;
    case 4:                                         /* switch 1 */
        arg8 = &gUnk_0875222C;
        arg9 = &gUnk_087522AC;
        arg44 = 0x28;
        break;
    }
    temp_r6 = arg40 + 0x594;
    arg45 = &arg4 + 8;
    temp_r1 = temp_r6->unk4;
    if (temp_r1 != temp_r6->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) arg6.unk0;
            temp_r1->unk4 = (s32) arg6.unk4;
            temp_r1->unk8 = (s32) arg6.unk8;
            temp_r1->unkC = (s32) arg6.unkC;
        }
        temp_r6->unk4 = (void *) (temp_r6->unk4 + 0x10);
        arg57 = arg42 * 2;
        arg4B = &arg4 + 0xD8;
        arg4C = &arg4 + 0xDC;
        arg59 = saved_reg_r8 << 6;
        arg4D = &arg4 + 0xE8;
        arg4E = &arg4 + 0xEC;
        arg51 = saved_reg_r8 + 2;
        temp_r7 = saved_reg_r8 + 3;
        arg53 = temp_r7;
        arg5A = 0x700000U;
        arg54 = saved_reg_r8 + 4;
        arg5B = 0x710000U;
        arg55 = saved_reg_r8 + 5;
        arg46 = 0x720000U;
        arg4F = 0x440000U;
        arg56 = temp_r7 + 3;
        arg52 = arg42 + 1;
    } else {
        arg5C = temp_r1;
        arg39 = 1;
        temp_r4 = (s32) (arg5C - arg40->unk594) >> 4;
        var_r0 = &arg38;
        *var_r0 = temp_r4;
        if ((u32) temp_r4 < (u32) arg39) {
            var_r0 = &arg39;
        }
        temp_r0_2 = temp_r4 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_2 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_2);
            var_sl = temp_r4_2;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sl);
            }
        } else {
            var_r0_2 = 0;
            var_sl = 0;
        }
        arg5D = var_r0_2;
        var_r3 = arg40->unk594;
        var_r2 = var_r0_2;
        arg57 = arg42 * 2;
        arg4B = &arg4 + 0xD8;
        arg4C = &arg4 + 0xDC;
        arg59 = saved_reg_r8 << 6;
        arg4D = &arg4 + 0xE8;
        arg4E = &arg4 + 0xEC;
        temp_r7_2 = saved_reg_r8 + 2;
        arg51 = temp_r7_2;
        arg53 = saved_reg_r8 + 3;
        arg5A = 0x700000U;
        temp_r4_3 = saved_reg_r8 + 4;
        arg54 = temp_r4_3;
        arg5B = 0x710000U;
        arg55 = temp_r7_2 + 3;
        arg46 = 0x720000U;
        arg4F = 0x440000U;
        arg56 = temp_r4_3 + 2;
        arg52 = arg42 + 1;
        if (var_r3 != arg5C) {
            do {
                if (var_r2 != 0) {
                    var_r2->unk0 = (s32) var_r3->unk0;
                    var_r2->unk4 = (s32) var_r3->unk4;
                    var_r2->unk8 = (s32) var_r3->unk8;
                    var_r2->unkC = (s32) var_r3->unkC;
                }
                var_r3 += 0x10;
                var_r2 += 0x10;
            } while (var_r3 != arg5C);
        }
        if (arg39 == 1) {
            if (var_r2 != 0) {
                var_r2->unk0 = (s32) arg45->unk0;
                var_r2->unk4 = (s32) arg45->unk4;
                var_r2->unk8 = (s32) arg45->unk8;
                var_r2->unkC = (s32) arg45->unkC;
            }
            var_r5 = var_r2 + 0x10;
        } else {
            var_r3_2 = arg39;
            var_r2_2 = var_r2;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) arg45->unk0;
                        var_r2_2->unk4 = (s32) arg45->unk4;
                        var_r2_2->unk8 = (s32) arg45->unk8;
                        var_r2_2->unkC = (s32) arg45->unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r6->unk4;
        temp_r1_2 = arg40->unk594;
        var_r0_3 = temp_r1_2;
        if (temp_r1_2 != temp_r2) {
            do {
                var_r0_3 += 0x10;
            } while (var_r0_3 != temp_r2);
        }
        if (temp_r1_2 != 0) {
            free(temp_r1_2);
        }
        arg40->unk594 = arg5D;
        temp_r6->unk4 = var_r5;
        temp_r6->unkC = (void *) (arg5D + var_sl);
    }
    argA = (u16) arg58;
    temp_r4_4 = (((arg57 + arg42) << 6) + arg42) * 4;
    arg3A = 0xC;
    arg4B->unk2 = 2;
    func_0804E7A0((s32) arg3A, temp_r4_4 + arg40 + 0xC4C, 0);
    temp_r2_2 = func_0809FE3C(arg40->unk58C + 0x1CD4, arg44);
    arg3B = 0xC;
    arg4C->unk2 = 2;
    arg4 = temp_r2_2;
    func_0804E8F0((s32) arg3B, temp_r4_4 + arg40 + 0xC4C, 0, 0);
    argA.unk4 = (void *) (temp_r4_4 + arg40 + 0xC4C);
    temp_r4_5 = ((3 & arg42) * 0x18) + 0x180;
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg41->unk18 + arg59 + 6, temp_r4_5, 0xC, 2);
    argA.unk8 = (s32) ((temp_r4_5 << 5) + 0x06000000);
    argA.unkC = 0x300;
    temp_r6_2 = arg40 + 0x5A4;
    temp_r1_3 = temp_r6_2->unk4;
    if (temp_r1_3 != temp_r6_2->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) argA;
            temp_r1_3->unk4 = (void *) argA.unk4;
            temp_r1_3->unk8 = (s32) argA.unk8;
            temp_r1_3->unkC = argD;
        }
        temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
    } else {
        arg5C = temp_r1_3;
        arg3D = 1;
        temp_r4_6 = (s32) (arg5C - arg40->unk5A4) >> 4;
        var_r0_4 = &arg3C;
        *var_r0_4 = temp_r4_6;
        if ((u32) temp_r4_6 < (u32) arg3D) {
            var_r0_4 = &arg3D;
        }
        temp_r0_3 = temp_r4_6 + *var_r0_4;
        if (temp_r0_3 != 0) {
            temp_r4_7 = temp_r0_3 * 0x10;
            var_r0_5 = malloc(temp_r4_7);
            var_r8 = temp_r4_7;
            if (var_r0_5 == 0) {
                var_r0_5 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_5 = 0;
            var_r8 = 0;
        }
        arg5D = var_r0_5;
        var_r3_3 = arg40->unk5A4;
        var_r2_3 = var_r0_5;
        if (var_r3_3 != arg5C) {
            do {
                if (var_r2_3 != 0) {
                    var_r2_3->unk0 = (s32) var_r3_3->unk0;
                    var_r2_3->unk4 = (s32) var_r3_3->unk4;
                    var_r2_3->unk8 = (s32) var_r3_3->unk8;
                    var_r2_3->unkC = (s32) var_r3_3->unkC;
                }
                var_r3_3 += 0x10;
                var_r2_3 += 0x10;
            } while (var_r3_3 != arg5C);
        }
        temp_r1_4 = arg3D;
        if (temp_r1_4 == 1) {
            if (var_r2_3 != 0) {
                var_r2_3->unk0 = (s32) argA;
                var_r2_3->unk4 = (void *) argA.unk4;
                var_r2_3->unk8 = (s32) argA.unk8;
                var_r2_3->unkC = argD;
            }
            var_r5_2 = var_r2_3 + 0x10;
        } else {
            var_r3_4 = temp_r1_4;
            var_r2_4 = var_r2_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) argA;
                        var_r2_4->unk4 = (void *) argA.unk4;
                        var_r2_4->unk8 = (s32) argA.unk8;
                        var_r2_4->unkC = argD;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_3 = temp_r6_2->unk4;
        temp_r1_5 = arg40->unk5A4;
        var_r0_6 = temp_r1_5;
        if (temp_r1_5 != temp_r2_3) {
            do {
                var_r0_6 += 0x10;
            } while (var_r0_6 != temp_r2_3);
        }
        if (temp_r1_5 != 0) {
            free(temp_r1_5);
        }
        arg40->unk5A4 = arg5D;
        temp_r6_2->unk4 = var_r5_2;
        temp_r6_2->unkC = (void *) (arg5D + var_r8);
    }
    *arg4D = 0xA;
    *arg4E = GetFriendship__C3Npc(arg43) / 25U;
    var_r1 = &arg3E;
    if ((u32) *var_r1 > (u32) arg3F) {
        var_r1 = &arg3F;
    }
    temp_r6_3 = *var_r1;
    var_r4 = 0;
    if (temp_r6_3 > 0U) {
        var_r5_3 = 0xA;
        do {
            arg4 = 1;
            arg5 = 0x20;
            func_0804E9F4(arg41->unk18 + (arg51 << 6) + var_r5_3, 0x6C0000U >> 0x10, 1, 1);
            var_r5_3 += 2;
            var_r4 += 1;
        } while (var_r4 < temp_r6_3);
    }
    arg7 = 0x78;
    arg8 = &gUnk_08750C4C;
    arg9 = &gUnk_08750C6C;
    var_r5_4 = 0;
    arg4 = 2;
    arg5 = 0x20;
    func_0804E9F4(arg41->unk18 + (arg53 << 6) + 8, arg5A >> 0x10, 1, 1);
    temp_r4_8 = (u32) (GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(arg43, 1) * 0x50) / 255U;
    var_r6 = 0xA;
loop_76:
    var_r1_2 = temp_r4_8;
    if ((s32) temp_r4_8 < 0) {
        var_r1_2 = temp_r4_8 + 7;
    }
    temp_r2_4 = (s32) var_r1_2 >> 3;
    if (var_r5_4 < temp_r2_4) {
        arg4 = 3;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + (arg53 << 6) + var_r6, 0xA40000U >> 0x10, 1, 1);
        var_r6 += 2;
        var_r5_4 += 1;
        goto loop_76;
    }
    if (var_r5_4 <= 9) {
        arg4 = 3;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + (arg53 << 6) + ((var_r5_4 + 5) * 2), (u32) (u16) ((temp_r4_8 - (temp_r2_4 * 8)) + 0x9C), 1, 1);
        var_r5_5 = var_r5_4 + 1;
        if (var_r5_5 <= 9) {
            var_r4_2 = (var_r5_5 * 2) + 0xA;
            do {
                arg4 = 3;
                arg5 = 0x20;
                func_0804E9F4(arg41->unk18 + (arg53 << 6) + var_r4_2, 0x9C0000U >> 0x10, 1, 1);
                var_r4_2 += 2;
                var_r5_5 += 1;
            } while (var_r5_5 <= 9);
        }
    }
    arg6.unk0 = (s16) ((arg53 * 8) + 1);
    temp_r0_4 = arg40->unk2164;
    if (temp_r0_4 <= 0x14U) {
        temp_r0_5 = arg40 + 0x2164 + ((temp_r0_4 * 0x10) + 4);
        if (temp_r0_5 != 0) {
            temp_r0_5->unk0 = (s32) arg6.unk0;
            temp_r0_5->unk4 = (s32) arg6.unk4;
            temp_r0_5->unk8 = (s32) arg6.unk8;
            temp_r0_5->unkC = (s32) arg6.unkC;
        }
        arg40->unk2164 = (u32) (arg40->unk2164 + 1);
    }
    var_r5_6 = 0;
    arg4 = 2;
    arg5 = 0x20;
    func_0804E9F4(arg41->unk18 + (arg54 << 6) + 8, arg5B >> 0x10, 1, 1);
    temp_r4_9 = (u32) (GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(arg43, 0) * 0x50) / 255U;
    var_r6_2 = 0xA;
loop_89:
    var_r1_3 = temp_r4_9;
    if ((s32) temp_r4_9 < 0) {
        var_r1_3 = temp_r4_9 + 7;
    }
    temp_r2_5 = (s32) var_r1_3 >> 3;
    if (var_r5_6 < temp_r2_5) {
        arg4 = 3;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + (arg54 << 6) + var_r6_2, 0xAD0000U >> 0x10, 1, 1);
        var_r6_2 += 2;
        var_r5_6 += 1;
        goto loop_89;
    }
    if (var_r5_6 <= 9) {
        arg4 = 3;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + (arg54 << 6) + ((var_r5_6 + 5) * 2), (u32) (u16) ((temp_r4_9 - (temp_r2_5 * 8)) + 0xA5), 1, 1);
        var_r5_7 = var_r5_6 + 1;
        if (var_r5_7 <= 9) {
            var_r4_3 = (var_r5_7 * 2) + 0xA;
            do {
                arg4 = 3;
                arg5 = 0x20;
                func_0804E9F4(arg41->unk18 + (arg54 << 6) + var_r4_3, 0xA50000U >> 0x10, 1, 1);
                var_r4_3 += 2;
                var_r5_7 += 1;
            } while (var_r5_7 <= 9);
        }
    }
    arg6.unk0 = (s16) ((arg54 * 8) + 1);
    temp_r0_6 = arg40->unk2164;
    if (temp_r0_6 <= 0x14U) {
        temp_r0_7 = arg40 + 0x2164 + ((temp_r0_6 * 0x10) + 4);
        if (temp_r0_7 != 0) {
            temp_r0_7->unk0 = (s32) arg6.unk0;
            temp_r0_7->unk4 = (s32) arg6.unk4;
            temp_r0_7->unk8 = (s32) arg6.unk8;
            temp_r0_7->unkC = (s32) arg6.unkC;
        }
        arg40->unk2164 = (u32) (arg40->unk2164 + 1);
    }
    var_r5_8 = 0;
    arg4 = 2;
    arg5 = 0x20;
    func_0804E9F4(arg41->unk18 + (arg55 << 6) + 8, arg46 >> 0x10, 1, 1);
    temp_r4_10 = (u32) (GetTaskExp__C13HarvestSpriteQ213HarvestSprite4Task(arg43, 2) * 0x50) / 255U;
    var_r6_3 = 0xA;
loop_102:
    var_r1_4 = temp_r4_10;
    if ((s32) temp_r4_10 < 0) {
        var_r1_4 = temp_r4_10 + 7;
    }
    temp_r2_6 = (s32) var_r1_4 >> 3;
    if (var_r5_8 < temp_r2_6) {
        arg4 = 3;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + (arg55 << 6) + var_r6_3, 0xB60000U >> 0x10, 1, 1);
        var_r6_3 += 2;
        var_r5_8 += 1;
        goto loop_102;
    }
    if (var_r5_8 <= 9) {
        arg4 = 3;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + (arg55 << 6) + ((var_r5_8 + 5) * 2), (u32) (u16) ((temp_r4_10 - (temp_r2_6 * 8)) + 0xAE), 1, 1);
        var_r5_9 = var_r5_8 + 1;
        if (var_r5_9 <= 9) {
            var_r4_4 = (var_r5_9 * 2) + 0xA;
            do {
                arg4 = 3;
                arg5 = 0x20;
                func_0804E9F4(arg41->unk18 + (arg55 << 6) + var_r4_4, 0xAE0000U >> 0x10, 1, 1);
                var_r4_4 += 2;
                var_r5_9 += 1;
            } while (var_r5_9 <= 9);
        }
    }
    arg6.unk0 = (s16) ((arg55 * 8) + 1);
    temp_r0_8 = arg40->unk2164;
    if (temp_r0_8 <= 0x14U) {
        temp_r0_9 = arg40 + 0x2164 + ((temp_r0_8 * 0x10) + 4);
        if (temp_r0_9 != 0) {
            temp_r0_9->unk0 = (s32) arg6.unk0;
            temp_r0_9->unk4 = (s32) arg6.unk4;
            temp_r0_9->unk8 = (s32) arg6.unk8;
            temp_r0_9->unkC = (s32) arg6.unkC;
        }
        arg40->unk2164 = (u32) (arg40->unk2164 + 1);
    }
    arg4 = 0;
    arg5 = 0x20;
    func_0804E9F4(arg41->unk18 + (arg51 << 6) + 0x22, arg4F >> 0x10, 8, 2);
    temp_r0_10 = GetCurrentTask__C13HarvestSprite(arg43);
    switch (temp_r0_10) {                           /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        var_r4_5 = arg54 << 6;
        var_r0_7 = arg41->unk18 + var_r4_5 + 0x22;
        var_r1_5 = 0x73;
        arg4 = 2;
        arg5 = 0x20;
block_123:
        func_0804E9F4(var_r0_7, var_r1_5, 2, 2);
        arg4 = 0;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + var_r4_5 + 0x30, 0x3CU, 4, 2);
        temp_r0_11 = GetWorkDaysLeft__C13HarvestSprite(arg43);
        arg4 = 0x20;
        func_0804EDB4(temp_r0_11, arg41->unk18 + var_r4_5 + 0x26, 0x120, 0);
        arg4 = 0;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + var_r4_5 + 0x2A, 0x38U, 2, 2);
        break;
    case 0:                                         /* switch 2 */
        var_r4_5 = arg54 << 6;
        var_r0_7 = arg41->unk18 + var_r4_5 + 0x22;
        var_r1_5 = 0x77;
        arg4 = 2;
        arg5 = 0x20;
        goto block_123;
    case 2:                                         /* switch 2 */
        var_r4_5 = arg54 << 6;
        var_r0_7 = arg41->unk18 + var_r4_5 + 0x22;
        var_r1_5 = 0x7B;
        arg4 = temp_r0_10;
        arg5 = 0x20;
        goto block_123;
    case 3:                                         /* switch 2 */
        arg4 = 0;
        arg5 = 0x20;
        func_0804E9F4(arg41->unk18 + (arg54 << 6) + 0x22, 0x54U, 0xC, 2);
        break;
    }
}

