# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_0806C492/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_0806C492/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_0806C492/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_0806C492/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_sub_0806C492/opencode/func.c" 2


s32 GetChicken__4CoopUi(s32, s32);
s32 GetCow__4BarnUi(s32, s32);
u32 GetGrowthStage__C3Cow();
s32 GetGrowthStage__C5Sheep();
s32 GetGrowthStage__C7Chicken();
s32 GetSheep__4BarnUi(s32, s32);
s32 IsPregnant__C10BarnAnimal(s32);
s32 IsSheared__C5Sheep(s32);
s32 IsSick__C9Livestock(s32);
s32 free();
s16 func_080074C0(void *, s32);
s16 func_08007D4C(void *, s32);
s32 func_080087C8(void *);
s32 func_080088B8(void *);
s32 func_080088CC(void *);
s32 func_080088D4(void *);
s32 func_080088DC(void *);
void *func_08008910(void *);
s32 func_08008918(void *);
u8 *func_08008920(void *);
s32 func_08008940(void *);
s32 func_0800894C(void *);
s32 func_08008B6C(void *, s32);
s32 func_08008F0C(void ***, s32, s32, u16);
s32 func_08009378(void *, s32, s32, s32);
s32 func_0804EA94(s32 *, s32, s32, s32);
s32 func_08050D3C(void *, s32, u8 *, s32);
s32 func_08050D5C(void *);
s32 func_08050D74(void *);
s32 func_08050D8C(void *, ? *);
s32 func_08050DF0(void *);
s32 func_08050E30(void *, ? *, ? *, ? *);
s32 func_0805E8F0(void *);
s32 func_0805E99C(u8 *, s32, u16, ? *);
s32 func_08075C88(void *, s16);
void *func_080D3BC0(s32);
void *malloc(s32);
s32 sub_0806D8B2();
extern ? gUnk_080FB9C8;
extern ? gUnk_080FB9DC;
extern ? gUnk_080FB9E0;
extern ? gUnk_080FB9E4;
extern ? gUnk_080FB9F4;
extern ? gUnk_080FBA08;
extern ? gUnk_080FBA3C;
extern ? gUnk_080FBA70;
extern ? gUnk_080FBAA8;
extern ? gUnk_080FBAE0;
extern ? gUnk_080FBB14;
extern ? gUnk_080FBB4C;
extern ? gUnk_080FBB80;
extern ? gUnk_080FBBB8;
extern ? gUnk_080FBBEC;
extern ? gUnk_080FBC18;
extern ? gUnk_080FBC48;
extern ? gUnk_080FBC70;
extern ? gUnk_080FBC9C;
extern ? gUnk_080FBCB8;
extern ? gUnk_080FBCE0;

