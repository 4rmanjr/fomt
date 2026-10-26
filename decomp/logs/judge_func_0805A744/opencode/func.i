# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A744/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A744/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A744/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A744/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805A744/opencode/func.c" 2
u16 func_080074C0(void *, s32);
s16 func_08007D4C(void *, s32);
u8 *func_08008920(void *);
s32 func_0805E860(void *, s32);
s32 func_0805E8F0(void *);
s32 func_0805E99C(u8 *, s32, u16, s32 *);
s32 memcpy(s32 *, s32 *, s32);

typedef struct GenObj {
    s32 unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    struct GenObj *unk8;
    struct GenObj *unkC;
    s32 unk10;
    s32 unk11;
    u8 _pad15[3];
    s32 unk18;
    u8 _pad1C[4];
    s32 unk20;
    u8 _pad24[820];
    s32 unk358;
    s32 unk35C;
    u8 _pad360[496];
    s32 unk550;
    s32 unk554;
    u8 _pad558[12];
    s32 unk564;
    u8 _pad568[156];
    s32 unk604;
    u8 _pad608[1488];
    s32 unkBD8;
    u8 _padBDC[2094];
    s32 unk140A;
} GenObj;
void func_0805A744(GenObj *arg0) {
s32 sp0;
    s32 spC;
    s32 sp14;
    GenObj *sp1C;
    GenObj *sp24;
    GenObj *sp2C;
    GenObj *sp34;
GenObj sp3C;
    GenObj *sp5C;
    s32 *sp64;
    s16 temp_r0_4;
    s16 var_r0;
    s16 var_r1;
    s32 var_r0_2;
    s32 var_r6;
    u16 temp_r0_10;
    u16 temp_r0_15;
    u16 var_r2;
    u16 var_r2_2;
    u8 *temp_r0_14;
    u8 *temp_r3;
    u8 *temp_r3_3;
    u8 temp_r2;
    void **temp_r1;
    void **temp_r1_4;
    void *temp_r0;
    GenObj *temp_r0_11;
    GenObj *temp_r0_12;
    GenObj *temp_r0_13;
    GenObj *temp_r0_2;
    void *temp_r0_3;
    GenObj *temp_r0_5;
    GenObj *temp_r0_6;
    GenObj *temp_r0_7;
    GenObj *temp_r0_8;
    GenObj *temp_r0_9;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_5;
    void *temp_r1_6;
    GenObj *temp_r3_2;
    GenObj *temp_r4;
    void *temp_r7;

    sp0 = 0;
    sp0.unk2 = 0;
    sp0.unk4 = 0U;
    sp0.unk6 = 0;
    sp0.unk8 = 0;
    spC = 0;
    sp0.unk10 = 0;
    sp0.unk11 = 0;
    sp14 = 0;
    sp0.unk18 = 0;
    sp1C = 0;
    sp1C.unk4 = 0;
    sp24 = 0;
    sp24.unk4 = 0;
    sp2C = 0;
    sp2C.unk4 = 0;
    sp34 = 0;
    sp34.unk4 = 0;
    if ((s32) arg0->unk140A >= 0) {
        temp_r4 = (GenObj *)((u8 *)arg0 + 0x550);
        func_0805E8F0(temp_r4);
        temp_r1 = arg0->unk550;
        (*temp_r1)->unk10(&sp3C, temp_r1, *(arg0->unk554 + (temp_r4->unkC * 4)));
        memcpy(&sp3C, &sp3C, 0x20);
        temp_r0 = &(GenObj *)((u8 *)sp3C + 0xC);
        sp1C.unk0 = sp3C;
        sp1C.unk4 = (s32) sp3C.unk4;
        sp1C.unk8 = (s32) sp3C.unk8;
        temp_r1_2 = &(GenObj *)((u8 *)sp1C + 0xC);
        sp1C.unkC = (s32) sp3C.unkC;
        temp_r1_2->unk4 = (s32) temp_r0->unk4;
        temp_r1_2->unk8 = (s32) temp_r0->unk8;
        temp_r1_2->unkC = (s32) temp_r0->unkC;
        ((GenObj *)((u8 *)temp_r1_2 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0 + 0xC))->unk4;
        temp_r0_2 = (GenObj *)((u8 *)arg0 + 0x564);
        temp_r0_3 = (GenObj *)((u8 *)temp_r0_2 + 0xC);
        sp0 = (s32) arg0->unk564;
        sp0.unk4 = (s32) temp_r0_2->unk4;
        sp0.unk8 = (s32) temp_r0_2->unk8;
        temp_r1_3 = &(GenObj *)((u8 *)sp0 + 0xC);
        sp0.unkC = (s32) temp_r0_2->unkC;
        temp_r1_3->unk4 = (s32) temp_r0_3->unk4;
        temp_r1_3->unk8 = (s32) temp_r0_3->unk8;
        temp_r1_3->unkC = (s32) temp_r0_3->unkC;
        temp_r0_4 = arg0->unk140A;
        var_r1 = 0x1C;
        if ((s32) temp_r0_4 <= 3) {
            var_r1 = 0xC;
        }
        sp0 = var_r1;
        if ((s32) temp_r0_4 <= 3) {
            var_r0 = (arg0->unk140A * 0x10) + 0x38;
        } else {
            var_r0 = 0x80;
        }
        sp0.unk2 = var_r0;
        temp_r0_5 = (GenObj *)((u8 *)arg0 + 0x640);
        sp0.unk6 = func_08007D4C(temp_r0_5, temp_r0_5->unk4);
        temp_r0_6 = (GenObj *)((u8 *)arg0 + 0x648);
        sp0.unk4 = func_080074C0(temp_r0_6, temp_r0_6->unk4);
        sp0.unk8 = 2;
        sp0.unk18 = 1;
        temp_r3 = func_08008920(arg0);
        var_r2 = 0;
        if (sp1C != 0) {
            var_r2 = sp0.unk20;
        }
        func_0805E99C(temp_r3, sp1C, var_r2, &sp0);
    }
    var_r6 = 0;
    temp_r3_2 = (GenObj *)((u8 *)arg0 + 0x358);
    sp64 = &sp3C;
    do {
        func_0805E860(temp_r3_2, var_r6);
        temp_r1_4 = arg0->unk358;
        (*temp_r1_4)->unk10(&sp3C, temp_r1_4, *(arg0->unk35C + (temp_r3_2->unkC * 4)));
        memcpy(sp64, sp64, 0x20);
        temp_r0_7 = (GenObj *)((u8 *)sp64 + 0xC);
        sp1C.unk0 = sp64->unk0;
        sp1C.unk4 = (s32) sp64->unk4;
        sp1C.unk8 = (s32) sp64->unk8;
        temp_r1_5 = &(GenObj *)((u8 *)sp1C + 0xC);
        sp1C.unkC = (s32) sp64->unkC;
        temp_r1_5->unk4 = (s32) temp_r0_7->unk4;
        temp_r1_5->unk8 = (s32) temp_r0_7->unk8;
        temp_r1_5->unkC = (s32) temp_r0_7->unkC;
        ((GenObj *)((u8 *)temp_r1_5 + 0xC))->unk4 = (s32) ((GenObj *)((u8 *)temp_r0_7 + 0xC))->unk4;
        sp0 = 0x10;
        sp0.unk2 = (s16) ((var_r6 * 0x10) + 0x30);
        temp_r0_8 = (GenObj *)((u8 *)arg0 + 0x608);
        sp0.unk4 = func_080074C0(temp_r0_8, temp_r0_8->unk4);
        sp0.unk6 = (s16) (func_08007D4C((GenObj *)((u8 *)arg0 + 0x600), arg0->unk604) + (var_r6 * 4));
        sp0.unk8 = 2;
        sp0.unk18 = 1;
        temp_r3_3 = func_08008920(arg0);
        var_r2_2 = 0;
        if (sp1C != 0) {
            var_r2_2 = sp0.unk20;
        }
        func_0805E99C(temp_r3_3, sp1C, var_r2_2, &sp0);
        var_r6 += 1;
    } while (var_r6 <= 3);
    sp5C = (((sp5C & 0xFFFFFCFF & 0xFFFFF3FF) | 0x1000) & 0xFFFFDFFF & 0xFFFF3FFF & 0xF1FFFFFF & 0xEFFFFFFF & 0xDFFFFFFF & 0x3FFFFFFF) | 0x40000000;
    temp_r0_9 = (GenObj *)((u8 *)arg0 + 0x618);
    sp5C.unk4 = (s32) (u16) ((sp5C.unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_9, temp_r0_9->unk4) & 0xF) << 0xC));
    temp_r0_10 = arg0->unkBD8 - 1;
    arg0->unkBD8 = temp_r0_10;
    if ((s32) (temp_r0_10 << 0x10) < 0) {
        return;
    }
    temp_r7 = (GenObj *)((u8 *)arg0 + 0x73C);
