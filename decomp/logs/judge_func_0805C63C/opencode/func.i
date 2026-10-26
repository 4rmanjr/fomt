# 0 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C63C/opencode/func.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C63C/opencode/func.c"
# 1 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C63C/opencode/common.h" 1
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C63C/opencode/common.h" 2
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
# 2 "/home/armanjr/gitproject/fomt/decomp/logs/judge_func_0805C63C/opencode/func.c" 2
u16 func_080074C0(void *, s32);
u8 *func_08008920(s32);

typedef struct GenObj {
    struct GenObj *unk0;
    s32 unk2;
    struct GenObj *unk4;
    s32 unk6;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} GenObj;
void func_0805C63C(s32 arg0, void *arg1, s32 arg2, GenObj *arg3, s32 arg4) {
    GenObj *sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_r2;
    s32 temp_r2_3;
    s32 temp_r3;
    s32 temp_r5;
    s32 var_r3;
    s8 var_r5;
    u32 temp_r0;
    u32 temp_r1;
    u32 temp_r2_2;
    u32 var_r0;
    u32 var_r4;
    u32 var_r6;
    u8 *temp_r0_3;
    u8 temp_r2_4;
    u8 temp_r7;
    void *temp_r0_2;
    void *temp_r1_2;
    GenObj *var_sb;

    sp8 = arg0;
    var_sb = arg1;
    temp_r2 = (arg2 * 8) + var_sb;
    spC = temp_r2;
    if (var_sb == temp_r2) {
        return;
    }
loop_2:
    sp0 = var_sb->unk0;
    sp4 = var_sb->unk4;
    var_r3 = (s32) (sp0 << 7) >> 0x17;
    var_r5 = sp0.unk0;
    temp_r0 = (u32) (sp0 << 0x10) >> 0x1E;
    temp_r1 = sp0 >> 0x1E;
    if (temp_r0 == 0) {
        var_r6 = 8 << temp_r1;
        var_r4 = var_r6;
    } else {
        temp_r2_2 = 8 << (((u32) (temp_r1 + 1) >> 1) + 1);
        var_r0 = 8;
        if (temp_r1 != 1) {
            var_r0 = temp_r2_2 >> 1;
        }
        if (temp_r0 != 1) {
            var_r6 = temp_r2_2;
            var_r4 = var_r0;
        } else {
            var_r6 = var_r0;
            var_r4 = temp_r2_2;
        }
    }
    temp_r7 = arg3->unk10;
    if (1 & temp_r7) {
        var_r3 = 0 - (var_r3 + var_r4);
        sp0 = (0xEFFFFFFF & sp0) | (((((u32) (sp0 * 8) >> 0x1F) ^ 1) & 1) << 0x1C);
    }
    if (2 & temp_r7) {
        var_r5 = 0 - (var_r5 + var_r6);
        sp0 = (0xDFFFFFFF & sp0) | (((((u32) (sp0 * 4) >> 0x1F) ^ 1) & 1) << 0x1D);
    }
    temp_r3 = var_r3 + arg3->unk0;
    temp_r5 = var_r5 + arg3->unk2;
    if (((s32) (temp_r3 + var_r4) > 0) && (temp_r3 <= 0xEF) && ((s32) (temp_r5 + var_r6) > 0) && (temp_r5 <= 0x9F)) {
        sp0 = (((sp0 & 0xFE00FFFF) | ((temp_r3 & 0x1FF) << 0x10)) & 0xFFFFFF00) | (u8) temp_r5;
        temp_r0_2 = (((u32) (sp4 << 0x10) >> 0x1C) * 8) + arg4 + 8;
        temp_r2_3 = (sp4 & 0xFFFF0FFF) | ((func_080074C0(temp_r0_2, temp_r0_2->unk4) & 0xF) << 0xC);
        sp4 = (((0xFFFFFC00 & temp_r2_3) | ((u32) ((((u32) (temp_r2_3 << 0x16) >> 0x16) + arg3->unk6) << 0x16) >> 0x16)) & 0xFFFFF3FF) | ((arg3->unk8 & 3) << 0xA);
        sp0 = (((((sp0 & 0xFFFFF3FF) | ((arg3->unkC & 3) << 0xA)) & 0xFFFFFCFF) | ((arg3->unk14 & 3) << 8)) & 0xFFFFEFFF) | ((arg3->unk18 & 1) << 0xC);
        temp_r0_3 = func_08008920(sp8);
        temp_r2_4 = *temp_r0_3;
        if ((u32) temp_r2_4 <= 0x7FU) {
            temp_r1_2 = temp_r0_3 + ((temp_r2_4 * 8) + 4);
            temp_r1_2->unk0 = sp0;
            temp_r1_2->unk4 = (u16) sp0.unk4;
            *temp_r0_3 = temp_r2_4 + 1;
        }
    }
    var_sb += 8;
    if (var_sb != spC) {
        goto loop_2;
    }
}
