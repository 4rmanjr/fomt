# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080182C8/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080182C8/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080182C8/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080182C8/opencode/common.h" 2
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef struct { u8 pad[0x24]; u8 v; } S_AD0;typedef struct { u8 pad[0x25]; u8 v; } S_AD8;typedef struct { u8 pad[0x26]; u8 v; } S_AE0;typedef struct { u8 pad[0x14]; u8 v; } S_CD8;typedef struct { u8 pad[3]; u8 v; } S_39C;typedef struct { u8 pad[0x58]; u8 v; } S_601C;typedef struct { u8 pad[0x14]; u8 v; } S_B68;typedef struct { u8 pad[0x26]; u8 v; } S_AEC;typedef struct { u8 pad[0xB30]; u8 v; } S_44E0;typedef struct { u8 pad[0x92C]; u8 v; } S_4D8;typedef struct {
    s32 unk0;
    s32 unk4;
    void (*unk8)(void *, s32);
} Vtbl;typedef struct {
    Vtbl *vtbl;
} Obj;
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_080182C8/opencode/func.c" 2
void *GetMapData(s32);
u32 GetUpgradeLevel__C9FarmHouse(s32);
s32 free();
s32 func_030004DC(void *, s32, s32, s32);
s32 func_08008F0C(s32 *, void *, s32, s32);
s32 func_0803ACD8(void *, void *);
s32 func_0803B128(void *, void *);
s32 func_0803B368(void *, s32 *);
s32 func_0805E860(void *, s32);
s32 func_0805E8F0(void *);
s32 func_08094A3C(s32 *, s32);
s32 func_080A480C(s32 *, void *, void *);
s32 func_080A4944(s32 *, void *, s32);
s32 func_080AB410(s32, s32 *, void *);
void *func_080D3BC0(s32);
void *malloc(s32);
extern s32 gUnk_0300040C;
extern s32 gUnk_080F06FD;

