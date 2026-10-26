# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803AB30/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803AB30/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803AB30/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803AB30/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0803AB30/opencode/func.c" 2
s32 func_08007874(void *);
s32 func_08007B54(void *, s32);
s32 func_08007C28(void *, s32);
s16 func_08007D4C(void *);
s32 memcpy(s32 *, s32 *, s32);
s32 memset(void *, u8, s32);

typedef struct GenObj {
    s32 unk0;
    struct GenObj *unk4;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    u8 _pad20[4];
    s32 unk24;
    u8 _pad28[4];
    s32 unk2C;
    u8 _pad30[88];
    s32 unk88;
    u8 _pad8C[16];
    s32 unk9C;
} GenObj;
void *func_0803AB30(GenObj *arg0, void **arg1) {
GenObj sp0;
    u8 sp20;
    void *sp2C;
    s32 var_r7;
    u32 temp_r2;
    u32 temp_r2_2;
    u32 var_r7_2;
    void **temp_r8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r4;
    GenObj *temp_r4_2;
    void *temp_r4_3;
    GenObj *temp_r4_4;
    GenObj *temp_r5;
    void *temp_r6;
    void *temp_r6_2;
    GenObj *var_r4;
    void *var_r6;

    arg0->unk0 = arg1;
    var_r6 = (GenObj *)((u8 *)arg0 + 4);
    var_r7 = 2;
    sp2C = &(GenObj *)((u8 *)sp0 + 0x24);
    var_r4 = var_r6;
    do {
        var_r4->unk0 = 0;
        var_r4->unk4 = 0;
        var_r4->unk8 = 0;
        var_r4->unkC = 0;
        var_r4->unk10 = 0;
        var_r4->unk14 = 0;
        var_r4->unk18 = 0;
        var_r4->unk1C = 0;
        func_08007874(var_r6 + 0x20);
        var_r4->unk24 = 0;
        var_r4 += 0x2C;
        var_r6 += 0x2C;
        var_r7 -= 1;
    } while (var_r7 != -1);
    temp_r6 = (GenObj *)((u8 *)arg0 + 0x88);
    arg0->unk88 = 0U;
    arg0->unk9C = 1;
    sp20 = (*arg1)->unk48(arg1, 0xF);
    temp_r2 = arg0->unk88;
    if (temp_r2 < 1U) {
        temp_r0 = (GenObj *)((u8 *)arg0 + 0x8C);
        memset(temp_r0, sp20, (temp_r6 + (temp_r2 + 4)) - temp_r0);
        temp_r2_2 = arg0->unk88;
        memset(temp_r6 + (temp_r2_2 + 4), sp20, 1 - temp_r2_2);
        arg0->unk88 = 1U;
    } else {
        temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x8C);
        temp_r4 = (GenObj *)((u8 *)arg0 + 0x8D);
        memset(temp_r0_2, sp20, temp_r4 - temp_r0_2);
        arg0->unk88 = (u32) (arg0->unk88 - ((temp_r6 + (arg0->unk88 + 4)) - temp_r4));
    }
    temp_r8 = (*arg1)->unk68(arg1);
    var_r7_2 = 0;
    do {
        temp_r6_2 = (0x2C * var_r7_2) + arg0;
        temp_r4_2 = (GenObj *)((u8 *)temp_r6_2 + 4);
        temp_r5 = *temp_r8;
        temp_r5->unkC(sp2C, temp_r8, var_r7_2 + 0x91A);
        temp_r5->unk10(&sp0, temp_r8, *sp24);
        memcpy(&sp0, &sp0, 0x20);
        temp_r0_3 = &(GenObj *)((u8 *)sp0 + 0xC);
        temp_r6_2->unk4 = (s32) sp0;
        temp_r4_2->unk4 = (s32) sp0.unk4;
        temp_r4_2->unk8 = (s32) sp0.unk8;
        temp_r4_3 = (GenObj *)((u8 *)temp_r4_2 + 0xC);
        temp_r4_2->unkC = (s32) sp0.unkC;
        temp_r4_3->unk4 = (s32) temp_r0_3->unk4;
        temp_r4_3->unk8 = (s32) temp_r0_3->unk8;
        temp_r4_3->unkC = (s32) temp_r0_3->unkC;
        (temp_r4_3 + 0xC)->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_3 + 0xC))->unk4;
        temp_r4_4 = (GenObj *)((u8 *)temp_r6_2 + 0x24);
        func_08007C28(temp_r4_4, temp_r4_4->unk4);
        temp_r4_4->unk4 = func_08007B54(temp_r4_4, 2);
        temp_r6_2->unk2C = func_08007D4C(temp_r4_4);
        var_r7_2 += 1;
    } while (var_r7_2 <= 2U);
    return arg0;
}
