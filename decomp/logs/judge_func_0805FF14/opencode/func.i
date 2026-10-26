# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FF14/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FF14/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FF14/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FF14/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805FF14/opencode/func.c" 2


u32 GetFriendship__C3Npc(s32);
u32 GetLove__C12Bachelorette(s32);
s32 free(void *);
void *func_08008910(s32);
s32 func_08008F0C(s32 *, s32 *, s32, s32);
s32 func_0800E4E0(void *);
u32 func_0800E530(void *);
s32 func_0800E53C(void *);
s32 func_0804E7A0(s32, s32 *, s32);
s32 func_0804E8F0(s32, s32 *, s32, s32);
s32 func_0804E9F4(s32, u32, s32, s32);
s32 func_0804EDB4(s32, s32, s32, s32);
s32 func_08076BFC(void *, s32, s32, s32);
s32 func_0809EACC(s32);
s32 func_0809FE3C(void *, s32);
s32 func_080A01F8(void *, s32);
s32 func_080A0384(void *);
s32 func_080A0490(void *);
s32 func_080A0504(void *);
void *func_080D3BC0(s32);
void *malloc(s32);
s32 memcpy(s32 *, s32 *, u32);
s32 *method_08009AF4__C4Farm(s32);
s32 strcpy(s32 *, s32 *);
u32 strlen(s32 *);
s32 sub_08061E00();
extern s32 gUnk_080FB824;
extern s32 gUnk_080FB830;
extern s32 gUnk_080FB834;
extern s32 gUnk_087518CC;
extern s32 gUnk_0875194C;
extern s32 gUnk_0875196C;
extern s32 gUnk_087519EC;
extern s32 gUnk_08751A0C;
extern s32 gUnk_08751A8C;
extern s32 gUnk_08751AAC;
extern s32 gUnk_08751B2C;
extern s32 gUnk_0875240C;
extern s32 gUnk_0875248C;
extern s32 gUnk_087524AC;
extern s32 gUnk_0875252C;
extern s32 gUnk_0875254C;
extern s32 gUnk_087525CC;
extern s32 gUnk_0875286C;
extern s32 gUnk_087528EC;
extern s32 gUnk_08752E4C;
extern s32 gUnk_08752ECC;
extern s32 gUnk_08752F8C;
extern s32 gUnk_0875300C;
extern s32 gUnk_0875302C;
extern s32 gUnk_087530AC;
extern s32 gUnk_087530CC;
extern s32 gUnk_0875314C;
extern s32 gUnk_0875348C;
extern s32 gUnk_0875350C;
extern s32 vtable_unk_080E7A78;

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    u8 _pad10[8];
    struct GenObj *unk18;
    u8 _pad1C[1392];
    void *unk58C;
    u8 _pad590[4];
    s32 unk594;
    u8 _pad598[28];
    void *unk5B4;
    u8 _pad5B8[5360];
    s32 unk1AA8;
} GenObj;
void func_0805FF14(void *arg0, s32 arg1, s32 arg2, ? arg4, ? argA, s32 argD, ? argE, GenObj *arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19, s32 arg1A, s32 arg1B, s32 arg1C, s32 arg1D, s16 arg1E, u32 arg1F, u32 arg20, s16 arg21, u32 arg22, u32 arg23, s16 arg24, u32 arg25, u32 arg26, u32 arg27, u32 arg28, u32 arg29, u32 arg2A, u32 arg2B, u32 arg2C, u32 arg2D, u32 arg2E, u32 arg2F, u32 arg30, u32 arg31, u32 arg32, u32 arg33, u32 arg34, u32 arg35, u32 arg36, u32 arg37, u32 arg38, u32 arg39, u32 arg3A, s16 arg3B, s16 arg3C, u32 arg3D, u32 arg3E, u32 arg3F, u32 arg40, s16 arg41, s16 arg42, u32 arg43, u32 arg44, u32 arg45, u32 arg46, u32 arg47, u32 arg48, s16 arg49, s16 arg4A, u32 arg4B, u32 arg4C, u32 arg4D, u32 arg4E, ? arg51, ? arg52, ? arg55, ? arg56, GenObj *arg6D, s32 arg6E, GenObj *arg6F, s32 arg70, s32 arg71, s32 arg72, s32 arg73, u32 arg78, s32 *arg79, s32 *arg7A, s32 *arg7B, s32 *arg7C, s32 *arg7D, s32 *arg7E, s32 *arg7F, s32 arg80, s32 arg81, s32 arg82, s32 arg84, GenObj *arg86, GenObj *arg87, GenObj *arg88, GenObj *arg89, GenObj *arg8B, GenObj *arg8C, GenObj *arg8D, GenObj *arg8E, GenObj *arg8F, GenObj *arg90, GenObj *arg91, u32 *arg92, u32 *arg93, GenObj *arg95, GenObj *arg96, u32 *arg97, u32 *arg98, void *argA1, void *argA2) {
    s32 *temp_r4;
    s32 *temp_r6;
    s32 *temp_r6_2;
    s32 *var_sb_2;
    s32 *var_sb_3;
    s32 *var_r0;
    s32 *var_r0_3;
    s32 *var_r0_5;
    s32 *var_r0_7;
    s32 temp_r0_10;
    s32 temp_r0_12;
    s32 temp_r0_14;
    s32 temp_r0_16;
    s32 temp_r0_18;
    s32 temp_r0_20;
    s32 temp_r0_22;
    s32 temp_r0_24;
    s32 temp_r0_26;
    s32 temp_r0_28;
    s32 temp_r0_2;
    s32 temp_r0_30;
    s32 temp_r0_32;
    s32 temp_r0_34;
    s32 temp_r0_35;
    s32 temp_r0_36;
    s32 temp_r0_41;
    s32 temp_r0_43;
    s32 temp_r0_47;
    s32 temp_r0_48;
    s32 temp_r0_50;
    s32 temp_r0_6;
    s32 temp_r0_8;
    s32 temp_r1_23;
    s32 temp_r1_27;
    s32 temp_r1_31;
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
    s32 temp_r4_23;
    s32 temp_r4_24;
    s32 temp_r4_25;
    s32 temp_r4_26;
    s32 temp_r4_27;
    s32 temp_r4_28;
    s32 temp_r4_29;
    s32 temp_r4_2;
    s32 temp_r4_30;
    s32 temp_r4_31;
    s32 temp_r4_32;
    s32 temp_r4_33;
    s32 temp_r4_34;
    s32 temp_r4_35;
    s32 temp_r4_36;
    s32 temp_r4_37;
    s32 temp_r4_38;
    s32 temp_r4_39;
    s32 temp_r4_3;
    s32 temp_r4_40;
    s32 temp_r4_41;
    s32 temp_r4_42;
    s32 temp_r4_43;
    s32 temp_r4_44;
    s32 temp_r4_45;
    s32 temp_r4_46;
    s32 temp_r4_47;
    s32 temp_r4_48;
    s32 temp_r4_49;
    s32 temp_r4_7;
    s32 temp_r4_8;
    s32 temp_r4_9;
    s32 var_r3_2;
    s32 var_r3_4;
    s32 var_r3_6;
    s32 var_r3_8;
    s32 var_r5_19;
    s32 var_r5_22;
    s32 var_r5_25;
    s32 var_r8;
    s32 var_r8_10;
    s32 var_r8_11;
    s32 var_r8_12;
    s32 var_r8_13;
    s32 var_r8_14;
    s32 var_r8_15;
    s32 var_r8_16;
    s32 var_r8_17;
    s32 var_r8_18;
    s32 var_r8_19;
    s32 var_r8_20;
    s32 var_r8_21;
    s32 var_r8_2;
    s32 var_r8_3;
    s32 var_r8_4;
    s32 var_r8_5;
    s32 var_r8_6;
    s32 var_r8_7;
    s32 var_r8_8;
    s32 var_r8_9;
    s32 var_sb;
    u32 *var_r0_11;
    u32 *var_r0_13;
    u32 *var_r0_15;
    u32 *var_r0_17;
    u32 *var_r0_19;
    u32 *var_r0_21;
    u32 *var_r0_23;
    u32 *var_r0_25;
    u32 *var_r0_27;
    u32 *var_r0_29;
    u32 *var_r0_31;
    u32 *var_r0_34;
    u32 *var_r0_9;
    u32 *var_r1_16;
    u32 *var_r1_18;
    u32 *var_r1_20;
    u32 *var_r2_41;
    u32 *var_r2_46;
    u32 *var_r3_37;
    u32 *var_r3_42;
    u32 temp_r0;
    u32 temp_r0_37;
    u32 temp_r0_39;
    u32 temp_r0_40;
    u32 temp_r0_42;
    u32 temp_r0_44;
    u32 temp_r0_46;
    u32 temp_r0_49;
    u32 temp_r0_51;
    u32 temp_r0_53;
    u32 temp_r1_18;
    u32 temp_r1_21;
    u32 temp_r5;
    u32 temp_r6_23;
    u32 temp_r6_26;
    u32 var_r3_10;
    u32 var_r3_12;
    u32 var_r3_14;
    u32 var_r3_16;
    u32 var_r3_18;
    u32 var_r3_20;
    u32 var_r3_22;
    u32 var_r3_24;
    u32 var_r3_26;
    u32 var_r3_28;
    u32 var_r3_30;
    u32 var_r3_32;
    u32 var_r3_34;
    u32 var_r3_36;
    u32 var_r3_39;
    u32 var_r3_41;
    u32 var_r3_44;
    u32 var_r3_46;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    void *temp_r0_11;
    void *temp_r0_13;
    void *temp_r0_15;
    void *temp_r0_17;
    void *temp_r0_19;
    void *temp_r0_21;
    void *temp_r0_23;
    void *temp_r0_25;
    void *temp_r0_27;
    void *temp_r0_29;
    void *temp_r0_31;
    void *temp_r0_33;
    void *temp_r0_38;
    void *temp_r0_3;
    void *temp_r0_45;
    void *temp_r0_4;
    void *temp_r0_52;
    void *temp_r0_5;
    void *temp_r0_7;
    void *temp_r0_9;
    GenObj *temp_r1;
    GenObj *temp_r1_10;
    GenObj *temp_r1_11;
    GenObj *temp_r1_12;
    GenObj *temp_r1_13;
    GenObj *temp_r1_14;
    GenObj *temp_r1_15;
    GenObj *temp_r1_16;
    void *temp_r1_17;
    void *temp_r1_19;
    void *temp_r1_20;
    void *temp_r1_22;
    GenObj *temp_r1_24;
    void *temp_r1_25;
    void *temp_r1_26;
    GenObj *temp_r1_28;
    void *temp_r1_29;
    void *temp_r1_2;
    void *temp_r1_30;
    GenObj *temp_r1_32;
    GenObj *temp_r1_3;
    GenObj *temp_r1_4;
    GenObj *temp_r1_5;
    GenObj *temp_r1_6;
    GenObj *temp_r1_7;
    GenObj *temp_r1_8;
    GenObj *temp_r1_9;
    void *temp_r2;
    void *temp_r2_10;
    void *temp_r2_11;
    void *temp_r2_12;
    void *temp_r2_13;
    void *temp_r2_14;
    void *temp_r2_15;
    void *temp_r2_16;
    void *temp_r2_17;
    void *temp_r2_18;
    void *temp_r2_19;
    void *temp_r2_20;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;
    void *temp_r2_6;
    void *temp_r2_7;
    void *temp_r2_8;
    void *temp_r2_9;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r4_4;
    void *temp_r4_5;
    void *temp_r4_6;
    GenObj *temp_r6_10;
    GenObj *temp_r6_11;
    GenObj *temp_r6_12;
    GenObj *temp_r6_13;
    GenObj *temp_r6_14;
    GenObj *temp_r6_15;
    GenObj *temp_r6_16;
    GenObj *temp_r6_17;
    GenObj *temp_r6_18;
    GenObj *temp_r6_19;
    GenObj *temp_r6_20;
    GenObj *temp_r6_21;
    GenObj *temp_r6_22;
    GenObj *temp_r6_24;
    GenObj *temp_r6_25;
    GenObj *temp_r6_3;
    GenObj *temp_r6_4;
    GenObj *temp_r6_5;
    GenObj *temp_r6_6;
    GenObj *temp_r6_7;
    GenObj *temp_r6_8;
    GenObj *temp_r6_9;
    void *temp_r7;
    void *var_r0_10;
    void *var_r0_12;
    void *var_r0_14;
    void *var_r0_16;
    void *var_r0_18;
    void *var_r0_20;
    void *var_r0_22;
    void *var_r0_24;
    void *var_r0_26;
    void *var_r0_28;
    void *var_r0_2;
    void *var_r0_30;
    void *var_r0_32;
    void *var_r0_33;
    void *var_r0_35;
    void *var_r0_36;
    void *var_r0_37;
    void *var_r0_38;
    void *var_r0_39;
    void *var_r0_40;
    void *var_r0_41;
    void *var_r0_42;
    void *var_r0_43;
    void *var_r0_4;
    void *var_r0_6;
    void *var_r0_8;
    void *var_r1;
    void *var_r1_10;
    void *var_r1_11;
    void *var_r1_12;
    void *var_r1_13;
    void *var_r1_14;
    void *var_r1_15;
    void *var_r1_17;
    void *var_r1_19;
    void *var_r1_21;
    void *var_r1_2;
    void *var_r1_3;
    void *var_r1_4;
    void *var_r1_5;
    void *var_r1_6;
    void *var_r1_7;
    void *var_r1_8;
    void *var_r1_9;
    GenObj *var_r2;
    GenObj *var_r2_10;
    GenObj *var_r2_11;
    GenObj *var_r2_12;
    GenObj *var_r2_13;
    GenObj *var_r2_14;
    GenObj *var_r2_15;
    GenObj *var_r2_16;
    GenObj *var_r2_17;
    GenObj *var_r2_18;
    GenObj *var_r2_19;
    GenObj *var_r2_20;
    GenObj *var_r2_21;
    GenObj *var_r2_22;
    GenObj *var_r2_23;
    GenObj *var_r2_24;
    GenObj *var_r2_25;
    GenObj *var_r2_26;
    GenObj *var_r2_27;
    GenObj *var_r2_28;
    GenObj *var_r2_29;
    GenObj *var_r2_2;
    GenObj *var_r2_30;
    GenObj *var_r2_31;
    GenObj *var_r2_32;
    GenObj *var_r2_33;
    GenObj *var_r2_34;
    GenObj *var_r2_35;
    GenObj *var_r2_36;
    GenObj *var_r2_37;
    GenObj *var_r2_38;
    GenObj *var_r2_39;
    GenObj *var_r2_3;
    GenObj *var_r2_40;
    GenObj *var_r2_42;
    GenObj *var_r2_43;
    GenObj *var_r2_44;
    GenObj *var_r2_45;
    GenObj *var_r2_4;
    GenObj *var_r2_5;
    GenObj *var_r2_6;
    GenObj *var_r2_7;
    GenObj *var_r2_8;
    GenObj *var_r2_9;
    GenObj *var_r3;
    GenObj *var_r3_11;
    GenObj *var_r3_13;
    GenObj *var_r3_15;
    GenObj *var_r3_17;
    GenObj *var_r3_19;
    GenObj *var_r3_21;
    GenObj *var_r3_23;
    GenObj *var_r3_25;
    GenObj *var_r3_27;
    GenObj *var_r3_29;
    GenObj *var_r3_31;
    GenObj *var_r3_33;
    GenObj *var_r3_35;
    GenObj *var_r3_38;
    GenObj *var_r3_3;
    GenObj *var_r3_40;
    GenObj *var_r3_43;
    GenObj *var_r3_45;
    GenObj *var_r3_5;
    GenObj *var_r3_7;
    GenObj *var_r3_9;
    void *var_r5;
    void *var_r5_10;
    void *var_r5_11;
    void *var_r5_12;
    void *var_r5_13;
    void *var_r5_14;
    void *var_r5_15;
    void *var_r5_16;
    void *var_r5_17;
    void *var_r5_18;
    void *var_r5_20;
    void *var_r5_21;
    void *var_r5_23;
    void *var_r5_24;
    void *var_r5_2;
    void *var_r5_3;
    void *var_r5_4;
    void *var_r5_5;
    void *var_r5_6;
    void *var_r5_7;
    void *var_r5_8;
    void *var_r5_9;

    arg6D = arg0;
    arg6E = arg1;
    temp_r6 = method_08009AF4__C4Farm(arg2 + 0x14);
    var_r4 = strlen();
    if (var_r4 > 0x16U) {
        var_r4 = 0x16;
    }
    memcpy(&arg4, temp_r6, var_r4);
    *(&arg4 + var_r4) = 0;
    temp_r0 = strlen(&arg4);
    temp_r6_2 = &arg4 + temp_r0;
    temp_r5 = 0x16 - temp_r0;
    if (temp_r5 != 0) {
        var_r4_2 = strlen(&gUnk_080FB824);
        if (var_r4_2 > temp_r5) {
            var_r4_2 = temp_r5;
        }
        memcpy(temp_r6_2, &gUnk_080FB824, var_r4_2);
        *((u8 *)temp_r6_2 + var_r4_2) = 0;
    }
    strcpy(&unksp8, &arg4);
    memcpy(&unksp8, &unksp8, 0x18U);
    unksp0 = &unksp8;
    func_08076BFC(arg6D, arg6E, arg2, 0x40);
    arg6D->unk5B4 = &vtable_unk_080E7A78;
    arg6F = arg6D->unk4;
    arg12.unk0 = 2;
    arg12.unk2 = 2;
    temp_r4 = (GenObj *)((u8 *)arg6D + 0x5BC);
    unksp0 = &gUnk_080FB830;
    func_0804E8F0(arg12, temp_r4, 0, 0);
    temp_r6_3 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, temp_r4, 0x06000700, 0x80);
    temp_r1 = temp_r6_3->unk4;
    if (temp_r1 != temp_r6_3->unkC) {
        if (temp_r1 != 0) {
            temp_r1->unk0 = (s32) argA.unk0;
            temp_r1->unk4 = (s32) argA.unk4;
            temp_r1->unk8 = (s32 *) argA.unk8;
            temp_r1->unkC = (s32 *) argA.unkC;
        }
        temp_r6_3->unk4 = (void *) (temp_r6_3->unk4 + 0x10);
        temp_r3 = &unksp0 + 0x64;
        arg87 = temp_r3;
        arg79 = (GenObj *)((u8 *)arg6D + 0x640);
        temp_r7 = &unksp0 + 0x70;
        arg88 = temp_r7;
        arg7A = (GenObj *)((u8 *)arg6D + 0x6C4);
        temp_r1_2 = &unksp0 + 0x7C;
        arg89 = temp_r1_2;
        arg7B = (GenObj *)((u8 *)arg6D + 0x748);
        temp_r3_2 = temp_r3 + 0x24;
        arg8B = temp_r3_2;
        arg7C = (GenObj *)((u8 *)arg6D + 0x7CC);
        arg8C = temp_r7 + 0x24;
        arg7D = (GenObj *)((u8 *)arg6D + 0x850);
        arg8D = temp_r1_2 + 0x24;
        arg7E = (GenObj *)((u8 *)arg6D + 0x8D4);
        arg8E = temp_r3_2 + 0x74;
        arg7F = (GenObj *)((u8 *)arg6D + 0x958);
        arg8F = &arg3C;
        arg86 = &unksp0 + 0x48;
        arg99 = &arg51;
        arg85 = (GenObj *)((u8 *)arg6D + 0x1568);
        arg9A = &arg52;
        arg9B = &arg55;
        arg9C = &arg56;
        arg8A = 0x380000;
    } else {
        argA1 = temp_r1;
        arg14 = 1;
        temp_r4_2 = (s32) (temp_r1 - temp_r6_3->unk0) >> 4;
        arg13 = temp_r4_2;
        var_r0 = &arg13;
        if ((u32) temp_r4_2 < 1U) {
            var_r0 = &arg14;
        }
        temp_r0_2 = temp_r4_2 + *var_r0;
        if (temp_r0_2 != 0) {
            temp_r4_3 = temp_r0_2 * 0x10;
            var_r0_2 = malloc(temp_r4_3);
            var_sb = temp_r4_3;
            if (var_r0_2 == 0) {
                var_r0_2 = func_080D3BC0(var_sb);
            }
        } else {
            var_r0_2 = 0;
            var_sb = 0;
        }
        argA2 = var_r0_2;
        var_r2 = temp_r6_3->unk0;
        var_r3 = var_r0_2;
        temp_r4_4 = &unksp0 + 0x64;
        arg87 = temp_r4_4;
        arg79 = (GenObj *)((u8 *)arg6D + 0x640);
        temp_r0_3 = &unksp0 + 0x70;
        arg88 = temp_r0_3;
        arg7A = (GenObj *)((u8 *)arg6D + 0x6C4);
        temp_r4_5 = temp_r4_4 + 0x18;
        arg89 = temp_r4_5;
        arg7B = (GenObj *)((u8 *)arg6D + 0x748);
        temp_r0_4 = temp_r0_3 + 0x18;
        arg8B = temp_r0_4;
        arg7C = (GenObj *)((u8 *)arg6D + 0x7CC);
        temp_r4_6 = temp_r4_5 + 0x18;
        arg8C = temp_r4_6;
        arg7D = (GenObj *)((u8 *)arg6D + 0x850);
        arg8D = temp_r0_4 + 0x18;
        arg7E = (GenObj *)((u8 *)arg6D + 0x8D4);
        arg8E = temp_r4_6 + 0x68;
        arg7F = (GenObj *)((u8 *)arg6D + 0x958);
        arg8F = &arg3C;
        arg86 = &unksp0 + 0x48;
        arg99 = &arg51;
        arg85 = (GenObj *)((u8 *)arg6D + 0x1568);
        arg9A = &arg52;
        arg9B = &arg55;
        arg9C = &arg56;
        arg8A = 0x380000;
        if (var_r2 != argA1) {
            do {
                if (var_r3 != 0) {
                    var_r3->unk0 = (s32) var_r2->unk0;
                    var_r3->unk4 = (s32) var_r2->unk4;
                    var_r3->unk8 = (s32) var_r2->unk8;
                    var_r3->unkC = (s32) var_r2->unkC;
                }
                var_r2 += 0x10;
                var_r3 += 0x10;
            } while (var_r2 != argA1);
        }
        if (arg14 == 1) {
            if (var_r3 != 0) {
                var_r3->unk0 = (s32) argA.unk0;
                var_r3->unk4 = (s32) argA.unk4;
                var_r3->unk8 = (s32 *) argA.unk8;
                var_r3->unkC = (s32 *) argA.unkC;
            }
            var_r5 = (GenObj *)((u8 *)var_r3 + 0x10);
        } else {
            var_r3_2 = arg14;
            var_r2_2 = var_r3;
            if (var_r3_2 != 0) {
                do {
                    if (var_r2_2 != 0) {
                        var_r2_2->unk0 = (s32) argA.unk0;
                        var_r2_2->unk4 = (s32) argA.unk4;
                        var_r2_2->unk8 = (s32 *) argA.unk8;
                        var_r2_2->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_2 -= 1;
                    var_r2_2 += 0x10;
                } while (var_r3_2 != 0);
            }
            var_r5 = var_r2_2;
        }
        temp_r2 = temp_r6_3->unk4;
        temp_r0_5 = temp_r6_3->unk0;
        var_r1 = temp_r0_5;
        if (temp_r0_5 != temp_r2) {
            do {
                var_r1 += 0x10;
            } while (var_r1 != temp_r2);
        }
        if (temp_r0_5 != 0) {
            free();
        }
        temp_r6_3->unk0 = argA2;
        temp_r6_3->unk4 = var_r5;
        temp_r6_3->unkC = (void *) (argA2 + var_sb);
    }
    arg15 = 2;
    arg87->unk2 = 2;
    unksp0 = &gUnk_080FB830;
    func_0804E8F0(arg15, arg79, 0, 0);
    temp_r6_4 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, arg79, 0x06000780, 0x80);
    temp_r1_3 = temp_r6_4->unk4;
    if (temp_r1_3 != temp_r6_4->unkC) {
        if (temp_r1_3 != 0) {
            temp_r1_3->unk0 = (s32) argA.unk0;
            temp_r1_3->unk4 = (s32) argA.unk4;
            temp_r1_3->unk8 = (s32 *) argA.unk8;
            temp_r1_3->unkC = (s32 *) argA.unkC;
        }
        temp_r6_4->unk4 = (void *) (temp_r6_4->unk4 + 0x10);
        arg94 = 0x3C0000;
    } else {
        argA1 = temp_r1_3;
        arg17 = 1;
        temp_r4_7 = (s32) (temp_r1_3 - temp_r6_4->unk0) >> 4;
        arg16 = temp_r4_7;
        var_r0_3 = &arg16;
        if ((u32) temp_r4_7 < 1U) {
            var_r0_3 = &arg17;
        }
        temp_r0_6 = temp_r4_7 + *var_r0_3;
        if (temp_r0_6 != 0) {
            temp_r4_8 = temp_r0_6 * 0x10;
            var_r0_4 = malloc(temp_r4_8);
            var_r8 = temp_r4_8;
            if (var_r0_4 == 0) {
                var_r0_4 = func_080D3BC0(var_r8);
            }
        } else {
            var_r0_4 = 0;
            var_r8 = 0;
        }
        argA2 = var_r0_4;
        var_r2_3 = temp_r6_4->unk0;
        var_r3_3 = var_r0_4;
        arg94 = 0x3C0000;
        if (var_r2_3 != argA1) {
            do {
                if (var_r3_3 != 0) {
                    var_r3_3->unk0 = (s32) var_r2_3->unk0;
                    var_r3_3->unk4 = (s32) var_r2_3->unk4;
                    var_r3_3->unk8 = (s32) var_r2_3->unk8;
                    var_r3_3->unkC = (s32) var_r2_3->unkC;
                }
                var_r2_3 += 0x10;
                var_r3_3 += 0x10;
            } while (var_r2_3 != argA1);
        }
        if (arg17 == 1) {
            if (var_r3_3 != 0) {
                var_r3_3->unk0 = (s32) argA.unk0;
                var_r3_3->unk4 = (s32) argA.unk4;
                var_r3_3->unk8 = (s32 *) argA.unk8;
                var_r3_3->unkC = (s32 *) argA.unkC;
            }
            var_r5_2 = (GenObj *)((u8 *)var_r3_3 + 0x10);
        } else {
            var_r3_4 = arg17;
            var_r2_4 = var_r3_3;
            if (var_r3_4 != 0) {
                do {
                    if (var_r2_4 != 0) {
                        var_r2_4->unk0 = (s32) argA.unk0;
                        var_r2_4->unk4 = (s32) argA.unk4;
                        var_r2_4->unk8 = (s32 *) argA.unk8;
                        var_r2_4->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_4 -= 1;
                    var_r2_4 += 0x10;
                } while (var_r3_4 != 0);
            }
            var_r5_2 = var_r2_4;
        }
        temp_r2_2 = temp_r6_4->unk4;
        temp_r0_7 = temp_r6_4->unk0;
        var_r1_2 = temp_r0_7;
        if (temp_r0_7 != temp_r2_2) {
            do {
                var_r1_2 += 0x10;
            } while (var_r1_2 != temp_r2_2);
        }
        if (temp_r0_7 != 0) {
            free();
        }
        temp_r6_4->unk0 = argA2;
        temp_r6_4->unk4 = var_r5_2;
        temp_r6_4->unkC = (void *) (argA2 + var_r8);
    }
    arg18 = 2;
    arg88->unk2 = 2;
    unksp0 = &gUnk_080FB830;
    func_0804E8F0(arg18, arg7A, 0, 0);
    temp_r6_5 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, arg7A, 0x06000800, 0x80);
    temp_r1_4 = temp_r6_5->unk4;
    if (temp_r1_4 != temp_r6_5->unkC) {
        if (temp_r1_4 != 0) {
            temp_r1_4->unk0 = (s32) argA.unk0;
            temp_r1_4->unk4 = (s32) argA.unk4;
            temp_r1_4->unk8 = (s32 *) argA.unk8;
            temp_r1_4->unkC = (s32 *) argA.unkC;
        }
        temp_r6_5->unk4 = (void *) (temp_r6_5->unk4 + 0x10);
    } else {
        argA1 = temp_r1_4;
        arg1A = 1;
        temp_r4_9 = (s32) (temp_r1_4 - temp_r6_5->unk0) >> 4;
        arg19 = temp_r4_9;
        var_r0_5 = &arg19;
        if ((u32) temp_r4_9 < 1U) {
            var_r0_5 = &arg1A;
        }
        temp_r0_8 = temp_r4_9 + *var_r0_5;
        if (temp_r0_8 != 0) {
            temp_r4_10 = temp_r0_8 * 0x10;
            var_r0_6 = malloc(temp_r4_10);
            var_r8_2 = temp_r4_10;
            if (var_r0_6 == 0) {
                var_r0_6 = func_080D3BC0(var_r8_2);
            }
        } else {
            var_r0_6 = 0;
            var_r8_2 = 0;
        }
        argA2 = var_r0_6;
        var_r2_5 = temp_r6_5->unk0;
        var_r3_5 = var_r0_6;
        if (var_r2_5 != argA1) {
            do {
                if (var_r3_5 != 0) {
                    var_r3_5->unk0 = (s32) var_r2_5->unk0;
                    var_r3_5->unk4 = (s32) var_r2_5->unk4;
                    var_r3_5->unk8 = (s32) var_r2_5->unk8;
                    var_r3_5->unkC = (s32) var_r2_5->unkC;
                }
                var_r2_5 += 0x10;
                var_r3_5 += 0x10;
            } while (var_r2_5 != argA1);
        }
        if (arg1A == 1) {
            if (var_r3_5 != 0) {
                var_r3_5->unk0 = (s32) argA.unk0;
                var_r3_5->unk4 = (s32) argA.unk4;
                var_r3_5->unk8 = (s32 *) argA.unk8;
                var_r3_5->unkC = (s32 *) argA.unkC;
            }
            var_r5_3 = (GenObj *)((u8 *)var_r3_5 + 0x10);
        } else {
            var_r3_6 = arg1A;
            var_r2_6 = var_r3_5;
            if (var_r3_6 != 0) {
                do {
                    if (var_r2_6 != 0) {
                        var_r2_6->unk0 = (s32) argA.unk0;
                        var_r2_6->unk4 = (s32) argA.unk4;
                        var_r2_6->unk8 = (s32 *) argA.unk8;
                        var_r2_6->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_6 -= 1;
                    var_r2_6 += 0x10;
                } while (var_r3_6 != 0);
            }
            var_r5_3 = var_r2_6;
        }
        temp_r2_3 = temp_r6_5->unk4;
        temp_r0_9 = temp_r6_5->unk0;
        var_r1_3 = temp_r0_9;
        if (temp_r0_9 != temp_r2_3) {
            do {
                var_r1_3 += 0x10;
            } while (var_r1_3 != temp_r2_3);
        }
        if (temp_r0_9 != 0) {
            free();
        }
        temp_r6_5->unk0 = argA2;
        temp_r6_5->unk4 = var_r5_3;
        temp_r6_5->unkC = (void *) (argA2 + var_r8_2);
    }
    arg1B = 2;
    arg89->unk2 = 2;
    unksp0 = &gUnk_080FB830;
    func_0804E8F0(arg1B, arg7B, 0, 0);
    temp_r6_6 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, arg7B, 0x06000880, 0x80);
    temp_r1_5 = temp_r6_6->unk4;
    if (temp_r1_5 != temp_r6_6->unkC) {
        if (temp_r1_5 != 0) {
            temp_r1_5->unk0 = (s32) argA.unk0;
            temp_r1_5->unk4 = (s32) argA.unk4;
            temp_r1_5->unk8 = (s32 *) argA.unk8;
            temp_r1_5->unkC = (s32 *) argA.unkC;
        }
        temp_r6_6->unk4 = (void *) (temp_r6_6->unk4 + 0x10);
        arg75 = 0x440000;
    } else {
        argA1 = temp_r1_5;
        arg1D = 1;
        temp_r4_11 = (s32) (temp_r1_5 - temp_r6_6->unk0) >> 4;
        arg1C = temp_r4_11;
        var_r0_7 = &arg1C;
        if ((u32) temp_r4_11 < 1U) {
            var_r0_7 = &arg1D;
        }
        temp_r0_10 = temp_r4_11 + *var_r0_7;
        if (temp_r0_10 != 0) {
            temp_r4_12 = temp_r0_10 * 0x10;
            var_r0_8 = malloc(temp_r4_12);
            var_r8_3 = temp_r4_12;
            if (var_r0_8 == 0) {
                var_r0_8 = func_080D3BC0(var_r8_3);
            }
        } else {
            var_r0_8 = 0;
            var_r8_3 = 0;
        }
        argA2 = var_r0_8;
        var_r2_7 = temp_r6_6->unk0;
        var_r3_7 = var_r0_8;
        arg75 = 0x440000;
        if (var_r2_7 != argA1) {
            do {
                if (var_r3_7 != 0) {
                    var_r3_7->unk0 = (s32) var_r2_7->unk0;
                    var_r3_7->unk4 = (s32) var_r2_7->unk4;
                    var_r3_7->unk8 = (s32) var_r2_7->unk8;
                    var_r3_7->unkC = (s32) var_r2_7->unkC;
                }
                var_r2_7 += 0x10;
                var_r3_7 += 0x10;
            } while (var_r2_7 != argA1);
        }
        if (arg1D == 1) {
            if (var_r3_7 != 0) {
                var_r3_7->unk0 = (s32) argA.unk0;
                var_r3_7->unk4 = (s32) argA.unk4;
                var_r3_7->unk8 = (s32 *) argA.unk8;
                var_r3_7->unkC = (s32 *) argA.unkC;
            }
            var_r5_4 = (GenObj *)((u8 *)var_r3_7 + 0x10);
        } else {
            var_r3_8 = arg1D;
            var_r2_8 = var_r3_7;
            if (var_r3_8 != 0) {
                do {
                    if (var_r2_8 != 0) {
                        var_r2_8->unk0 = (s32) argA.unk0;
                        var_r2_8->unk4 = (s32) argA.unk4;
                        var_r2_8->unk8 = (s32 *) argA.unk8;
                        var_r2_8->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_8 -= 1;
                    var_r2_8 += 0x10;
                } while (var_r3_8 != 0);
            }
            var_r5_4 = var_r2_8;
        }
        temp_r2_4 = temp_r6_6->unk4;
        temp_r0_11 = temp_r6_6->unk0;
        var_r1_4 = temp_r0_11;
        if (temp_r0_11 != temp_r2_4) {
            do {
                var_r1_4 += 0x10;
            } while (var_r1_4 != temp_r2_4);
        }
        if (temp_r0_11 != 0) {
            free();
        }
        temp_r6_6->unk0 = argA2;
        temp_r6_6->unk4 = var_r5_4;
        temp_r6_6->unkC = (void *) (argA2 + var_r8_3);
    }
    arg1E = 2;
    arg8B->unk2 = 2;
    unksp0 = &gUnk_080FB830;
    func_0804E8F0((s32) arg1E, arg7C, 0, 0);
    temp_r6_7 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, arg7C, 0x06000900, 0x80);
    temp_r1_6 = temp_r6_7->unk4;
    if (temp_r1_6 != temp_r6_7->unkC) {
        if (temp_r1_6 != 0) {
            temp_r1_6->unk0 = (s32) argA.unk0;
            temp_r1_6->unk4 = (s32) argA.unk4;
            temp_r1_6->unk8 = (s32 *) argA.unk8;
            temp_r1_6->unkC = (s32 *) argA.unkC;
        }
        temp_r6_7->unk4 = (void *) (temp_r6_7->unk4 + 0x10);
        arg76 = 0x480000;
    } else {
        argA1 = temp_r1_6;
        arg20 = 1;
        temp_r4_13 = (s32) (argA1 - temp_r6_7->unk0) >> 4;
        var_r0_9 = &arg1F;
        *var_r0_9 = temp_r4_13;
        if ((u32) temp_r4_13 < (u32) arg20) {
            var_r0_9 = &arg20;
        }
        temp_r0_12 = temp_r4_13 + *var_r0_9;
        if (temp_r0_12 != 0) {
            temp_r4_14 = temp_r0_12 * 0x10;
            var_r0_10 = malloc(temp_r4_14);
            var_r8_4 = temp_r4_14;
            if (var_r0_10 == 0) {
                var_r0_10 = func_080D3BC0(var_r8_4);
            }
        } else {
            var_r0_10 = 0;
            var_r8_4 = 0;
        }
        argA2 = var_r0_10;
        var_r2_9 = temp_r6_7->unk0;
        var_r3_9 = var_r0_10;
        arg76 = 0x480000;
loop_132:
        if (var_r2_9 != argA1) {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) var_r2_9->unk0;
                var_r3_9->unk4 = (s32) var_r2_9->unk4;
                var_r3_9->unk8 = (s32 *) var_r2_9->unk8;
                var_r3_9->unkC = (s32 *) var_r2_9->unkC;
            }
            var_r2_9 += 0x10;
            var_r3_9 += 0x10;
            goto loop_132;
        }
        if (arg20 == 1) {
            if (var_r3_9 != 0) {
                var_r3_9->unk0 = (s32) argA.unk0;
                var_r3_9->unk4 = (s32) argA.unk4;
                var_r3_9->unk8 = (s32 *) argA.unk8;
                var_r3_9->unkC = (s32 *) argA.unkC;
            }
            var_r5_5 = (GenObj *)((u8 *)var_r3_9 + 0x10);
        } else {
            var_r3_10 = arg20;
            var_r2_10 = var_r3_9;
            if (var_r3_10 != 0) {
                do {
                    if (var_r2_10 != 0) {
                        var_r2_10->unk0 = (s32) argA.unk0;
                        var_r2_10->unk4 = (s32) argA.unk4;
                        var_r2_10->unk8 = (s32 *) argA.unk8;
                        var_r2_10->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_10 -= 1;
                    var_r2_10 += 0x10;
                } while (var_r3_10 != 0);
            }
            var_r5_5 = var_r2_10;
        }
        temp_r2_5 = temp_r6_7->unk4;
        temp_r0_13 = temp_r6_7->unk0;
        var_r1_5 = temp_r0_13;
        if (temp_r0_13 != temp_r2_5) {
            do {
                var_r1_5 += 0x10;
            } while (var_r1_5 != temp_r2_5);
        }
        if (temp_r0_13 != 0) {
            free();
        }
        temp_r6_7->unk0 = argA2;
        temp_r6_7->unk4 = var_r5_5;
        temp_r6_7->unkC = (void *) (argA2 + var_r8_4);
    }
    arg21 = 2;
    arg8C->unk2 = 2;
    unksp0 = &gUnk_080FB830;
    func_0804E8F0((s32) arg21, arg7D, 0, 0);
    temp_r6_8 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, arg7D, 0x06000980, 0x80);
    temp_r1_7 = temp_r6_8->unk4;
    if (temp_r1_7 != temp_r6_8->unkC) {
        if (temp_r1_7 != 0) {
            temp_r1_7->unk0 = (s32) argA.unk0;
            temp_r1_7->unk4 = (s32) argA.unk4;
            temp_r1_7->unk8 = (s32 *) argA.unk8;
            temp_r1_7->unkC = (s32 *) argA.unkC;
        }
        temp_r6_8->unk4 = (void *) (temp_r6_8->unk4 + 0x10);
        arg77 = 0x4C0000;
    } else {
        argA1 = temp_r1_7;
        arg23 = 1;
        temp_r4_15 = (s32) (argA1 - temp_r6_8->unk0) >> 4;
        var_r0_11 = &arg22;
        *var_r0_11 = temp_r4_15;
        if ((u32) temp_r4_15 < (u32) arg23) {
            var_r0_11 = &arg23;
        }
        temp_r0_14 = temp_r4_15 + *var_r0_11;
        if (temp_r0_14 != 0) {
            temp_r4_16 = temp_r0_14 * 0x10;
            var_r0_12 = malloc(temp_r4_16);
            var_r8_5 = temp_r4_16;
            if (var_r0_12 == 0) {
                var_r0_12 = func_080D3BC0(var_r8_5);
            }
        } else {
            var_r0_12 = 0;
            var_r8_5 = 0;
        }
        argA2 = var_r0_12;
        var_r2_11 = temp_r6_8->unk0;
        var_r3_11 = var_r0_12;
        arg77 = 0x4C0000;
loop_161:
        if (var_r2_11 != argA1) {
            if (var_r3_11 != 0) {
                var_r3_11->unk0 = (s32) var_r2_11->unk0;
                var_r3_11->unk4 = (s32) var_r2_11->unk4;
                var_r3_11->unk8 = (s32 *) var_r2_11->unk8;
                var_r3_11->unkC = (s32 *) var_r2_11->unkC;
            }
            var_r2_11 += 0x10;
            var_r3_11 += 0x10;
            goto loop_161;
        }
        if (arg23 == 1) {
            if (var_r3_11 != 0) {
                var_r3_11->unk0 = (s32) argA.unk0;
                var_r3_11->unk4 = (s32) argA.unk4;
                var_r3_11->unk8 = (s32 *) argA.unk8;
                var_r3_11->unkC = (s32 *) argA.unkC;
            }
            var_r5_6 = (GenObj *)((u8 *)var_r3_11 + 0x10);
        } else {
            var_r3_12 = arg23;
            var_r2_12 = var_r3_11;
            if (var_r3_12 != 0) {
                do {
                    if (var_r2_12 != 0) {
                        var_r2_12->unk0 = (s32) argA.unk0;
                        var_r2_12->unk4 = (s32) argA.unk4;
                        var_r2_12->unk8 = (s32 *) argA.unk8;
                        var_r2_12->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_12 -= 1;
                    var_r2_12 += 0x10;
                } while (var_r3_12 != 0);
            }
            var_r5_6 = var_r2_12;
        }
        temp_r2_6 = temp_r6_8->unk4;
        temp_r0_15 = temp_r6_8->unk0;
        var_r1_6 = temp_r0_15;
        if (temp_r0_15 != temp_r2_6) {
            do {
                var_r1_6 += 0x10;
            } while (var_r1_6 != temp_r2_6);
        }
        if (temp_r0_15 != 0) {
            free();
        }
        temp_r6_8->unk0 = argA2;
        temp_r6_8->unk4 = var_r5_6;
        temp_r6_8->unkC = (void *) (argA2 + var_r8_5);
    }
    arg24 = 2;
    arg8D->unk2 = 2;
    unksp0 = &gUnk_080FB834;
    func_0804E8F0((s32) arg24, arg7E, 0, 0);
    temp_r6_9 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, arg7E, 0x06000A00, 0x80);
    temp_r1_8 = temp_r6_9->unk4;
    if (temp_r1_8 != temp_r6_9->unkC) {
        if (temp_r1_8 != 0) {
            temp_r1_8->unk0 = (s32) argA.unk0;
            temp_r1_8->unk4 = (s32) argA.unk4;
            temp_r1_8->unk8 = (s32 *) argA.unk8;
            temp_r1_8->unkC = (s32 *) argA.unkC;
        }
        temp_r6_9->unk4 = (void *) (temp_r6_9->unk4 + 0x10);
        arg78 = 0x500000U;
    } else {
        argA1 = temp_r1_8;
        arg26 = 1;
        temp_r4_17 = (s32) (argA1 - temp_r6_9->unk0) >> 4;
        var_r0_13 = &arg25;
        *var_r0_13 = temp_r4_17;
        if ((u32) temp_r4_17 < (u32) arg26) {
            var_r0_13 = &arg26;
        }
        temp_r0_16 = temp_r4_17 + *var_r0_13;
        if (temp_r0_16 != 0) {
            temp_r4_18 = temp_r0_16 * 0x10;
            var_r0_14 = malloc(temp_r4_18);
            var_r8_6 = temp_r4_18;
            if (var_r0_14 == 0) {
                var_r0_14 = func_080D3BC0(var_r8_6);
            }
        } else {
            var_r0_14 = 0;
            var_r8_6 = 0;
        }
        argA2 = var_r0_14;
        var_r2_13 = temp_r6_9->unk0;
        var_r3_13 = var_r0_14;
        arg78 = 0x500000U;
loop_190:
        if (var_r2_13 != argA1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32) var_r2_13->unk0;
                var_r3_13->unk4 = (s32) var_r2_13->unk4;
                var_r3_13->unk8 = (s32 *) var_r2_13->unk8;
                var_r3_13->unkC = (s32 *) var_r2_13->unkC;
            }
            var_r2_13 += 0x10;
            var_r3_13 += 0x10;
            goto loop_190;
        }
        if (arg26 == 1) {
            if (var_r3_13 != 0) {
                var_r3_13->unk0 = (s32) argA.unk0;
                var_r3_13->unk4 = (s32) argA.unk4;
                var_r3_13->unk8 = (s32 *) argA.unk8;
                var_r3_13->unkC = (s32 *) argA.unkC;
            }
            var_r5_7 = (GenObj *)((u8 *)var_r3_13 + 0x10);
        } else {
            var_r3_14 = arg26;
            var_r2_14 = var_r3_13;
            if (var_r3_14 != 0) {
                do {
                    if (var_r2_14 != 0) {
                        var_r2_14->unk0 = (s32) argA.unk0;
                        var_r2_14->unk4 = (s32) argA.unk4;
                        var_r2_14->unk8 = (s32 *) argA.unk8;
                        var_r2_14->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_14 -= 1;
                    var_r2_14 += 0x10;
                } while (var_r3_14 != 0);
            }
            var_r5_7 = var_r2_14;
        }
        temp_r2_7 = temp_r6_9->unk4;
        temp_r0_17 = temp_r6_9->unk0;
        var_r1_7 = temp_r0_17;
        if (temp_r0_17 != temp_r2_7) {
            do {
                var_r1_7 += 0x10;
            } while (var_r1_7 != temp_r2_7);
        }
        if (temp_r0_17 != 0) {
            free();
        }
        temp_r6_9->unk0 = argA2;
        temp_r6_9->unk4 = var_r5_7;
        temp_r6_9->unkC = (void *) (argA2 + var_r8_6);
    }
    temp_r6_10 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, &gUnk_0875196C, 0x06000A80, 0x80);
    temp_r1_9 = temp_r6_10->unk4;
    if (temp_r1_9 != temp_r6_10->unkC) {
        if (temp_r1_9 != 0) {
            temp_r1_9->unk0 = (s32) argA.unk0;
            temp_r1_9->unk4 = (s32) argA.unk4;
            temp_r1_9->unk8 = (s32 *) argA.unk8;
            temp_r1_9->unkC = (s32 *) argA.unkC;
        }
        temp_r6_10->unk4 = (void *) (temp_r6_10->unk4 + 0x10);
    } else {
        argA1 = temp_r1_9;
        arg28 = 1;
        temp_r4_19 = (s32) (argA1 - temp_r6_10->unk0) >> 4;
        var_r0_15 = &arg27;
        *var_r0_15 = temp_r4_19;
        if ((u32) temp_r4_19 < (u32) arg28) {
            var_r0_15 = &arg28;
        }
        temp_r0_18 = temp_r4_19 + *var_r0_15;
        if (temp_r0_18 != 0) {
            temp_r4_20 = temp_r0_18 * 0x10;
            var_r0_16 = malloc(temp_r4_20);
            var_r8_7 = temp_r4_20;
            if (var_r0_16 == 0) {
                var_r0_16 = func_080D3BC0(var_r8_7);
            }
        } else {
            var_r0_16 = 0;
            var_r8_7 = 0;
        }
        argA2 = var_r0_16;
        var_r2_15 = temp_r6_10->unk0;
        var_r3_15 = var_r0_16;
        if (var_r2_15 != argA1) {
            do {
                if (var_r3_15 != 0) {
                    var_r3_15->unk0 = (s32) var_r2_15->unk0;
                    var_r3_15->unk4 = (s32) var_r2_15->unk4;
                    var_r3_15->unk8 = (s32) var_r2_15->unk8;
                    var_r3_15->unkC = (s32) var_r2_15->unkC;
                }
                var_r2_15 += 0x10;
                var_r3_15 += 0x10;
            } while (var_r2_15 != argA1);
        }
        if (arg28 == 1) {
            if (var_r3_15 != 0) {
                var_r3_15->unk0 = (s32) argA.unk0;
                var_r3_15->unk4 = (s32) argA.unk4;
                var_r3_15->unk8 = (s32 *) argA.unk8;
                var_r3_15->unkC = (s32 *) argA.unkC;
            }
            var_r5_8 = (GenObj *)((u8 *)var_r3_15 + 0x10);
        } else {
            var_r3_16 = arg28;
            var_r2_16 = var_r3_15;
            if (var_r3_16 != 0) {
                do {
                    if (var_r2_16 != 0) {
                        var_r2_16->unk0 = (s32) argA.unk0;
                        var_r2_16->unk4 = (s32) argA.unk4;
                        var_r2_16->unk8 = (s32 *) argA.unk8;
                        var_r2_16->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_16 -= 1;
                    var_r2_16 += 0x10;
                } while (var_r3_16 != 0);
            }
            var_r5_8 = var_r2_16;
        }
        temp_r2_8 = temp_r6_10->unk4;
        temp_r0_19 = temp_r6_10->unk0;
        var_r1_8 = temp_r0_19;
        if (temp_r0_19 != temp_r2_8) {
            do {
                var_r1_8 += 0x10;
            } while (var_r1_8 != temp_r2_8);
        }
        if (temp_r0_19 != 0) {
            free();
        }
        temp_r6_10->unk0 = argA2;
        temp_r6_10->unk4 = var_r5_8;
        temp_r6_10->unkC = (void *) (argA2 + var_r8_7);
    }
    temp_r6_11 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, &gUnk_087519EC, 0x05000020, 0x20);
    temp_r1_10 = temp_r6_11->unk4;
    if (temp_r1_10 != temp_r6_11->unkC) {
        if (temp_r1_10 != 0) {
            temp_r1_10->unk0 = (s32) argA.unk0;
            temp_r1_10->unk4 = (s32) argA.unk4;
            temp_r1_10->unk8 = (s32 *) argA.unk8;
            temp_r1_10->unkC = (s32 *) argA.unkC;
        }
        temp_r6_11->unk4 = (void *) (temp_r6_11->unk4 + 0x10);
    } else {
        argA1 = temp_r1_10;
        arg2A = 1;
        temp_r4_21 = (s32) (argA1 - temp_r6_11->unk0) >> 4;
        var_r0_17 = &arg29;
        *var_r0_17 = temp_r4_21;
        if ((u32) temp_r4_21 < (u32) arg2A) {
            var_r0_17 = &arg2A;
        }
        temp_r0_20 = temp_r4_21 + *var_r0_17;
        if (temp_r0_20 != 0) {
            temp_r4_22 = temp_r0_20 * 0x10;
            var_r0_18 = malloc(temp_r4_22);
            var_r8_8 = temp_r4_22;
            if (var_r0_18 == 0) {
                var_r0_18 = func_080D3BC0(var_r8_8);
            }
        } else {
            var_r0_18 = 0;
            var_r8_8 = 0;
        }
        argA2 = var_r0_18;
        var_r2_17 = temp_r6_11->unk0;
        var_r3_17 = var_r0_18;
loop_247:
        if (var_r2_17 != argA1) {
            if (var_r3_17 != 0) {
                var_r3_17->unk0 = (s32) var_r2_17->unk0;
                var_r3_17->unk4 = (s32) var_r2_17->unk4;
                var_r3_17->unk8 = (s32 *) var_r2_17->unk8;
                var_r3_17->unkC = (s32 *) var_r2_17->unkC;
            }
            var_r2_17 += 0x10;
            var_r3_17 += 0x10;
            goto loop_247;
        }
        if (arg2A == 1) {
            if (var_r3_17 != 0) {
                var_r3_17->unk0 = (s32) argA.unk0;
                var_r3_17->unk4 = (s32) argA.unk4;
                var_r3_17->unk8 = (s32 *) argA.unk8;
                var_r3_17->unkC = (s32 *) argA.unkC;
            }
            var_r5_9 = (GenObj *)((u8 *)var_r3_17 + 0x10);
        } else {
            var_r3_18 = arg2A;
            var_r2_18 = var_r3_17;
            if (var_r3_18 != 0) {
                do {
                    if (var_r2_18 != 0) {
                        var_r2_18->unk0 = (s32) argA.unk0;
                        var_r2_18->unk4 = (s32) argA.unk4;
                        var_r2_18->unk8 = (s32 *) argA.unk8;
                        var_r2_18->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_18 -= 1;
                    var_r2_18 += 0x10;
                } while (var_r3_18 != 0);
            }
            var_r5_9 = var_r2_18;
        }
        temp_r2_9 = temp_r6_11->unk4;
        temp_r0_21 = temp_r6_11->unk0;
        var_r1_9 = temp_r0_21;
        if (temp_r0_21 != temp_r2_9) {
            do {
                var_r1_9 += 0x10;
            } while (var_r1_9 != temp_r2_9);
        }
        if (temp_r0_21 != 0) {
            free();
        }
        temp_r6_11->unk0 = argA2;
        temp_r6_11->unk4 = var_r5_9;
        temp_r6_11->unkC = (void *) (argA2 + var_r8_8);
    }
    temp_r6_12 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, &gUnk_0875254C, 0x06000B00, 0x20);
    temp_r1_11 = temp_r6_12->unk4;
    if (temp_r1_11 != temp_r6_12->unkC) {
        if (temp_r1_11 != 0) {
            temp_r1_11->unk0 = (s32) argA.unk0;
            temp_r1_11->unk4 = (s32) argA.unk4;
            temp_r1_11->unk8 = (s32 *) argA.unk8;
            temp_r1_11->unkC = (s32 *) argA.unkC;
        }
        temp_r6_12->unk4 = (void *) (temp_r6_12->unk4 + 0x10);
    } else {
        argA1 = temp_r1_11;
        arg2C = 1;
        temp_r4_23 = (s32) (argA1 - temp_r6_12->unk0) >> 4;
        var_r0_19 = &arg2B;
        *var_r0_19 = temp_r4_23;
        if ((u32) temp_r4_23 < (u32) arg2C) {
            var_r0_19 = &arg2C;
        }
        temp_r0_22 = temp_r4_23 + *var_r0_19;
        if (temp_r0_22 != 0) {
            temp_r4_24 = temp_r0_22 * 0x10;
            var_r0_20 = malloc(temp_r4_24);
            var_r8_9 = temp_r4_24;
            if (var_r0_20 == 0) {
                var_r0_20 = func_080D3BC0(var_r8_9);
            }
        } else {
            var_r0_20 = 0;
            var_r8_9 = 0;
        }
        argA2 = var_r0_20;
        var_r2_19 = temp_r6_12->unk0;
        var_r3_19 = var_r0_20;
        if (var_r2_19 != argA1) {
            do {
                if (var_r3_19 != 0) {
                    var_r3_19->unk0 = (s32) var_r2_19->unk0;
                    var_r3_19->unk4 = (s32) var_r2_19->unk4;
                    var_r3_19->unk8 = (s32) var_r2_19->unk8;
                    var_r3_19->unkC = (s32) var_r2_19->unkC;
                }
                var_r2_19 += 0x10;
                var_r3_19 += 0x10;
            } while (var_r2_19 != argA1);
        }
        if (arg2C == 1) {
            if (var_r3_19 != 0) {
                var_r3_19->unk0 = (s32) argA.unk0;
                var_r3_19->unk4 = (s32) argA.unk4;
                var_r3_19->unk8 = (s32 *) argA.unk8;
                var_r3_19->unkC = (s32 *) argA.unkC;
            }
            var_r5_10 = (GenObj *)((u8 *)var_r3_19 + 0x10);
        } else {
            var_r3_20 = arg2C;
            var_r2_20 = var_r3_19;
            if (var_r3_20 != 0) {
                do {
                    if (var_r2_20 != 0) {
                        var_r2_20->unk0 = (s32) argA.unk0;
                        var_r2_20->unk4 = (s32) argA.unk4;
                        var_r2_20->unk8 = (s32 *) argA.unk8;
                        var_r2_20->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_20 -= 1;
                    var_r2_20 += 0x10;
                } while (var_r3_20 != 0);
            }
            var_r5_10 = var_r2_20;
        }
        temp_r2_10 = temp_r6_12->unk4;
        temp_r0_23 = temp_r6_12->unk0;
        var_r1_10 = temp_r0_23;
        if (temp_r0_23 != temp_r2_10) {
            do {
                var_r1_10 += 0x10;
            } while (var_r1_10 != temp_r2_10);
        }
        if (temp_r0_23 != 0) {
            free();
        }
        temp_r6_12->unk0 = argA2;
        temp_r6_12->unk4 = var_r5_10;
        temp_r6_12->unkC = (void *) (argA2 + var_r8_9);
    }
    temp_r6_13 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, &gUnk_087525CC, 0x05000040, 0x20);
    temp_r1_12 = temp_r6_13->unk4;
    if (temp_r1_12 != temp_r6_13->unkC) {
        if (temp_r1_12 != 0) {
            temp_r1_12->unk0 = (s32) argA.unk0;
            temp_r1_12->unk4 = (s32) argA.unk4;
            temp_r1_12->unk8 = (s32 *) argA.unk8;
            temp_r1_12->unkC = (s32 *) argA.unkC;
        }
        temp_r6_13->unk4 = (void *) (temp_r6_13->unk4 + 0x10);
    } else {
        argA1 = temp_r1_12;
        arg2E = 1;
        temp_r4_25 = (s32) (argA1 - temp_r6_13->unk0) >> 4;
        var_r0_21 = &arg2D;
        *var_r0_21 = temp_r4_25;
        if ((u32) temp_r4_25 < (u32) arg2E) {
            var_r0_21 = &arg2E;
        }
        temp_r0_24 = temp_r4_25 + *var_r0_21;
        if (temp_r0_24 != 0) {
            temp_r4_26 = temp_r0_24 * 0x10;
            var_r0_22 = malloc(temp_r4_26);
            var_r8_10 = temp_r4_26;
            if (var_r0_22 == 0) {
                var_r0_22 = func_080D3BC0(var_r8_10);
            }
        } else {
            var_r0_22 = 0;
            var_r8_10 = 0;
        }
        argA2 = var_r0_22;
        var_r2_21 = temp_r6_13->unk0;
        var_r3_21 = var_r0_22;
loop_304:
        if (var_r2_21 != argA1) {
            if (var_r3_21 != 0) {
                var_r3_21->unk0 = (s32) var_r2_21->unk0;
                var_r3_21->unk4 = (s32) var_r2_21->unk4;
                var_r3_21->unk8 = (s32 *) var_r2_21->unk8;
                var_r3_21->unkC = (s32 *) var_r2_21->unkC;
            }
            var_r2_21 += 0x10;
            var_r3_21 += 0x10;
            goto loop_304;
        }
        if (arg2E == 1) {
            if (var_r3_21 != 0) {
                var_r3_21->unk0 = (s32) argA.unk0;
                var_r3_21->unk4 = (s32) argA.unk4;
                var_r3_21->unk8 = (s32 *) argA.unk8;
                var_r3_21->unkC = (s32 *) argA.unkC;
            }
            var_r5_11 = (GenObj *)((u8 *)var_r3_21 + 0x10);
        } else {
            var_r3_22 = arg2E;
            var_r2_22 = var_r3_21;
            if (var_r3_22 != 0) {
                do {
                    if (var_r2_22 != 0) {
                        var_r2_22->unk0 = (s32) argA.unk0;
                        var_r2_22->unk4 = (s32) argA.unk4;
                        var_r2_22->unk8 = (s32 *) argA.unk8;
                        var_r2_22->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_22 -= 1;
                    var_r2_22 += 0x10;
                } while (var_r3_22 != 0);
            }
            var_r5_11 = var_r2_22;
        }
        temp_r2_11 = temp_r6_13->unk4;
        temp_r0_25 = temp_r6_13->unk0;
        var_r1_11 = temp_r0_25;
        if (temp_r0_25 != temp_r2_11) {
            do {
                var_r1_11 += 0x10;
            } while (var_r1_11 != temp_r2_11);
        }
        if (temp_r0_25 != 0) {
            free();
        }
        temp_r6_13->unk0 = argA2;
        temp_r6_13->unk4 = var_r5_11;
        temp_r6_13->unkC = (void *) (argA2 + var_r8_10);
    }
    temp_r6_14 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, &gUnk_087530CC, 0x06000B80, 0x20);
    temp_r1_13 = temp_r6_14->unk4;
    if (temp_r1_13 != temp_r6_14->unkC) {
        if (temp_r1_13 != 0) {
            temp_r1_13->unk0 = (s32) argA.unk0;
            temp_r1_13->unk4 = (s32) argA.unk4;
            temp_r1_13->unk8 = (s32 *) argA.unk8;
            temp_r1_13->unkC = (s32 *) argA.unkC;
        }
        temp_r6_14->unk4 = (void *) (temp_r6_14->unk4 + 0x10);
    } else {
        argA1 = temp_r1_13;
        arg30 = 1;
        temp_r4_27 = (s32) (argA1 - temp_r6_14->unk0) >> 4;
        var_r0_23 = &arg2F;
        *var_r0_23 = temp_r4_27;
        if ((u32) temp_r4_27 < (u32) arg30) {
            var_r0_23 = &arg30;
        }
        temp_r0_26 = temp_r4_27 + *var_r0_23;
        if (temp_r0_26 != 0) {
            temp_r4_28 = temp_r0_26 * 0x10;
            var_r0_24 = malloc(temp_r4_28);
            var_r8_11 = temp_r4_28;
            if (var_r0_24 == 0) {
                var_r0_24 = func_080D3BC0(var_r8_11);
            }
        } else {
            var_r0_24 = 0;
            var_r8_11 = 0;
        }
        argA2 = var_r0_24;
        var_r2_23 = temp_r6_14->unk0;
        var_r3_23 = var_r0_24;
        if (var_r2_23 != argA1) {
            do {
                if (var_r3_23 != 0) {
                    var_r3_23->unk0 = (s32) var_r2_23->unk0;
                    var_r3_23->unk4 = (s32) var_r2_23->unk4;
                    var_r3_23->unk8 = (s32) var_r2_23->unk8;
                    var_r3_23->unkC = (s32) var_r2_23->unkC;
                }
                var_r2_23 += 0x10;
                var_r3_23 += 0x10;
            } while (var_r2_23 != argA1);
        }
        if (arg30 == 1) {
            if (var_r3_23 != 0) {
                var_r3_23->unk0 = (s32) argA.unk0;
                var_r3_23->unk4 = (s32) argA.unk4;
                var_r3_23->unk8 = (s32 *) argA.unk8;
                var_r3_23->unkC = (s32 *) argA.unkC;
            }
            var_r5_12 = (GenObj *)((u8 *)var_r3_23 + 0x10);
        } else {
            var_r3_24 = arg30;
            var_r2_24 = var_r3_23;
            if (var_r3_24 != 0) {
                do {
                    if (var_r2_24 != 0) {
                        var_r2_24->unk0 = (s32) argA.unk0;
                        var_r2_24->unk4 = (s32) argA.unk4;
                        var_r2_24->unk8 = (s32 *) argA.unk8;
                        var_r2_24->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_24 -= 1;
                    var_r2_24 += 0x10;
                } while (var_r3_24 != 0);
            }
            var_r5_12 = var_r2_24;
        }
        temp_r2_12 = temp_r6_14->unk4;
        temp_r0_27 = temp_r6_14->unk0;
        var_r1_12 = temp_r0_27;
        if (temp_r0_27 != temp_r2_12) {
            do {
                var_r1_12 += 0x10;
            } while (var_r1_12 != temp_r2_12);
        }
        if (temp_r0_27 != 0) {
            free();
        }
        temp_r6_14->unk0 = argA2;
        temp_r6_14->unk4 = var_r5_12;
        temp_r6_14->unkC = (void *) (argA2 + var_r8_11);
    }
    temp_r6_15 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, &gUnk_0875314C, 0x05000060, 0x20);
    temp_r1_14 = temp_r6_15->unk4;
    if (temp_r1_14 != temp_r6_15->unkC) {
        if (temp_r1_14 != 0) {
            temp_r1_14->unk0 = (s32) argA.unk0;
            temp_r1_14->unk4 = (s32) argA.unk4;
            temp_r1_14->unk8 = (s32 *) argA.unk8;
            temp_r1_14->unkC = (s32 *) argA.unkC;
        }
        temp_r6_15->unk4 = (void *) (temp_r6_15->unk4 + 0x10);
    } else {
        argA1 = temp_r1_14;
        arg32 = 1;
        temp_r4_29 = (s32) (argA1 - temp_r6_15->unk0) >> 4;
        var_r0_25 = &arg31;
        *var_r0_25 = temp_r4_29;
        if ((u32) temp_r4_29 < (u32) arg32) {
            var_r0_25 = &arg32;
        }
        temp_r0_28 = temp_r4_29 + *var_r0_25;
        if (temp_r0_28 != 0) {
            temp_r4_30 = temp_r0_28 * 0x10;
            var_r0_26 = malloc(temp_r4_30);
            var_r8_12 = temp_r4_30;
            if (var_r0_26 == 0) {
                var_r0_26 = func_080D3BC0(var_r8_12);
            }
        } else {
            var_r0_26 = 0;
            var_r8_12 = 0;
        }
        argA2 = var_r0_26;
        var_r2_25 = temp_r6_15->unk0;
        var_r3_25 = var_r0_26;
loop_361:
        if (var_r2_25 != argA1) {
            if (var_r3_25 != 0) {
                var_r3_25->unk0 = (s32) var_r2_25->unk0;
                var_r3_25->unk4 = (s32) var_r2_25->unk4;
                var_r3_25->unk8 = (s32 *) var_r2_25->unk8;
                var_r3_25->unkC = (s32 *) var_r2_25->unkC;
            }
            var_r2_25 += 0x10;
            var_r3_25 += 0x10;
            goto loop_361;
        }
        if (arg32 == 1) {
            if (var_r3_25 != 0) {
                var_r3_25->unk0 = (s32) argA.unk0;
                var_r3_25->unk4 = (s32) argA.unk4;
                var_r3_25->unk8 = (s32 *) argA.unk8;
                var_r3_25->unkC = (s32 *) argA.unkC;
            }
            var_r5_13 = (GenObj *)((u8 *)var_r3_25 + 0x10);
        } else {
            var_r3_26 = arg32;
            var_r2_26 = var_r3_25;
            if (var_r3_26 != 0) {
                do {
                    if (var_r2_26 != 0) {
                        var_r2_26->unk0 = (s32) argA.unk0;
                        var_r2_26->unk4 = (s32) argA.unk4;
                        var_r2_26->unk8 = (s32 *) argA.unk8;
                        var_r2_26->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_26 -= 1;
                    var_r2_26 += 0x10;
                } while (var_r3_26 != 0);
            }
            var_r5_13 = var_r2_26;
        }
        temp_r2_13 = temp_r6_15->unk4;
        temp_r0_29 = temp_r6_15->unk0;
        var_r1_13 = temp_r0_29;
        if (temp_r0_29 != temp_r2_13) {
            do {
                var_r1_13 += 0x10;
            } while (var_r1_13 != temp_r2_13);
        }
        if (temp_r0_29 != 0) {
            free();
        }
        temp_r6_15->unk0 = argA2;
        temp_r6_15->unk4 = var_r5_13;
        temp_r6_15->unkC = (void *) (argA2 + var_r8_12);
    }
    temp_r6_16 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, &gUnk_0875348C, 0x06000BA0, 0x20);
    temp_r1_15 = temp_r6_16->unk4;
    if (temp_r1_15 != temp_r6_16->unkC) {
        if (temp_r1_15 != 0) {
            temp_r1_15->unk0 = (s32) argA.unk0;
            temp_r1_15->unk4 = (s32) argA.unk4;
            temp_r1_15->unk8 = (s32 *) argA.unk8;
            temp_r1_15->unkC = (s32 *) argA.unkC;
        }
        temp_r6_16->unk4 = (void *) (temp_r6_16->unk4 + 0x10);
    } else {
        argA1 = temp_r1_15;
        arg34 = 1;
        temp_r4_31 = (s32) (argA1 - temp_r6_16->unk0) >> 4;
        var_r0_27 = &arg33;
        *var_r0_27 = temp_r4_31;
        if ((u32) temp_r4_31 < (u32) arg34) {
            var_r0_27 = &arg34;
        }
        temp_r0_30 = temp_r4_31 + *var_r0_27;
        if (temp_r0_30 != 0) {
            temp_r4_32 = temp_r0_30 * 0x10;
            var_r0_28 = malloc(temp_r4_32);
            var_r8_13 = temp_r4_32;
            if (var_r0_28 == 0) {
                var_r0_28 = func_080D3BC0(var_r8_13);
            }
        } else {
            var_r0_28 = 0;
            var_r8_13 = 0;
        }
        argA2 = var_r0_28;
        var_r2_27 = temp_r6_16->unk0;
        var_r3_27 = var_r0_28;
        if (var_r2_27 != argA1) {
            do {
                if (var_r3_27 != 0) {
                    var_r3_27->unk0 = (s32) var_r2_27->unk0;
                    var_r3_27->unk4 = (s32) var_r2_27->unk4;
                    var_r3_27->unk8 = (s32) var_r2_27->unk8;
                    var_r3_27->unkC = (s32) var_r2_27->unkC;
                }
                var_r2_27 += 0x10;
                var_r3_27 += 0x10;
            } while (var_r2_27 != argA1);
        }
        if (arg34 == 1) {
            if (var_r3_27 != 0) {
                var_r3_27->unk0 = (s32) argA.unk0;
                var_r3_27->unk4 = (s32) argA.unk4;
                var_r3_27->unk8 = (s32 *) argA.unk8;
                var_r3_27->unkC = (s32 *) argA.unkC;
            }
            var_r5_14 = (GenObj *)((u8 *)var_r3_27 + 0x10);
        } else {
            var_r3_28 = arg34;
            var_r2_28 = var_r3_27;
            if (var_r3_28 != 0) {
                do {
                    if (var_r2_28 != 0) {
                        var_r2_28->unk0 = (s32) argA.unk0;
                        var_r2_28->unk4 = (s32) argA.unk4;
                        var_r2_28->unk8 = (s32 *) argA.unk8;
                        var_r2_28->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_28 -= 1;
                    var_r2_28 += 0x10;
                } while (var_r3_28 != 0);
            }
            var_r5_14 = var_r2_28;
        }
        temp_r2_14 = temp_r6_16->unk4;
        temp_r0_31 = temp_r6_16->unk0;
        var_r1_14 = temp_r0_31;
        if (temp_r0_31 != temp_r2_14) {
            do {
                var_r1_14 += 0x10;
            } while (var_r1_14 != temp_r2_14);
        }
        if (temp_r0_31 != 0) {
            free();
        }
        temp_r6_16->unk0 = argA2;
        temp_r6_16->unk4 = var_r5_14;
        temp_r6_16->unkC = (void *) (argA2 + var_r8_13);
    }
    temp_r6_17 = func_08008910(arg6D->unk0);
    func_08008F0C(&argA, &gUnk_0875350C, 0x05000080, 0x20);
    temp_r1_16 = temp_r6_17->unk4;
    if (temp_r1_16 != temp_r6_17->unkC) {
        if (temp_r1_16 != 0) {
            temp_r1_16->unk0 = (s32) argA.unk0;
            temp_r1_16->unk4 = (s32) argA.unk4;
            temp_r1_16->unk8 = (s32 *) argA.unk8;
            temp_r1_16->unkC = (s32 *) argA.unkC;
        }
        temp_r6_17->unk4 = (void *) (temp_r6_17->unk4 + 0x10);
    } else {
        argA1 = temp_r1_16;
        arg36 = 1;
        temp_r4_33 = (s32) (argA1 - temp_r6_17->unk0) >> 4;
        var_r0_29 = &arg35;
        *var_r0_29 = temp_r4_33;
        if ((u32) temp_r4_33 < (u32) arg36) {
            var_r0_29 = &arg36;
        }
        temp_r0_32 = temp_r4_33 + *var_r0_29;
        if (temp_r0_32 != 0) {
            temp_r4_34 = temp_r0_32 * 0x10;
            var_r0_30 = malloc(temp_r4_34);
            var_r8_14 = temp_r4_34;
            if (var_r0_30 == 0) {
                var_r0_30 = func_080D3BC0(var_r8_14);
            }
        } else {
            var_r0_30 = 0;
            var_r8_14 = 0;
        }
        argA2 = var_r0_30;
        var_r2_29 = temp_r6_17->unk0;
        var_r3_29 = var_r0_30;
loop_418:
        if (var_r2_29 != argA1) {
            if (var_r3_29 != 0) {
                var_r3_29->unk0 = (s32) var_r2_29->unk0;
                var_r3_29->unk4 = (s32) var_r2_29->unk4;
                var_r3_29->unk8 = (s32 *) var_r2_29->unk8;
                var_r3_29->unkC = (s32 *) var_r2_29->unkC;
            }
            var_r2_29 += 0x10;
            var_r3_29 += 0x10;
            goto loop_418;
        }
        if (arg36 == 1) {
            if (var_r3_29 != 0) {
                var_r3_29->unk0 = (s32) argA.unk0;
                var_r3_29->unk4 = (s32) argA.unk4;
                var_r3_29->unk8 = (s32 *) argA.unk8;
                var_r3_29->unkC = (s32 *) argA.unkC;
            }
            var_r5_15 = (GenObj *)((u8 *)var_r3_29 + 0x10);
        } else {
            var_r3_30 = arg36;
            var_r2_30 = var_r3_29;
            if (var_r3_30 != 0) {
                do {
                    if (var_r2_30 != 0) {
                        var_r2_30->unk0 = (s32) argA.unk0;
                        var_r2_30->unk4 = (s32) argA.unk4;
                        var_r2_30->unk8 = (s32 *) argA.unk8;
                        var_r2_30->unkC = (s32 *) argA.unkC;
                    }
                    var_r3_30 -= 1;
                    var_r2_30 += 0x10;
                } while (var_r3_30 != 0);
            }
            var_r5_15 = var_r2_30;
        }
        temp_r2_15 = temp_r6_17->unk4;
        temp_r0_33 = temp_r6_17->unk0;
        var_r1_15 = temp_r0_33;
        if (temp_r0_33 != temp_r2_15) {
            do {
                var_r1_15 += 0x10;
            } while (var_r1_15 != temp_r2_15);
        }
        if (temp_r0_33 != 0) {
            free();
        }
        temp_r6_17->unk0 = argA2;
        temp_r6_17->unk4 = var_r5_15;
        temp_r6_17->unkC = (void *) (argA2 + var_r8_14);
    }
    arg70 = 4;
    argA.unk0 = 0x20;
    argA.unk4 = 0;
    argA.unk8 = &gUnk_08752F8C;
    argA.unkC = &gUnk_0875300C;
    temp_r6_18 = (GenObj *)((u8 *)arg6D + 0x594);
    temp_r1_17 = temp_r6_18->unk4;
    if (temp_r1_17 != temp_r6_18->unkC) {
        if (temp_r1_17 != 0) {
            temp_r1_17->unk0 = (s32) argA.unk0;
            temp_r1_17->unk4 = (s32) argA.unk4;
            temp_r1_17->unk8 = (s32 *) argA.unk8;
            temp_r1_17->unkC = argD;
        }
        temp_r6_18->unk4 = (void *) (temp_r6_18->unk4 + 0x10);
        arg80 = 7;
    } else {
        argA1 = temp_r1_17;
        arg38 = 1;
        temp_r4_35 = (s32) (argA1 - arg6D->unk594) >> 4;
        var_r0_31 = &arg37;
        *var_r0_31 = temp_r4_35;
        if ((u32) temp_r4_35 < (u32) arg38) {
            var_r0_31 = &arg38;
        }
        temp_r0_34 = temp_r4_35 + *var_r0_31;
        if (temp_r0_34 != 0) {
            temp_r4_36 = temp_r0_34 * 0x10;
            var_r0_32 = malloc(temp_r4_36);
            var_r8_15 = temp_r4_36;
            if (var_r0_32 == 0) {
                var_r0_32 = func_080D3BC0(var_r8_15);
            }
        } else {
            var_r0_32 = 0;
            var_r8_15 = 0;
        }
        argA2 = var_r0_32;
        var_r3_31 = arg6D->unk594;
        var_r2_31 = var_r0_32;
        arg80 = arg70 + 3;
        if (var_r3_31 != argA1) {
            do {
                if (var_r2_31 != 0) {
                    var_r2_31->unk0 = (s32) var_r3_31->unk0;
                    var_r2_31->unk4 = (s32) var_r3_31->unk4;
                    var_r2_31->unk8 = (s32) var_r3_31->unk8;
                    var_r2_31->unkC = (s32) var_r3_31->unkC;
                }
                var_r3_31 += 0x10;
                var_r2_31 += 0x10;
            } while (var_r3_31 != argA1);
        }
        temp_r1_18 = arg38;
        if (temp_r1_18 == 1) {
            if (var_r2_31 != 0) {
                var_r2_31->unk0 = (s32) argA.unk0;
                var_r2_31->unk4 = (s32) argA.unk4;
                var_r2_31->unk8 = (s32 *) argA.unk8;
                var_r2_31->unkC = argD;
            }
            var_r5_16 = (GenObj *)((u8 *)var_r2_31 + 0x10);
        } else {
            var_r3_32 = temp_r1_18;
            var_r2_32 = var_r2_31;
            if (var_r3_32 != 0) {
                do {
                    if (var_r2_32 != 0) {
                        var_r2_32->unk0 = (s32) argA.unk0;
                        var_r2_32->unk4 = (s32) argA.unk4;
                        var_r2_32->unk8 = (s32 *) argA.unk8;
                        var_r2_32->unkC = argD;
                    }
                    var_r3_32 -= 1;
                    var_r2_32 += 0x10;
                } while (var_r3_32 != 0);
            }
            var_r5_16 = var_r2_32;
        }
        temp_r2_16 = temp_r6_18->unk4;
        temp_r1_19 = arg6D->unk594;
        var_r0_33 = temp_r1_19;
        if (temp_r1_19 != temp_r2_16) {
            do {
                var_r0_33 += 0x10;
            } while (var_r0_33 != temp_r2_16);
        }
        if (temp_r1_19 != 0) {
            free(temp_r1_19);
        }
        arg6D->unk594 = argA2;
        temp_r6_18->unk4 = var_r5_16;
        temp_r6_18->unkC = (void *) (argA2 + var_r8_15);
    }
    temp_r4_37 = arg70 << 6;
    unksp0 = 0x20;
    func_0804EDB4(arg6D->unk58C->unk1AA8, arg6F->unk18 + temp_r4_37 + 0x2C, 0x120, 0);
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg6F->unk18 + temp_r4_37 + 0x2E, arg78 >> 0x10, 2, 2);
    arg70 = arg80;
    argA.unk0 = (s16) (arg80 * 8);
    argA.unk4 = 0;
    argA.unk8 = &gUnk_087518CC;
    argA.unkC = &gUnk_0875194C;
    temp_r6_19 = (GenObj *)((u8 *)arg6D + 0x594);
    temp_r1_20 = temp_r6_19->unk4;
    if (temp_r1_20 != temp_r6_19->unkC) {
        if (temp_r1_20 != 0) {
            temp_r1_20->unk0 = (s32) argA.unk0;
            temp_r1_20->unk4 = (s32) argA.unk4;
            temp_r1_20->unk8 = (s32 *) argA.unk8;
            temp_r1_20->unkC = argD;
        }
        temp_r6_19->unk4 = (void *) (temp_r6_19->unk4 + 0x10);
        arg84 = arg70 << 6;
        arg81 = arg70 + 4;
    } else {
        argA1 = temp_r1_20;
        arg3A = 1;
        temp_r4_38 = (s32) (argA1 - arg6D->unk594) >> 4;
        var_r0_34 = &arg39;
        *var_r0_34 = temp_r4_38;
        if ((u32) temp_r4_38 < (u32) arg3A) {
            var_r0_34 = &arg3A;
        }
        temp_r0_35 = temp_r4_38 + *var_r0_34;
        if (temp_r0_35 != 0) {
            temp_r4_39 = temp_r0_35 * 0x10;
            var_r0_35 = malloc(temp_r4_39);
            var_r8_16 = temp_r4_39;
            if (var_r0_35 == 0) {
                var_r0_35 = func_080D3BC0(var_r8_16);
            }
        } else {
            var_r0_35 = 0;
            var_r8_16 = 0;
        }
        argA2 = var_r0_35;
        var_r3_33 = arg6D->unk594;
        var_r2_33 = var_r0_35;
        arg84 = arg70 << 6;
        arg81 = arg70 + 4;
        if (var_r3_33 != argA1) {
            do {
                if (var_r2_33 != 0) {
                    var_r2_33->unk0 = (s32) var_r3_33->unk0;
                    var_r2_33->unk4 = (s32) var_r3_33->unk4;
                    var_r2_33->unk8 = (s32) var_r3_33->unk8;
                    var_r2_33->unkC = (s32) var_r3_33->unkC;
                }
                var_r3_33 += 0x10;
                var_r2_33 += 0x10;
            } while (var_r3_33 != argA1);
        }
        temp_r1_21 = arg3A;
        if (temp_r1_21 == 1) {
            if (var_r2_33 != 0) {
                var_r2_33->unk0 = (s32) argA.unk0;
                var_r2_33->unk4 = (s32) argA.unk4;
                var_r2_33->unk8 = (s32 *) argA.unk8;
                var_r2_33->unkC = argD;
            }
            var_r5_17 = (GenObj *)((u8 *)var_r2_33 + 0x10);
        } else {
            var_r3_34 = temp_r1_21;
            var_r2_34 = var_r2_33;
            if (var_r3_34 != 0) {
                do {
                    if (var_r2_34 != 0) {
                        var_r2_34->unk0 = (s32) argA.unk0;
                        var_r2_34->unk4 = (s32) argA.unk4;
                        var_r2_34->unk8 = (s32 *) argA.unk8;
                        var_r2_34->unkC = argD;
                    }
                    var_r3_34 -= 1;
                    var_r2_34 += 0x10;
                } while (var_r3_34 != 0);
            }
            var_r5_17 = var_r2_34;
        }
        temp_r2_17 = temp_r6_19->unk4;
        temp_r1_22 = arg6D->unk594;
        var_r0_36 = temp_r1_22;
        if (temp_r1_22 != temp_r2_17) {
            do {
                var_r0_36 += 0x10;
            } while (var_r0_36 != temp_r2_17);
        }
        if (temp_r1_22 != 0) {
            free(temp_r1_22);
        }
        arg6D->unk594 = argA2;
        temp_r6_19->unk4 = var_r5_17;
        temp_r6_19->unkC = (void *) (argA2 + var_r8_16);
    }
    arg3B = 0xC;
    arg8E->unk2 = 2;
    func_0804E7A0((s32) arg3B, arg7F, 0);
    temp_r1_23 = func_0800E4E0(arg6D->unk58C + 0x1BD8);
    arg3C = 0xC;
    arg8F->unk2 = 2;
    unksp0 = temp_r1_23;
    func_0804E8F0((s32) arg3C, arg7F, 0, 0);
    temp_r6_20 = func_08008910(arg6D->unk0);
    func_08008F0C(&argE, arg7F, 0x06003000, 0x300);
    temp_r1_24 = temp_r6_20->unk4;
    if (temp_r1_24 != temp_r6_20->unkC) {
        if (temp_r1_24 != 0) {
            temp_r1_24->unk0 = (s32) arg86->unk0;
            temp_r1_24->unk4 = (s32) arg86->unk4;
            temp_r1_24->unk8 = (s32) arg86->unk8;
            temp_r1_24->unkC = (s32) arg86->unkC;
        }
        temp_r6_20->unk4 = (void *) (temp_r6_20->unk4 + 0x10);
    } else {
        argA1 = temp_r1_24;
        arg3E = 1;
        temp_r4_40 = (s32) (argA1 - temp_r6_20->unk0) >> 4;
        var_r1_16 = &arg3D;
        *var_r1_16 = temp_r4_40;
        if ((u32) temp_r4_40 < (u32) arg3E) {
            var_r1_16 = &arg3E;
        }
        temp_r0_36 = temp_r4_40 + *var_r1_16;
        if (temp_r0_36 != 0) {
            temp_r4_41 = temp_r0_36 * 0x10;
            var_r0_37 = malloc(temp_r4_41);
            var_r8_17 = temp_r4_41;
            if (var_r0_37 == 0) {
                var_r0_37 = func_080D3BC0(var_r8_17);
            }
        } else {
            var_r0_37 = 0;
            var_r8_17 = 0;
        }
        argA2 = var_r0_37;
        var_r2_35 = temp_r6_20->unk0;
        var_r3_35 = var_r0_37;
        if (var_r2_35 != argA1) {
            do {
                if (var_r3_35 != 0) {
                    var_r3_35->unk0 = (s32) var_r2_35->unk0;
                    var_r3_35->unk4 = (s32) var_r2_35->unk4;
                    var_r3_35->unk8 = (s32) var_r2_35->unk8;
                    var_r3_35->unkC = (s32) var_r2_35->unkC;
                }
                var_r2_35 += 0x10;
                var_r3_35 += 0x10;
            } while (var_r2_35 != argA1);
        }
        temp_r0_37 = arg3E;
        if (temp_r0_37 == 1) {
            if (var_r3_35 != 0) {
                var_r3_35->unk0 = (s32) arg86->unk0;
                var_r3_35->unk4 = (s32) arg86->unk4;
                var_r3_35->unk8 = (s32) arg86->unk8;
                var_r3_35->unkC = (s32) arg86->unkC;
            }
            var_r5_18 = (GenObj *)((u8 *)var_r3_35 + 0x10);
        } else {
            var_r3_36 = temp_r0_37;
            var_r2_36 = var_r3_35;
            if (var_r3_36 != 0) {
                do {
                    if (var_r2_36 != 0) {
                        var_r2_36->unk0 = (s32) arg86->unk0;
                        var_r2_36->unk4 = (s32) arg86->unk4;
                        var_r2_36->unk8 = (s32) arg86->unk8;
                        var_r2_36->unkC = (s32) arg86->unkC;
                    }
                    var_r3_36 -= 1;
                    var_r2_36 += 0x10;
                } while (var_r3_36 != 0);
            }
            var_r5_18 = var_r2_36;
        }
        temp_r2_18 = temp_r6_20->unk4;
        temp_r0_38 = temp_r6_20->unk0;
        var_r1_17 = temp_r0_38;
        if (temp_r0_38 != temp_r2_18) {
            do {
                var_r1_17 += 0x10;
            } while (var_r1_17 != temp_r2_18);
        }
        if (temp_r0_38 != 0) {
            free();
        }
        temp_r6_20->unk0 = argA2;
        temp_r6_20->unk4 = var_r5_18;
        temp_r6_20->unkC = (void *) (argA2 + var_r8_17);
    }
    unksp0 = 0;
    unksp4 = 0x20;
    func_0804E9F4(arg6F->unk18 + arg84 + 4, 0x180U, 0xC, 2);
    if ((func_0800E53C(arg6D->unk58C + 0x1BD8) << 0x18) != 0) {
        unksp0 = 4;
        unksp4 = 0x20;
        func_0804E9F4(arg6F->unk18 + ((arg70 + 2) << 6) + 4, 0x5DU, 1, 1);
    }
    temp_r0_39 = func_0800E530(arg6D->unk58C + 0x1BD8);
    var_r4_3 = 0;
    if (temp_r0_39 > 0U) {
        var_r5_19 = 8;
        do {
            unksp0 = 3;
            unksp4 = 0x20;
            func_0804E9F4(arg6F->unk18 + ((arg70 + 2) << 6) + var_r5_19, 0x5C0000U >> 0x10, 1, 1);
            var_r5_19 += 2;
            var_r4_3 += 1;
        } while (var_r4_3 < temp_r0_39);
    }
    arg70 = arg81;
    if ((func_080A0504(arg6D->unk58C + 0x1CD4) << 0x18) == 0) {
        sub_08061E00();
    }
    arg71 = func_080A0490(arg6D->unk58C + 0x1CD4);
    arg72 = func_080A01F8(arg6D->unk58C + 0x1CD4, arg71);
    temp_r0_40 = arg71 - 3;
    switch (temp_r0_40) {
    case 0:
        argA.unk8 = &gUnk_08751A0C;
        argA.unkC = &gUnk_08751A8C;
        break;
    case 9:
        argA.unk8 = &gUnk_08752E4C;
        argA.unkC = &gUnk_08752ECC;
        break;
    case 16:
        argA.unk8 = &gUnk_087524AC;
        argA.unkC = &gUnk_0875252C;
        break;
    case 22:
        argA.unk8 = &gUnk_0875286C;
        argA.unkC = &gUnk_087528EC;
        break;
    case 18:
        argA.unk8 = &gUnk_0875302C;
        argA.unkC = &gUnk_087530AC;
        break;
    case 28:
        argA.unk8 = &gUnk_0875240C;
        argA.unkC = &gUnk_0875248C;
        break;
    default:
        arg72 = 0;
        break;
    }
    arg82 = arg70 + 5;
    if (arg72 == 0) {

    } else {
        argA.unk0 = (s16) (arg70 * 8);
        argA.unk4 = 0;
        temp_r6_21 = (GenObj *)((u8 *)arg6D + 0x594);
        temp_r1_25 = temp_r6_21->unk4;
        if (temp_r1_25 != temp_r6_21->unkC) {
            if (temp_r1_25 != 0) {
                temp_r1_25->unk0 = (s32) argA.unk0;
                temp_r1_25->unk4 = (s32) argA.unk4;
                temp_r1_25->unk8 = (s32 *) argA.unk8;
                temp_r1_25->unkC = argD;
            }
            temp_r6_21->unk4 = (void *) (temp_r6_21->unk4 + 0x10);
            arg84 = arg70 << 6;
            arg90 = &arg41;
            var_sb_2 = (GenObj *)((u8 *)arg6D + 0xC5C);
            arg91 = &arg42;
            arg92 = &arg45;
            arg93 = &arg46;
        } else {
            argA1 = temp_r1_25;
            arg40 = 1;
            temp_r4_42 = (s32) (argA1 - arg6D->unk594) >> 4;
            arg3F = temp_r4_42;
            var_r3_37 = &arg3F;
            if ((u32) temp_r4_42 < (u32) arg40) {
                var_r3_37 = &arg40;
            }
            temp_r0_41 = temp_r4_42 + *var_r3_37;
            if (temp_r0_41 != 0) {
                temp_r4_43 = temp_r0_41 * 0x10;
                var_r0_38 = malloc(temp_r4_43);
                var_r8_18 = temp_r4_43;
                if (var_r0_38 == 0) {
                    var_r0_38 = func_080D3BC0(var_r8_18);
                }
            } else {
                var_r0_38 = 0;
                var_r8_18 = 0;
            }
            argA2 = var_r0_38;
            var_r2_37 = arg6D->unk594;
            var_r3_38 = var_r0_38;
            arg84 = arg70 << 6;
            arg90 = &arg41;
            var_sb_2 = (GenObj *)((u8 *)arg6D + 0xC5C);
            arg91 = &arg42;
            arg92 = &arg45;
            arg93 = &arg46;
            arg82 = arg70 + 5;
loop_553:
            if (var_r2_37 != argA1) {
                if (var_r3_38 != 0) {
                    var_r3_38->unk0 = (s32) var_r2_37->unk0;
                    var_r3_38->unk4 = (s32) var_r2_37->unk4;
                    var_r3_38->unk8 = (s32 *) var_r2_37->unk8;
                    var_r3_38->unkC = (s32) var_r2_37->unkC;
                }
                var_r2_37 += 0x10;
                var_r3_38 += 0x10;
                goto loop_553;
            }
            temp_r0_42 = arg40;
            if (temp_r0_42 == 1) {
                if (var_r3_38 != 0) {
                    var_r3_38->unk0 = (s32) argA.unk0;
                    var_r3_38->unk4 = (s32) argA.unk4;
                    var_r3_38->unk8 = (s32 *) argA.unk8;
                    var_r3_38->unkC = argD;
                }
                var_r5_20 = (GenObj *)((u8 *)var_r3_38 + 0x10);
            } else {
                var_r3_39 = temp_r0_42;
                var_r2_38 = var_r3_38;
                if (var_r3_39 != 0) {
                    do {
                        if (var_r2_38 != 0) {
                            var_r2_38->unk0 = (s32) argA.unk0;
                            var_r2_38->unk4 = (s32) argA.unk4;
                            var_r2_38->unk8 = (s32 *) argA.unk8;
                            var_r2_38->unkC = argD;
                        }
                        var_r3_39 -= 1;
                        var_r2_38 += 0x10;
                    } while (var_r3_39 != 0);
                }
                var_r5_20 = var_r2_38;
            }
            temp_r3_3 = temp_r6_21->unk4;
            temp_r1_26 = arg6D->unk594;
            var_r0_39 = temp_r1_26;
            if (temp_r1_26 != temp_r3_3) {
                do {
                    var_r0_39 += 0x10;
                } while (var_r0_39 != temp_r3_3);
            }
            if (temp_r1_26 != 0) {
                free(temp_r1_26);
            }
            arg6D->unk594 = argA2;
            temp_r6_21->unk4 = var_r5_20;
            temp_r6_21->unkC = (void *) (argA2 + var_r8_18);
        }
        arg41 = 0xC;
        arg90->unk2 = 2;
        func_0804E7A0((s32) arg41, var_sb_2, 0);
        temp_r1_27 = func_0809FE3C(arg6D->unk58C + 0x1CD4, arg71);
        arg42 = 0xC;
        arg91->unk2 = 2;
        unksp0 = temp_r1_27;
        func_0804E8F0((s32) arg42, var_sb_2, 0, 0);
        temp_r6_22 = func_08008910(arg6D->unk0);
        func_08008F0C(&argE, var_sb_2, 0x06003300, 0x300);
        temp_r1_28 = temp_r6_22->unk4;
        if (temp_r1_28 != temp_r6_22->unkC) {
            if (temp_r1_28 != 0) {
                temp_r1_28->unk0 = (s32) arg86->unk0;
                temp_r1_28->unk4 = (s32) arg86->unk4;
                temp_r1_28->unk8 = (s32) arg86->unk8;
                temp_r1_28->unkC = (s32) arg86->unkC;
            }
            temp_r6_22->unk4 = (void *) (temp_r6_22->unk4 + 0x10);
        } else {
            argA1 = temp_r1_28;
            arg44 = 1;
            temp_r4_44 = (s32) (argA1 - temp_r6_22->unk0) >> 4;
            arg43 = temp_r4_44;
            var_r1_18 = &arg43;
            if ((u32) temp_r4_44 < (u32) arg44) {
                var_r1_18 = &arg44;
            }
            temp_r0_43 = temp_r4_44 + *var_r1_18;
            if (temp_r0_43 != 0) {
                temp_r4_45 = temp_r0_43 * 0x10;
                var_r0_40 = malloc(temp_r4_45);
                var_r8_19 = temp_r4_45;
                if (var_r0_40 == 0) {
                    var_r0_40 = func_080D3BC0(var_r8_19);
                }
            } else {
                var_r0_40 = 0;
                var_r8_19 = 0;
            }
            argA2 = var_r0_40;
            var_r2_39 = temp_r6_22->unk0;
            var_r3_40 = var_r0_40;
            if (var_r2_39 != argA1) {
                do {
                    if (var_r3_40 != 0) {
                        var_r3_40->unk0 = (s32) var_r2_39->unk0;
                        var_r3_40->unk4 = (s32) var_r2_39->unk4;
                        var_r3_40->unk8 = (s32) var_r2_39->unk8;
                        var_r3_40->unkC = (s32) var_r2_39->unkC;
                    }
                    var_r2_39 += 0x10;
                    var_r3_40 += 0x10;
                } while (var_r2_39 != argA1);
            }
            temp_r0_44 = arg44;
            if (temp_r0_44 == 1) {
                if (var_r3_40 != 0) {
                    var_r3_40->unk0 = (s32) arg86->unk0;
                    var_r3_40->unk4 = (s32) arg86->unk4;
                    var_r3_40->unk8 = (s32) arg86->unk8;
                    var_r3_40->unkC = (s32) arg86->unkC;
                }
                var_r5_21 = (GenObj *)((u8 *)var_r3_40 + 0x10);
            } else {
                var_r3_41 = temp_r0_44;
                var_r2_40 = var_r3_40;
                if (var_r3_41 != 0) {
                    do {
                        if (var_r2_40 != 0) {
                            var_r2_40->unk0 = (s32) arg86->unk0;
                            var_r2_40->unk4 = (s32) arg86->unk4;
                            var_r2_40->unk8 = (s32) arg86->unk8;
                            var_r2_40->unkC = (s32) arg86->unkC;
                        }
                        var_r3_41 -= 1;
                        var_r2_40 += 0x10;
                    } while (var_r3_41 != 0);
                }
                var_r5_21 = var_r2_40;
            }
            temp_r2_19 = temp_r6_22->unk4;
            temp_r0_45 = temp_r6_22->unk0;
            var_r1_19 = temp_r0_45;
            if (temp_r0_45 != temp_r2_19) {
                do {
                    var_r1_19 += 0x10;
                } while (var_r1_19 != temp_r2_19);
            }
            if (temp_r0_45 != 0) {
                free();
            }
            temp_r6_22->unk0 = argA2;
            temp_r6_22->unk4 = var_r5_21;
            temp_r6_22->unkC = (void *) (argA2 + var_r8_19);
        }
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg6F->unk18 + arg84 + 4, 0x198U, 0xC, 2);
        arg45 = 0xA;
        temp_r0_46 = GetLove__C12Bachelorette(arg72) / 6553U;
        arg46 = temp_r0_46;
        var_r2_41 = arg92;
        if ((u32) arg45 > temp_r0_46) {
            var_r2_41 = arg93;
        }
        temp_r6_23 = *var_r2_41;
        var_r4_4 = 0;
        if (temp_r6_23 > 0U) {
            var_r5_22 = 8;
            do {
                unksp0 = 2;
                unksp4 = 0x20;
                func_0804E9F4(arg6F->unk18 + ((arg70 + 2) << 6) + var_r5_22, 0x580000U >> 0x10, 1, 1);
                var_r5_22 += 2;
                var_r4_4 += 1;
            } while (var_r4_4 < temp_r6_23);
        }
    }
    temp_r0_47 = func_080A0384(arg6D->unk58C + 0x1CD4);
    arg73 = temp_r0_47;
    if (temp_r0_47 == 0) {

    } else {
        argA.unk0 = (s16) (arg70 * 8);
        argA.unk4 = 0x78;
        argA.unk8 = &gUnk_08751AAC;
        argA.unkC = &gUnk_08751B2C;
        temp_r6_24 = (GenObj *)((u8 *)arg6D + 0x594);
        temp_r1_29 = temp_r6_24->unk4;
        if (temp_r1_29 != temp_r6_24->unkC) {
            if (temp_r1_29 != 0) {
                temp_r1_29->unk0 = (s32) argA.unk0;
                temp_r1_29->unk4 = (s32) argA.unk4;
                temp_r1_29->unk8 = (s32 *) argA.unk8;
                temp_r1_29->unkC = argD;
            }
            temp_r6_24->unk4 = (void *) (temp_r6_24->unk4 + 0x10);
            arg84 = arg70 << 6;
            arg95 = &arg49;
            var_sb_3 = (GenObj *)((u8 *)arg6D + 0xF60);
            arg96 = &arg4A;
            arg97 = &arg4D;
            arg98 = &arg4E;
        } else {
            argA1 = temp_r1_29;
            arg48 = 1;
            temp_r4_46 = (s32) (argA1 - arg6D->unk594) >> 4;
            arg47 = temp_r4_46;
            var_r3_42 = &arg47;
            if ((u32) temp_r4_46 < (u32) arg48) {
                var_r3_42 = &arg48;
            }
            temp_r0_48 = temp_r4_46 + *var_r3_42;
            if (temp_r0_48 != 0) {
                temp_r4_47 = temp_r0_48 * 0x10;
                var_r0_41 = malloc(temp_r4_47);
                var_r8_20 = temp_r4_47;
                if (var_r0_41 == 0) {
                    var_r0_41 = func_080D3BC0(var_r8_20);
                }
            } else {
                var_r0_41 = 0;
                var_r8_20 = 0;
            }
            argA2 = var_r0_41;
            var_r2_42 = arg6D->unk594;
            var_r3_43 = var_r0_41;
            arg84 = arg70 << 6;
            arg95 = &arg49;
            var_sb_3 = (GenObj *)((u8 *)arg6D + 0xF60);
            arg96 = &arg4A;
            arg97 = &arg4D;
            arg98 = &arg4E;
            if (var_r2_42 != argA1) {
                do {
                    if (var_r3_43 != 0) {
                        var_r3_43->unk0 = (s32) var_r2_42->unk0;
                        var_r3_43->unk4 = (s32) var_r2_42->unk4;
                        var_r3_43->unk8 = (s32) var_r2_42->unk8;
                        var_r3_43->unkC = (s32) var_r2_42->unkC;
                    }
                    var_r2_42 += 0x10;
                    var_r3_43 += 0x10;
                } while (var_r2_42 != argA1);
            }
            temp_r0_49 = arg48;
            if (temp_r0_49 == 1) {
                if (var_r3_43 != 0) {
                    var_r3_43->unk0 = (s32) argA.unk0;
                    var_r3_43->unk4 = (s32) argA.unk4;
                    var_r3_43->unk8 = (s32 *) argA.unk8;
                    var_r3_43->unkC = argD;
                }
                var_r5_23 = (GenObj *)((u8 *)var_r3_43 + 0x10);
            } else {
                var_r3_44 = temp_r0_49;
                var_r2_43 = var_r3_43;
                if (var_r3_44 != 0) {
                    do {
                        if (var_r2_43 != 0) {
                            var_r2_43->unk0 = (s32) argA.unk0;
                            var_r2_43->unk4 = (s32) argA.unk4;
                            var_r2_43->unk8 = (s32 *) argA.unk8;
                            var_r2_43->unkC = argD;
                        }
                        var_r3_44 -= 1;
                        var_r2_43 += 0x10;
                    } while (var_r3_44 != 0);
                }
                var_r5_23 = var_r2_43;
            }
            temp_r3_4 = temp_r6_24->unk4;
            temp_r1_30 = arg6D->unk594;
            var_r0_42 = temp_r1_30;
            if (temp_r1_30 != temp_r3_4) {
                do {
                    var_r0_42 += 0x10;
                } while (var_r0_42 != temp_r3_4);
            }
            if (temp_r1_30 != 0) {
                free(temp_r1_30);
            }
            arg6D->unk594 = argA2;
            temp_r6_24->unk4 = var_r5_23;
            temp_r6_24->unkC = (void *) (argA2 + var_r8_20);
        }
        arg49 = 0xC;
        arg95->unk2 = 2;
        func_0804E7A0((s32) arg49, var_sb_3, 0);
        temp_r1_31 = func_0809EACC(arg73);
        arg4A = 0xC;
        arg96->unk2 = 2;
        unksp0 = temp_r1_31;
        func_0804E8F0((s32) arg4A, var_sb_3, 0, 0);
        temp_r6_25 = func_08008910(arg6D->unk0);
        func_08008F0C(&argE, var_sb_3, 0x06003600, 0x300);
        temp_r1_32 = temp_r6_25->unk4;
        if (temp_r1_32 != temp_r6_25->unkC) {
            if (temp_r1_32 != 0) {
                temp_r1_32->unk0 = (s32) arg86->unk0;
                temp_r1_32->unk4 = (s32) arg86->unk4;
                temp_r1_32->unk8 = (s32) arg86->unk8;
                temp_r1_32->unkC = (s32) arg86->unkC;
            }
            temp_r6_25->unk4 = (void *) (temp_r6_25->unk4 + 0x10);
        } else {
            argA1 = temp_r1_32;
            arg4C = 1;
            temp_r4_48 = (s32) (argA1 - temp_r6_25->unk0) >> 4;
            arg4B = temp_r4_48;
            var_r1_20 = &arg4B;
            if ((u32) temp_r4_48 < (u32) arg4C) {
                var_r1_20 = &arg4C;
            }
            temp_r0_50 = temp_r4_48 + *var_r1_20;
            if (temp_r0_50 != 0) {
                temp_r4_49 = temp_r0_50 * 0x10;
                var_r0_43 = malloc(temp_r4_49);
                var_r8_21 = temp_r4_49;
                if (var_r0_43 == 0) {
                    var_r0_43 = func_080D3BC0(var_r8_21);
                }
            } else {
                var_r0_43 = 0;
                var_r8_21 = 0;
            }
            argA2 = var_r0_43;
            var_r2_44 = temp_r6_25->unk0;
            var_r3_45 = var_r0_43;
            if (var_r2_44 != argA1) {
                do {
                    if (var_r3_45 != 0) {
                        var_r3_45->unk0 = (s32) var_r2_44->unk0;
                        var_r3_45->unk4 = (s32) var_r2_44->unk4;
                        var_r3_45->unk8 = (s32) var_r2_44->unk8;
                        var_r3_45->unkC = (s32) var_r2_44->unkC;
                    }
                    var_r2_44 += 0x10;
                    var_r3_45 += 0x10;
                } while (var_r2_44 != argA1);
            }
            temp_r0_51 = arg4C;
            if (temp_r0_51 == 1) {
                if (var_r3_45 != 0) {
                    var_r3_45->unk0 = (s32) arg86->unk0;
                    var_r3_45->unk4 = (s32) arg86->unk4;
                    var_r3_45->unk8 = (s32) arg86->unk8;
                    var_r3_45->unkC = (s32) arg86->unkC;
                }
                var_r5_24 = (GenObj *)((u8 *)var_r3_45 + 0x10);
            } else {
                var_r3_46 = temp_r0_51;
                var_r2_45 = var_r3_45;
                if (var_r3_46 != 0) {
                    do {
                        if (var_r2_45 != 0) {
                            var_r2_45->unk0 = (s32) arg86->unk0;
                            var_r2_45->unk4 = (s32) arg86->unk4;
                            var_r2_45->unk8 = (s32) arg86->unk8;
                            var_r2_45->unkC = (s32) arg86->unkC;
                        }
                        var_r3_46 -= 1;
                        var_r2_45 += 0x10;
                    } while (var_r3_46 != 0);
                }
                var_r5_24 = var_r2_45;
            }
            temp_r2_20 = temp_r6_25->unk4;
            temp_r0_52 = temp_r6_25->unk0;
            var_r1_21 = temp_r0_52;
            if (temp_r0_52 != temp_r2_20) {
                do {
                    var_r1_21 += 0x10;
                } while (var_r1_21 != temp_r2_20);
            }
            if (temp_r0_52 != 0) {
                free();
            }
            temp_r6_25->unk0 = argA2;
            temp_r6_25->unk4 = var_r5_24;
            temp_r6_25->unkC = (void *) (argA2 + var_r8_21);
        }
        unksp0 = 0;
        unksp4 = 0x20;
        func_0804E9F4(arg6F->unk18 + arg84 + 0x22, 0x1B0U, 0xC, 2);
        arg4D = 0xA;
        temp_r0_53 = GetFriendship__C3Npc(arg73) / 25U;
        arg4E = temp_r0_53;
        var_r2_46 = arg97;
        if ((u32) arg4D > temp_r0_53) {
            var_r2_46 = arg98;
        }
        temp_r6_26 = *var_r2_46;
        var_r4_5 = 0;
        if (temp_r6_26 > 0U) {
            var_r5_25 = 0x26;
            do {
                unksp0 = 2;
                unksp4 = 0x20;
                func_0804E9F4(arg6F->unk18 + ((arg70 + 2) << 6) + var_r5_25, 0x580000U >> 0x10, 1, 1);
                var_r5_25 += 2;
                var_r4_5 += 1;
            } while (var_r4_5 < temp_r6_26);
        }
    }
    arg70 = arg82;
}