typedef struct GenObj {
    struct GenObj *unk0;
    struct GenObj *unk2;
    s32 unk3;
    struct GenObj *unk4;
    struct GenObj *unk6;
    struct GenObj *unk8;
    struct GenObj *unk9;
    struct GenObj *unkA;
    struct GenObj *unkC;
    struct GenObj *unk10;
    struct GenObj *unk14;
    s32 unk18;
    s32 unk1C;
    u8 _pad20[4];
    struct GenObj *unk24;
    struct GenObj *unk28;
    struct GenObj *unk2C;
    u8 _pad30[4];
    struct GenObj *unk34;
    u8 _pad38[4];
    struct GenObj *unk3C;
    struct GenObj *unk3D;
    struct GenObj *unk3E;
    struct GenObj *unk3F;
    u8 _pad43[5];
    s32 unk48;
    u8 _pad4C[54];
    s32 unk82;
    u8 _pad86[10];
    struct GenObj *unk90;
    u8 _pad94[8];
    struct GenObj *unk9C;
    u8 _padA0[69];
    struct GenObj *unkE5;
    u8 _padE9[175];
    s32 unk198;
    u8 _pad19C[2680];
    struct GenObj *unkC14;
    struct GenObj *unkC15;
    u8 _padC19[407];
    s32 unkDB0;
    s32 unkDB1;
    u8 _padDB5[623];
    s32 unk1024;
    s32 unk1028;
    s32 unk102C;
    u8 _pad1030[8];
    s32 unk1038;
    u8 _pad103C[28];
    s32 unk1058;
    s32 unk105C;
    s32 unk1060;
    s32 unk1064;
    s32 unk1068;
    u8 _pad106C[8];
    s32 unk1074;
    s32 unk1078;
    s32 unk107C;
} GenObj;
void func_080182C8(GenObj *arg0, void **arg1, ? arg206, ? arg306, ? arg30A, s32 arg312, void *arg313, u32 arg315, u32 arg316, void **arg317, u32 arg318, void **arg319, u32 arg31A, void **arg31B, s32 arg31C, u32 arg31D, s32 arg31E, void **arg31F, u32 arg320, s32 arg321, void **arg322, void *arg323, s32 arg324, u32 arg325, u32 arg326, void *arg327, void **arg328, u32 arg329, s32 arg32A, u8 *arg32B, u8 *arg32C, void *arg32D, s32 *arg32E, u8 *arg32F, s32 arg330, s32 **arg331, void *arg332, void *arg333) {
    s32 *var_r0_26;
    s16 temp_r0_3;
    s16 temp_r1_30;
    s16 temp_r1_33;
    s16 temp_r4_20;
    s16 temp_r4_2;
    GenObj *temp_r4_10;
    GenObj *temp_r4_11;
    s32 *temp_r4_12;
    s32 *temp_r4_13;
    s32 *temp_r4_14;
    GenObj *temp_r4_3;
    s32 *temp_r4_4;
    GenObj *temp_r4_5;
    GenObj *temp_r4_6;
    GenObj *temp_r4_7;
    s32 *temp_r4_8;
    s32 *temp_r4_9;
    GenObj *temp_r5;
    GenObj *temp_r5_4;
    GenObj *temp_r6_3;
    s32 *temp_r6_4;
    s32 *temp_r8_10;
    s32 *var_r0;
    s32 *var_r0_15;
    s32 *var_r0_16;
    s32 *var_r4_2;
    s32 *var_r4_3;
    GenObj *var_r5_2;
    GenObj *var_r5_3;
    GenObj *var_r5_4;
    s32 *var_r7_2;
    s32 *var_r7_3;
    s32 *var_r7_5;
    s32 temp_ip;
    s32 temp_r0_10;
    s32 temp_r0_13;
    s32 temp_r0_16;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_9;
    s32 temp_r1_11;
    s32 temp_r1_13;
    s32 temp_r1_15;
    s32 temp_r1_17;
    s32 temp_r1_19;
    s32 temp_r1_21;
    s32 temp_r1_23;
    s32 temp_r1_24;
    s32 temp_r1_25;
    GenObj *temp_r1_27;
    GenObj *temp_r1_28;
    s32 temp_r1_32;
    s32 temp_r1_35;
    s32 temp_r1_37;
    s32 temp_r1_38;
    s32 temp_r1_3;
    s32 temp_r1_5;
    s32 temp_r1_7;
    s32 temp_r1_9;
    s32 temp_r2_5;
    GenObj *temp_r4_15;
    GenObj *temp_r4_16;
    s32 temp_r4_17;
    s32 temp_r4_18;
    s32 temp_r4_22;
    s32 temp_r4_23;
    s32 temp_r5_5;
    GenObj *temp_r5_6;
    s32 temp_r5_7;
    s32 temp_r5_9;
    s32 temp_r6_5;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    s32 temp_r7_4;
    s32 temp_r7_5;
    s32 temp_r7_6;
    s32 temp_r7_7;
    s32 temp_r7_8;
    s32 temp_r8;
    s32 temp_r8_2;
    s32 temp_r8_3;
    s32 temp_r8_4;
    s32 temp_r8_5;
    s32 temp_r8_6;
    s32 temp_r8_7;
    s32 temp_r8_8;
    s32 temp_r8_9;
    s32 temp_sl_10;
    s32 temp_sl_8;
    s32 temp_sl_9;
    s32 var_r0_10;
    s32 var_r0_11;
    s32 var_r0_12;
    s32 var_r0_14;
    s32 var_r0_17;
    s32 var_r0_19;
    s32 var_r0_20;
    s32 var_r0_21;
    s32 var_r0_22;
    s32 var_r0_23;
    s32 var_r0_24;
    s32 var_r0_25;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_7;
    s32 var_r0_8;
    s32 var_r0_9;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_5;
    s32 var_r2;
    s32 var_r3_2;
    s32 var_r3_3;
    s32 var_r3_4;
    s32 var_r5;
    s32 var_r7;
    s32 var_r7_4;
    s32 var_r7_6;
    s32 var_r8;
    s32 var_r8_2;
    s32 var_r8_3;
    s8 *var_r1;
    s8 *var_r1_4;
    s8 *var_r1_6;
    s8 *var_r4_5;
    s8 *var_r8_4;
    s8 var_r0_13;
    s8 var_r0_6;
    u32 *var_r0_27;
    u32 temp_r0_11;
    u32 temp_r0_14;
    u32 temp_r0_17;
    u32 temp_r0_2;
    u32 temp_r0_8;
    u32 temp_r2_6;
    u32 temp_r4_19;
    u32 temp_r4_21;
    u32 temp_r5_10;
    u32 temp_r5_2;
    u32 temp_r5_3;
    u32 temp_r5_8;
    u32 var_r3;
    u32 var_r3_6;
    u32 var_r5_5;
    u8 *var_r2_2;
    u8 *var_r3_7;
    u8 temp_r0_12;
    u8 temp_r1_40;
    u8 temp_r2_4;
    u8 temp_r4_24;
    u8 temp_r6_7;
    u8 var_r2_5;
    void **temp_r1_10;
    void **temp_r1_12;
    void **temp_r1_14;
    void **temp_r1_16;
    void **temp_r1_18;
    void **temp_r1_20;
    void **temp_r1_22;
    void **temp_r1_2;
    void **temp_r1_31;
    void **temp_r1_34;
    void **temp_r1_36;
    void **temp_r1_39;
    void **temp_r1_4;
    void **temp_r1_6;
    void **temp_r1_8;
    void **temp_r2_3;
    void **temp_r3;
    void **temp_r6;
    void **temp_r6_2;
    void **temp_r6_6;
    void **temp_sl;
    void **temp_sl_2;
    void **temp_sl_3;
    void **temp_sl_4;
    void **temp_sl_5;
    void **temp_sl_6;
    void **temp_sl_7;
    void **var_r0_18;
    void **var_r4_7;
    void **var_sl;
    void **var_sl_2;
    void **var_sl_3;
    GenObj *temp_r0;
    void *temp_r0_15;
    void *temp_r0_18;
    void *temp_r0_4;
    void *temp_r0_7;
    GenObj *temp_r1;
    GenObj *temp_r1_26;
    GenObj *temp_r1_29;
    GenObj *temp_r1_41;
    GenObj *temp_r1_42;
    GenObj *temp_r1_43;
    void *temp_r1_44;
    GenObj *temp_r2;
    GenObj *temp_r2_2;
    void *temp_r2_7;
    void *temp_r2_8;
    GenObj *temp_r3_2;
    GenObj *temp_r4;
    GenObj *temp_r7_10;
    void *temp_r7_9;
    void *var_r0_28;
    void *var_r1_10;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r1_9;
    GenObj *var_r2_3;
    GenObj *var_r2_4;
    GenObj *var_r3_5;
    void *var_r4;
    void *var_r4_4;
    void *var_r4_6;
    void *var_r5_6;
    void *var_r6;
    GenObj *var_r7_7;
    void *var_r7_8;

    arg317 = arg1;
    arg312 = 0;
    var_r1 = (GenObj *)((u8 *)arg0 + 0x19C);
    var_r2 = 0x20;
    do {
        *var_r1 = (s8) arg312;
        var_r2 -= 1;
        var_r1 += 1;
    } while (var_r2 > 0);
    temp_r2 = arg0->unk1024;
    if (temp_r2->unk9C != 0) {
        func_0803ACD8(temp_r2, *arg317);
        temp_r2->unk9C = 0U;
    }
    temp_r2_2 = arg0->unk107C;
    if ((temp_r2_2 != 0) && (temp_r2_2->unkE5 != 0)) {
        func_0803B128(temp_r2_2, *arg317);
        temp_r2_2->unkE5 = 0U;
    }
    temp_r0 = arg0->unk4;
    temp_r6 = arg317;
    ((void (*)(void *,...))(temp_r0->unk90->unk10))(temp_r0, temp_r6->unk0, temp_r6->unk4, temp_r6->unkC);
    temp_r4 = (GenObj *)((u8 *)arg0 + 0x19C);
    arg0->unkDB1 = (u8) arg0->unkDB0;
    var_r3 = 0;
    arg32B = (GenObj *)((u8 *)arg0 + 0xDB0);
    arg32C = (GenObj *)((u8 *)arg0 + 0xDB1);
    if ((u32) arg0->unkDB1 > 0U) {
        var_r2_2 = (GenObj *)((u8 *)arg0 + 0xD1D);
        do {
            if (((u8) *var_r2_2 >> 7) == 0) {
                ((GenObj *)((u8 *)arg0 + 0x1BC) + ((s8) *var_r2_2 * 0x84))->unk80 = 0xFF;
            }
            var_r2_2 += 0xC;
            var_r3 += 1;
        } while (var_r3 < (u32) temp_r4->unkC15);
    }
    temp_r4->unkC14 = 0;
    temp_r0_2 = 0x7C - *arg317->unk8;
    arg318 = temp_r0_2;
    if (temp_r0_2 <= 0x80U) {
        unksp14.unk0 = 0U;
        var_r0 = &unksp18;
        var_r1_2 = 3;
        temp_r6_2 = (GenObj *)((u8 *)arg0 + 8);
        arg328 = &arg313;
        arg32D = (GenObj *)((u8 *)arg0 + 0x198);
        arg32E = &arg206;
        do {
            *var_r0 = 0;
            var_r0 += 0x204;
            var_r1_2 -= 1;
        } while (var_r1_2 != -1);
        temp_r4_2 = ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
        temp_r0_3 = ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
        temp_r2_3 = arg317;
        arg306.unk0 = (void *) temp_r2_3->unk0;
        arg306.unk4 = (s32) temp_r2_3->unk4;
        arg306.unk8 = &unksp14;
        arg306.unkC = temp_r4_2;
        arg306.unkE = temp_r0_3;
        arg322 = temp_r6_2;
        arg319 = temp_r6_2;
        temp_r1 = *arg322;
        if (temp_r1 != 0) {
            ((void (*)(void *,...))(temp_r1->unk14->unk1C))(temp_r1, &arg306);
        }
        temp_r0_4 = arg0->unk107C;
        if (temp_r0_4 != 0) {
            func_0803B368(temp_r0_4, &unksp14);
        }
        temp_r0_5 = arg0->unk1028;
        if (temp_r0_5 != 0) {
            func_080AB410(temp_r0_5, &unksp14, arg306.unk0);
        }
        arg313 = arg306.unk0;
        arg328->unk4 = (s32 *) arg306.unk8;
        temp_r4_3 = arg0->unk105C;
        if (temp_r4_3 == 0) {

        } else {
            var_r5 = 0;
            if (temp_r4_3->unk3F == 0) {
                temp_r0_6 = func_0805E8F0((GenObj *)((u8 *)temp_r4_3 + 0x28));
                if ((s32) (temp_r0_6 << 0x1E) < 0) {
                    temp_r4_3->unk3C = 1;
                }
                var_r0_2 = temp_r0_6;
            } else {
                temp_r4_3->unk3F = 0U;
                var_r0_2 = 2;
            }
            if (((s32) (var_r0_2 << 0x1D) < 0) && (arg0->unk1060 != 0)) {
                var_r5 = 1;
            }
            if (var_r5 != 0) {
                arg0->unk1060 = 0U;
                temp_r5 = arg0->unk105C;
                func_0805E860((GenObj *)((u8 *)temp_r5 + 0x28), 1);
                temp_r0_7 = (GenObj *)((u8 *)temp_r5 + 0x3C);
                temp_r5->unk3C = 1;
                temp_r0_7->unk2 = 0;
                (temp_r0_7 + 2)->unk1 = 1;
            }
            temp_r0_8 = ((void (*)(void *,...))(arg0->unk0->unk14))(arg0) - 0xA;
            switch (temp_r0_8) {
            case 19:
                var_r5_2 = arg0->unk105C;
                var_r8 = 0x30 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r7 = 0x30 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_sl = arg328;
                temp_r1_2 = var_r5_2->unk28;
                (*temp_r1_2)->unk10(&arg30A, temp_r1_2, *(var_r5_2->unk2C + (var_r5_2->unk34 * 4)));
                var_r4 = arg328->unk4;
                var_r3_2 = var_r5_2->unk0;
                temp_r1_3 = ((GenObj *)((u8 *)var_r5_2 + 4))->unk4;
                if ((s32) ((0 - temp_r1_3) | temp_r1_3) < 0) {
block_37:
                    unksp0 = 0x01FFFFFF;
                    unksp4 = &arg30A;
                    unksp8 = var_r3_2;
                    unkspC = (s32) var_r5_2->unkC;
                    unksp10 = (GenObj *)((u8 *)var_r5_2 + 0x10);
                    var_r0_3 = func_030004DC(var_r4, var_r8, var_r7, 0xFF);
                } else {
block_38:
                    var_r0_3 = 0;
                }
block_39:
                if (var_r0_3 == 0) {

                } else {
                    var_r7_2 = (GenObj *)((u8 *)var_r5_2 + 0x3C);
                    if (var_r5_2->unk3C == 0) {

                    } else {
                        func_080A480C(var_r5_2, *var_sl, &arg30A + 8);
                        if (var_r5_2->unk3D != 0) {
block_57:
                            func_080A4944(var_r5_2, &arg30A + 0x10, 1);
                        } else {
block_58:
                            if (var_r5_2->unk3E == 0) {
                                func_080A4944(var_r5_2, &arg30A + 0x10, 1);
                                var_r5_2->unk3E = 1U;
                            }
                        }
block_60:
                        *var_r7_2 = 0;
                    }
                }
                break;
            case 8:
                var_r4_2 = arg0->unk105C;
                var_r0_4 = ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r1_3 = 0x68;
block_47:
                var_r8 = var_r1_3 - var_r0_4;
                var_r7 = 0x30 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r5_2 = var_r4_2;
                var_sl = arg328;
                temp_r1_4 = var_r5_2->unk28;
                (*temp_r1_4)->unk10(&arg30A, temp_r1_4, *(var_r5_2->unk2C + (var_r5_2->unk34 * 4)));
                var_r4 = arg328->unk4;
                var_r3_2 = var_r5_2->unk0;
                temp_r1_5 = ((GenObj *)((u8 *)var_r5_2 + 4))->unk4;
                if ((s32) ((0 - temp_r1_5) | temp_r1_5) >= 0) {
                    goto block_38;
                }
                goto block_37;
                goto block_39;
            case 29:
                var_r4_2 = arg0->unk105C;
                var_r0_4 = ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r1_3 = 0x18;
                goto block_47;
            case 0:
                var_r4_2 = arg0->unk105C;
                var_r0_4 = ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r1_3 = 0x38;
                goto block_47;
            case 17:
                temp_r4_4 = arg0->unk105C;
                temp_r8 = 0x68 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                temp_r7 = 0x30 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r5_2 = temp_r4_4;
                temp_sl = arg328;
                temp_r1_6 = var_r5_2->unk28;
                (*temp_r1_6)->unk10(&arg30A, temp_r1_6, *(var_r5_2->unk2C + (var_r5_2->unk34 * 4)));
                temp_r1_7 = ((GenObj *)((u8 *)var_r5_2 + 4))->unk4;
                if ((s32) ((0 - temp_r1_7) | temp_r1_7) < 0) {
                    unksp0 = 0x01FFFFFF;
                    unksp4 = &arg30A;
                    unksp8 = var_r5_2->unk0;
                    unkspC = (s32) var_r5_2->unkC;
                    unksp10 = (GenObj *)((u8 *)var_r5_2 + 0x10);
                    var_r0_5 = func_030004DC(arg328->unk4, temp_r8, temp_r7, 0xFF);
                } else {
                    var_r0_5 = 0;
                }
                if (var_r0_5 != 0) {
                    var_r7_2 = (GenObj *)((u8 *)var_r5_2 + 0x3C);
                    if (var_r5_2->unk3C != 0) {
                        func_080A480C(var_r5_2, *temp_sl, &arg30A + 8);
                        if (var_r5_2->unk3D != 0) {
                            goto block_57;
                        }
                        goto block_58;
                        goto block_60;
                    }
                }
                break;
            }
        }
        temp_r4_5 = arg0->unk1064;
        if (temp_r4_5 == 0) {

        } else {
            var_r1_4 = (GenObj *)((u8 *)temp_r4_5 + 0x3F);
            if (temp_r4_5->unk3F == 0) {
                if ((s32) (func_0805E8F0((GenObj *)((u8 *)temp_r4_5 + 0x28)) << 0x1E) < 0) {
                    var_r1_4 = (GenObj *)((u8 *)temp_r4_5 + 0x3C);
                    var_r0_6 = 1;
                    goto block_67;
                }
            } else {
                var_r0_6 = 0;
block_67:
                *var_r1_4 = var_r0_6;
            }
            temp_r4_6 = arg0->unk1064;
            temp_r8_2 = 0x58 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
            temp_r7_2 = 0x10 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
            temp_sl_2 = arg328;
            temp_r1_8 = temp_r4_6->unk28;
            (*temp_r1_8)->unk10(&arg30A, temp_r1_8, *(temp_r4_6->unk2C + (temp_r4_6->unk34 * 4)));
            temp_r1_9 = ((GenObj *)((u8 *)temp_r4_6 + 4))->unk4;
            if ((s32) ((0 - temp_r1_9) | temp_r1_9) < 0) {
                unksp0 = 0x01FFFFFF;
                unksp4 = &arg30A;
                unksp8 = temp_r4_6->unk0;
                unkspC = (s32) temp_r4_6->unkC;
                unksp10 = (GenObj *)((u8 *)temp_r4_6 + 0x10);
                var_r0_7 = func_030004DC(arg328->unk4, temp_r8_2, temp_r7_2, 0xAA);
            } else {
                var_r0_7 = 0;
            }
            if ((var_r0_7 != 0) && (temp_r4_6->unk3C != 0)) {
                func_080A480C(temp_r4_6, *temp_sl_2, &arg30A + 8);
                if (temp_r4_6->unk3D != 0) {
                    func_080A4944(temp_r4_6, &arg30A + 0x10, 1);
                } else if (temp_r4_6->unk3E == 0) {
                    func_080A4944(temp_r4_6, &arg30A + 0x10, 1);
                    temp_r4_6->unk3E = 1U;
                }
                temp_r4_6->unk3C = 0U;
            }
        }
        arg31A = 0;
        arg330 = 0x378;
        arg331 = (GenObj *)((u8 *)arg0 + 0x106C);
loop_79:
        temp_r4_7 = *arg331;
        if (temp_r4_7 != 0) {
            temp_r8_3 = arg330 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
            temp_r7_3 = 0x1E0 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
            temp_sl_3 = arg328;
            temp_r1_10 = temp_r4_7->unk28;
            (*temp_r1_10)->unk10(&arg30A, temp_r1_10, *(temp_r4_7->unk2C + (temp_r4_7->unk34 * 4)));
            temp_r1_11 = ((GenObj *)((u8 *)temp_r4_7 + 4))->unk4;
            if ((s32) ((0 - temp_r1_11) | temp_r1_11) < 0) {
                unksp0 = 0x01FFFFFF;
                unksp4 = &arg30A;
                unksp8 = temp_r4_7->unk0;
                unkspC = (s32) temp_r4_7->unkC;
                unksp10 = (GenObj *)((u8 *)temp_r4_7 + 0x10);
                var_r0_8 = func_030004DC(arg328->unk4, temp_r8_3, temp_r7_3, 0x55);
            } else {
                var_r0_8 = 0;
            }
            if ((var_r0_8 != 0) && (temp_r4_7->unk3C != 0)) {
                func_080A480C(temp_r4_7, *temp_sl_3, &arg30A + 8);
                if (temp_r4_7->unk3D != 0) {
                    func_080A4944(temp_r4_7, &arg30A + 0x10, 1);
                } else if (temp_r4_7->unk3E == 0) {
                    func_080A4944(temp_r4_7, &arg30A + 0x10, 1);
                    temp_r4_7->unk3E = 1U;
                }
                temp_r4_7->unk3C = 0U;
            }
        }
        arg330 += 0x28;
        arg331 += 4;
        temp_r5_2 = arg31A + 1;
        arg31A = temp_r5_2;
        if (temp_r5_2 <= 1U) {
            goto loop_79;
        }
        if (arg0->unk1074 == 0) {

        } else {
            temp_r0_9 = ((void (*)(void *,...))(arg0->unk0->unk14))(arg0);
            switch (temp_r0_9) {
            case 2:
                temp_r4_8 = arg0->unk1074;
                temp_r8_4 = 0x88 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                temp_r7_4 = 0x23 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r5_3 = temp_r4_8;
                temp_sl_4 = arg328;
                temp_r1_12 = var_r5_3->unk28;
                (*temp_r1_12)->unk10(&arg30A, temp_r1_12, *(var_r5_3->unk2C + (var_r5_3->unk34 * 4)));
                temp_r1_13 = ((GenObj *)((u8 *)var_r5_3 + 4))->unk4;
                if ((s32) ((0 - temp_r1_13) | temp_r1_13) < 0) {
                    unksp0 = 0x01FFFFFF;
                    unksp4 = &arg30A;
                    unksp8 = var_r5_3->unk0;
                    unkspC = (s32) var_r5_3->unkC;
                    unksp10 = (GenObj *)((u8 *)var_r5_3 + 0x10);
                    var_r0_9 = func_030004DC(arg328->unk4, temp_r8_4, temp_r7_4, 0x55);
                } else {
                    var_r0_9 = 0;
                }
                if (var_r0_9 != 0) {
                    var_r7_3 = (GenObj *)((u8 *)var_r5_3 + 0x3C);
                    if (var_r5_3->unk3C != 0) {
                        func_080A480C(var_r5_3, *temp_sl_4, &arg30A + 8);
                        if (var_r5_3->unk3D != 0) {
block_123:
                            func_080A4944(var_r5_3, &arg30A + 0x10, 1);
                        } else {
block_124:
                            if (var_r5_3->unk3E == 0) {
                                func_080A4944(var_r5_3, &arg30A + 0x10, 1);
                                var_r5_3->unk3E = 1U;
                            }
                        }
block_126:
                        *var_r7_3 = 0;
                    }
                }
                break;
            case 0:
                var_r4_3 = arg0->unk1074;
                var_r8_2 = 0x160 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r0_10 = ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r1_5 = 0x23;
block_114:
                var_r7_4 = var_r1_5 - var_r0_10;
                var_r5_3 = var_r4_3;
                var_sl_2 = arg328;
                temp_r1_14 = var_r5_3->unk28;
                (*temp_r1_14)->unk10(&arg30A, temp_r1_14, *(var_r5_3->unk2C + (var_r5_3->unk34 * 4)));
                var_r4_4 = arg328->unk4;
                var_r3_3 = var_r5_3->unk0;
                temp_r1_15 = ((GenObj *)((u8 *)var_r5_3 + 4))->unk4;
                if ((s32) ((0 - temp_r1_15) | temp_r1_15) >= 0) {
block_105:
                    var_r0_11 = 0;
                } else {
block_104:
                    unksp0 = 0x01FFFFFF;
                    unksp4 = &arg30A;
                    unksp8 = var_r3_3;
                    unkspC = (s32) var_r5_3->unkC;
                    unksp10 = (GenObj *)((u8 *)var_r5_3 + 0x10);
                    var_r0_11 = func_030004DC(var_r4_4, var_r8_2, var_r7_4, 0x55);
                }
block_106:
                if (var_r0_11 == 0) {

                } else {
                    var_r7_3 = (GenObj *)((u8 *)var_r5_3 + 0x3C);
                    if (var_r5_3->unk3C == 0) {

                    } else {
                        func_080A480C(var_r5_3, *var_sl_2, &arg30A + 8);
                        if (var_r5_3->unk3D != 0) {
                            goto block_123;
                        }
                        goto block_124;
                        goto block_126;
                    }
                }
                break;
            case 7:
                temp_r4_9 = arg0->unk1074;
                var_r8_2 = 0x22C - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r7_4 = 0x86 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r5_3 = temp_r4_9;
                var_sl_2 = arg328;
                temp_r1_16 = var_r5_3->unk28;
                (*temp_r1_16)->unk10(&arg30A, temp_r1_16, *(var_r5_3->unk2C + (var_r5_3->unk34 * 4)));
                var_r4_4 = arg328->unk4;
                var_r3_3 = var_r5_3->unk0;
                temp_r1_17 = ((GenObj *)((u8 *)var_r5_3 + 4))->unk4;
                if ((s32) ((0 - temp_r1_17) | temp_r1_17) < 0) {
                    goto block_104;
                }
                goto block_105;
                goto block_106;
            case 3:
                var_r4_3 = arg0->unk1074;
                var_r8_2 = 0x26C - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r0_10 = ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r1_5 = 0x76;
                goto block_114;
            }
        }
        temp_r4_10 = arg0->unk1078;
        if (temp_r4_10 != 0) {
            temp_r8_5 = 0x235 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
            temp_r7_5 = 0x13 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
            temp_sl_5 = arg328;
            temp_r1_18 = temp_r4_10->unk28;
            (*temp_r1_18)->unk10(&arg30A, temp_r1_18, *(temp_r4_10->unk2C + (temp_r4_10->unk34 * 4)));
            temp_r1_19 = ((GenObj *)((u8 *)temp_r4_10 + 4))->unk4;
            if ((s32) ((0 - temp_r1_19) | temp_r1_19) < 0) {
                unksp0 = 0x01FFFFFF;
                unksp4 = &arg30A;
                unksp8 = temp_r4_10->unk0;
                unkspC = (s32) temp_r4_10->unkC;
                unksp10 = (GenObj *)((u8 *)temp_r4_10 + 0x10);
                var_r0_12 = func_030004DC(arg328->unk4, temp_r8_5, temp_r7_5, 0x55);
            } else {
                var_r0_12 = 0;
            }
            if ((var_r0_12 != 0) && (temp_r4_10->unk3C != 0)) {
                func_080A480C(temp_r4_10, *temp_sl_5, &arg30A + 8);
                if (temp_r4_10->unk3D != 0) {
                    func_080A4944(temp_r4_10, &arg30A + 0x10, 1);
                } else if (temp_r4_10->unk3E == 0) {
                    func_080A4944(temp_r4_10, &arg30A + 0x10, 1);
                    temp_r4_10->unk3E = 1U;
                }
                temp_r4_10->unk3C = 0U;
            }
        }
        temp_r4_11 = arg0->unk1058;
        if (temp_r4_11 == 0) {

        } else {
            var_r1_6 = (GenObj *)((u8 *)temp_r4_11 + 0x3F);
            if (temp_r4_11->unk3F == 0) {
                if ((s32) (func_0805E8F0((GenObj *)((u8 *)temp_r4_11 + 0x28)) << 0x1E) < 0) {
                    var_r1_6 = (GenObj *)((u8 *)temp_r4_11 + 0x3C);
                    var_r0_13 = 1;
                    goto block_144;
                }
            } else {
                var_r0_13 = 0;
block_144:
                *var_r1_6 = var_r0_13;
            }
            temp_r5_3 = GetUpgradeLevel__C9FarmHouse(arg0->unk1038 + 0x1F4);
            temp_r0_10 = ((void (*)(void *,...))(arg0->unk0->unk14))(arg0);
            switch (temp_r0_10) {
            case 39:
                temp_r5_4 = arg0->unk1058;
                temp_r8_6 = (gUnk_080F06FD.unk0 * 8) - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                temp_r7_6 = (gUnk_080F06FD.unk1 * 8) - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                temp_sl_6 = arg328;
                temp_r1_20 = temp_r5_4->unk28;
                (*temp_r1_20)->unk10(&arg30A, temp_r1_20, *(temp_r5_4->unk2C + (temp_r5_4->unk34 * 4)));
                temp_r1_21 = ((GenObj *)((u8 *)temp_r5_4 + 4))->unk4;
                if ((s32) ((0 - temp_r1_21) | temp_r1_21) < 0) {
                    unksp0 = 0x01FFFFFF;
                    unksp4 = &arg30A;
                    unksp8 = temp_r5_4->unk0;
                    unkspC = (s32) temp_r5_4->unkC;
                    unksp10 = (GenObj *)((u8 *)temp_r5_4 + 0x10);
                    var_r0_14 = func_030004DC(arg328->unk4, temp_r8_6, temp_r7_6, 0xAA);
                } else {
                    var_r0_14 = 0;
                }
                if (var_r0_14 != 0) {
                    var_r7_5 = (GenObj *)((u8 *)temp_r5_4 + 0x3C);
                    if (temp_r5_4->unk3C != 0) {
                        func_080A480C(temp_r5_4, *temp_sl_6, &arg30A + 8);
                        if (temp_r5_4->unk3D != 0) {
                            var_r1_7 = &arg30A + 0x10;
                            var_r0_15 = temp_r5_4;
block_168:
                            func_080A4944(var_r0_15, var_r1_7, 1);
                        } else {
                            var_r4_5 = (GenObj *)((u8 *)temp_r5_4 + 0x3E);
                            if (temp_r5_4->unk3E == 0) {
                                var_r1_8 = &arg30A + 0x10;
                                var_r0_16 = temp_r5_4;
block_171:
                                func_080A4944(var_r0_16, var_r1_8, 1);
                                *var_r4_5 = 1;
                            }
                        }
block_172:
                        *var_r7_5 = 0;
                    }
                }
                break;
            case 29:
                temp_r6_3 = arg0->unk1058;
                temp_r5_5 = temp_r5_3 * 2;
                temp_r8_7 = (*((u8 *)temp_r5_5 + &gUnk_080F06FD) * 8) - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                temp_r7_7 = (*((u8 *)temp_r5_5 + (&gUnk_080F06FD + 1)) * 8) - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                temp_sl_7 = arg328;
                temp_r1_22 = temp_r6_3->unk28;
                (*temp_r1_22)->unk10(&arg30A, temp_r1_22, *(temp_r6_3->unk2C + (temp_r6_3->unk34 * 4)));
                temp_r1_23 = ((GenObj *)((u8 *)temp_r6_3 + 4))->unk4;
                if ((s32) ((0 - temp_r1_23) | temp_r1_23) < 0) {
                    unksp0 = 0x01FFFFFF;
                    unksp4 = &arg30A;
                    unksp8 = temp_r6_3->unk0;
                    unkspC = (s32) temp_r6_3->unkC;
                    unksp10 = (GenObj *)((u8 *)temp_r6_3 + 0x10);
                    var_r0_17 = func_030004DC(arg328->unk4, temp_r8_7, temp_r7_7, 0xAA);
                } else {
                    var_r0_17 = 0;
                }
                if (var_r0_17 == 0) {

                } else {
                    var_r7_5 = (GenObj *)((u8 *)temp_r6_3 + 0x3C);
                    if (temp_r6_3->unk3C == 0) {

                    } else {
                        func_080A480C(temp_r6_3, *temp_sl_7, &arg30A + 8);
                        if (temp_r6_3->unk3D != 0) {
                            var_r1_7 = &arg30A + 0x10;
                            var_r0_15 = temp_r6_3;
                            goto block_168;
                        }
                        var_r4_5 = (GenObj *)((u8 *)temp_r6_3 + 0x3E);
                        if (temp_r6_3->unk3E != 0) {

                        } else {
                            var_r1_8 = &arg30A + 0x10;
                            var_r0_16 = temp_r6_3;
                            goto block_171;
                        }
                        goto block_172;
                    }
                }
                break;
            }
        }
        if (arg0->unk1068 == 0) {

        } else if (((void (*)(void *,...))(arg0->unk0->unk14))(arg0) != 0x1D) {

        } else {
            temp_r0_11 = GetUpgradeLevel__C9FarmHouse(arg0->unk1038 + 0x1F4);
            switch (temp_r0_11) {
            default:
                temp_r4_12 = arg0->unk1068;
                var_r8_3 = 0xA0 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r7_6 = 0x30 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r5_4 = temp_r4_12;
                var_r0_18 = arg328;
                var_sl_3 = var_r0_18;
                var_r6 = (GenObj *)((u8 *)var_r5_4 + 0x28);
block_182:
                var_r4_6 = var_r0_18->unk4;
                var_r3_4 = *var_r5_4;
                temp_r1_24 = ((GenObj *)((u8 *)var_r5_4 + 4))->unk4;
                if ((s32) ((0 - temp_r1_24) | temp_r1_24) >= 0) {
block_187:
                    var_r0_19 = 0;
                } else {
block_186:
                    unksp0 = 0x01FFFFFF;
                    unksp4 = var_r6;
                    unksp8 = var_r3_4;
                    unkspC = (s32) var_r5_4->unkC;
                    unksp10 = (GenObj *)((u8 *)var_r5_4 + 0x10);
                    var_r0_19 = func_030004DC(var_r4_6, var_r8_3, var_r7_6, 0xAA);
                }
block_188:
                if ((var_r0_19 != 0) && (var_r5_4->unk48 != 0)) {
                    func_080A480C(var_r5_4, *var_sl_3, var_r6 + 8);
                    func_080A4944(var_r5_4, var_r6 + 0x10, 1);
                    var_r5_4->unk48 = 0U;
                }
                break;
            case 1:
                temp_r4_13 = arg0->unk1068;
                var_r8_3 = 0x118 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r7_6 = 0x30 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r5_4 = temp_r4_13;
                var_sl_3 = arg328;
                var_r6 = (GenObj *)((u8 *)var_r5_4 + 0x28);
                var_r0_18 = arg328;
                goto block_182;
            case 2:
                temp_r4_14 = arg0->unk1068;
                var_r8_3 = 0x158 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                var_r7_6 = 0x30 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                var_r5_4 = temp_r4_14;
                var_sl_3 = arg328;
                var_r6 = (GenObj *)((u8 *)var_r5_4 + 0x28);
                var_r4_6 = arg328->unk4;
                var_r3_4 = *var_r5_4;
                temp_r1_25 = ((GenObj *)((u8 *)var_r5_4 + 4))->unk4;
                if ((s32) ((0 - temp_r1_25) | temp_r1_25) < 0) {
                    goto block_186;
                }
                goto block_187;
                goto block_188;
            }
        }
        temp_r1_26 = (GenObj *)((u8 *)arg0 + 0x102C);
        temp_r4_15 = arg0->unk102C;
        if ((s32) ((0 - temp_r4_15) | temp_r4_15) >= 0) {

        } else {
            temp_r2_4 = temp_r1_26->unk8;
            if (temp_r2_4 != 0) {
                temp_r0_12 = temp_r1_26->unk9 - 1;
                temp_r1_26->unk9 = temp_r0_12;
                if ((temp_r0_12 << 0x18) == 0) {
                    temp_r1_27 = arg0->unk102C;
                    if ((temp_r1_27 != 0) && (temp_r1_27 != 0)) {
                        ((void (*)(void *,...))(temp_r1_27->unk24->unk8))(temp_r1_27, 3);
                    }
                    arg0->unk102C = 0;
                } else {
                    temp_r4_16 = arg0->unk102C;
                    if (temp_r4_16->unk3F == 0) {
                        if ((s32) (func_0805E8F0((GenObj *)((u8 *)temp_r4_16 + 0x28)) << 0x1E) < 0) {
                            temp_r4_16->unk3C = 1U;
                        }
                    } else {
                        temp_r4_16->unk3F = 0U;
                    }
                }
                temp_r1_26->unkA = (u8) ((temp_r1_26->unkA + 1) & 7);
            } else {
                if (temp_r4_15->unk3F == 0) {
                    temp_r0_13 = func_0805E8F0((GenObj *)((u8 *)temp_r4_15 + 0x28));
                    if ((s32) (temp_r0_13 << 0x1E) < 0) {
                        temp_r4_15->unk3C = 1U;
                    }
                    var_r0_20 = temp_r0_13;
                } else {
                    temp_r4_15->unk3F = temp_r2_4;
                    var_r0_20 = 2;
                }
                if ((s32) (var_r0_20 << 0x1D) < 0) {
                    temp_r1_28 = arg0->unk102C;
                    if ((temp_r1_28 != 0) && (temp_r1_28 != 0)) {
                        ((void (*)(void *,...))(temp_r1_28->unk24->unk8))(temp_r1_28, 3);
                    }
                    arg0->unk102C = 0;
                }
            }
            temp_r4_17 = ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
            temp_r2_5 = ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
            temp_r1_29 = (GenObj *)((u8 *)arg0 + 0x102C);
            arg31B = arg328;
            temp_r5_6 = arg0->unk102C;
            if ((s32) ((0 - temp_r5_6) | temp_r5_6) >= 0) {

            } else if (temp_r1_29->unk8 == 0) {
                temp_sl_8 = temp_r1_29->unk4 - temp_r4_17;
                temp_r1_30 = temp_r1_29->unk6;
                temp_r8_8 = temp_r1_30 - temp_r2_5;
                temp_r7_8 = 0x8000 - temp_r1_30;
                temp_r1_31 = temp_r5_6->unk28;
                (*temp_r1_31)->unk10(&arg30A, temp_r1_31, *(temp_r5_6->unk2C + (temp_r5_6->unk34 * 4)));
                temp_r1_32 = ((GenObj *)((u8 *)temp_r5_6 + 4))->unk4;
                if ((s32) ((0 - temp_r1_32) | temp_r1_32) < 0) {
                    unksp0 = temp_r7_8;
                    unksp4 = &arg30A;
                    unksp8 = temp_r5_6->unk0;
                    unkspC = (s32) temp_r5_6->unkC;
                    unksp10 = (GenObj *)((u8 *)temp_r5_6 + 0x10);
                    var_r0_21 = func_030004DC(arg328->unk4, temp_sl_8, temp_r8_8, 0xAA);
                } else {
                    var_r0_21 = 0;
                }
                if ((var_r0_21 != 0) && (temp_r5_6->unk3C != 0)) {
                    func_080A480C((s32 *) temp_r5_6, *arg31B, &arg30A + 8);
                    if (temp_r5_6->unk3D != 0) {
                        func_080A4944((s32 *) temp_r5_6, &arg30A + 0x10, 1);
                    } else if (temp_r5_6->unk3E == 0) {
                        func_080A4944((s32 *) temp_r5_6, &arg30A + 0x10, 1);
                        temp_r5_6->unk3E = 1U;
                    }
                    temp_r5_6->unk3C = 0U;
                }
            } else if ((u32) temp_r1_29->unkA <= 2U) {

            } else {
                arg31C = temp_r1_29->unk4 - temp_r4_17;
                temp_r1_33 = temp_r1_29->unk6;
                temp_sl_9 = temp_r1_33 - temp_r2_5;
                temp_r8_9 = 0x8000 - temp_r1_33;
                temp_r1_34 = temp_r5_6->unk28;
                (*temp_r1_34)->unk10(&arg30A, temp_r1_34, *(temp_r5_6->unk2C + (temp_r5_6->unk34 * 4)));
                temp_r1_35 = ((GenObj *)((u8 *)temp_r5_6 + 4))->unk4;
                if ((s32) ((0 - temp_r1_35) | temp_r1_35) < 0) {
                    unksp0 = temp_r8_9;
                    unksp4 = &arg30A;
                    unksp8 = temp_r5_6->unk0;
                    unkspC = (s32) temp_r5_6->unkC;
                    unksp10 = (GenObj *)((u8 *)temp_r5_6 + 0x10);
                    var_r0_22 = func_030004DC(arg328->unk4, arg31C, temp_sl_9, 0xAA);
                } else {
                    var_r0_22 = 0;
                }
                if (var_r0_22 == 0) {

                } else if (temp_r5_6->unk3C == 0) {

                } else {
                    func_080A480C((s32 *) temp_r5_6, *arg31B, &arg30A + 8);
                    if (temp_r5_6->unk3D != 0) {
                        func_080A4944((s32 *) temp_r5_6, &arg30A + 0x10, 1);
                    } else if (temp_r5_6->unk3E == 0) {
                        func_080A4944((s32 *) temp_r5_6, &arg30A + 0x10, 1);
                        temp_r5_6->unk3E = 1U;
                    }
                    temp_r5_6->unk3C = 0U;
                }
            }
        }
        arg31D = 0;
        var_r7_7 = (GenObj *)((u8 *)arg0 + 0x1084);
        arg32F = (GenObj *)((u8 *)arg0 + 0x1081);
loop_243:
        if (((u32) (*arg32F << 0x1E) >> 0x1E) != 1) {

        } else {
            temp_r4_18 = (var_r7_7->unk0 * 8) + 8;
            temp_r5_7 = (var_r7_7->unk2 * 8) + 8;
            temp_r6_4 = var_r7_7->unk4;
            arg31E = temp_r4_18 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
            temp_sl_10 = temp_r5_7 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
            arg31F = arg328;
            temp_r1_36 = temp_r6_4->unk28;
            (*temp_r1_36)->unk10(&arg30A, temp_r1_36, *(temp_r6_4->unk2C + (temp_r6_4->unk34 * 4)));
            temp_r1_37 = (temp_r6_4 + 4)->unk4;
            if ((s32) ((0 - temp_r1_37) | temp_r1_37) < 0) {
                unksp0 = 0x8000 - temp_r5_7;
                unksp4 = &arg30A;
                unksp8 = temp_r6_4->unk0;
                unkspC = (s32) temp_r6_4->unkC;
                unksp10 = temp_r6_4 + 0x10;
                var_r0_23 = func_030004DC(arg328->unk4, arg31E, temp_sl_10, 0xAA);
            } else {
                var_r0_23 = 0;
            }
            if ((var_r0_23 != 0) && (temp_r6_4->unk3C != 0)) {
                func_080A480C(temp_r6_4, *arg31F, &arg30A + 8);
                if (temp_r6_4->unk3D != 0) {
                    func_080A4944(temp_r6_4, &arg30A + 0x10, 1);
                } else if (temp_r6_4->unk3E == 0) {
                    func_080A4944(temp_r6_4, &arg30A + 0x10, 1);
                    temp_r6_4->unk3E = 1U;
                }
                temp_r6_4->unk3C = 0U;
            }
        }
        var_r7_7 += 0xC;
        arg32F += 0xC;
        temp_r0_14 = arg31D + 1;
        arg31D = temp_r0_14;
        if (temp_r0_14 <= 3U) {
            goto loop_243;
        }
        arg320 = 0;
        var_r7_8 = gUnk_0300040C + 0x4DC;
loop_258:
        if (((u32) (var_r7_8->unk0 << 0x1E) >> 0x1E) != 1) {

        } else {
            temp_r4_19 = (u32) (var_r7_8->unk2 << 0x16) >> 0x16;
            if (temp_r4_19 != ((void (*)(void *,...))(arg0->unk0->unk14))(arg0)) {

            } else {
                temp_r4_20 = ((var_r7_8->unk4 & 0x3FF) << 6) | ((u8) var_r7_8->unk3 >> 2);
                temp_r6_5 = (s32) ((s32) var_r7_8->unk4 << 6) >> 0x10;
                temp_r5_8 = (u32) (var_r7_8->unk0 << 0x1C) >> 0x1E;
                temp_r8_10 = *((u8 *)(GenObj *)((u8 *)arg0 + 0x10B0) + (arg320 * 4));
                arg321 = temp_r4_20 - ((void (*)(void *,...))(arg0->unk0->unk18))(arg0);
                temp_ip = temp_r6_5 - ((void (*)(void *,...))(arg0->unk0->unk1C))(arg0);
                temp_r3 = arg328;
                temp_r5_9 = (GenObj *)((u8 *)temp_r8_10 + 0x28);
                arg332 = temp_r3->unk4;
                temp_r1_38 = ((GenObj *)((u8 *)temp_r8_10 + 4))->unk4;
                if ((s32) ((0 - temp_r1_38) | temp_r1_38) < 0) {
                    unksp0 = 0x8000 - temp_r6_5;
                    unksp4 = temp_r5_9;
                    unksp8 = temp_r8_10->unk0;
                    unkspC = (s32) temp_r8_10->unkC;
                    unksp10 = (GenObj *)((u8 *)temp_r8_10 + 0x10);
                    var_r0_24 = func_030004DC(arg332, arg321, temp_ip, (temp_r5_8 * 4) | temp_r5_8 | (temp_r5_8 * 0x10) | (temp_r5_8 << 6));
                } else {
                    var_r0_24 = 0;
                }
                if ((var_r0_24 != 0) && (temp_r8_10->unk48 != 0)) {
                    func_080A480C(temp_r8_10, temp_r3->unk0, temp_r5_9 + 8);
                    func_080A4944(temp_r8_10, temp_r5_9 + 0x10, 1);
                    temp_r8_10->unk48 = 0U;
                }
            }
        }
        var_r7_8 += 0xC;
        temp_r4_21 = arg320 + 1;
        arg320 = temp_r4_21;
        if (temp_r4_21 < 6U) {
            goto loop_258;
        }
        var_r5_5 = arg0->unk198;
        if (var_r5_5 >= 0x64U) {
            var_r5_5 = 0;
        }
        temp_r1_39 = arg322;
        temp_r6_6 = temp_r1_39 + (var_r5_5 * 4);
        temp_r7_9 = arg32D;
        var_r4_7 = temp_r6_6;
        if ((u32) unksp14.unk0 >= (u32) arg318) {
            var_r0_25 = var_r4_7 - temp_r1_39;
            goto block_282;
        }
loop_274:
        if (var_r4_7 != arg319) {
            temp_r3_2 = *var_r4_7;
            if (temp_r3_2 != 0) {
                ((void (*)(void *,...))(temp_r3_2->unk14->unk1C))(temp_r3_2, &arg306);
            }
        }
        var_r4_7 += 4;
        if (var_r4_7 == temp_r7_9) {
            var_r4_7 = arg322;
        }
        if (var_r4_7 != temp_r6_6) {
            if ((u32) unksp14.unk0 >= (u32) arg318) {
                var_r0_25 = var_r4_7 - arg322;
block_282:
                var_r5_5 = (u32) (var_r0_25 >> 2);
            } else {
                goto loop_274;
            }
        }
        arg0->unk198 = var_r5_5;
        func_08094A3C(&unksp14, arg317->unk8);
        var_r0_26 = arg32E;
        if (&unksp18 != var_r0_26) {
            do {
                var_r0_26 += 0xFFFFFDFC;
            } while (&unksp18 != var_r0_26);
        }
    }
    temp_r1_40 = GetMapData(arg0->unk4->unk4)->unk24;
    arg323 = (GenObj *)((u8 *)arg0 + 0x19C);
    temp_r7_10 = *arg317;
    arg324 = temp_r1_40 ^ 1;
    arg325 = 0;
    temp_r6_7 = *arg32B;
    arg326 = (u32) temp_r6_7;
    if ((u32) temp_r6_7 <= 0U) {

    } else {
loop_288:
        temp_r2_6 = arg325;
        temp_r0_15 = arg323 + 0xB78 + (temp_r2_6 * 0xC);
        arg329 = temp_r2_6 + 1;
        if (((u8) temp_r0_15->unk9 >> 7) != 0) {

        } else {
            temp_r2_7 = arg323 + 0x20 + ((s8) temp_r0_15->unk9 * 0x84);
            if ((temp_r2_7->unk82 == 0) && (temp_r0_15->unkA != 0)) {

            } else {
                var_r1_9 = (GenObj *)((u8 *)temp_r2_7 + 0x60);
                if (arg324 == 0) {
                    var_r1_9 = temp_r2_7;
                }
                func_08008F0C(&unksp14, var_r1_9, (temp_r0_15->unk8 << 5) + 0x05000200, 0x20);
                arg327 = &unksp0 + 0x14;
                temp_r1_41 = temp_r7_10->unk4;
                if (temp_r1_41 != temp_r7_10->unkC) {
                    if (temp_r1_41 != 0) {
                        temp_r1_41->unk0 = (s32) unksp14.unk0;
                        temp_r1_41->unk4 = (s32) unksp14.unk4;
                        temp_r1_41->unk8 = (s32) unksp14.unk8;
                        temp_r1_41->unkC = (s32) unksp14.unkC;
                    }
                    temp_r7_10->unk4 = (void *) (temp_r7_10->unk4 + 0x10);
                    var_r8_4 = (GenObj *)((u8 *)temp_r2_7 + 0x82);
                    arg329 = arg325 + 1;
                } else {
                    arg333 = temp_r1_41;
                    arg316 = 1;
                    temp_r4_22 = (s32) (temp_r1_41 - temp_r7_10->unk0) >> 4;
                    var_r0_27 = &arg315;
                    *var_r0_27 = temp_r4_22;
                    if ((u32) temp_r4_22 < (u32) arg316) {
                        var_r0_27 = &arg316;
                    }
                    temp_r0_16 = temp_r4_22 + *var_r0_27;
                    if (temp_r0_16 != 0) {
                        temp_r4_23 = temp_r0_16 * 0x10;
                        var_r0_28 = malloc(temp_r4_23);
                        arg32A = temp_r4_23;
                        if (var_r0_28 == 0) {
                            var_r0_28 = func_080D3BC0(temp_r4_23);
                        }
                    } else {
                        var_r0_28 = 0;
                        arg32A = 0;
                    }
                    arg332 = var_r0_28;
                    var_r2_3 = temp_r7_10->unk0;
                    var_r3_5 = var_r0_28;
                    var_r8_4 = (GenObj *)((u8 *)temp_r2_7 + 0x82);
                    arg329 = arg325 + 1;
                    if (var_r2_3 != arg333) {
                        do {
                            if (var_r3_5 != 0) {
                                var_r3_5->unk0 = (s32) var_r2_3->unk0;
                                var_r3_5->unk4 = (s32) var_r2_3->unk4;
                                var_r3_5->unk8 = (s32) var_r2_3->unk8;
                                var_r3_5->unkC = (s32) var_r2_3->unkC;
                            }
                            var_r2_3 += 0x10;
                            var_r3_5 += 0x10;
                        } while (var_r2_3 != arg333);
                    }
                    temp_r0_17 = arg316;
                    if (temp_r0_17 == 1) {
                        if (var_r3_5 != 0) {
                            temp_r1_42 = arg327;
                            var_r3_5->unk0 = (s32) temp_r1_42->unk0;
                            var_r3_5->unk4 = (s32) temp_r1_42->unk4;
                            var_r3_5->unk8 = (s32) temp_r1_42->unk8;
                            var_r3_5->unkC = (s32) temp_r1_42->unkC;
                        }
                        var_r5_6 = (GenObj *)((u8 *)var_r3_5 + 0x10);
                    } else {
                        var_r3_6 = temp_r0_17;
                        var_r2_4 = var_r3_5;
                        if (var_r3_6 != 0) {
                            do {
                                if (var_r2_4 != 0) {
                                    temp_r1_43 = arg327;
                                    var_r2_4->unk0 = (s32) temp_r1_43->unk0;
                                    var_r2_4->unk4 = (s32) temp_r1_43->unk4;
                                    var_r2_4->unk8 = (s32) temp_r1_43->unk8;
                                    var_r2_4->unkC = (s32) temp_r1_43->unkC;
                                }
                                var_r3_6 -= 1;
                                var_r2_4 += 0x10;
                            } while (var_r3_6 != 0);
                        }
                        var_r5_6 = var_r2_4;
                    }
                    temp_r2_8 = temp_r7_10->unk4;
                    temp_r0_18 = temp_r7_10->unk0;
                    var_r1_10 = temp_r0_18;
                    if (temp_r0_18 != temp_r2_8) {
                        do {
                            var_r1_10 += 0x10;
                        } while (var_r1_10 != temp_r2_8);
                    }
                    if (temp_r0_18 != 0) {
                        free();
                    }
                    temp_r1_44 = arg332;
                    temp_r7_10->unk0 = temp_r1_44;
                    temp_r7_10->unk4 = var_r5_6;
                    temp_r7_10->unkC = (void *) (arg32A + temp_r1_44);
                }
                *var_r8_4 = 0;
                if ((temp_r0_15->unkA == 0) && (((u8) temp_r0_15->unk9 >> 7) == 0)) {
                    temp_r0_15->unkA = 1U;
                }
            }
        }
        temp_r5_10 = arg329;
        arg325 = temp_r5_10;
        if (temp_r5_10 < (u32) arg326) {
            goto loop_288;
        }
    }
    var_r2_5 = *arg32B;
    if ((u32) var_r2_5 < (u32) *arg32C) {
        var_r3_7 = (var_r2_5 * 0xC) + 0xB81 + ((GenObj *)((u8 *)arg0 + 0x19C));
        do {
            temp_r4_24 = *var_r3_7;
            if ((temp_r4_24 >> 7) == 0) {
                *var_r3_7 = temp_r4_24 | 0xFF;
            }
            var_r3_7 += 0xC;
            var_r2_5 += 1;
        } while ((u32) var_r2_5 < (u32) arg0->unkDB1);
    }
}
