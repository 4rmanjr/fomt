# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08004570/t_structA/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08004570/t_structA/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08004570/t_structA/common.h" 1
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 1
# 31 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h"
# 1 "/home/armanjr/gitproject/fomt/tools/agbcc/include/limits.h" 1
# 32 "/home/armanjr/gitproject/fomt/tools/agbcc/include/stdint.h" 2



typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;



typedef int intptr_t;
typedef unsigned int uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08004570/t_structA/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_08004570/t_structA/func.c" 2
s32 func_08003B40(void *);
s32 func_08003BB4(void *);
s32 func_08003C28(void *);
s32 func_08003C80(void *);
s32 func_08003DF0(void *, s32, s32, s32);
s32 func_08003E88(void *, s32, s32, s32);
s32 func_08003EEC(void *);
s32 func_08003F9C(void *);
s32 func_080040A0(void *);
s32 func_080074C0(void *, s32);
s32 func_08007D4C(void *, s32);
s32 func_08008724(void *);
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088D4(void *);
void *func_08008918(void *);
s32 func_08008B54(s32 *, s32);
s32 func_08008B6C(void *, s32);
s32 func_08008BF8(s32 *, s32);
s32 func_08008E64(s32, s32, s32);
s32 func_08050D34(void *);
s32 func_08050D68(void *);
s32 func_08050DC8(void *, s32 *, s32, s32);
s32 func_08050DF0(void *);
s32 func_08050E30(void *, s32 *, s32 *, s32 *, s32, s32, s32);
s32 func_08050E98(void *, s32);
s32 func_08051320(s32, s32, s32, s32, s32, s32, s32);
s32 func_0805E790(s32 *, void *, s32);
s32 func_0805E8F0(void *);
s32 memcpy(void **, void **, s32);
extern s32 gUnk_080E86EC;
extern s32 gUnk_080E86F0;
extern s32 gUnk_080E878C;
extern s32 gUnk_080E890C;
extern s32 gUnk_080E8914;
extern s32 gUnk_080F9F70;
extern s32 gUnk_080F9F74;
extern s32 gUnk_080F9F78;
extern s32 gUnk_080F9F7C;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk8;
    struct GenObj *unkC;
    s32 unkE;
    u8 _pad12[10];
    struct GenObj *unk1C;
    u8 _pad20[60];
    s32 unk5C;
    s32 unk60;
    s32 unk64;
    s32 unk68;
    u8 _pad6C[12];
    s32 unk78;
    s32 unk7A;
    s32 unk7C;
    s32 unk80;
    u8 _pad84[1];
    s32 unk85;
    s32 unk86;
    s32 unk87;
    s32 unk88;
    s32 unk89;
    s32 unk8C;
    u8 _pad90[264];
    s32 unk198;
    u8 _pad19C[8308];
    struct GenObj *unk2210;
} GenObj;
s32 *func_08004570(s32 *arg0, GenObj *arg1) {
    s16 spC;
s32 sp10;
    void *sp30;
s32 sp50;
s32 sp54;
    s32 *sp58;
    s32 *var_r4_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r1_4;
    s32 temp_r4_6;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r0;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r4;
    s8 *var_r2_2;
    s8 var_r1_4;
    u8 *temp_r1_3;
    u8 temp_r1_2;
    u8 temp_r4_5;
    u8 temp_r4_7;
    u8 temp_r5_2;
    u8 var_r0_2;
    u8 var_r1_3;
    void **temp_r1;
    GenObj *temp_r0;
    GenObj *temp_r0_2;
    GenObj *temp_r2;
    GenObj *temp_r2_2;
    GenObj *temp_r2_3;
    GenObj *temp_r3;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r4_3;
    GenObj *temp_r4_4;
    void *temp_r4_8;
    void *temp_r5;
    GenObj *var_r2;

    sp58 = arg0;
    func_08008724(arg1);
    temp_r5 = func_08008918(arg1);
    spC = 0x1C40;
    temp_r5->unk0 = 0x1C40;
    func_08008E64(gUnk_080F9F78, 0x05000000, gUnk_080F9F7C);
    spC = 0x1E4C;
    temp_r5->unkE = 0x1E4C;
    func_08008E64(gUnk_080F9F70, 0x0600C000, gUnk_080F9F74);
    func_08051320(0x0600F000, 0, 0, 0x1E, 0x14, 0, 0);
    spC = 0x1D40;
    temp_r5->unkC = 0x1D40;
    func_08003C80(arg1);
    temp_r4 = (GenObj *)((u8 *)arg1 + 0x10);
    func_08050E98(temp_r4, 0x2C);
    func_08050D68(temp_r4);
    func_08003C28(arg1);
    temp_r5->unk8 = (u16) (temp_r5->unk8 | 0x40);
    func_08003EEC(arg1);
    func_0805E790(&sp10, (GenObj *)((u8 *)arg1 + 0x1C), 0);
    temp_r0 = (GenObj *)((u8 *)arg1 + 0x4C);
    func_08008E64(sp18, (func_08007D4C(temp_r0, temp_r0->unk4) << 5) + 0x06010000, 0x80);
    temp_r0_2 = (GenObj *)((u8 *)arg1 + 0x54);
    func_08008E64(sp20, (func_080074C0(temp_r0_2, temp_r0_2->unk4) << 5) + 0x05000200, 0x20);
    var_r4 = 0;
    do {
        func_08003DF0(arg1, var_r4, arg1->unk5C, arg1->unk60);
        var_r4 += 1;
    } while ((u32) var_r4 <= 5U);
    func_08003B40(arg1);
loop_3:
    func_080087C8(arg1);
    func_080088B8(arg1);
    func_08003C28(arg1);
    temp_r7 = func_080088D4(arg1);
    temp_r0_3 = arg1->unk8C;
    if (temp_r0_3 == 1) {
        temp_r4_2 = (GenObj *)((u8 *)arg1 + 0x10);
        temp_r0_4 = func_08050D34(temp_r4_2);
        if ((temp_r0_4 != 3) && (temp_r0_4 == 6)) {

        } else if (func_08050DF0(temp_r4_2) == 1) {
block_81:
            func_08003F9C(arg1);
        } else {
block_90:
            func_08008B6C((GenObj *)((u8 *)arg1 + 0x18), 0xC5);
            func_08003EEC(arg1);
            arg1->unk8C = 0;
        }
        goto loop_3;
    }
    switch (temp_r0_3) {
    case 2:
        temp_r4_3 = (GenObj *)((u8 *)arg1 + 0x10);
        temp_r0_5 = func_08050D34(temp_r4_3);
        if ((temp_r0_5 != 3) && (temp_r0_5 == 6)) {
            goto loop_3;
        }
        if (func_08050DF0(temp_r4_3) == 1) {
            if ((func_080040A0(arg1) << 0x18) == 0) {
                goto loop_3;
            }
            var_r4_2 = &sp54;
block_89:
            func_08008B54(var_r4_2, 0);
            func_08008BF8(var_r4_2, 2);
        } else {
            goto block_90;
        }
        break;
    case 3:
        if (func_08050D34((GenObj *)((u8 *)arg1 + 0x10)) == 5) {

        } else {
            func_08003EEC(arg1);
            var_r0 = 0;
block_94:
            arg1->unk8C = var_r0;
        }
        goto loop_3;
    case 0:
        temp_r4_4 = (GenObj *)((u8 *)arg1 + 0x64);
        if ((s32) (func_0805E8F0(temp_r4_4) << 0x1E) < 0) {
            temp_r1 = arg1->unk64;
            (*temp_r1)->unk10(&sp30, temp_r1, *(arg1->unk68 + (temp_r4_4->unkC * 4)));
            memcpy(&sp30, &sp30, 0x20);
            arg1->unk78 = (u8) sp30->unk0;
            arg1->unk7A = (u16) ((0xFFFFFE00 & arg1->unk7A) | ((u32) (sp30->unk2 << 0x17) >> 0x17));
            func_08003DF0(arg1, temp_r4_4->unk1C, (s32) arg1->unk78, arg1->unk7C);
            var_r2 = (GenObj *)((u8 *)arg1 + 0x5C);
            if (arg1->unk8 != 0) {
                var_r2 = (GenObj *)((u8 *)arg1 + 0x78);
            }
            func_08003E88(arg1, temp_r4_4->unk1C, var_r2->unk0, var_r2->unk4);
        }
        temp_r5_2 = temp_r7 & 2;
        if (temp_r5_2 != 0) {
            if (arg1->unk8 != 0) {
                if (arg1->unk80 != 1) {

                } else {
                    func_08008B6C((GenObj *)((u8 *)arg1 + 0x18), 0xC6);
                    arg1->unk80 = 0;
                    func_08003EEC(arg1);
                    func_08003DF0(arg1, 1, arg1->unk5C, arg1->unk60);
                    func_08003DF0(arg1, 0, (s32) arg1->unk78, arg1->unk7C);
                    goto loop_3;
                }
            } else {
                func_08008B6C((GenObj *)((u8 *)arg1 + 0x18), 0xC6);
                var_r4_2 = &sp50;
                goto block_89;
            }
        } else {
            if (temp_r7 & 1) {
                temp_r7_2 = arg1->unk80;
                switch (temp_r7_2) {
                case 0:
                    arg1->unk80 = 1;
                    func_08003DF0(arg1, 0, arg1->unk5C, arg1->unk60);
                    func_08003DF0(arg1, 1, (s32) arg1->unk78, arg1->unk7C);
                    func_08003EEC(arg1);
                    func_08008B6C((GenObj *)((u8 *)arg1 + 0x18), 0xC5);
                    break;
                case 1:
                    temp_r1_2 = arg1->unk85;
                    temp_r4_5 = *(((GenObj *)((u8 *)arg1 + 0x85)) - 1);
                    if (temp_r4_5 != 0) {
                        var_r1 = 0;
                        if (((temp_r1_2 << 7) + arg1)->unk98 == 0) {
                            var_r1 = 1;
                        }
                        if (var_r1 != 1) {
                            func_08050E30((GenObj *)((u8 *)arg1 + 0x10), &gUnk_080E890C, &gUnk_080E86EC, &gUnk_080E86F0, (s32) temp_r5_2, (s32) temp_r5_2, (s32) temp_r5_2);
                            var_r0 = 2;
                            goto block_94;
                        }
                        func_08050DC8((GenObj *)((u8 *)arg1 + 0x10), &gUnk_080E878C, 0, 0);
                        arg1->unk8C = 3;
                        func_08008B6C((GenObj *)((u8 *)arg1 + 0x18), 0xC7);
                    } else {
                        var_r1_2 = 0;
                        if (((temp_r1_2 << 7) + arg1)->unk98 == 0) {
                            var_r1_2 = 1;
                        }
                        if (var_r1_2 == 1) {
                            goto block_81;
                        }
                        func_08050E30((GenObj *)((u8 *)arg1 + 0x10), &gUnk_080E8914, &gUnk_080E86EC, &gUnk_080E86F0, (s32) temp_r4_5, (s32) temp_r4_5, (s32) temp_r4_5);
                        arg1->unk8C = temp_r7_2;
                    }
                    break;
                }
            } else if (((u32) (temp_r7 << 0x1B) >> 0x1F) == ((u32) (temp_r7 << 0x1A) >> 0x1F)) {
                if (arg1->unk8 == 0) {

                } else if (((u32) (temp_r7 << 0x18) >> 0x1F) == ((u32) (temp_r7 << 0x19) >> 0x1F)) {

                } else {
                    temp_r4_6 = arg1->unk80;
                    var_r0_2 = 0x80 & temp_r7;
                    if (var_r0_2 != 0) {
                        if (temp_r4_6 == 0) {
                            var_r0_2 = 2;
                        } else {
                            var_r0_2 = 0;
                            if (temp_r4_6 != 5) {
                                var_r0_2 = temp_r4_6 + 1;
                            }
                        }
                    } else if (temp_r4_6 != 2) {
                        if (temp_r4_6 == 1) {
                            var_r0_2 = 5;
                        } else {
                            var_r0_2 = 5;
                            if (temp_r4_6 != 0) {
                                var_r0_2 = temp_r4_6 - 1;
                            }
                        }
                    }
                    arg1->unk80 = (s32) var_r0_2;
                    func_08003DF0(arg1, temp_r4_6, arg1->unk5C, arg1->unk60);
                    func_08003DF0(arg1, arg1->unk80, (s32) arg1->unk78, arg1->unk7C);
                    func_08003E88(arg1, arg1->unk80, (s32) arg1->unk78, arg1->unk7C);
                    func_08003EEC(arg1);
                    goto block_76;
                }
            } else {
                temp_r1_3 = (GenObj *)((u8 *)arg1 + 0x84) + arg1->unk80;
                temp_r4_7 = *temp_r1_3 ^ 1;
                *temp_r1_3 = temp_r4_7;
                if (arg1->unk8 != 0) {
                    temp_r0_6 = arg1->unk80;
                    switch ((u32) temp_r0_6) {
                    case 0:
                    case 1:
                        func_08003EEC(arg1);
                        break;
                    case 2:
                        temp_r3 = arg1->unk8;
                        temp_r3->unk2210 = (u8) ((-2 & temp_r3->unk2210) | ((u32) ((0 - temp_r4_7) | temp_r4_7) >> 0x1F));
                        break;
                    case 3:
                        temp_r2 = arg1->unk8;
                        var_r3 = 1;
                        if (temp_r4_7 != 0) {
                            var_r3 = 0;
                        }
                        var_r2_2 = (GenObj *)((u8 *)temp_r2 + 0x2210);
                        var_r3_2 = var_r3 * 2;
                        var_r1_3 = temp_r2->unk2210;
                        var_r0_3 = -3;
block_56:
                        *var_r2_2 = (var_r0_3 & var_r1_3) | var_r3_2;
                        break;
                    case 4:
                        temp_r2_2 = arg1->unk8;
                        var_r3_3 = 1;
                        if (temp_r4_7 != 0) {
                            var_r3_3 = 0;
                        }
                        var_r2_2 = (GenObj *)((u8 *)temp_r2_2 + 0x2210);
                        var_r3_2 = var_r3_3 * 4;
                        var_r1_3 = temp_r2_2->unk2210;
                        var_r0_3 = -5;
                        goto block_56;
                    case 5:
                        temp_r2_3 = arg1->unk8;
                        var_r3_4 = 1;
                        if (temp_r4_7 != 0) {
                            var_r3_4 = 0;
                        }
                        var_r2_2 = (GenObj *)((u8 *)temp_r2_3 + 0x2210);
                        var_r3_2 = var_r3_4 * 8;
                        var_r1_3 = temp_r2_3->unk2210;
                        var_r0_3 = -9;
                        goto block_56;
                    }
                } else {
                    func_08003EEC(arg1);
                    temp_r4_8 = (arg1->unk85 * 4) + arg1;
                    var_r1_4 = 0;
                    if ((temp_r4_8->unk198 << 0x1F) != 0) {
                        var_r1_4 = 1;
                    }
                    arg1->unk86 = var_r1_4;
                    func_08003DF0(arg1, 2, arg1->unk5C, arg1->unk60);
                    arg1->unk87 = (s8) ((((u8) temp_r4_8->unk198 >> 1) ^ 1) & 1);
                    func_08003DF0(arg1, 3, arg1->unk5C, arg1->unk60);
                    arg1->unk88 = (s8) ((((u8) temp_r4_8->unk198 >> 2) ^ 1) & 1);
                    func_08003DF0(arg1, 4, arg1->unk5C, arg1->unk60);
                    arg1->unk89 = (s8) ((((u8) temp_r4_8->unk198 >> 3) ^ 1) & 1);
                    func_08003DF0(arg1, 5, arg1->unk5C, arg1->unk60);
                }
                func_08003DF0(arg1, arg1->unk80, (s32) arg1->unk78, arg1->unk7C);
block_76:
                func_08008B6C((GenObj *)((u8 *)arg1 + 0x18), 0xCB);
            }
            goto loop_3;
        }
        break;
    }
    func_08003BB4(arg1);
    temp_r1_4 = arg1->unkC;
    arg1->unkC = 0;
    *sp58 = temp_r1_4;
    return sp58;
}