loop_16:
    sp5C.unk4 = (s32) ((sp5C.unk4 & 0xFFFFF3FF) | ((*((GenObj *)((u8 *)arg0 + 0x73E) + ((s16) arg0->unkBD8 * 8)) & 3) << 0xA));
    sp5C = (((sp5C & 0xFE00FFFF) | ((*((GenObj *)((u8 *)arg0 + 0x738) + ((s16) arg0->unkBD8 * 8)) & 0x1FF) << 0x10)) & 0xFFFFFF00) | *((GenObj *)((u8 *)arg0 + 0x73A) + ((s16) arg0->unkBD8 * 8));
    temp_r0_11 = (GenObj *)((u8 *)arg0 + 0x610);
    sp5C.unk4 = (s32) ((sp5C.unk4 & 0xFFFFFC00) | ((u32) ((func_08007D4C(temp_r0_11, temp_r0_11->unk4) + (*(temp_r7 + ((s16) arg0->unkBD8 * 8)) * 2)) << 0x16) >> 0x16));
    if (*(temp_r7 + ((s16) arg0->unkBD8 * 8)) != 0x18) {
        temp_r0_12 = (GenObj *)((u8 *)arg0 + 0x618);
        sp5C.unk4 = (s32) ((sp5C.unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_12, temp_r0_12->unk4) & 0xF) << 0xC));
        var_r0_2 = ((sp5C & 0xFFFF3FFF) | 0x8000) & 0x3FFFFFFF;
    } else {
        temp_r0_13 = (GenObj *)((u8 *)arg0 + 0x620);
        sp5C.unk4 = (s32) ((sp5C.unk4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_13, temp_r0_13->unk4) & 0xF) << 0xC));
        var_r0_2 = (sp5C & 0xFFFF3FFF & 0x3FFFFFFF) | 0x40000000;
    }
    sp5C = var_r0_2;
    temp_r0_14 = func_08008920(arg0);
    temp_r2 = *temp_r0_14;
    if ((u32) temp_r2 <= 0x7FU) {
        temp_r1_6 = temp_r0_14 + ((temp_r2 * 8) + 4);
        temp_r1_6->unk0 = sp5C;
        temp_r1_6->unk4 = (u16) sp5C.unk4;
        *temp_r0_14 = temp_r2 + 1;
    }
    temp_r0_15 = arg0->unkBD8 - 1;
    arg0->unkBD8 = temp_r0_15;
    if ((s32) (temp_r0_15 << 0x10) >= 0) {
        goto loop_16;
    }
}