void sub_0806C492(s32 *arg1C, void **arg1D, ? arg33, ? arg3A, ? arg3C, ? arg75, ? arg77, u32 arg79, u32 arg7A, u32 arg7B, u32 arg7C, u32 arg7D, u32 arg7E, u32 arg7F, u32 arg80, u32 arg81, u32 arg82, s32 arg83, u32 arg85, u32 arg86, void ***arg87, s32 arg9B, s32 arg9C, void *arg9D, void *arg9E, s32 arg9F, u32 *argA0, s32 argA1, s32 argA2, void *argA3, u32 *argA4, void *argA5, u32 argAD, s32 argAE, s32 argAF, void *argB4, u16 *argB9, u16 *argBA, void *argBC, s32 *argBD, s16 *argC1, u8 *argC2, u16 *argC3, u16 *argC4, u8 *argC8, void *argCB, s32 *argCC, s16 *argDC, s32 *argDD, void *argE5) {
    ? *var_r1_6;
    s16 *var_r1_13;
    s16 *var_r1_16;
    s16 temp_r1_18;
    s16 temp_r1_23;
    s16 temp_r1_5;
    s16 temp_r2;
    s16 temp_r2_3;
    s16 temp_r2_5;
    s32 *var_r0_2;
    s32 *var_r0_6;
    s32 *var_r1;
    s32 *var_r1_3;
    s32 *var_r1_4;
    s32 temp_r0;
    s32 temp_r0_10;
    s32 temp_r0_12;
    s32 temp_r0_13;
    s32 temp_r0_14;
    s32 temp_r0_15;
    s32 temp_r0_16;
    s32 temp_r0_17;
    s32 temp_r0_18;
    s32 temp_r0_19;
    s32 temp_r0_20;
    s32 temp_r0_21;
    s32 temp_r0_22;
    s32 temp_r0_29;
    s32 temp_r0_36;
    s32 temp_r0_43;
    s32 temp_r0_47;
    s32 temp_r0_4;
    s32 temp_r0_50;
    s32 temp_r0_54;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;
    s32 temp_r0_9;
    s32 temp_r1;
    s32 temp_r1_12;
    s32 temp_r1_16;
    s32 temp_r1_19;
    s32 temp_r1_4;
    s32 temp_r1_8;
    s32 temp_r4;
    s32 temp_r4_10;
    s32 temp_r4_11;
    s32 temp_r4_12;
    s32 temp_r4_14;
    s32 temp_r4_15;
    s32 temp_r4_16;
    s32 temp_r4_18;
    s32 temp_r4_19;
    s32 temp_r4_20;
    s32 temp_r4_21;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_5;
    s32 temp_r4_9;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_r8_3;
    s32 temp_r8_4;
    s32 temp_r8_5;
    s32 var_r0;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r1_17;
    s32 var_r1_2;
    s32 var_r1_5;
    s32 var_r4;
    s32 var_r6;
    s32 var_sb;
    s32 var_sb_2;
    s32 var_sb_3;
    s32 var_sb_5;
    s32 var_sb_6;
    s32 var_sl;
    s32 var_sl_2;
    u16 temp_r3_2;
    u16 var_r2;
    u16 var_r2_4;
    u16 var_r2_7;
    u16 var_r3;
    u16 var_r3_2;
    u16 var_r3_3;
    u32 *var_r0_11;
    u32 *var_r0_13;
    u32 *var_r0_15;
    u32 *var_r1_11;
    u32 *var_r1_7;
    u32 *var_r1_9;
    u32 temp_r0_11;
    u32 temp_r0_2;
    u32 temp_r0_30;
    u32 temp_r0_37;
    u32 temp_r0_3;
    u32 temp_r0_44;
    u32 temp_r0_48;
    u32 temp_r0_51;
    u32 temp_r0_55;
    u32 temp_r3;
    u32 var_r8;
    u32 var_r8_2;
    u32 var_r8_3;
    u32 var_r8_4;
    u32 var_r8_5;
    u32 var_r8_6;
    u32 var_sb_4;
    u32 var_sb_7;
    u8 *temp_r0_28;
    u8 *temp_r0_35;
    u8 *temp_r0_42;
    u8 *temp_r4_22;
    u8 *temp_r6;
    u8 temp_r2_9;
    void **temp_r1_10;
    void **temp_r1_14;
    void **temp_r1_2;
    void **temp_r1_3;
    void **temp_r1_6;
    void *temp_r0_23;
    void *temp_r0_24;
    void *temp_r0_25;
    void *temp_r0_26;
    void *temp_r0_27;
    void *temp_r0_31;
    void *temp_r0_32;
    void *temp_r0_33;
    void *temp_r0_34;
    void *temp_r0_38;
    void *temp_r0_39;
    void *temp_r0_40;
    void *temp_r0_41;
    void *temp_r0_45;
    void *temp_r0_46;
    void *temp_r0_49;
    void *temp_r0_52;
    void *temp_r0_53;
    void *temp_r0_56;
    void *temp_r1_11;
    void *temp_r1_13;
    void *temp_r1_15;
    void *temp_r1_17;
    void *temp_r1_20;
    void *temp_r1_21;
    void *temp_r1_22;
    void *temp_r1_24;
    void *temp_r1_7;
    void *temp_r1_9;
    void *temp_r2_10;
    void *temp_r2_2;
    void *temp_r2_4;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r4_13;
    void *temp_r4_17;
    void *temp_r4_23;
    void *temp_r4_2;
    void *temp_r4_3;
    void *temp_r4_4;
    void *temp_r4_6;
    void *temp_r4_7;
    void *temp_r4_8;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r6_2;
    void *temp_r6_3;
    void *temp_r6_4;
    void *temp_r6_5;
    void *temp_r6_6;
    void *temp_r6_7;
    void *var_ip;
    void *var_ip_2;
    void *var_ip_3;
    void *var_ip_4;
    void *var_ip_5;
    void *var_ip_6;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_16;
    void *var_r0_7;
    void *var_r0_8;
    void *var_r0_9;
    void *var_r1_10;
    void *var_r1_12;
    void *var_r1_14;
    void *var_r1_15;
    void *var_r1_18;
    void *var_r1_8;
    void *var_r2_10;
    void *var_r2_11;
    void *var_r2_12;
    void *var_r2_13;
    void *var_r2_14;
    void *var_r2_15;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r2_5;
    void *var_r2_6;
    void *var_r2_8;
    void *var_r2_9;
    void *var_r5;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;

    func_080087C8(saved_reg_r7);
    func_080088B8(saved_reg_r7);
    temp_r8 = func_080088DC(saved_reg_r7);
    temp_r6 = func_08008920(saved_reg_r7);
    temp_r5 = func_08008918(saved_reg_r7);
    temp_r4 = func_08008940(saved_reg_r7);
    temp_r0 = func_0800894C(saved_reg_r7);
    arg4 = temp_r4;
    arg5 = temp_r0;
    arg6 = saved_reg_r7 + 0x4170;
    temp_r8_2 = func_08050D3C(saved_reg_r7 + 0x134, temp_r8, temp_r6, temp_r5);
    temp_r1 = *arg1C;
    temp_r3 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
    if ((arg9B != 0) && (temp_r3 == 0)) {
        saved_reg_r7->unk8->unkC = (s32) saved_reg_r7->unk18;
        temp_r1_2 = saved_reg_r7->unk8;
        saved_reg_r7->unk8 = (void **) temp_r3;
        arg1D = temp_r1_2;
        arg75.unk0 = argB4;
        arg75.unk4 = temp_r1_2;
        argB4->unk0 = temp_r3;
        *arg87 = temp_r1_2;
        goto block_8;
    }
    temp_r0_2 = saved_reg_r7->unk4068;
    if (temp_r0_2 != 1) {
        if (temp_r0_2 >= 1U) {
            if (temp_r0_2 != 2) {
                var_r6 = 0x78;
            } else {
                var_r6 = 0x48;
            }
        } else {
            saved_reg_r7->unk14 = (s32) saved_reg_r7->unk10;
            saved_reg_r7->unk18 = -1;
            saved_reg_r7->unk8->unkC = -1;
            temp_r1_3 = saved_reg_r7->unk8;
            saved_reg_r7->unk8 = 0;
            arg1D = temp_r1_3;
            arg77.unk0 = argB4;
            arg77.unk4 = temp_r1_3;
            argB4->unk0 = 0U;
            *arg87 = temp_r1_3;
block_8:
            if (arg1D != 0) {
                (*arg1D)->unk8(arg1D, 3);
            }
            var_r1 = arg1C;
            if (var_r1 == 0) {
                var_r1 = SECOND_REG(sub_0806D8B2());
            }
            var_r1->unk8->unkC(var_r1, 3);
            sub_0806D8B2();
            goto block_13;
        }
    } else {
block_13:
        var_r6 = 0x18;
    }
    temp_r0_3 = saved_reg_r7->unk4174;
    switch (temp_r0_3) {
    case 0:
        temp_r5_2 = saved_reg_r7->unk130;
        if (temp_r5_2 != 0) {
            if (temp_r5_2 > 0) {
                saved_reg_r7->unk20 = (u16) (saved_reg_r7->unk20 + 4);
                temp_r0_4 = saved_reg_r7->unk130 + 1;
                saved_reg_r7->unk130 = temp_r0_4;
                if (temp_r0_4 == 0xC) {
                    saved_reg_r7->unk130 = 0;
                }
            } else {
                saved_reg_r7->unk20 = (u16) (saved_reg_r7->unk20 - 4);
                temp_r1_4 = saved_reg_r7->unk130 - 1;
                saved_reg_r7->unk130 = temp_r1_4;
                if (temp_r1_4 == -0xC) {
                    saved_reg_r7->unk130 = 0;
                }
            }
            func_08075C88(saved_reg_r7->unk1C, (s16) saved_reg_r7->unk20);
        } else {
            if (func_080088D4(saved_reg_r7) & 0x40) {
                temp_r0_5 = saved_reg_r7->unkF8;
                if (temp_r0_5 > 0x18) {
                    switch (temp_r0_5) {
                    case 0x48:
                        var_r0 = 0x18;
block_32:
                        saved_reg_r7->unkF8 = var_r0;
                        break;
                    case 0x78:
                        var_r0 = 0x48;
                        goto block_32;
                    }
                    var_r0_2 = saved_reg_r7 + 0x40AC;
                    var_r1_2 = saved_reg_r7->unk40AC - 1;
                    goto block_46;
                }
                if ((s32) (s16) saved_reg_r7->unk20 <= 0) {
                    saved_reg_r7->unk20 = (u16) temp_r5_2;
                } else {
                    saved_reg_r7->unk20 = (u16) (saved_reg_r7->unk20 - 4);
                    saved_reg_r7->unk130 = (s32) (saved_reg_r7->unk130 - 1);
                    var_r1_3 = saved_reg_r7 + 0x40AC;
                    var_r0_3 = saved_reg_r7->unk40AC - 1;
                    goto block_50;
                }
                goto block_51;
            }
            if (func_080088D4(saved_reg_r7) & 0x80) {
                temp_r3_2 = saved_reg_r7->unk1C->unkE - 0xA0;
                temp_r0_6 = saved_reg_r7->unkF8;
                if (temp_r0_6 < var_r6) {
                    switch (temp_r0_6) {
                    case 0x18:
                        var_r0_4 = 0x48;
block_44:
                        saved_reg_r7->unkF8 = var_r0_4;
                        break;
                    case 0x48:
                        var_r0_4 = 0x78;
                        goto block_44;
                    }
                    var_r0_2 = saved_reg_r7 + 0x40AC;
                    var_r1_2 = saved_reg_r7->unk40AC + 1;
block_46:
                    *var_r0_2 = var_r1_2;
                    func_08008B6C(saved_reg_r7 + 0x4170, 0xCB);
                } else if ((s32) (s16) saved_reg_r7->unk20 >= (s32) (s16) temp_r3_2) {
                    saved_reg_r7->unk20 = temp_r3_2;
                } else {
                    saved_reg_r7->unk20 = (u16) (saved_reg_r7->unk20 + 4);
                    saved_reg_r7->unk130 = (s32) (saved_reg_r7->unk130 + 1);
                    var_r1_3 = saved_reg_r7 + 0x40AC;
                    var_r0_3 = saved_reg_r7->unk40AC + 1;
block_50:
                    *var_r1_3 = var_r0_3;
                    func_08008B6C(saved_reg_r7 + 0x4170, 0xCB);
                }
block_51:
                func_08075C88(saved_reg_r7->unk1C, (s16) saved_reg_r7->unk20);
            } else if (!(func_080088CC(saved_reg_r7) & 1)) {
                if (!(func_080088CC(saved_reg_r7) & 2)) {

                } else {
                    func_08050D5C(saved_reg_r7 + 0x134);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 4;
                    goto block_199;
                }
            } else {
                temp_r0_7 = saved_reg_r7->unk10;
                switch (temp_r0_7) {
                case 0:
                    temp_r0_8 = GetChicken__4CoopUi(saved_reg_r7->unkC + 0x410, ((saved_reg_r7->unk40AC * 4) + saved_reg_r7)->unk406C);
                    if (temp_r0_8 == 0) {

                    } else {
                        if (GetGrowthStage__C7Chicken() == 0) {
                            var_r1_5 = 2;
                        } else {
                            var_r1_5 = 1;
                            if ((IsSick__C9Livestock(temp_r0_8) << 0x18) != 0) {
                                var_r1_5 = 3;
                            }
                        }
                        var_r0_6 = saved_reg_r7 + 0x138;
block_85:
                        *var_r0_6 = var_r1_5;
                    }
                    break;
                case 1:
                    temp_r0_9 = GetCow__4BarnUi(saved_reg_r7->unkC + 0x5F0, ((saved_reg_r7->unk40AC * 4) + saved_reg_r7)->unk406C);
                    if (temp_r0_9 != 0) {
                        if (GetGrowthStage__C3Cow() <= 1U) {
                            var_r1_5 = 2;
                        } else if ((IsSick__C9Livestock(temp_r0_9) << 0x18) != 0) {
                            var_r1_5 = 3;
                        } else {
                            var_r1_5 = 1;
                            if ((IsPregnant__C10BarnAnimal(temp_r0_9) << 0x18) != 0) {
                                var_r1_5 = 4;
                            }
                        }
                        var_r0_6 = saved_reg_r7 + 0x138;
                        goto block_85;
                    }
                    break;
                case 2:
                    temp_r0_10 = GetSheep__4BarnUi(saved_reg_r7->unkC + 0x5F0, ((saved_reg_r7->unk40AC * 4) + saved_reg_r7)->unk406C);
                    if (temp_r0_10 != 0) {
                        if (GetGrowthStage__C5Sheep() == 0) {
                            var_r1_5 = 2;
                        } else if ((IsSick__C9Livestock(temp_r0_10) << 0x18) != 0) {
                            var_r1_5 = 3;
                        } else if ((IsPregnant__C10BarnAnimal(temp_r0_10) << 0x18) != 0) {
                            var_r1_5 = 4;
                        } else {
                            var_r1_5 = 1;
                            if ((IsSheared__C5Sheep(temp_r0_10) << 0x18) != 0) {
                                var_r1_5 = 5;
                            }
                        }
                        var_r0_6 = saved_reg_r7 + 0x138;
                        goto block_85;
                    }
                    break;
                }
                func_08050D5C(saved_reg_r7 + 0x134);
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 1;
block_199:
                *var_r1_4 = var_r0_5;
            }
        }
        break;
    case 1:
        if (temp_r8_2 != 3) {

        } else {
            temp_r0_11 = saved_reg_r7->unk138;
            switch (temp_r0_11) {
            case 1:
                var_r4 = saved_reg_r7->unk10;
                switch (var_r4) {
                case 0:
                    var_r0_7 = saved_reg_r7 + 0x134;
                    var_r1_6 = &gUnk_080FB9C8;
block_103:
                    arg4 = var_r4;
                    arg5 = var_r4;
                    arg6 = (void *) var_r4;
                    func_08050E30(var_r0_7, var_r1_6, &gUnk_080FB9DC, &gUnk_080FB9E0);
                    break;
                case 1:
                    var_r0_7 = saved_reg_r7 + 0x134;
                    var_r1_6 = &gUnk_080FB9E4;
                    var_r4 = 0;
                    goto block_103;
                case 2:
                    arg4 = 0;
                    arg5 = 0;
                    arg6 = 0;
                    func_08050E30(saved_reg_r7 + 0x134, &gUnk_080FB9F4, &gUnk_080FB9DC, &gUnk_080FB9E0);
                    break;
                }
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 3;
                goto block_199;
            case 2:
                temp_r0_12 = saved_reg_r7->unk10;
                switch (temp_r0_12) {
                case 0:
                    func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBA08);
                    break;
                case 1:
                    func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBA3C);
                    break;
                case 2:
                    func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBA70);
                    break;
                }
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 2;
                goto block_199;
            case 3:
                temp_r0_13 = saved_reg_r7->unk10;
                switch (temp_r0_13) {
                case 0:
                    func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBAA8);
                    break;
                case 1:
                    func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBAE0);
                    break;
                case 2:
                    func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBB14);
                    break;
                }
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 2;
                goto block_199;
            case 4:
                temp_r0_14 = saved_reg_r7->unk10;
                switch (temp_r0_14) {
                case 1:
                    func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBB4C);
                    break;
                case 2:
                    func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBB80);
                    break;
                }
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 2;
                goto block_199;
            case 5:
                func_08050D8C(saved_reg_r7 + 0x134, &gUnk_080FBBB8);
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 2;
                goto block_199;
            }
        }
        break;
    case 2:
        if (temp_r8_2 != 3) {

        } else {
            saved_reg_r7->unk138 = 0U;
            saved_reg_r7->unk4174 = 0U;
            func_08050D74(saved_reg_r7 + 0x134);
        }
        break;
    case 3:
        if (temp_r8_2 != 3) {

        } else {
            temp_r0_15 = saved_reg_r7->unk10;
            switch (temp_r0_15) {
            case 0:
                temp_r4_2 = saved_reg_r7 + 0x134;
                temp_r0_16 = func_08050DF0(temp_r4_2);
                switch (temp_r0_16) {
                case 1:
                    func_08050D8C(temp_r4_2, &gUnk_080FBBEC);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 8;
                    goto block_199;
                case 2:
                    func_08050D8C(temp_r4_2, &gUnk_080FBC18);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 6;
                    goto block_199;
                }
                break;
            case 1:
                temp_r4_3 = saved_reg_r7 + 0x134;
                temp_r0_17 = func_08050DF0(temp_r4_3);
                switch (temp_r0_17) {
                case 1:
                    func_08050D8C(temp_r4_3, &gUnk_080FBBEC);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 8;
                    goto block_199;
                case 2:
                    func_08050D8C(temp_r4_3, &gUnk_080FBC48);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 6;
                    goto block_199;
                }
                break;
            case 2:
                temp_r4_4 = saved_reg_r7 + 0x134;
                temp_r0_18 = func_08050DF0(temp_r4_4);
                switch (temp_r0_18) {
                case 1:
                    func_08050D8C(temp_r4_4, &gUnk_080FBBEC);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 8;
                    goto block_199;
                case 2:
                    func_08050D8C(temp_r4_4, &gUnk_080FBC70);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 6;
                    goto block_199;
                }
                break;
            }
        }
        break;
    case 4:
        if (temp_r8_2 != 3) {

        } else {
            temp_r4_5 = saved_reg_r7->unk10;
            switch (temp_r4_5) {
            case 0:
                arg4 = temp_r4_5;
                arg5 = temp_r4_5;
                arg6 = (void *) temp_r4_5;
                func_08050E30(saved_reg_r7 + 0x134, &gUnk_080FBC9C, &gUnk_080FB9DC, &gUnk_080FB9E0);
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 5;
                goto block_199;
            case 1:
                arg4 = 0;
                arg5 = 0;
                arg6 = 0;
                func_08050E30(saved_reg_r7 + 0x134, &gUnk_080FBC9C, &gUnk_080FB9DC, &gUnk_080FB9E0);
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 5;
                goto block_199;
            case 2:
                arg4 = 0;
                arg5 = 0;
                arg6 = 0;
                func_08050E30(saved_reg_r7 + 0x134, &gUnk_080FBC9C, &gUnk_080FB9DC, &gUnk_080FB9E0);
                var_r1_4 = saved_reg_r7 + 0x4174;
                var_r0_5 = 5;
                goto block_199;
            }
        }
        break;
    case 5:
        if (temp_r8_2 != 3) {

        } else {
            temp_r0_19 = saved_reg_r7->unk10;
            switch (temp_r0_19) {
            case 0:
                temp_r4_6 = saved_reg_r7 + 0x134;
                temp_r0_20 = func_08050DF0(temp_r4_6);
                switch (temp_r0_20) {
                case 1:
                    func_08050D8C(temp_r4_6, &gUnk_080FBCB8);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 7;
                    goto block_199;
                case 2:
                    func_08050D8C(temp_r4_6, &gUnk_080FBC18);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 6;
                    goto block_199;
                }
                break;
            case 1:
                temp_r4_7 = saved_reg_r7 + 0x134;
                temp_r0_21 = func_08050DF0(temp_r4_7);
                switch (temp_r0_21) {
                case 1:
                    func_08050D8C(temp_r4_7, &gUnk_080FBCE0);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 7;
                    goto block_199;
                case 2:
                    func_08050D8C(temp_r4_7, &gUnk_080FBC48);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 6;
                    goto block_199;
                }
                break;
            case 2:
                temp_r4_8 = saved_reg_r7 + 0x134;
                temp_r0_22 = func_08050DF0(temp_r4_8);
                switch (temp_r0_22) {
                case 1:
                    func_08050D8C(temp_r4_8, &gUnk_080FBCE0);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 7;
                    goto block_199;
                case 2:
                    func_08050D8C(temp_r4_8, &gUnk_080FBC70);
                    var_r1_4 = saved_reg_r7 + 0x4174;
                    var_r0_5 = 6;
                    goto block_199;
                }
                break;
            }
        }
        break;
    case 6:
        if (temp_r8_2 == 3) {
            saved_reg_r7->unk4174 = 0U;
            func_08050D74(saved_reg_r7 + 0x134);
        }
        break;
    case 7:
        if (temp_r8_2 == 3) {
            saved_reg_r7->unk4174 = 9U;
            func_08050D74(saved_reg_r7 + 0x134);
            saved_reg_r7->unk14 = (s32) saved_reg_r7->unk10;
            saved_reg_r7->unk18 = -1;
            arg9B = 1;
            func_08009378(arg1C + 0xC, 0x889, 1, 1);
            temp_r0_23 = (void *) func_08008940(saved_reg_r7);
            temp_r0_23->unk8->unk10(temp_r0_23, arg1C);
        }
        break;
    case 8:
        if (temp_r8_2 == 3) {
            saved_reg_r7->unk14 = (s32) saved_reg_r7->unk10;
            saved_reg_r7->unk18 = (s32) ((saved_reg_r7->unk40AC * 4) + saved_reg_r7)->unk406C;
            arg9B = 1;
            func_08009378(arg1C + 0xC, 0x889, 1, 1);
            temp_r0_24 = (void *) func_08008940(saved_reg_r7);
            temp_r0_24->unk8->unk10(temp_r0_24, arg1C);
            var_r1_4 = saved_reg_r7 + 0x4174;
            var_r0_5 = 9;
            goto block_199;
        }
        break;
    }
    arg33.unk0 = 0U;
    arg33.unk2 = 0U;
    arg33.unk4 = 0;
    arg33.unk6 = 0;
    arg33.unk8 = 0;
    arg33.unkC = 0;
    arg33.unk10 = 0;
    arg33.unk11 = 0;
    arg33.unk14 = 0;
    arg33.unk18 = 0;
    if ((s32) (s16) saved_reg_r7->unk20 >= (s32) (saved_reg_r7->unk1C->unkE - 0xA0)) {
        saved_reg_r7->unkF0 = 0;
        argC8 = saved_reg_r7 + 0xF0;
    } else {
        saved_reg_r7->unkF0 = 1;
        argC8 = saved_reg_r7 + 0xF0;
    }
    temp_r1_5 = (s16) saved_reg_r7->unk20;
    if (temp_r1_5 == 0) {
        saved_reg_r7->unkB8 = (s8) temp_r1_5;
        argC2 = saved_reg_r7 + 0xB8;
    } else {
        saved_reg_r7->unkB8 = 1;
        argC2 = saved_reg_r7 + 0xB8;
    }
    arg9C = 0;
    if (temp_r8_2 == 0) {
        arg9C = 1;
    }
    argC1 = saved_reg_r7 + 0x3EA4;
    argDC = saved_reg_r7 + 0x3FA8;
    if (saved_reg_r7->unk12C == 0) {

    } else {
        if (arg9C != 0) {
            func_0805E8F0(argCB);
        }
        temp_r1_6 = argCB->unk0;
        (*temp_r1_6)->unk10(&arg3A, temp_r1_6, *(*argCC + (argCB->unkC * 4)));
        temp_r0_25 = saved_reg_r7 + 0x110;
        temp_r0_26 = temp_r0_25 + 0xC;
        arg33.unk0 = (s32) saved_reg_r7->unk110;
        arg33.unk4 = (s32) temp_r0_25->unk4;
        arg33.unk8 = (s32) temp_r0_25->unk8;
        temp_r1_7 = &arg33 + 0xC;
        arg33.unkC = (s32) temp_r0_25->unkC;
        temp_r1_7->unk4 = (s32) temp_r0_26->unk4;
        temp_r1_7->unk8 = (s32) temp_r0_26->unk8;
        temp_r1_7->unkC = (s32) temp_r0_26->unkC;
        arg33.unk0 = (u16) saved_reg_r7->unkF4;
        arg33.unk2 = (u16) saved_reg_r7->unkF8;
        arg33.unk8 = 1;
        temp_r0_27 = saved_reg_r7 + 0x40B8;
        arg33.unk4 = func_080074C0(temp_r0_27, temp_r0_27->unk4);
        temp_r5_3 = saved_reg_r7 + 0x40B0;
        arg33.unk6 = func_08007D4C(temp_r5_3, temp_r5_3->unk4);
        arg33.unk18 = 1;
        temp_r0_28 = func_08008920(saved_reg_r7);
        temp_r1_8 = arg3A.unk0;
        var_r2 = 0;
        if (temp_r1_8 != 0) {
            var_r2 = arg3A.unk4;
        }
        func_0805E99C(temp_r0_28, temp_r1_8, var_r2, &arg33);
        temp_r6_2 = func_08008910(saved_reg_r7);
        temp_r8_3 = arg3C.unk0;
        temp_r2 = func_08007D4C(temp_r5_3, temp_r5_3->unk4);
        var_r3 = 0;
        if (arg3C.unk0 != 0) {
            var_r3 = arg3C.unk4;
        }
        func_08008F0C(&arg1D, temp_r8_3, (temp_r2 << 5) + 0x06010000, var_r3);
        arg9D = argB4;
        temp_r1_9 = temp_r6_2->unk4;
        if (temp_r1_9 != temp_r6_2->unkC) {
            if (temp_r1_9 != 0) {
                temp_r1_9->unk0 = (u32) argB4->unk0;
                temp_r1_9->unk4 = (s32) argB4->unk4;
                temp_r1_9->unk8 = (s32) argB4->unk8;
                temp_r1_9->unkC = (s32) argB4->unkC;
            }
            temp_r6_2->unk4 = (void *) (temp_r6_2->unk4 + 0x10);
        } else {
            arg7A = 1;
            temp_r4_9 = (s32) (temp_r1_9 - temp_r6_2->unk0) >> 4;
            arg79 = temp_r4_9;
            var_r1_7 = &arg79;
            if ((u32) temp_r4_9 < (u32) arg7A) {
                var_r1_7 = &arg7A;
            }
            temp_r0_29 = temp_r4_9 + *var_r1_7;
            if (temp_r0_29 != 0) {
                temp_r4_10 = temp_r0_29 * 0x10;
                var_r0_8 = malloc(temp_r4_10);
                var_sb = temp_r4_10;
                if (var_r0_8 == 0) {
                    var_r0_8 = func_080D3BC0(var_sb);
                }
            } else {
                var_r0_8 = 0;
                var_sb = 0;
            }
            argE5 = var_r0_8;
            var_r2_2 = temp_r6_2->unk0;
            var_ip = var_r0_8;
            argC1 = saved_reg_r7 + 0x3EA4;
            argDC = saved_reg_r7 + 0x3FA8;
            if (var_r2_2 != temp_r1_9) {
                do {
                    if (var_ip != 0) {
                        var_ip->unk0 = (s32) var_r2_2->unk0;
                        var_ip->unk4 = (s32) var_r2_2->unk4;
                        var_ip->unk8 = (s32) var_r2_2->unk8;
                        var_ip->unkC = (s32) var_r2_2->unkC;
                    }
                    var_r2_2 += 0x10;
                    var_ip += 0x10;
                } while (var_r2_2 != temp_r1_9);
            }
            temp_r0_30 = arg7A;
            if (temp_r0_30 == 1) {
                if (var_ip != 0) {
                    var_ip->unk0 = (s32) arg9D->unk0;
                    var_ip->unk4 = (s32) arg9D->unk4;
                    var_ip->unk8 = (s32) arg9D->unk8;
                    var_ip->unkC = (s32) arg9D->unkC;
                }
                var_r5 = var_ip + 0x10;
            } else {
                var_r8 = temp_r0_30;
                var_r2_3 = var_ip;
                if (temp_r0_30 != 0) {
                    do {
                        if (var_r2_3 != 0) {
                            var_r2_3->unk0 = (s32) arg9D->unk0;
                            var_r2_3->unk4 = (s32) arg9D->unk4;
                            var_r2_3->unk8 = (s32) arg9D->unk8;
                            var_r2_3->unkC = (s32) arg9D->unkC;
                        }
                        var_r8 -= 1;
                        var_r2_3 += 0x10;
                    } while (var_r8 != 0);
                }
                var_r5 = var_r2_3;
            }
            temp_r2_2 = temp_r6_2->unk4;
            temp_r0_31 = temp_r6_2->unk0;
            var_r1_8 = temp_r0_31;
            if (temp_r0_31 != temp_r2_2) {
                do {
                    var_r1_8 += 0x10;
                } while (var_r1_8 != temp_r2_2);
            }
            if (temp_r0_31 != 0) {
                free();
            }
            temp_r6_2->unk0 = argE5;
            temp_r6_2->unk4 = var_r5;
            temp_r6_2->unkC = (void *) (argE5 + var_sb);
        }
    }
    if (*argC2 == 0) {

    } else {
        if (arg9C != 0) {
            func_0805E8F0(argBC);
        }
        temp_r1_10 = argBC->unk0;
        (*temp_r1_10)->unk10(&arg3A, temp_r1_10, *(*argBD + (argBC->unkC * 4)));
        temp_r0_32 = saved_reg_r7 + 0x9C;
        temp_r0_33 = temp_r0_32 + 0xC;
        arg33.unk0 = (s32) saved_reg_r7->unk9C;
        arg33.unk4 = (s32) temp_r0_32->unk4;
        arg33.unk8 = (s32) temp_r0_32->unk8;
        temp_r1_11 = &arg33 + 0xC;
        arg33.unkC = (s32) temp_r0_32->unkC;
        temp_r1_11->unk4 = (s32) temp_r0_33->unk4;
        temp_r1_11->unk8 = (s32) temp_r0_33->unk8;
        temp_r1_11->unkC = (s32) temp_r0_33->unkC;
        arg33.unk0 = (u16) *argB9;
        arg33.unk2 = (u16) *argBA;
        arg33.unk8 = 1;
        temp_r0_34 = saved_reg_r7 + 0x40C8;
        arg33.unk4 = func_080074C0(temp_r0_34, temp_r0_34->unk4);
        temp_r5_4 = saved_reg_r7 + 0x40C0;
        arg33.unk6 = func_08007D4C(temp_r5_4, temp_r5_4->unk4);
        temp_r0_35 = func_08008920(saved_reg_r7);
        temp_r1_12 = arg3A.unk0;
        var_r2_4 = 0;
        if (temp_r1_12 != 0) {
            var_r2_4 = arg3A.unk4;
        }
        func_0805E99C(temp_r0_35, temp_r1_12, var_r2_4, &arg33);
        temp_r6_3 = func_08008910(saved_reg_r7);
        temp_r8_4 = arg3C.unk0;
        temp_r2_3 = func_08007D4C(temp_r5_4, temp_r5_4->unk4);
        var_r3_2 = 0;
        if (arg3C.unk0 != 0) {
            var_r3_2 = arg3C.unk4;
        }
        func_08008F0C(&arg1D, temp_r8_4, (temp_r2_3 << 5) + 0x06010000, var_r3_2);
        arg9E = argB4;
        temp_r1_13 = temp_r6_3->unk4;
        if (temp_r1_13 != temp_r6_3->unkC) {
            if (temp_r1_13 != 0) {
                temp_r1_13->unk0 = (u32) argB4->unk0;
                temp_r1_13->unk4 = (s32) argB4->unk4;
                temp_r1_13->unk8 = (s32) argB4->unk8;
                temp_r1_13->unkC = (s32) argB4->unkC;
            }
            temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
        } else {
            arg7C = 1;
            temp_r4_11 = (s32) (temp_r1_13 - temp_r6_3->unk0) >> 4;
            arg7B = temp_r4_11;
            var_r1_9 = &arg7B;
            if ((u32) temp_r4_11 < (u32) arg7C) {
                var_r1_9 = &arg7C;
            }
            temp_r0_36 = temp_r4_11 + *var_r1_9;
            if (temp_r0_36 != 0) {
                temp_r4_12 = temp_r0_36 * 0x10;
                var_r0_9 = malloc(temp_r4_12);
                var_sb_2 = temp_r4_12;
                if (var_r0_9 == 0) {
                    var_r0_9 = func_080D3BC0(var_sb_2);
                }
            } else {
                var_r0_9 = 0;
                var_sb_2 = 0;
            }
            argE5 = var_r0_9;
            var_r2_5 = temp_r6_3->unk0;
            var_ip_2 = var_r0_9;
            if (var_r2_5 != temp_r1_13) {
                do {
                    if (var_ip_2 != 0) {
                        var_ip_2->unk0 = (s32) var_r2_5->unk0;
                        var_ip_2->unk4 = (s32) var_r2_5->unk4;
                        var_ip_2->unk8 = (s32) var_r2_5->unk8;
                        var_ip_2->unkC = (s32) var_r2_5->unkC;
                    }
                    var_r2_5 += 0x10;
                    var_ip_2 += 0x10;
                } while (var_r2_5 != temp_r1_13);
            }
            temp_r0_37 = arg7C;
            if (temp_r0_37 == 1) {
                if (var_ip_2 != 0) {
                    var_ip_2->unk0 = (s32) arg9E->unk0;
                    var_ip_2->unk4 = (s32) arg9E->unk4;
                    var_ip_2->unk8 = (s32) arg9E->unk8;
                    var_ip_2->unkC = (s32) arg9E->unkC;
                }
                var_r5_2 = var_ip_2 + 0x10;
            } else {
                var_r8_2 = temp_r0_37;
                var_r2_6 = var_ip_2;
                if (temp_r0_37 != 0) {
                    do {
                        if (var_r2_6 != 0) {
                            var_r2_6->unk0 = (s32) arg9E->unk0;
                            var_r2_6->unk4 = (s32) arg9E->unk4;
                            var_r2_6->unk8 = (s32) arg9E->unk8;
                            var_r2_6->unkC = (s32) arg9E->unkC;
                        }
                        var_r8_2 -= 1;
                        var_r2_6 += 0x10;
                    } while (var_r8_2 != 0);
                }
                var_r5_2 = var_r2_6;
            }
            temp_r2_4 = temp_r6_3->unk4;
            temp_r0_38 = temp_r6_3->unk0;
            var_r1_10 = temp_r0_38;
            if (temp_r0_38 != temp_r2_4) {
                do {
                    var_r1_10 += 0x10;
                } while (var_r1_10 != temp_r2_4);
            }
            if (temp_r0_38 != 0) {
                free();
            }
            temp_r6_3->unk0 = argE5;
            temp_r6_3->unk4 = var_r5_2;
            temp_r6_3->unkC = (void *) (argE5 + var_sb_2);
        }
    }
    if (*argC8 == 0) {

    } else {
        temp_r4_13 = saved_reg_r7 + 0xC0;
        if (arg9C != 0) {
            func_0805E8F0(temp_r4_13);
        }
        temp_r1_14 = saved_reg_r7->unkC0;
        (*temp_r1_14)->unk10(&arg3A, temp_r1_14, *(saved_reg_r7->unkC4 + (temp_r4_13->unkC * 4)));
        temp_r0_39 = saved_reg_r7 + 0xD4;
        temp_r0_40 = temp_r0_39 + 0xC;
        arg33.unk0 = (s32) saved_reg_r7->unkD4;
        arg33.unk4 = (s32) temp_r0_39->unk4;
        arg33.unk8 = (s32) temp_r0_39->unk8;
        temp_r1_15 = &arg33 + 0xC;
        arg33.unkC = (s32) temp_r0_39->unkC;
        temp_r1_15->unk4 = (s32) temp_r0_40->unk4;
        temp_r1_15->unk8 = (s32) temp_r0_40->unk8;
        temp_r1_15->unkC = (s32) temp_r0_40->unkC;
        arg33.unk0 = (u16) *argC3;
        arg33.unk2 = (u16) *argC4;
        arg33.unk8 = 1;
        temp_r0_41 = saved_reg_r7 + 0x40C8;
        arg33.unk4 = func_080074C0(temp_r0_41, temp_r0_41->unk4);
        temp_r5_5 = saved_reg_r7 + 0x40C0;
        arg33.unk6 = func_08007D4C(temp_r5_5, temp_r5_5->unk4);
        temp_r0_42 = func_08008920(saved_reg_r7);
        temp_r1_16 = arg3A.unk0;
        var_r2_7 = 0;
        if (temp_r1_16 != 0) {
            var_r2_7 = arg3A.unk4;
        }
        func_0805E99C(temp_r0_42, temp_r1_16, var_r2_7, &arg33);
        temp_r6_4 = func_08008910(saved_reg_r7);
        temp_r8_5 = arg3C.unk0;
        temp_r2_5 = func_08007D4C(temp_r5_5, temp_r5_5->unk4);
        var_r3_3 = 0;
        if (arg3C.unk0 != 0) {
            var_r3_3 = arg3C.unk4;
        }
        func_08008F0C(&arg1D, temp_r8_5, (temp_r2_5 << 5) + 0x06010000, var_r3_3);
        temp_r1_17 = temp_r6_4->unk4;
        if (temp_r1_17 != temp_r6_4->unkC) {
            if (temp_r1_17 != 0) {
                temp_r1_17->unk0 = (u32) argB4->unk0;
                temp_r1_17->unk4 = (s32) argB4->unk4;
                temp_r1_17->unk8 = (s32) argB4->unk8;
                temp_r1_17->unkC = (s32) argB4->unkC;
            }
            temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
        } else {
            arg7E = 1;
            temp_r4_14 = (s32) (temp_r1_17 - temp_r6_4->unk0) >> 4;
            arg7D = temp_r4_14;
            var_r1_11 = &arg7D;
            if ((u32) temp_r4_14 < (u32) arg7E) {
                var_r1_11 = &arg7E;
            }
            temp_r0_43 = temp_r4_14 + *var_r1_11;
            if (temp_r0_43 != 0) {
                temp_r4_15 = temp_r0_43 * 0x10;
                var_r0_10 = malloc(temp_r4_15);
                var_sb_3 = temp_r4_15;
                if (var_r0_10 == 0) {
                    var_r0_10 = func_080D3BC0(var_sb_3);
                }
            } else {
                var_r0_10 = 0;
                var_sb_3 = 0;
            }
            argE5 = var_r0_10;
            var_r2_8 = temp_r6_4->unk0;
            var_ip_3 = var_r0_10;
            if (var_r2_8 != temp_r1_17) {
                do {
                    if (var_ip_3 != 0) {
                        var_ip_3->unk0 = (s32) var_r2_8->unk0;
                        var_ip_3->unk4 = (s32) var_r2_8->unk4;
                        var_ip_3->unk8 = (s32) var_r2_8->unk8;
                        var_ip_3->unkC = (s32) var_r2_8->unkC;
                    }
                    var_r2_8 += 0x10;
                    var_ip_3 += 0x10;
                } while (var_r2_8 != temp_r1_17);
            }
            temp_r0_44 = arg7E;
            if (temp_r0_44 == 1) {
                if (var_ip_3 != 0) {
                    var_ip_3->unk0 = (u32) argB4->unk0;
                    var_ip_3->unk4 = (s32) argB4->unk4;
                    var_ip_3->unk8 = (s32) argB4->unk8;
                    var_ip_3->unkC = (s32) argB4->unkC;
                }
                var_r5_3 = var_ip_3 + 0x10;
            } else {
                var_r8_3 = temp_r0_44;
                var_r2_9 = var_ip_3;
                if (temp_r0_44 != 0) {
                    do {
                        if (var_r2_9 != 0) {
                            var_r2_9->unk0 = (u32) argB4->unk0;
                            var_r2_9->unk4 = (s32) argB4->unk4;
                            var_r2_9->unk8 = (s32) argB4->unk8;
                            var_r2_9->unkC = (s32) argB4->unkC;
                        }
                        var_r8_3 -= 1;
                        var_r2_9 += 0x10;
                    } while (var_r8_3 != 0);
                }
                var_r5_3 = var_r2_9;
            }
            temp_r2_6 = temp_r6_4->unk4;
            temp_r0_45 = temp_r6_4->unk0;
            var_r1_12 = temp_r0_45;
            if (temp_r0_45 != temp_r2_6) {
                do {
                    var_r1_12 += 0x10;
                } while (var_r1_12 != temp_r2_6);
            }
            if (temp_r0_45 != 0) {
                free();
            }
            temp_r6_4->unk0 = argE5;
            temp_r6_4->unk4 = var_r5_3;
            temp_r6_4->unkC = (void *) (argE5 + var_sb_3);
        }
    }
    var_sb_4 = 0;
    temp_r1_18 = (s16) saved_reg_r7->unk20;
    if ((s32) (*argC1 + 0x30) < (s32) temp_r1_18) {
        var_r1_13 = saved_reg_r7 + 0x3EA4;
        do {
            var_r1_13 += 0x10;
            var_sb_4 += 1;
        } while ((s32) (*var_r1_13 + 0x30) < (s32) temp_r1_18);
    }
    arg9F = 0;
    if (var_sb_4 >= (u32) saved_reg_r7->unk3EA0) {

    } else {
        argA0 = saved_reg_r7 + 0x3EA0;
loop_322:
        temp_r1_19 = var_sb_4 * 0x10;
        temp_r5_6 = argA0 + (temp_r1_19 + 4);
        argAD = var_sb_4 + 1;
        argAF = temp_r1_19;
        if ((s32) temp_r5_6->unk0 > (s32) ((s16) saved_reg_r7->unk20 + 0xA0)) {

        } else {
            temp_r4_16 = arg9F * 8;
            temp_r0_46 = temp_r4_16 + saved_reg_r7 + 0x40D0;
            argA1 = (s32) func_08007D4C(temp_r0_46, temp_r0_46->unk4);
            temp_r4_17 = temp_r4_16 + saved_reg_r7 + 0x4120;
            argA2 = (s32) func_080074C0(temp_r4_17, temp_r4_17->unk4);
            temp_r6_5 = func_08008910(saved_reg_r7);
            func_08008F0C(&arg1D, temp_r5_6->unk8, (argA1 << 5) + 0x06010000, 0x80U);
            argA3 = argB4;
            temp_r1_20 = temp_r6_5->unk4;
            if (temp_r1_20 != temp_r6_5->unkC) {
                if (temp_r1_20 != 0) {
                    temp_r1_20->unk0 = (u32) argB4->unk0;
                    temp_r1_20->unk4 = (s32) argB4->unk4;
                    temp_r1_20->unk8 = (s32) argB4->unk8;
                    temp_r1_20->unkC = (s32) argB4->unkC;
                }
                temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
                var_sb_5 = argA2 << 5;
                argDD = &arg83;
                argAE = arg9F + 1;
            } else {
                arg80 = 1;
                temp_r4_18 = (s32) (temp_r1_20 - temp_r6_5->unk0) >> 4;
                var_r0_11 = &arg7F;
                *var_r0_11 = temp_r4_18;
                if ((u32) temp_r4_18 < (u32) arg80) {
                    var_r0_11 = &arg80;
                }
                temp_r0_47 = temp_r4_18 + *var_r0_11;
                if (temp_r0_47 != 0) {
                    temp_r4_19 = temp_r0_47 * 0x10;
                    var_r0_12 = malloc(temp_r4_19);
                    var_sl = temp_r4_19;
                    if (var_r0_12 == 0) {
                        var_r0_12 = func_080D3BC0(var_sl);
                    }
                } else {
                    var_r0_12 = 0;
                    var_sl = 0;
                }
                argE5 = var_r0_12;
                var_r2_10 = temp_r6_5->unk0;
                var_ip_4 = var_r0_12;
                argAD = var_sb_4 + 1;
                var_sb_5 = argA2 << 5;
                argDD = &arg83;
                argAE = arg9F + 1;
                if (var_r2_10 != temp_r1_20) {
                    do {
                        if (var_ip_4 != 0) {
                            var_ip_4->unk0 = (s32) var_r2_10->unk0;
                            var_ip_4->unk4 = (s32) var_r2_10->unk4;
                            var_ip_4->unk8 = (s32) var_r2_10->unk8;
                            var_ip_4->unkC = (s32) var_r2_10->unkC;
                        }
                        var_r2_10 += 0x10;
                        var_ip_4 += 0x10;
                    } while (var_r2_10 != temp_r1_20);
                }
                temp_r0_48 = arg80;
                if (temp_r0_48 == 1) {
                    if (var_ip_4 != 0) {
                        var_ip_4->unk0 = (s32) argA3->unk0;
                        var_ip_4->unk4 = (s32) argA3->unk4;
                        var_ip_4->unk8 = (s32) argA3->unk8;
                        var_ip_4->unkC = (s32) argA3->unkC;
                    }
                    var_r5_4 = var_ip_4 + 0x10;
                } else {
                    var_r8_4 = temp_r0_48;
                    var_r2_11 = var_ip_4;
                    if (temp_r0_48 != 0) {
                        do {
                            if (var_r2_11 != 0) {
                                var_r2_11->unk0 = (s32) argA3->unk0;
                                var_r2_11->unk4 = (s32) argA3->unk4;
                                var_r2_11->unk8 = (s32) argA3->unk8;
                                var_r2_11->unkC = (s32) argA3->unkC;
                            }
                            var_r8_4 -= 1;
                            var_r2_11 += 0x10;
                        } while (var_r8_4 != 0);
                    }
                    var_r5_4 = var_r2_11;
                }
                temp_r2_7 = temp_r6_5->unk4;
                temp_r0_49 = temp_r6_5->unk0;
                var_r1_14 = temp_r0_49;
                if (temp_r0_49 != temp_r2_7) {
                    do {
                        var_r1_14 += 0x10;
                    } while (var_r1_14 != temp_r2_7);
                }
                if (temp_r0_49 != 0) {
                    free();
                }
                temp_r6_5->unk0 = argE5;
                temp_r6_5->unk4 = var_r5_4;
                temp_r6_5->unkC = (void *) (argE5 + var_sl);
            }
            temp_r6_6 = func_08008910(saved_reg_r7);
            func_08008F0C(&arg1D, (argA0 + (argAF + 4))->unkC, var_sb_5 + 0x05000200, 0x20U);
            temp_r1_21 = temp_r6_6->unk4;
            if (temp_r1_21 != temp_r6_6->unkC) {
                if (temp_r1_21 != 0) {
                    temp_r1_21->unk0 = (u32) argB4->unk0;
                    temp_r1_21->unk4 = (s32) argB4->unk4;
                    temp_r1_21->unk8 = (s32) argB4->unk8;
                    temp_r1_21->unkC = (s32) argB4->unkC;
                }
                temp_r6_6->unk4 = (void *) (temp_r6_6->unk4 + 0x10);
            } else {
                arg82 = 1;
                temp_r4_20 = (s32) (temp_r1_21 - temp_r6_6->unk0) >> 4;
                var_r0_13 = &arg81;
                *var_r0_13 = temp_r4_20;
                if ((u32) temp_r4_20 < (u32) arg82) {
                    var_r0_13 = &arg82;
                }
                temp_r0_50 = temp_r4_20 + *var_r0_13;
                if (temp_r0_50 != 0) {
                    temp_r4_21 = temp_r0_50 * 0x10;
                    var_r0_14 = malloc(temp_r4_21);
                    var_sb_6 = temp_r4_21;
                    if (var_r0_14 == 0) {
                        var_r0_14 = func_080D3BC0(var_sb_6);
                    }
                } else {
                    var_r0_14 = 0;
                    var_sb_6 = 0;
                }
                argE5 = var_r0_14;
                var_r2_12 = temp_r6_6->unk0;
                var_ip_5 = var_r0_14;
                if (var_r2_12 != temp_r1_21) {
                    do {
                        if (var_ip_5 != 0) {
                            var_ip_5->unk0 = (s32) var_r2_12->unk0;
                            var_ip_5->unk4 = (s32) var_r2_12->unk4;
                            var_ip_5->unk8 = (s32) var_r2_12->unk8;
                            var_ip_5->unkC = (s32) var_r2_12->unkC;
                        }
                        var_r2_12 += 0x10;
                        var_ip_5 += 0x10;
                    } while (var_r2_12 != temp_r1_21);
                }
                temp_r0_51 = arg82;
                if (temp_r0_51 == 1) {
                    if (var_ip_5 != 0) {
                        var_ip_5->unk0 = (u32) argB4->unk0;
                        var_ip_5->unk4 = (s32) argB4->unk4;
                        var_ip_5->unk8 = (s32) argB4->unk8;
                        var_ip_5->unkC = (s32) argB4->unkC;
                    }
                    var_r5_5 = var_ip_5 + 0x10;
                } else {
                    var_r8_5 = temp_r0_51;
                    var_r2_13 = var_ip_5;
                    if (temp_r0_51 != 0) {
                        do {
                            if (var_r2_13 != 0) {
                                var_r2_13->unk0 = (u32) argB4->unk0;
                                var_r2_13->unk4 = (s32) argB4->unk4;
                                var_r2_13->unk8 = (s32) argB4->unk8;
                                var_r2_13->unkC = (s32) argB4->unkC;
                            }
                            var_r8_5 -= 1;
                            var_r2_13 += 0x10;
                        } while (var_r8_5 != 0);
                    }
                    var_r5_5 = var_r2_13;
                }
                temp_r2_8 = temp_r6_6->unk4;
                temp_r0_52 = temp_r6_6->unk0;
                var_r1_15 = temp_r0_52;
                if (temp_r0_52 != temp_r2_8) {
                    do {
                        var_r1_15 += 0x10;
                    } while (var_r1_15 != temp_r2_8);
                }
                if (temp_r0_52 != 0) {
                    free();
                }
                temp_r6_6->unk0 = argE5;
                temp_r6_6->unk4 = var_r5_5;
                temp_r6_6->unkC = (void *) (argE5 + var_sb_6);
            }
            temp_r4_22 = func_08008920(saved_reg_r7);
            temp_r1_22 = argA0 + (argAF + 4);
            arg4 = argA2;
            arg5 = 1;
            arg6 = (void *)1;
            arg7 = 0;
            func_0804EA94(argDD, temp_r1_22->unk4, temp_r1_22->unk0 - (s16) saved_reg_r7->unk20, argA1);
            temp_r2_9 = *temp_r4_22;
            if ((u32) temp_r2_9 <= 0x7FU) {
                temp_r0_53 = temp_r4_22 + ((temp_r2_9 * 8) + 4);
                temp_r0_53->unk0 = (s32) arg83;
                temp_r0_53->unk4 = (u16) argDD->unk4;
                *temp_r4_22 = temp_r2_9 + 1;
            }
            arg9F = argAE;
        }
        var_sb_4 = argAD;
        if (var_sb_4 < (u32) *argA0) {
            goto loop_322;
        }
    }
    var_sb_7 = 0;
    temp_r1_23 = (s16) saved_reg_r7->unk20;
    if ((s32) (*argDC + 0x30) < (s32) temp_r1_23) {
        var_r1_16 = saved_reg_r7 + 0x3FA8;
        do {
            var_r1_16 += 0xC;
            var_sb_7 += 1;
        } while ((s32) (*var_r1_16 + 0x30) < (s32) temp_r1_23);
    }
    var_r1_17 = 0x3FA4;
    if (var_sb_7 >= (u32) saved_reg_r7->unk3FA4) {
        var_r1_17 = SECOND_REG(sub_0806C492());
    }
    argA4 = saved_reg_r7 + var_r1_17;
loop_391:
    temp_r4_23 = argA4 + ((var_sb_7 * 0xC) + 4);
    argAD = var_sb_7 + 1;
    if ((s32) temp_r4_23->unk0 > (s32) ((s16) saved_reg_r7->unk20 + 0xA0)) {

    } else {
        temp_r6_7 = func_08008910(saved_reg_r7);
        func_08008F0C(&arg1D, temp_r4_23->unk4, temp_r4_23->unk8, 0x300U);
        argA5 = argB4;
        temp_r1_24 = temp_r6_7->unk4;
        if (temp_r1_24 != temp_r6_7->unkC) {
            if (temp_r1_24 != 0) {
                temp_r1_24->unk0 = (u32) argB4->unk0;
                temp_r1_24->unk4 = (s32) argB4->unk4;
                temp_r1_24->unk8 = (s32) argB4->unk8;
                temp_r1_24->unkC = (s32) argB4->unkC;
            }
            temp_r6_7->unk4 = (void *) (temp_r6_7->unk4 + 0x10);
        } else {
            arg86 = 1;
            temp_r4_24 = (s32) (temp_r1_24 - temp_r6_7->unk0) >> 4;
            var_r0_15 = &arg85;
            *var_r0_15 = temp_r4_24;
            if ((u32) temp_r4_24 < (u32) arg86) {
                var_r0_15 = &arg86;
            }
            temp_r0_54 = temp_r4_24 + *var_r0_15;
            if (temp_r0_54 != 0) {
                temp_r4_25 = temp_r0_54 * 0x10;
                var_r0_16 = malloc(temp_r4_25);
                var_sl_2 = temp_r4_25;
                if (var_r0_16 == 0) {
                    var_r0_16 = func_080D3BC0(var_sl_2);
                }
            } else {
                var_r0_16 = 0;
                var_sl_2 = 0;
            }
            argE5 = var_r0_16;
            var_r2_14 = temp_r6_7->unk0;
            var_ip_6 = var_r0_16;
            argAD = var_sb_7 + 1;
            if (var_r2_14 != temp_r1_24) {
                do {
                    if (var_ip_6 != 0) {
                        var_ip_6->unk0 = (s32) var_r2_14->unk0;
                        var_ip_6->unk4 = (s32) var_r2_14->unk4;
                        var_ip_6->unk8 = (s32) var_r2_14->unk8;
                        var_ip_6->unkC = (s32) var_r2_14->unkC;
                    }
                    var_r2_14 += 0x10;
                    var_ip_6 += 0x10;
                } while (var_r2_14 != temp_r1_24);
            }
            temp_r0_55 = arg86;
            if (temp_r0_55 == 1) {
                if (var_ip_6 != 0) {
                    var_ip_6->unk0 = (s32) argA5->unk0;
                    var_ip_6->unk4 = (s32) argA5->unk4;
                    var_ip_6->unk8 = (s32) argA5->unk8;
                    var_ip_6->unkC = (s32) argA5->unkC;
                }
                var_r5_6 = var_ip_6 + 0x10;
            } else {
                var_r8_6 = temp_r0_55;
                var_r2_15 = var_ip_6;
                if (temp_r0_55 != 0) {
                    do {
                        if (var_r2_15 != 0) {
                            var_r2_15->unk0 = (s32) argA5->unk0;
                            var_r2_15->unk4 = (s32) argA5->unk4;
                            var_r2_15->unk8 = (s32) argA5->unk8;
                            var_r2_15->unkC = (s32) argA5->unkC;
                        }
                        var_r8_6 -= 1;
                        var_r2_15 += 0x10;
                    } while (var_r8_6 != 0);
                }
                var_r5_6 = var_r2_15;
            }
            temp_r2_10 = temp_r6_7->unk4;
            temp_r0_56 = temp_r6_7->unk0;
            var_r1_18 = temp_r0_56;
            if (temp_r0_56 != temp_r2_10) {
                do {
                    var_r1_18 += 0x10;
                } while (var_r1_18 != temp_r2_10);
            }
            if (temp_r0_56 != 0) {
                free();
            }
            temp_r6_7->unk0 = argE5;
            temp_r6_7->unk4 = var_r5_6;
            temp_r6_7->unkC = (void *) (argE5 + var_sl_2);
        }
    }
    var_sb_7 = argAD;
    if (var_sb_7 < (u32) *argA4) {
        goto loop_391;
    }
    sub_0806C492();
}
